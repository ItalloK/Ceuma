<?php
    include('protect.php');
    require('conexao.php');
?>
<div class="card-header">
    <h4>
        Lista de Trabalhadores
        <a class="btn btn-primary" href="?page=trabalhaem-create">Novo Trabalho</a>
    </h4>
    <table class="table table-striped">
        <thead>
            <tr>
                <th>Nome do Projeto</th>
                <th>Nome do Funcionario</th>
                <th>Horas Trabalhadas</th>
            </tr>
        </thead>
        <?php
            $sql = "SELECT 
                        te.idTrabalhaEm,
                        p.Nome AS NomeProjeto, 
                        f.Cpf AS CpfFuncionario, 
                        f.Nome AS NomeFuncionario, 
                        te.Horas AS HorasTrabalhadas
                    FROM 
                        dbempresa.trabalha_em te
                    JOIN 
                        dbempresa.funcionario f ON te.fkCpf = f.Cpf
                    JOIN 
                        dbempresa.projeto p ON te.fkIdProjeto = p.idProjeto
                    ORDER BY 
                        te.Horas DESC";
            $res = $conn->query($sql);

            $qtd = $res->num_rows;

            if($qtd > 0){
                while($row = $res->fetch_object()){
        ?>
                    <tr>
                        <td><?=$row->NomeProjeto?></td>
                        <td><?=$row->NomeFuncionario?></td>
                        <td><?=$row->HorasTrabalhadas?></td>
                        <td>
                            <a href="?page=trabalhaem-editar&id=<?=$row->idTrabalhaEm?>" class="btn btn-success btn-sm">
                                <span class="bi-pencil-fill"></span>
                                &nbsp;Editar
                            </a>
                            <form action="acoes.php" method="POST" class="d-inline">
                                <button onclick="return confirm('Tem certeza que deseja excluir?')" 
                                    type="submit" name="delete_trabalhaem" 
                                    value="<?=$row->idTrabalhaEm?>" class="btn btn-danger btn-sm">
                                <span class="bi-trash3-fill"></span>&nbsp;Excluir
                                </button>
                            </form>
                        </td>
                    </tr>
        <?php
                }
            } else {
                echo "<tr><td colspan='4'>Nenhum funcionario encontrado.</td></tr>";
            }
        ?>
    </table>
</div>