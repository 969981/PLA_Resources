/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4c10; name: FUN_032c4c10
 */


uint FUN_032c4c10(char *param_1,char param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  char *pcVar2;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    pcVar2 = param_1;
    do {
      if (*pcVar2 == '\0') {
        return 0xffffffff;
      }
      uVar1 = uVar1 - 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar1 != 0);
  }
  if ((int)param_4 <= (int)param_3) {
    return 0xffffffff;
  }
  param_1 = param_1 + (int)param_3;
  while( true ) {
    if (*param_1 == '\0') {
      return 0xffffffff;
    }
    if (*param_1 == param_2) break;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    if (param_4 == param_3) {
      return 0xffffffff;
    }
  }
  return param_3;
}


