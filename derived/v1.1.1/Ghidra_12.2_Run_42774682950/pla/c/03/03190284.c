/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03190284; name: FUN_03190284
 */


undefined8 FUN_03190284(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = FUN_03192270();
  iVar5 = (int)uVar2;
  if ((int)param_1[1] == iVar5) {
    lVar4 = *param_1;
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar4 = FUN_0319235c(PTR_PTR_0434a080,iVar1);
      iVar5 = (int)param_1[1];
      *param_1 = lVar4;
    }
    puVar3 = (undefined4 *)(lVar4 + (long)iVar5 * 0x38);
    *puVar3 = *param_2;
    FUN_03191d80(puVar3 + 2,param_3);
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar2;
}


