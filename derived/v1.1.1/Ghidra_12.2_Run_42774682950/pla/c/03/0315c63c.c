/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c63c; name: FUN_0315c63c
 */


void FUN_0315c63c(long *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_PTR_0434a080;
  uVar5 = *(uint *)((long)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  iVar1 = iVar4 + 1;
  if (iVar4 < (int)(uVar5 & 0x3fffffff)) {
    lVar3 = *param_1;
  }
  else {
    lVar3 = *param_1;
    if (0x3ffffffe < iVar4) {
      FUN_032bd0a8(iVar1);
      uVar5 = *(uint *)((long)param_1 + 0xc);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    if ((int)uVar5 < iVar1) {
      uVar5 = iVar4 + 1;
    }
    lVar3 = FUN_032bd1d4(puVar2,uVar5,4,lVar3);
    iVar4 = (int)param_1[1];
    *param_1 = lVar3;
  }
  *(undefined4 *)(lVar3 + (long)iVar4 * 4) = param_2;
  *(int *)(param_1 + 1) = iVar1;
  return;
}


