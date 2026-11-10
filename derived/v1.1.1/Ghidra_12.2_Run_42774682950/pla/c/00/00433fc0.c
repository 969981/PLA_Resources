/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00433fc0; name: FUN_00433fc0
 */


int FUN_00433fc0(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  iVar3 = FUN_0040c130();
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    iVar4 = 0;
  }
  else {
    lVar6 = *param_1;
    iVar4 = 0;
    iVar2 = iVar3 * 0x20 + -1;
    lVar5 = (long)iVar3 + -1;
    uVar1 = *(uint *)(lVar6 + lVar5 * 4);
    while( true ) {
      if (uVar1 != 0) {
        iVar3 = 0;
        uVar7 = 0x80000000;
        uVar1 = uVar1 & 0x80000000;
        while( true ) {
          if (uVar1 != 0) {
            if (iVar4 < param_3) {
              *(int *)(param_2 + (long)iVar4 * 4) = iVar2 + iVar3;
            }
            iVar4 = iVar4 + 1;
          }
          if (iVar3 == -0x1f) break;
          uVar7 = uVar7 >> 1;
          iVar3 = iVar3 + -1;
          uVar1 = *(uint *)(lVar6 + lVar5 * 4) & (uint)uVar7;
        }
      }
      iVar2 = iVar2 + -0x20;
      if (lVar5 < 1) break;
      lVar5 = lVar5 + -1;
      uVar1 = *(uint *)(lVar6 + lVar5 * 4);
    }
  }
  if (iVar4 < param_3) {
    *(undefined4 *)(param_2 + (long)iVar4 * 4) = 0xffffffff;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


