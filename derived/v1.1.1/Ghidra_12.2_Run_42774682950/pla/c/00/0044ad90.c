/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044ad90; name: FUN_0044ad90
 */


undefined8 FUN_0044ad90(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_004002a0(0x28,"external/openssl/crypto/x509/x_name.c",0x5c);
  if (plVar1 == (long *)0x0) {
    FUN_004014b0(0xd,0xab,0x41,"external/openssl/crypto/x509/x_name.c",0x69);
    return 0;
  }
  lVar2 = FUN_004071e0();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_00417420();
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 1) = 1;
      *param_1 = (long)plVar1;
      return 1;
    }
  }
  FUN_004014b0(0xd,0xab,0x41,"external/openssl/crypto/x509/x_name.c",0x69);
  FUN_00407010(*plVar1);
  FUN_00400420(plVar1,"external/openssl/crypto/x509/x_name.c",0x6c);
  return 0;
}


