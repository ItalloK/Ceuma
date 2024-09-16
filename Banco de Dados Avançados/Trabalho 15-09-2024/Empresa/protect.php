<?php
    if(!isset($_SESSION)) {
        session_start();
    }
    if(!isset($_SESSION['Cpf'])) {
        die(header('Location: error.php'));
    }
?>