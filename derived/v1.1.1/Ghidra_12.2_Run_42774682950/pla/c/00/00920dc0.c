/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00920dc0; name: FUN_00920dc0
 */


undefined8 FUN_00920dc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((long)param_2 + 4);
  if (*(int *)((long)param_1 + 4) < iVar1) {
    uVar2 = *param_1;
    if (iVar1 < *(int *)((long)param_3 + 4)) {
      *param_1 = *param_3;
      *param_3 = uVar2;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar2;
    if ((int)((ulong)uVar2 >> 0x20) < *(int *)((long)param_3 + 4)) {
      *param_2 = *param_3;
      *param_3 = uVar2;
      return 2;
    }
    return 1;
  }
  if (*(int *)((long)param_3 + 4) <= iVar1) {
    return 0;
  }
  uVar2 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar2;
  if (*(int *)((long)param_1 + 4) < *(int *)((long)param_2 + 4)) {
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    return 2;
  }
  return 1;
}


