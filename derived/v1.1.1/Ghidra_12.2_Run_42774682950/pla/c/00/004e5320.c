/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e5320; name: FUN_004e5320
 */


undefined8 FUN_004e5320(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x720) = 0;
    FUN_00400420(*(undefined8 *)(param_1 + 0x638),"external/openssl/ssl/statem/extensions.c",0x395);
    *(undefined8 *)(param_1 + 0x638) = 0;
  }
  return 1;
}


