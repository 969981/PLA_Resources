/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00444880; name: FUN_00444880
 */


undefined8 FUN_00444880(long *param_1)

{
  int iVar1;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      if ((*(long *)(*param_1 + 0x38) != 0) && (iVar1 = FUN_0041cd30(param_1,2), iVar1 == 0)) {
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      if ((((*param_1 != 0) && (*(int *)(*param_1 + 0x44) != 0)) && (param_1[3] != 0)) &&
         (iVar1 = FUN_0041cd30(param_1,4), iVar1 == 0)) {
        FUN_00400620(param_1[3],(long)*(int *)(*param_1 + 0x44),
                     "external/openssl/crypto/evp/digest.c",0x21);
      }
    }
    iVar1 = FUN_0041cd30(param_1,0x400);
    if (iVar1 == 0) {
      FUN_00422a10(param_1[4]);
    }
    FUN_004006a0(param_1,0x30);
  }
  return 1;
}


