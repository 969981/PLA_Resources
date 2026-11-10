/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00440350; name: FUN_00440350
 */


undefined8 FUN_00440350(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_004014b0(0x2e,0x8e,0x7c,"external/openssl/crypto/cms/cms_env.c",0xee);
    return 0;
  }
  lVar1 = *(long *)(param_1 + 2);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(lVar1 + 0x10);
  }
  return 1;
}


