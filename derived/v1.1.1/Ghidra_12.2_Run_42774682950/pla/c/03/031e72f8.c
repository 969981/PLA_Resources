/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e72f8; name: FUN_031e72f8
 */


void FUN_031e72f8(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = FUN_031e73e0();
  iVar5 = (int)uVar3;
  if ((int)param_1[1] == iVar5) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    uVar1 = iVar5 + 1;
    if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
      lVar4 = *param_1;
    }
    else {
      lVar4 = *param_1;
      if (0x3ffffffe < iVar5) {
        FUN_032bd0a8(uVar1);
        uVar6 = *(uint *)((long)param_1 + 0xc);
      }
      uVar6 = (uVar6 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar6) {
        uVar2 = uVar6;
      }
      lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar4,uVar3);
      uVar3 = (ulong)*(uint *)(param_1 + 1);
      *param_1 = lVar4;
    }
    *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4) = *param_2;
    *(uint *)(param_1 + 1) = uVar1;
  }
  return;
}


