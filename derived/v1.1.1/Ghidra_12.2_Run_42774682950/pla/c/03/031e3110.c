/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3110; name: FUN_031e3110
 */


undefined8 FUN_031e3110(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = FUN_031e491c();
  iVar5 = (int)uVar2;
  if ((int)param_1[1] == iVar5) {
    lVar4 = *param_1;
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar4 = FUN_031e4a08(PTR_PTR_0434a080,iVar1);
      iVar5 = (int)param_1[1];
      *param_1 = lVar4;
    }
    puVar3 = (undefined4 *)(lVar4 + (long)iVar5 * 0x68);
    *puVar3 = *param_2;
    FUN_031cf1bc(puVar3 + 2,param_3);
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar2;
}


