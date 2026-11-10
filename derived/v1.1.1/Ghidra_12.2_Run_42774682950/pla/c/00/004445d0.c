/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004445d0; name: FUN_004445d0
 */


int FUN_004445d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  int local_a8;
  uint local_a4;
  undefined1 local_a0 [64];
  
  local_a4 = 0;
  iVar1 = FUN_0041cc80();
  iVar2 = FUN_0041cc30(param_1);
  if (0x40 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("assertion failed: nkey <= EVP_MAX_KEY_LENGTH",
                 "external/openssl/crypto/evp/evp_key.c",0x56);
  }
  if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("assertion failed: niv <= EVP_MAX_IV_LENGTH",
                 "external/openssl/crypto/evp/evp_key.c",0x57);
  }
  if (param_4 != 0) {
    lVar5 = FUN_00444930();
    if (lVar5 == 0) {
LAB_00444804:
      iVar1 = 0;
    }
    else {
      local_a8 = 0;
      do {
        iVar3 = FUN_004449b0(lVar5,param_2,0);
        if (((iVar3 == 0) ||
            ((((local_a8 != 0 && (iVar3 = FUN_00444ad0(lVar5,local_a0,local_a4), iVar3 == 0)) ||
              (iVar3 = FUN_00444ad0(lVar5,param_4,(long)param_5), iVar3 == 0)) ||
             ((param_3 != 0 && (iVar3 = FUN_00444ad0(lVar5,param_3,8), iVar3 == 0)))))) ||
           (iVar3 = FUN_00444b90(lVar5,local_a0,&local_a4), iVar3 == 0)) goto LAB_00444804;
        iVar3 = param_6 - 1;
        if (1 < param_6) {
          do {
            iVar4 = FUN_004449b0(lVar5,param_2,0);
            if (((iVar4 == 0) || (iVar4 = FUN_00444ad0(lVar5,local_a0,local_a4), iVar4 == 0)) ||
               (iVar4 = FUN_00444b90(lVar5,local_a0,&local_a4), iVar4 == 0)) goto LAB_00444804;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (iVar1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          puVar8 = param_7;
          if (local_a4 != 0) {
            do {
              param_7 = puVar8;
              if (puVar8 != (undefined1 *)0x0) {
                param_7 = puVar8 + 1;
                *puVar8 = local_a0[uVar7];
              }
              uVar7 = uVar7 + 1;
              if (iVar1 == (int)uVar7) {
                iVar1 = 0;
                goto joined_r0x004447fc;
              }
              puVar8 = param_7;
            } while (uVar7 != local_a4);
          }
          iVar1 = iVar1 - (int)uVar7;
        }
joined_r0x004447fc:
        if (iVar2 != 0) {
          uVar6 = (uint)uVar7;
          puVar8 = param_8;
          while (param_8 = puVar8, uVar6 != local_a4) {
            if (puVar8 != (undefined1 *)0x0) {
              param_8 = puVar8 + 1;
              *puVar8 = local_a0[uVar7 & 0xffffffff];
            }
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) break;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar6;
            puVar8 = param_8;
          }
        }
        local_a8 = local_a8 + 1;
      } while (iVar2 != 0 || iVar1 != 0);
      iVar1 = FUN_0041cc80(param_1);
    }
    FUN_00444950(lVar5);
    FUN_004006a0(local_a0,0x40);
  }
  return iVar1;
}


