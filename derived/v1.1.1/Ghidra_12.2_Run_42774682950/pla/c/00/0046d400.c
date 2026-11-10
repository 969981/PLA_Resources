/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046d400; name: FUN_0046d400
 */


undefined8
FUN_0046d400(undefined8 param_1,char *param_2,int param_3,int *param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [48];
  
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(long *)(param_4 + 2) == 0)) {
    uVar7 = 0x29;
LAB_0046d4d8:
    FUN_004014b0(6,0x75,0x72,"external/openssl/crypto/evp/p5_crpt.c",uVar7);
    return 0;
  }
  puVar4 = (undefined8 *)FUN_0041ed70(PTR_DAT_04374280,param_4);
  if (puVar4 == (undefined8 *)0x0) {
    uVar7 = 0x2f;
    goto LAB_0046d4d8;
  }
  if (puVar4[1] == 0) {
    iVar1 = 1;
    uVar7 = *(undefined8 *)((int *)*puVar4 + 2);
    lVar8 = (long)*(int *)*puVar4;
    iVar2 = 1;
    if (param_2 == (char *)0x0) goto LAB_0046d534;
LAB_0046d484:
    if (param_3 != -1) goto LAB_0046d538;
    sVar5 = strlen(param_2);
    param_3 = (int)sVar5;
    lVar6 = FUN_00444930();
    if (lVar6 == 0) goto LAB_0046d4a4;
LAB_0046d544:
    iVar2 = FUN_004449b0(lVar6,param_6,0);
    if (((iVar2 != 0) && (iVar2 = FUN_00444ad0(lVar6,param_2,(long)param_3), iVar2 != 0)) &&
       (iVar2 = FUN_00444ad0(lVar6,uVar7,lVar8), iVar2 != 0)) {
      FUN_00446a10(puVar4);
      iVar2 = FUN_00444b90(lVar6,auStack_a0,0);
      if (iVar2 != 0) {
        iVar2 = FUN_0041ccc0(param_6);
        if (iVar2 < 0) {
          return 0;
        }
        if (1 < iVar1) {
          iVar1 = iVar1 + -1;
          do {
            iVar3 = FUN_004449b0(lVar6,param_6,0);
            if (((iVar3 == 0) || (iVar3 = FUN_00444ad0(lVar6,auStack_a0,(long)iVar2), iVar3 == 0))
               || (iVar3 = FUN_00444b90(lVar6,auStack_a0,0), iVar3 == 0)) goto LAB_0046d6ac;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        iVar1 = FUN_0041cc80(param_5);
        if (0x40 < iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("assertion failed: EVP_CIPHER_key_length(cipher) <= (int)sizeof(md_tmp)",
                       "external/openssl/crypto/evp/p5_crpt.c",0x59);
        }
        iVar1 = FUN_0041cc80(param_5);
        memcpy(auStack_e0,auStack_a0,(long)iVar1);
        iVar1 = FUN_0041cc30(param_5);
        if (0x10 < iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("assertion failed: EVP_CIPHER_iv_length(cipher) <= 16",
                       "external/openssl/crypto/evp/p5_crpt.c",0x5b);
        }
        iVar1 = FUN_0041cc30(param_5);
        iVar2 = FUN_0041cc30(param_5);
        memcpy(auStack_f0,auStack_90 + -(long)iVar1,(long)iVar2);
        iVar1 = FUN_0041b5e0(param_1,param_5,0,auStack_e0,auStack_f0,param_7);
        if (iVar1 != 0) {
          FUN_004006a0(auStack_a0,0x40);
          FUN_004006a0(auStack_e0,0x40);
          FUN_004006a0(auStack_f0,0x10);
          uVar7 = 1;
          goto LAB_0046d6b0;
        }
      }
    }
  }
  else {
    iVar1 = FUN_00420b50();
    uVar7 = *(undefined8 *)((int *)*puVar4 + 2);
    lVar8 = (long)*(int *)*puVar4;
    iVar2 = iVar1;
    if (param_2 != (char *)0x0) goto LAB_0046d484;
LAB_0046d534:
    iVar1 = iVar2;
    param_3 = 0;
LAB_0046d538:
    lVar6 = FUN_00444930();
    if (lVar6 != 0) goto LAB_0046d544;
LAB_0046d4a4:
    FUN_004014b0(6,0x75,0x41,"external/openssl/crypto/evp/p5_crpt.c",0x41);
  }
LAB_0046d6ac:
  uVar7 = 0;
LAB_0046d6b0:
  FUN_00444950(lVar6);
  return uVar7;
}


