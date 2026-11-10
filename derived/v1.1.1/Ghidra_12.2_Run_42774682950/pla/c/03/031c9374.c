/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c9374; name: FUN_031c9374
 */


undefined8 FUN_031c9374(long *param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar3 = FUN_031c9414();
  iVar5 = (int)uVar3;
  if ((int)param_1[1] == iVar5) {
    lVar4 = *param_1;
    iVar2 = iVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar4 = FUN_031c94fc(PTR_PTR_0434a080,iVar2);
      iVar5 = (int)param_1[1];
      *param_1 = lVar4;
    }
    puVar1 = (undefined4 *)(lVar4 + (long)iVar5 * 8);
    *puVar1 = *param_2;
    *(undefined2 *)(puVar1 + 1) = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar3;
}


