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
    <title>Login - Empresa</title>
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
            padding: 2rem;
            border-radius: 1rem;
        }
        .form-control {
            border-radius: 0.375rem;
            color: #000;
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
        .text-white-50 {
            opacity: 0.5;
        }
        .text-white-50:hover {
            opacity: 0.75;
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
        }
        .form-outline input {
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
                <div class="col-12 col-md-8 col-lg-6 col-xl-5">
                    <div class="card">
                        <div class="card-body text-center">
                            <h2 class="fw-bold mb-2 text-uppercase">Projeto Empresa</h2>
                            <p class="text-dark mb-5">Use seu Email e senha para fazer Login</p>
                            
                            <form action="" method="POST">
                                <div class="form-outline mb-4">
                                    <input type="email" name="email" id="typeEmailX" class="form-control form-control-lg" placeholder="Digite seu e-mail" />
                                    <label class="form-label" for="typeEmailX">Email</label>
                                </div>
                                <div class="form-outline mb-4">
                                    <input type="password" name="senha" id="typePasswordX" class="form-control form-control-lg" placeholder="Digite sua senha" />
                                    <label class="form-label" for="typePasswordX">Password</label>
                                </div>

                                <?php if ($erro): ?>
                                    <div class="error-message"><?php echo $erro; ?></div>
                                <?php endif; ?>

                                <button type="submit" class="btn btn-outline-light btn-lg px-5">Login</button>
                            </form>

                            <div class="mt-4">
                                <p class="mb-0">Não tem uma conta? <a href="registro.php" class="text-dark fw-bold">Cadastrar</a></p>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>
</body>
</html>
