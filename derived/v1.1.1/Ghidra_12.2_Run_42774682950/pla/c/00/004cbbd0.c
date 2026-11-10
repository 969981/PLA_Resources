/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cbbd0; name: FUN_004cbbd0
 */


void FUN_004cbbd0(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0041b550(*(undefined8 *)(param_1 + 0x30));
    FUN_00444950(*(undefined8 *)(param_1 + 0x38));
  }
  FUN_00400420(*(undefined8 *)(param_1 + 0x58),"external/openssl/ssl/statem/statem_dtls.c",0x67);
  FUN_00400420(*(undefined8 *)(param_1 + 0x60),"external/openssl/ssl/statem/statem_dtls.c",0x68);
  FUN_00400420(param_1,"external/openssl/ssl/statem/statem_dtls.c",0x69);
  return;
}


