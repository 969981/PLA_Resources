/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e7610; name: FUN_004e7610
 */


void FUN_004e7610(long param_1)

{
  long lVar1;
  
  FUN_00400620(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x270),
               *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x268),"external/openssl/ssl/s3_enc.c",
               0x13b);
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar1 + 0x270) = 0;
  *(undefined8 *)(lVar1 + 0x268) = 0;
  return;
}


