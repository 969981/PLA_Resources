/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004521f0; name: thunk_FUN_00452200
 */


long thunk_FUN_00452200(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = FUN_004002a0(0xb0,"external/openssl/crypto/rsa/rsa_lib.c",0x34);
  if (lVar2 == 0) {
    FUN_004014b0(4,0x6a,0x41,"external/openssl/crypto/rsa/rsa_lib.c",0x37);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x70) = 1;
  lVar3 = FUN_004000a0();
  *(long *)(lVar2 + 0xa8) = lVar3;
  if (lVar3 == 0) {
    FUN_004014b0(4,0x6a,0x41,"external/openssl/crypto/rsa/rsa_lib.c",0x3e);
    FUN_00400420(lVar2,"external/openssl/crypto/rsa/rsa_lib.c",0x3f);
  }
  else {
    lVar3 = FUN_00453090();
    *(long *)(lVar2 + 8) = lVar3;
    *(uint *)(lVar2 + 0x74) = *(uint *)(lVar3 + 0x48) & 0xfffffbff;
    iVar1 = FUN_00400880(9,lVar2,lVar2 + 0x68);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(lVar2 + 8) + 0x38);
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(lVar2), iVar1 != 0)) {
        return lVar2;
      }
      FUN_004014b0(4,0x6a,0x46,"external/openssl/crypto/rsa/rsa_lib.c",0x5e);
    }
    FUN_00452330(lVar2);
  }
  return 0;
}


