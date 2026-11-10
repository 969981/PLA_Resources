/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6964; name: FUN_032f6964
 */


bool FUN_032f6964(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar4 = FUN_032f6a04();
  lVar3 = param_1[1];
  if ((int)lVar3 == iVar4) {
    lVar5 = *param_1;
    iVar6 = iVar4;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar4) {
      lVar5 = FUN_032f67b4(PTR_PTR_0434a080,iVar4 + 1,lVar5,iVar4);
      *param_1 = lVar5;
      iVar6 = (int)param_1[1];
    }
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(int *)(param_1 + 1) = iVar4 + 1;
  }
  return (int)lVar3 == iVar4;
}


