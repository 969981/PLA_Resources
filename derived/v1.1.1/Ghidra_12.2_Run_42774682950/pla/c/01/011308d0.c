/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011308d0; name: FUN_011308d0
 */


int FUN_011308d0(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  iVar4 = 0;
  lVar5 = -0x389;
  lVar6 = 0x13c;
  do {
    uVar3 = FUN_011357f8(param_1,lVar5 + 0x38aU & 0xffffffff);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar7 = (uint)*(ushort *)(param_1 + lVar6);
      if (99 < *(ushort *)(param_1 + lVar6)) {
        uVar3 = FUN_011357f8(param_1,lVar5 + 0x38aU & 0xffffffff);
        uVar7 = 100;
        if ((uVar3 & 1) == 0) {
          uVar7 = 99;
        }
      }
      uVar1 = 200;
      if (uVar7 < 100) {
        uVar1 = uVar7;
      }
    }
    iVar4 = uVar1 + iVar4;
    bVar2 = lVar5 != -1;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x58;
  } while (bVar2);
  return iVar4;
}


