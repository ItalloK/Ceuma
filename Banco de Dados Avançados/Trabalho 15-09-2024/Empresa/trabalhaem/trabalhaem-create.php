<?php
    include('protect.php');
    require('conexao.php');
    //$cpf = $_REQUEST["cpf"];

    $sql = "SELECT idProjeto, Nome FROM projeto";
    $result = $conn->query($sql);

    $sql2 = "SELECT Cpf, Nome FROM funcionario";
    $result2 = $conn->query($sql2);
?>

<h2>Criar Trabalho</h2>

<form action="acoes.php" method="POST">
    <div class="mb-3">
        <select name="cpfGerente" class="form-control" required>
            <option value="" disabled selected hidden>Selecione o Gerente</option>
            <?php
            if ($result2->num_rows > 0) {
                while($row = $result2->fetch_assoc()) {
                    echo "<option value='" . $row["Cpf"] . "'>" . $row["Nome"]. "</option>";
                }
            } else {
                echo "<option value='' disabled>Nenhum funcionario encontrado</option>";
            }
            ?>
        </select>
    </div>
    <div class="form-group mb-3">
        <input type="number" class="form-control" id="hora" name="hora" placeholder="Digite a quantidade de horas">
    </div>
    <div class="mb-3">
        <select name="idprojeto" class="form-control" required>
            <option value="" disabled selected hidden>Selecione o Projeto</option>
            <?php
            if ($result->num_rows > 0) {
                while($row = $result->fetch_assoc()) {
                    echo "<option value='" . $row["idProjeto"] . "'>" . $row["Nome"]. "</option>";
                }
            } else {
                echo "<option value='' disabled>Nenhum projeto encontrado</option>";
            }
            ?>
        </select>
    </div>
    <input type="submit" name="trabalhaem_create" class="btn btn-primary" value="Salvar">
    <input type="hidden" name="cpf" value="<?php print $cpf; ?>">
</form>

<div class="col-md-6 mt-3">
    <a href="?page=trabalhaem-listartodos">Voltar para o Listar Trabalhadores</a>
</div>
