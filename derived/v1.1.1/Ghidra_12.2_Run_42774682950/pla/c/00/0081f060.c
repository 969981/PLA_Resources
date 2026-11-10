/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f060; name: FUN_0081f060
 */


char * FUN_0081f060(char *param_1,char param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (char *)0x0;
}


