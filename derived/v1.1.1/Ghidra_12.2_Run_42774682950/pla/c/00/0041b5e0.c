/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041b5e0; name: FUN_0041b5e0
 */


undefined8
FUN_0041b5e0(long *param_1,long param_2,undefined8 param_3,long param_4,long *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  
  uVar7 = 0;
  if (param_6 == 0) {
LAB_0041b63c:
    *(undefined4 *)(param_1 + 2) = uVar7;
    lVar6 = *param_1;
    if (param_2 == 0) goto LAB_0041b61c;
LAB_0041b648:
    if (lVar6 != 0) {
      lVar8 = param_1[0xe];
      if ((*(code **)(lVar6 + 0x28) == (code *)0x0) ||
         (iVar1 = (**(code **)(lVar6 + 0x28))(param_1), iVar1 != 0)) {
        lVar6 = param_1[0xf];
        if ((lVar6 != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
          FUN_004006a0();
          lVar6 = param_1[0xf];
        }
        FUN_00400420(lVar6,"external/openssl/crypto/evp/evp_enc.c",0x20);
        param_1[0x14] = 0;
        param_1[0x11] = 0;
        param_1[0x10] = 0;
        param_1[0x13] = 0;
        param_1[0x12] = 0;
        param_1[0xd] = 0;
        param_1[0xc] = 0;
        param_1[0xf] = 0;
        param_1[0xe] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
      }
      *(undefined4 *)(param_1 + 2) = uVar7;
      param_1[0xe] = lVar8;
    }
    *param_1 = param_2;
    if (*(int *)(param_2 + 0x30) == 0) {
      param_1[0xf] = 0;
      lVar6 = param_2;
LAB_0041b6e8:
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 8);
      param_1[0xe] = param_1[0xe] & 1;
      if ((*(byte *)(lVar6 + 0x10) >> 6 & 1) != 0) {
        if (lVar6 == 0) {
          uVar4 = 0x83;
          uVar5 = 0x268;
LAB_0041b8e0:
          FUN_004014b0(6,0x7c,uVar4,"external/openssl/crypto/evp/evp_enc.c",uVar5);
        }
        else {
          if (*(code **)(lVar6 + 0x48) == (code *)0x0) {
            uVar4 = 0x84;
            uVar5 = 0x26d;
            goto LAB_0041b8e0;
          }
          iVar1 = (**(code **)(lVar6 + 0x48))(param_1,0,0,0);
          if (iVar1 == -1) {
            uVar4 = 0x85;
            uVar5 = 0x274;
            goto LAB_0041b8e0;
          }
          if (iVar1 != 0) {
            lVar6 = *param_1;
            goto LAB_0041b704;
          }
        }
        *param_1 = 0;
        uVar4 = 0x86;
        uVar5 = 0x8f;
        goto LAB_0041b904;
      }
      goto LAB_0041b704;
    }
    lVar6 = FUN_004002a0((long)*(int *)(param_2 + 0x30),"external/openssl/crypto/evp/evp_enc.c",0x80
                        );
    param_1[0xf] = lVar6;
    if (lVar6 != 0) {
      lVar6 = *param_1;
      goto LAB_0041b6e8;
    }
    *param_1 = 0;
    uVar4 = 0x41;
    uVar5 = 0x83;
  }
  else {
    if (param_6 != -1) {
      uVar7 = 1;
      goto LAB_0041b63c;
    }
    uVar7 = (undefined4)param_1[2];
    lVar6 = *param_1;
    if (param_2 != 0) goto LAB_0041b648;
LAB_0041b61c:
    if (lVar6 != 0) {
LAB_0041b704:
      if (0x10 < *(uint *)(lVar6 + 4) || (1 << (ulong)(*(uint *)(lVar6 + 4) & 0x1f) & 0x10102U) == 0
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                     ,"external/openssl/crypto/evp/evp_enc.c",0x9d);
      }
      if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
        FUN_0041c7c0(param_1);
        uVar3 = FUN_0041c7b0();
        if ((uVar3 & 0xf0007) == 0x10002) {
          uVar4 = 0xaa;
          uVar5 = 0xa1;
          goto LAB_0041b904;
        }
      }
      FUN_0041c7c0(param_1);
      uVar2 = FUN_0041c7b0();
      if ((uVar2 >> 4 & 1) == 0) {
        FUN_0041c7c0(param_1);
        uVar3 = FUN_0041c7b0();
        switch(uVar3 & 0xf0007) {
        case 0:
        case 1:
          goto switchD_0041b7b4_caseD_0;
        case 3:
        case 4:
          *(undefined4 *)(param_1 + 0xb) = 0;
        case 2:
          iVar1 = FUN_0041ca80(param_1);
          if (0x10 < iVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                         "external/openssl/crypto/evp/evp_enc.c",0xb5);
          }
          if (param_5 != (long *)0x0) {
            iVar1 = FUN_0041ca80(param_1);
            memcpy(param_1 + 3,param_5,(long)iVar1);
          }
          __src = param_1 + 3;
          iVar1 = FUN_0041ca80(param_1);
          break;
        case 5:
          *(undefined4 *)(param_1 + 0xb) = 0;
          if (param_5 == (long *)0x0) goto switchD_0041b7b4_caseD_0;
          iVar1 = FUN_0041ca80(param_1);
          __src = param_5;
          break;
        default:
          goto LAB_0041b910;
        }
        memcpy(param_1 + 5,__src,(long)iVar1);
      }
switchD_0041b7b4_caseD_0:
      lVar6 = *param_1;
      if ((param_4 != 0) || ((*(byte *)(lVar6 + 0x10) >> 5 & 1) != 0)) {
        uVar4 = (**(code **)(lVar6 + 0x18))(param_1,param_4,param_5,uVar7);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        lVar6 = *param_1;
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)((long)param_1 + 0x84) = *(int *)(lVar6 + 4) + -1;
      return 1;
    }
    uVar4 = 0x83;
    uVar5 = 0x94;
  }
LAB_0041b904:
  FUN_004014b0(6,0x7b,uVar4,"external/openssl/crypto/evp/evp_enc.c",uVar5);
LAB_0041b910:
  return 0;
}


