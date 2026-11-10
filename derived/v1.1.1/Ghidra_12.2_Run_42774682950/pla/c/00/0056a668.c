/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a668; name: FUN_0056a668
 */


long FUN_0056a668(long *param_1,char param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  if (uVar3 <= param_3) {
    return -1;
  }
  lVar1 = *param_1;
  do {
    if (*(char *)(lVar1 + param_3) == param_2) {
      lVar2 = (lVar1 + param_3) - lVar1;
      if (lVar1 + param_3 == lVar1 + uVar3) {
        lVar2 = -1;
      }
      return lVar2;
    }
    param_3 = param_3 + 1;
  } while (uVar3 != param_3);
  return -1;
}


