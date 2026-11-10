/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004242e0; name: thunk_FUN_004242f0
 */


long thunk_FUN_004242f0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = FUN_004002a0(0x90,"external/openssl/crypto/dh/dh_lib.c",0x2c);
  if (lVar2 == 0) {
    FUN_004014b0(5,0x69,0x41,"external/openssl/crypto/dh/dh_lib.c",0x2f);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x68) = 1;
  lVar3 = FUN_004000a0();
  *(long *)(lVar2 + 0x88) = lVar3;
  if (lVar3 == 0) {
    FUN_004014b0(5,0x69,0x41,"external/openssl/crypto/dh/dh_lib.c",0x36);
    FUN_00400420(lVar2,"external/openssl/crypto/dh/dh_lib.c",0x37);
  }
  else {
    lVar3 = FUN_004247d0();
    *(long *)(lVar2 + 0x78) = lVar3;
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
    iVar1 = FUN_00400880(6,lVar2,lVar2 + 0x70);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(lVar2 + 0x78) + 0x20);
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(lVar2), iVar1 != 0)) {
        return lVar2;
      }
      FUN_004014b0(5,0x69,0x46,"external/openssl/crypto/dh/dh_lib.c",0x55);
    }
    FUN_00424410(lVar2);
  }
  return 0;
}


