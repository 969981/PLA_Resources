/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00462700; name: FUN_00462700
 */


void FUN_00462700(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return;
  }
  FUN_00409be0(*(undefined8 *)(param_1 + 8));
  if ((*param_1 >> 2 & 1) == 0) {
    FUN_004078c0(*(undefined8 *)(param_1 + 0x10),PTR_LAB_04374428);
  }
  FUN_004078c0(*(undefined8 *)(param_1 + 0x18),PTR_FUN_04374318);
  FUN_00400420(param_1,"external/openssl/crypto/x509v3/pcy_data.c",0x1b);
  return;
}


