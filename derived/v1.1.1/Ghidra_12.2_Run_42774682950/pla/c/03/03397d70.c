/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03397d70; name: FUN_03397d70
 */


bool FUN_03397d70(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = FUN_03397e70();
  lVar3 = param_1[1];
  if ((int)lVar3 == iVar4) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    uVar1 = iVar4 + 1;
    if (iVar4 < (int)(uVar7 & 0x3fffffff)) {
      lVar5 = *param_1;
      iVar6 = iVar4;
    }
    else {
      lVar5 = *param_1;
      if (0x3ffffffe < iVar4) {
        FUN_032bd0a8(uVar1);
        uVar7 = *(uint *)((long)param_1 + 0xc);
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar7) {
        uVar2 = uVar7;
      }
      lVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar5,iVar4);
      iVar6 = (int)param_1[1];
      *param_1 = lVar5;
    }
    *(undefined4 *)(lVar5 + (long)iVar6 * 4) = *param_2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  return (int)lVar3 == iVar4;
}


