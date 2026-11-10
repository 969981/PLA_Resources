/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cdf0; name: FUN_0040cdf0
 */


undefined8 FUN_0040cdf0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar1 = param_2 >> 5;
  uVar3 = (ulong)uVar1;
  if ((int)param_1[1] <= (int)uVar1) {
    return 0;
  }
  if ((param_2 & 0x1f) == 0) {
    *(uint *)(param_1 + 1) = uVar1;
    uVar2 = 0;
    if (uVar1 == 0) goto joined_r0x0040ce84;
  }
  else {
    *(uint *)(param_1 + 1) = uVar1 + 1;
    *(uint *)(*param_1 + uVar3 * 4) =
         *(uint *)(*param_1 + uVar3 * 4) & (-1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
    uVar2 = *(uint *)(param_1 + 1);
    uVar3 = (ulong)uVar2;
    if ((int)uVar2 < 1) goto joined_r0x0040ce84;
  }
  piVar4 = (int *)(*param_1 + (long)(int)uVar3 * 4);
  do {
    piVar4 = piVar4 + -1;
    uVar2 = (uint)uVar3;
    if (*piVar4 != 0) break;
    uVar2 = uVar2 - 1;
    uVar3 = (ulong)uVar2;
  } while (0 < (int)uVar2);
  *(uint *)(param_1 + 1) = uVar2;
joined_r0x0040ce84:
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 1;
}


