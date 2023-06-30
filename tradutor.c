#include "tradutor.h"

/**
 * Identifica o tipo de instrução da linha de código
 *
 * @param: Uma linha de código
 * @return: Um dos tipos de instrução
 *  - definição de função (DEF)
 *  - variaveis locais (VAR)
 *  - atribuição (ATRIB)
 *  - chamada de função (CALL)
 *  - acesso a array (ARRAY)
 *  - condicional (COND)
 *  - retorno de função (RET)
 */
TipoInst tipo(const char* linha);

const char* traduzir_def(const char* linha);
const char* traduzir_var(const char* linha);
const char* traduzir_atrib(const char* linha);
const char* traduzir_call(const char* linha);
const char* traduzir_array(const char* linha);
const char* traduzir_cond(const char* linha);
const char* traduzir_ret(const char* linha);

const char* traduzir(const char* linha);
