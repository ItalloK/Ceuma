package principal;

public class Sentencias {
    
    public static String LISTAR = "SELECT * FROM usuarios";
    
    public static String REGISTRAR = "INSERT INTO usuarios ("
            + "Nome, "
            + "Email, "
            + "Idade, "
            + "Endereco, "
            + "Telefone, "
            + "Foto ) "
            + "VALUES(?,?,?,?,?,?)";
    
    public static String ATUALIZAR = "UPDATE usuarios SET "
            + "Nome = ?, "
            + "Email = ?, "
            + "Idade = ?, "
            + "Endereco = ?, "
            + "Telefone = ?, "
            + "Foto = ? "
            + "WHERE id = ?";
    
    public static String ELIMINAR = "DELETE FROM usuarios WHERE id = ?";
    
    public static String ELIMINAR_TODOS = "TRUNCATE TABLE usuarios";
    
    private String Id;
    private String Nome;
    private String Email;
    private String Idade;
    private String Endereco;
    private String Telefone;
    private byte[] Foto;
    
    public String getId() {
        return Id;
    }

    public void setId(String Id) {
        this.Id = Id;
    }

    public String getNome() {
        return Nome;
    }

    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    public String getEmail() {
        return Email;
    }

    public void setEmail(String Email) {
        this.Email = Email;
    }

    public String getIdade() {
        return Idade;
    }

    public void setIdade(String Idade) {
        this.Idade = Idade;
    }
    
    public String getEndereco() {
        return Endereco;
    }

    public void setEndereco(String Endereco) {
        this.Endereco = Endereco;
    }
    
    public String getTelefone() {
        return Telefone;
    }

    public void setTelefone(String Telefone) {
        this.Telefone = Telefone;
    }
    
    public byte[] getFoto() {
        return Foto;
    }

    public void setFoto(byte[] Foto) {
        this.Foto = Foto;
    }
    
    
}
