/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452ec0; name: FUN_00452ec0
 */


long * FUN_00452ec0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_004002a0(0x28,"external/openssl/crypto/rsa/rsa_mp.c",0x24);
  if (plVar1 == (long *)0x0) {
    FUN_004014b0(4,0xa6,0x41,"external/openssl/crypto/rsa/rsa_mp.c",0x25);
    return (long *)0x0;
  }
  lVar2 = FUN_0040c2c0();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_0040c2c0();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_0040c2c0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_0040c2c0();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
  }
  FUN_0040c1e0(*plVar1);
  FUN_0040c1e0(plVar1[1]);
  FUN_0040c1e0(plVar1[2]);
  FUN_0040c1e0(plVar1[3]);
  FUN_00400420(plVar1,"external/openssl/crypto/rsa/rsa_mp.c",0x38);
  return (long *)0x0;
}


