/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03147cc4; name: FUN_03147cc4
 */


void FUN_03147cc4(long *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 <= *(int *)((long)param_1 + 0x14)) {
    iVar2 = 8;
    if (iVar1 != 0) {
      iVar2 = iVar1 << 1;
    }
    FUN_03147580(param_1,iVar2);
    iVar1 = (int)param_1[1];
  }
  iVar2 = (int)param_1[2];
  if (iVar2 == iVar1) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  *(undefined8 *)(*param_1 + (long)iVar2 * 8) = *param_2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return;
}


