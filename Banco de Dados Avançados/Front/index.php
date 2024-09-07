<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabela Zebrada com Bootstrap</title>
    <!-- Link para o CSS do Bootstrap -->
    <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
    <div>
        <nav class="navbar navbar-expand-lg navbar-light bg-light">
            <div class="container-fluid">
                <a class="navbar-brand" href="#">Clinica</a>
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                    <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarNav">
                    <ul class="navbar-nav">
                        <li class="nav-item">
                            <a class="nav-link active" aria-current="page" href="#">Início</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="#">Funcionários</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="#">Clientes</a>
                        </li>
                    </ul>
                </div>
            </div>
        </nav>
    </div>

    <div class="container mt-5">
        <h2>Clientes</h2>
        <table class="table">
            <thead>
                <tr>
                    <th scope="col">Cpf</th>
                    <th scope="col">Nome</th>
                    <th scope="col">Sexo</th>
                    <th scope="col">Salário</th>
                </tr>
            </thead>
            <tbody>
                <?php
                  $configData = file_get_contents('config.json');
                  $config = json_decode($configData, true);

                  $servername = $config['Server'];
                  $username = $config['User'];
                  $password = $config['Password'];
                  $dbname = $config['Database'];

                  $conn = new mysqli($servername, $username, $password, $dbname);

                  if ($conn->connect_error) {
                      die("Conexão falhou: " . $conn->connect_error);
                  }

                  $sql = "SELECT * FROM funcionario";
                  $result = $conn->query($sql);

                  if ($result->num_rows > 0) {
                      while ($row = $result->fetch_assoc()) {
                          echo "<tr>";
                          echo "<td>" . htmlspecialchars($row["Cpf"]) . "</td>";
                          echo "<td>" . htmlspecialchars($row["Nome"]) . "</td>";
                          echo "<td>" . htmlspecialchars($row["Sexo"]) . "</td>";
                          echo "<td>R$ " . number_format($row["Salario"], 2, ',', '.') . "</td>";
                          echo "</tr>";
                      }
                  } else {
                      echo "<tr><td colspan='3'>Nenhum cliente encontrado</td></tr>";
                  }
                  $conn->close();
                ?>
            </tbody>
        </table>
    </div>

</body>
</html>
