/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112ed20; name: FUN_0112ed20
 */


int FUN_0112ed20(long param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  iVar5 = 0;
  lVar6 = -0x389;
  lVar7 = 0x13c;
  do {
    iVar2 = FUN_0112e8d0(param_2,lVar6 + 0x38aU & 0xffffffff,0);
    if (iVar2 != 0) {
      uVar4 = *(ushort *)(param_1 + lVar7);
      if (99 < uVar4) {
        uVar3 = FUN_011357f8(param_1,lVar6 + 0x38aU & 0xffffffff);
        uVar4 = 100;
        if ((uVar3 & 1) == 0) {
          uVar4 = 99;
        }
      }
      if (99 < uVar4) {
        iVar5 = iVar5 + 1;
      }
    }
    bVar1 = lVar6 != -1;
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0x58;
  } while (bVar1);
  return iVar5;
}


