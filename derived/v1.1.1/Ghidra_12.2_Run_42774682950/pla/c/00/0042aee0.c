/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042aee0; name: FUN_0042aee0
 */


long FUN_0042aee0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = FUN_004002a0(0x68,"external/openssl/crypto/dsa/dsa_lib.c",0x33);
  if (lVar2 == 0) {
    FUN_004014b0(10,0x67,0x41,"external/openssl/crypto/dsa/dsa_lib.c",0x36);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x40) = 1;
  lVar3 = FUN_004000a0();
  *(long *)(lVar2 + 0x60) = lVar3;
  if (lVar3 == 0) {
    FUN_004014b0(10,0x67,0x41,"external/openssl/crypto/dsa/dsa_lib.c",0x3d);
    FUN_00400420(lVar2,"external/openssl/crypto/dsa/dsa_lib.c",0x3e);
  }
  else {
    lVar3 = FUN_0042b320();
    *(long *)(lVar2 + 0x50) = lVar3;
    *(uint *)(lVar2 + 0x30) = *(uint *)(lVar3 + 0x40) & 0xfffffbff;
    iVar1 = FUN_00400880(7,lVar2,lVar2 + 0x48);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(lVar2 + 0x50) + 0x30);
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(lVar2), iVar1 != 0)) {
        return lVar2;
      }
      FUN_004014b0(10,0x67,0x46,"external/openssl/crypto/dsa/dsa_lib.c",0x5c);
    }
    FUN_0042b010(lVar2);
  }
  return 0;
}


