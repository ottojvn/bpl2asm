#ifndef TRADUTOR_H
#define TRADUTOR_H
/* Tipos de Instrução
 *
 * definição de função (DEF)
 * variaveis locais (VAR)
 * atribuição (ATRIB)
 * chamada de função (CALL)
 * acesso a array (ARRAY)
 * condicional (COND)
 * retorno de função (RET)
 */
typedef enum TiposInst { DEF, VAR, ATRIB, CALL, ARRAY, COND, RET } TipoInst;

/**
 * Traduz uma linha de código em BPL para Assembly
 * Essa função faz uso de auxiliares para identificar o tipo de instrução em BPL
 * e em seguida traduzir de acordo
 *
 * @param linha: A linha de código a ser traduzida
 * @return: A linha de código traduzida
 */
const char* traduzir(const char* linha);

#endif
