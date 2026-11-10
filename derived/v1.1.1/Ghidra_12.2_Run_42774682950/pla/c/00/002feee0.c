/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002feee0; name: FUN_002feee0
 */


ulong FUN_002feee0(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_1[1] == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = param_1[1] - 1;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  if (*(char *)(*param_1 + uVar2) == param_2) {
    return uVar2;
  }
  do {
    if (uVar2 == 0) {
      return 0xffffffffffffffff;
    }
    pcVar1 = (char *)(*param_1 + -1 + uVar2);
    uVar2 = uVar2 - 1;
  } while (*pcVar1 != param_2);
  return uVar2;
}


