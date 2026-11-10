/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a3e30; name: FUN_004a3e30
 */


long FUN_004a3e30(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = FUN_0040c260();
  lVar4 = FUN_0040c260();
  lVar5 = FUN_0040c260();
  lVar6 = 0;
  if (((lVar3 != 0) && (lVar4 != 0)) && (lVar5 != 0)) {
    iVar2 = FUN_0042e540(param_1,lVar3,lVar4,lVar5,0);
    if (iVar2 == 0) {
      lVar6 = 0;
    }
    else {
      iVar2 = FUN_0040c070(lVar3);
      uVar1 = iVar2 + 0xe;
      if (-1 < (int)(iVar2 + 7U)) {
        uVar1 = iVar2 + 7U;
      }
      lVar6 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    }
  }
  FUN_0040c1e0(lVar3);
  FUN_0040c1e0(lVar4);
  FUN_0040c1e0(lVar5);
  return lVar6;
}


