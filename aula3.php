<!DOCTYPE html/>
<html>
<head>
</head>
<body>
    <?php
        echo "<p>1- Escreva um número:</p>";
        $num1 = -2;
        if ($num1 > 0 ){
            echo "O valor é Positivo.";
        }else if ($num1 < 0){
            echo "O valor é Negativo.";
        }else{
            echo "O valor é Igual a Zero.";
        }

        echo "<p>2- Escreva um número:</p>";
        $num2 = 2;
        $resto = $num2%2; 
        if ($resto == 0){
            echo "O valor é par.";
        }else{
            echo "O valor é ímpar.";
        }

        echo "<p>3- Escreva o nome do aluno:</p>";
        $nome = 'Ciro';
        echo "<p>Escreva o nota do aluno:</p>";
        $nota = 10;
        if($nota >= 7){
            echo $nome." Aprovado.";
        }else{
            echo $nome." Reprovado.";
        }

        echo "<p>4- Escreva o salário do funcionário:</p>";
        $salario = 1500;
        $reajuste = ($salario*0.5);
        $salario = $salario + $reajuste;
        echo "Novo salário é ".$salario.".";
    ?>
</html>
