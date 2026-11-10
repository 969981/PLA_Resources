/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049e810; name: FUN_0049e810
 */


undefined8 FUN_0049e810(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_0041ccb0();
  if (param_2 == 5) {
    iVar1 = FUN_00456770(iVar1);
    if (iVar1 != -1) {
      return 1;
    }
    uVar2 = 0x8e;
    uVar3 = 0x16e;
  }
  else if (param_2 == 3) {
    uVar2 = 0x8d;
    uVar3 = 0x168;
  }
  else {
    if (iVar1 < 0x2a0) {
      if ((iVar1 - 0x40U < 0x36) &&
         ((1L << ((ulong)(iVar1 - 0x40U) & 0x3f) & 0x24000080000001U) != 0)) {
        return 1;
      }
      if (iVar1 - 3U < 2) {
        return 1;
      }
      if (iVar1 == 0x101) {
        return 1;
      }
    }
    else {
      if (iVar1 - 0x2a0U < 4) {
        return 1;
      }
      if (iVar1 - 0x448U < 4) {
        return 1;
      }
    }
    uVar2 = 0x9d;
    uVar3 = 0x186;
  }
  FUN_004014b0(4,0x8c,uVar2,"external/openssl/crypto/rsa/rsa_pmeth.c",uVar3);
  return 0;
}


