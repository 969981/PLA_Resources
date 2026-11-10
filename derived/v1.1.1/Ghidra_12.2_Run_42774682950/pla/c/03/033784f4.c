/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033784f4; name: FUN_033784f4
 */


void FUN_033784f4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 <= *(int *)((long)param_1 + 0x14)) {
    iVar4 = 8;
    if (iVar3 != 0) {
      iVar4 = iVar3 << 1;
    }
    FUN_0337adfc(param_1,iVar4);
    iVar3 = (int)param_1[1];
  }
  iVar4 = (int)param_1[2];
  if (iVar4 == iVar3) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  puVar1 = (undefined8 *)(*param_1 + (long)iVar4 * 0x10);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return;
}


