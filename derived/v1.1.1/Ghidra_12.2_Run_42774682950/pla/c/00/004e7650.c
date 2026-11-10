/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e7650; name: FUN_004e7650
 */


undefined8 FUN_004e7650(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00443d70();
  lVar1 = FUN_00403d80();
  if (lVar1 == 0) {
    FUN_004c99a0(param_1,0x50,0x18d,0x41,"external/openssl/ssl/s3_enc.c",0x146);
    return 0;
  }
  FUN_00403ee0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0));
  lVar2 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  FUN_00444950(*(undefined8 *)(lVar2 + 0xe8));
  lVar2 = *(long *)(param_1 + 0xa8);
  *(long *)(lVar2 + 0xe0) = lVar1;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  FUN_00404920(lVar1,9,1,0);
  return 1;
}


