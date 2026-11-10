/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314ba44; name: FUN_0314ba44
 */


void FUN_0314ba44(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(float *)((long)param_2 + 0x1c) == 0.0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x18) + iVar1 + -1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar4 / iVar1;
    }
    if (*(float *)(*(long *)(param_1 + 0x20) + (long)(iVar4 - iVar3 * iVar1) * 0x20 + 0x1c) == 0.0)
    {
      return;
    }
  }
  uVar5 = *param_2;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 0x20);
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  uVar5 = param_2[2];
  puVar2[3] = param_2[3];
  puVar2[2] = uVar5;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar1 / iVar3;
  }
  *(int *)(param_1 + 0x18) = iVar1 - iVar4 * iVar3;
  return;
}


