/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211458; name: FUN_00211458
 */


undefined8 FUN_00211458(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1[2];
  if (uVar3 < (ulong)param_1[3]) {
    lVar1 = *param_1;
  }
  else {
    uVar2 = param_1[3] * 2;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    lVar1 = FUN_0020c784(param_1[1],*param_1,uVar2 << 3);
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    uVar3 = param_1[2];
    param_1[3] = uVar2;
    *param_1 = lVar1;
  }
  *(long **)(lVar1 + uVar3 * 8) = param_2;
  *param_2 = param_1[2];
  param_1[2] = param_1[2] + 1;
  FUN_002114ec(param_1);
  return 0;
}


