/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ddbb8; name: FUN_001ddbb8
 */


char * FUN_001ddbb8(char *param_1,char param_2,long param_3)

{
  char *pcVar1;
  
  if ((param_3 != 0) && (-1 < param_3 + -1)) {
    pcVar1 = param_1 + param_3 + -1;
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
    } while (param_1 <= pcVar1);
  }
  return (char *)0x0;
}


