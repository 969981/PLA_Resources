/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e16d0; name: FUN_004e16d0
 */


long * FUN_004e16d0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_004002a0(0x228,"external/openssl/ssl/ssl_cert.c",0x34);
  if (plVar1 == (long *)0x0) {
    FUN_004014b0(0x14,0xa2,0x41,"external/openssl/ssl/ssl_cert.c",0x37);
    return (long *)0x0;
  }
  *plVar1 = (long)(plVar1 + 4);
  *(undefined4 *)(plVar1 + 0x43) = 1;
  plVar1[0x3f] = (long)&LAB_004e17b0;
  *(undefined4 *)(plVar1 + 0x40) = 1;
  plVar1[0x41] = 0;
  lVar2 = FUN_004000a0();
  plVar1[0x44] = lVar2;
  if (lVar2 == 0) {
    FUN_004014b0(0x14,0xa2,0x41,"external/openssl/ssl/ssl_cert.c",0x42);
    FUN_00400420(plVar1,"external/openssl/ssl/ssl_cert.c",0x43);
    return (long *)0x0;
  }
  return plVar1;
}


