package Conexao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.sql.Statement;

public class Conexao {
    
    private static Connection conection = null; // Adicionado 'static' e corrigido o nome para 'conection'
    
    public Connection getConexao() {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conection = DriverManager.getConnection("jdbc:mysql://localhost/", "root", Global.SenhaBD);

            Statement statement = conection.createStatement();
            boolean databaseExists = statement.execute("CREATE SCHEMA IF NOT EXISTS `crud_javaphoto` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci");

            boolean tableExists = statement.execute("CREATE TABLE IF NOT EXISTS `crud_javaphoto`.`usuarios` ("
                    + "`id` INT NOT NULL AUTO_INCREMENT,"
                    + "`Nome` VARCHAR(100) NULL DEFAULT NULL,"
                    + "`Email` VARCHAR(100) NULL DEFAULT NULL,"
                    + "`Idade` VARCHAR(20) NULL DEFAULT NULL,"
                    + "`Endereco` VARCHAR(100) NULL DEFAULT NULL,"
                    + "`Telefone` VARCHAR(100) NULL DEFAULT NULL,"
                    + "`Foto` LONGBLOB NOT NULL,"
                    + "PRIMARY KEY (`id`)) "
                    + "ENGINE = InnoDB "
                    + "AUTO_INCREMENT = 1 "
                    + "DEFAULT CHARACTER SET = utf8mb4 "
                    + "COLLATE = utf8mb4_0900_ai_ci");
            
            conection = DriverManager.getConnection("jdbc:mysql://localhost/crud_javaphoto", "root", Global.SenhaBD);
            return conection;
        } catch (ClassNotFoundException | SQLException ex) {
            Logger.getLogger(Conexao.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }
    }
}
