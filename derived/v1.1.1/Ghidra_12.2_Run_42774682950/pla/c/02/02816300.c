/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02816300; name: FUN_02816300
 */


int FUN_02816300(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)((long)param_2 + 4);
  iVar1 = *(int *)((long)param_3 + 4);
  if (iVar2 < *(int *)((long)param_1 + 4)) {
    uVar3 = *param_1;
    if (iVar2 <= iVar1) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      iVar1 = *(int *)((long)param_3 + 4);
      iVar2 = (int)((ulong)uVar3 >> 0x20);
      if (iVar2 <= iVar1) {
        iVar2 = 1;
        goto LAB_02816320;
      }
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = iVar2;
LAB_02816420:
      iVar2 = 2;
      goto LAB_02816320;
    }
    *param_1 = *param_3;
    *param_3 = uVar3;
  }
  else {
    if (iVar2 <= iVar1) {
      iVar2 = 0;
      goto LAB_02816320;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    if (*(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4)) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      iVar1 = *(int *)((long)param_3 + 4);
      goto LAB_02816420;
    }
  }
  iVar1 = (int)((ulong)uVar3 >> 0x20);
  iVar2 = 1;
LAB_02816320:
  if (iVar1 <= *(int *)((long)param_4 + 4)) {
    return iVar2;
  }
  uVar3 = *param_3;
  *param_3 = *param_4;
  *param_4 = uVar3;
  if (*(int *)((long)param_2 + 4) <= *(int *)((long)param_3 + 4)) {
    return iVar2 + 1;
  }
  uVar3 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar3;
  if (*(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4)) {
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
    return iVar2 + 3;
  }
  return iVar2 + 2;
}


