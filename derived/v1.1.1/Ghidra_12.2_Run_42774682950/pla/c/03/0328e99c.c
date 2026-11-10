/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328e99c; name: FUN_0328e99c
 */


void FUN_0328e99c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x10);
  iVar1 = iVar4 + 1;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x3fffffff) <= iVar4) {
    lVar3 = FUN_0328ea60(PTR_PTR_0434a080,iVar1);
    iVar4 = *(int *)(param_1 + 0x18);
    *(long *)(param_1 + 0x10) = lVar3;
  }
  uVar5 = param_2[3];
  puVar2 = (undefined8 *)(lVar3 + (long)iVar4 * 0x20);
  puVar2[1] = param_2[1];
  puVar2[3] = uVar5;
  uVar5 = *param_2;
  puVar2[2] = param_2[2];
  *puVar2 = uVar5;
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}


