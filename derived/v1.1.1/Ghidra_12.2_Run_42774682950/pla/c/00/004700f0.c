/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004700f0; name: FUN_004700f0
 */


undefined8 FUN_004700f0(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 != 1) {
    FUN_004014b0(0x2e,0xaf,0xb5,"external/openssl/crypto/cms/cms_kari.c",0x1c);
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x10);
  }
  return 1;
}


