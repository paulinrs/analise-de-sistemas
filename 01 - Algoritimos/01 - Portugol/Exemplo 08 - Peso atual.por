programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{

	real peso_atual, emagrecer, engordar
	escreva("Peso atual (kg): ")
	leia(peso_atual)
	emagrecer = peso_atual-(peso_atual*20/100)
	engordar = peso_atual+(peso_atual*15/100)
	escreva("Peso - 20%: ", emagrecer, "\n")) 
	escreva("Peso + 15%: ", engordar)	

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 328; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */