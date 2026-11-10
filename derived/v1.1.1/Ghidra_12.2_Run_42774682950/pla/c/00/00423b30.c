/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423b30; name: FUN_00423b30
 */


long * FUN_00423b30(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00400260(0x90,"external/openssl/crypto/cmac/cmac.c",0x32);
  if (plVar1 == (long *)0x0) {
    FUN_004014b0(0xf,0x78,0x41,"external/openssl/crypto/cmac/cmac.c",0x33);
    return (long *)0x0;
  }
  lVar2 = FUN_0041b530();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    FUN_00400420(plVar1,"external/openssl/crypto/cmac/cmac.c",0x38);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  return plVar1;
}


