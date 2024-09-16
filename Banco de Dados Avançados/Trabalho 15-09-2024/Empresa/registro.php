<?php
include('conexao.php');
$erro = "";

if (isset($_POST['email']) || isset($_POST['senha'])) {

    if (strlen($_POST['email']) == 0) {
        $erro = "Preencha seu e-mail";
    } else if (strlen($_POST['senha']) == 0) {
        $erro = "Preencha sua senha";
    } else {

        $email = $conn->real_escape_string($_POST['email']);
        $senha = $conn->real_escape_string(md5($_POST['senha']));

        $sql_code = "SELECT * FROM funcionario WHERE Email = '$email' AND Senha = '$senha'";
        $sql_query = $conn->query($sql_code) or die("Falha na execução do código SQL: " . $conn->error);

        $quantidade = $sql_query->num_rows;

        if ($quantidade == 1) {
            $usuario = $sql_query->fetch_assoc();

            if (!isset($_SESSION)) {
                session_start();
            }
            $_SESSION['Cpf'] = $usuario['Cpf'];
            $_SESSION['Nome'] = $usuario['Nome'];
            header("Location: home.php");
            exit();
        } else {
            $erro = "Falha ao logar! E-mail ou senha incorretos";
        }
    }
}
?>
<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registro - Empresa</title>
    <link href="css/bootstrap.min.css" rel="stylesheet">
    <link href="css/all.min.css" rel="stylesheet">
    <style>
        .background-image {
            background-image: url('img/empresa2.jpg');
            background-size: cover;
            background-position: center;
            background-repeat: no-repeat;
        }
        .card {
            border: none;
            border-radius: 1rem;
            background: rgba(255, 255, 255, 0.7); 
        }
        .card-body {
            color: #000; 
            padding: 1rem;
            border-radius: 1rem;
        }
        .form-control, .form-select {
            border-radius: 0.375rem;
            color: #000;
            font-size: 1rem; 
            height: calc(2.5rem + 2px);
        }
        .form-label {
            color: #000;
        }
        .btn-outline-light {
            border-color: #000;
            color: #000;
            padding: 0.75rem 1.25rem;
            border-radius: 0.375rem;
        }
        .btn-outline-light:hover {
            background-color: #000;
            color: #fff;
        }
        .error-message {
            background-color: #f8d7da;
            color: #721c24;
            padding: 10px;
            margin: 15px 0;
            border: 1px solid #f5c6cb;
            border-radius: 4px;
        }
        .form-outline {
            position: relative;
            margin-bottom: 0.5rem;
        }
        .form-outline input, .form-outline select {
            position: relative;
            z-index: 2;
        }
        .form-outline label {
            position: absolute;
            top: 50%;
            left: 0;
            transform: translateY(-50%);
            z-index: 1;
            color: #000;
            background: rgba(255, 255, 255, 0.7);
            padding: 0 0.5rem;
        }
    </style>
</head>
<body class="background-image">
    <section class="vh-100 d-flex align-items-center">
        <div class="container py-5 h-100">
            <div class="row d-flex justify-content-center align-items-center h-100">
                <div class="col-12 col-md-10 col-lg-8 col-xl-6">
                    <div class="card">
                        <div class="card-body text-center">
                            <h2 class="fw-bold mb-2 text-uppercase">Projeto Empresa</h2>
                            <p class="text-dark mb-4">Digite seus dados para realizar o Registro</p>
                            
                            <form action="acoes.php" method="POST">
                                <div class="form-outline">
                                    <input type="text" class="form-control" id="cpf" name="cpf" placeholder="Digite seu CPF" maxlength="11" required>
                                    <label for="cpf" class="form-label">Digite seu CPF</label>
                                </div>
                                <div class="form-outline">
                                    <input type="text" class="form-control" id="nome" name="nome" placeholder="Digite seu nome" maxlength="80" required>
                                    <label for="nome" class="form-label">Digite seu nome</label>
                                </div>
                                <div class="row">
                                    <div class="col-md-6">
                                        <div class="form-outline">
                                            <input type="date" class="form-control" id="datanascimento" name="datanascimento">
                                            <label for="datanascimento" class="form-label">Data de nascimento</label>
                                        </div>
                                    </div>
                                    <div class="col-md-6">
                                        <div class="form-outline">
                                            <input type="text" class="form-control" id="endereco" name="endereco" placeholder="Digite seu endereço" maxlength="80" required>
                                            <label for="endereco" class="form-label">Digite seu endereço</label>
                                        </div>
                                    </div>
                                </div>
                                <div class="row">
                                    <div class="col-md-6">
                                        <div class="form-outline">
                                            <select class="form-select" id="sexo" name="sexo">
                                                <option value="" selected>Selecione sexo</option>
                                                <option value="M">Masculino</option>
                                                <option value="F">Feminino</option>
                                            </select>
                                            <label for="sexo" class="form-label">Sexo</label>
                                        </div>
                                    </div>
                                    <div class="col-md-6">
                                        <div class="form-outline">
                                            <input type="number" class="form-control" id="salario" name="salario" placeholder="Digite seu salário">
                                            <label for="salario" class="form-label">Salário</label>
                                        </div>
                                    </div>
                                </div>
                                <div class="row">
                                    <div class="col-md-12">
                                        <div class="form-outline mb-3">
                                            <input type="email" class="form-control" id="email" name="email" placeholder="Digite seu email" maxlength="80" required>
                                            <label for="email" class="form-label">Digite seu email</label>
                                        </div>
                                    </div>
                                </div>
                                <div class="row">
                                    <div class="col-md-6">
                                        <div class="form-outline">
                                            <input type="password" class="form-control" id="password" name="password" placeholder="Digite sua senha" maxlength="255" required>
                                            <label for="password" class="form-label">Digite sua senha</label>
                                        </div>
                                    </div>
                                    <div class="col-md-6">
                                        <div class="form-outline">
                                            <input type="password" class="form-control" id="confirmpassword" name="confirmpassword" placeholder="Confirme sua senha" maxlength="255" required>
                                            <label for="confirmpassword" class="form-label">Confirme sua senha</label>
                                        </div>
                                    </div>
                                </div>

                                <?php if ($erro): ?>
                                    <div class="error-message"><?php echo $erro; ?></div>
                                <?php endif; ?>

                                <button type="submit" name="register" class="btn btn-outline-light btn-lg px-5 mt-3">Registrar</button>
                            </form>

                            <div class="mt-4">
                                <p class="mb-0">Já tem uma conta? <a href="index.php" class="text-dark fw-bold">Voltar para Login</a></p>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>
</body>
</html>
