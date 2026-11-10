/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4b20; name: FUN_032c4b20
 */


undefined8 FUN_032c4b20(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    do {
      param_2 = param_2 + 1;
      if (*param_1 != cVar1) {
        return 0;
      }
      cVar1 = *param_2;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return 1;
}


