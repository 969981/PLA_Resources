/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00444b90; name: FUN_00444b90
 */


undefined4 FUN_00444b90(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (0x40 < *(int *)(*param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                 "external/openssl/crypto/evp/digest.c",0xad);
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  lVar2 = *param_1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (*(code **)(lVar2 + 0x38) != (code *)0x0) {
    (**(code **)(lVar2 + 0x38))(param_1);
    FUN_0041cd40(param_1,2);
    lVar2 = *param_1;
  }
  FUN_004006a0(param_1[3],(long)*(int *)(lVar2 + 0x44));
  return uVar1;
}


