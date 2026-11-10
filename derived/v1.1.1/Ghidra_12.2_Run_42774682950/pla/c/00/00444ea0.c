/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00444ea0; name: FUN_00444ea0
 */


bool FUN_00444ea0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_004002a0(0x30,"external/openssl/crypto/evp/digest.c",0x33);
  if (plVar3 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    FUN_0041cd40(plVar3,1);
    iVar2 = FUN_004449b0(plVar3,param_5);
    if ((iVar2 == 0) ||
       ((param_2 != 0 && (iVar2 = (*(code *)plVar3[5])(plVar3,param_1,param_2), iVar2 == 0)))) {
      bVar1 = false;
    }
    else {
      if (0x40 < *(int *)(*plVar3 + 8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                     "external/openssl/crypto/evp/digest.c",0xad);
      }
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_3);
      lVar4 = *plVar3;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(lVar4 + 8);
      }
      if (*(code **)(lVar4 + 0x38) != (code *)0x0) {
        (**(code **)(lVar4 + 0x38))(plVar3);
        FUN_0041cd40(plVar3,2);
        lVar4 = *plVar3;
      }
      FUN_004006a0(plVar3[3],(long)*(int *)(lVar4 + 0x44));
      bVar1 = iVar2 != 0;
    }
    FUN_00444880(plVar3);
    FUN_00400420(plVar3,"external/openssl/crypto/evp/digest.c",0x39);
  }
  return bVar1;
}


