/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112ec50; name: FUN_0112ec50
 */


int FUN_0112ec50(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  iVar4 = 0;
  lVar5 = -0x389;
  lVar6 = 0x13c;
  do {
    uVar3 = *(ushort *)(param_1 + lVar6);
    if (99 < uVar3) {
      uVar2 = FUN_011357f8(param_1,(int)lVar5 + 0x38a);
      uVar3 = 100;
      if ((uVar2 & 1) == 0) {
        uVar3 = 99;
      }
    }
    if (99 < uVar3) {
      iVar4 = iVar4 + 1;
    }
    bVar1 = lVar5 != -1;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x58;
  } while (bVar1);
  return iVar4;
}


