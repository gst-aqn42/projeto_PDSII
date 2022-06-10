<h1 align="center"> Projeto de PDSII : Sistema de vendas de um supermercado.</h1>
<h2>Grupo 6: 
    <ul>
        <li>
            <a>Gustavo Rodrigues de Aquino - 2018020476</a>
        </li>
        <li>
            <a>Marco - </a>
        </li>
        <li>
            <a>João Pedro - </a>
        </li>
     </ul>
</h2>

<h2 allign="left">Cartões CRC:</h2>

<h3>Classe: Produto</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Alterar o preço.</a>
        </li>
        <li>
            <a>Resgatar valores relevantes do objeto.</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
        </li>
    </p>
</ul>

<h3>Classe: Estoque</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Adicionar produto no estoque</a>
        </li>
        <li>
            <a>Remover produto do estoque</a>
        </li>
        <li>
            <a>Imprimir Estoque</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Produto</a>
        </li>
    </p>
</ul>
  
<h3>Classe: Venda</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Alterar o estoque de acordo com a venda</a>
        </li>
        <li>
            <a>Gerar nota fisca</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Estoque</a>
        </li>
         <li>
            <a>Cliente</a>
        </li>
    </p>
</ul>

<h3>Classe: Caixa</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Realizar Venda</a>
        </li>
        <li>
            <a>Cadastrar Cliente </a>
        </li>
        <li>
            <a>Fechamento de Caixa </a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Venda</a>
        </li>
         <li>
            <a>Cliente</a>
        </li>
    </p>
</ul>

<h3>Classe: Repositor</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Remover produtos vencidos</a>
        </li>
        <li>
            <a>Verificar produtos danificados</a>
        </li>
        <li>
            <a>Relatório de produtos</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Estoque</a>
        </li>
    </p>
</ul>


<h3>Classe: Gerente</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Gerar balanco de estoque</a>
        </li>
        <li>
            <a>Gerar balanço de todos os caixas</a>
        </li>
        <li>
            <a>Contratar Funcionarios</a>
        </li>
        <li>
            <a>Calcular salários</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
            <a>Caixa</a>
        </li>
        <li>
            <a>Estoque</a>
        </li>
        <li>
            <a>Repositor</a>
        </li>
    </p>
</ul>

<h3>Classe: Cliente</h3>
<br>
<ul>
    <h3>Responsabilidade:</h3>
    <p>
        <li>
            <a>Cadastrar um novo cliente</a>
        </li>
    </p>
</ul>
<ul>
    <h3>Colaboradores</h3>
    <p>
        <li>
        </li>
    </p>
</ul>



User Story: