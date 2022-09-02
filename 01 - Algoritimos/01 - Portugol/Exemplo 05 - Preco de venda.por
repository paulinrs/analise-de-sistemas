programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
	real preCompra, preVenda
	escreva("Preço de compra do produto: R$")
	leia (preCompra)
	preVenda =preCompra +(preCompra* 20/100)
	escreva("Preço sugerido para venda R$", mat.arredondar(preVenda,2))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 265; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */