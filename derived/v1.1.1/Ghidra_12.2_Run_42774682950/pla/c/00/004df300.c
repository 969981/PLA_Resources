/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004df300; name: FUN_004df300
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004df300(long param_1,int *param_2,ulong param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined **ppuVar9;
  int iVar10;
  int iVar11;
  
  if ((param_3 & 1) == 0) {
    lVar5 = FUN_00400260(param_3 & 0xfffffffffffffffe,"external/openssl/ssl/t1_lib.c",0x7f4);
    if (lVar5 != 0) {
      if (param_3 == 0) {
LAB_004df6f0:
        if (param_4 == 0) {
          FUN_00400420(*(undefined8 *)(param_1 + 0x198),"external/openssl/ssl/t1_lib.c",0x80f);
          *(long *)(param_1 + 0x198) = lVar5;
          *(ulong *)(param_1 + 0x1a0) = param_3 >> 1;
          return 1;
        }
        FUN_00400420(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/t1_lib.c",0x80b);
        *(long *)(param_1 + 0x1a8) = lVar5;
        *(ulong *)(param_1 + 0x1b0) = param_3 >> 1;
        return 1;
      }
      uVar8 = 0;
      iVar11 = *param_2;
      iVar10 = param_2[1];
      if (iVar11 != 0x2a0) goto LAB_004df460;
LAB_004df41c:
      ppuVar9 = &PTR_s_ecdsa_secp256r1_sha256_04182640;
      if (iVar10 == 0x198) goto LAB_004df3f8;
LAB_004df430:
      bVar2 = false;
      bVar6 = false;
      if (iVar11 != 0x40) goto LAB_004df498;
      bVar6 = false;
      bVar2 = false;
      ppuVar9 = (undefined **)&DAT_04182730;
      if (iVar10 == 0x198) goto LAB_004df3f8;
      bVar7 = true;
      do {
        if ((iVar11 == 0x2a0) && (ppuVar9 = &PTR_s_rsa_pss_rsae_sha256_04182758, iVar10 == 0x390))
        goto LAB_004df3f8;
        if (bVar6) {
          ppuVar9 = &PTR_s_rsa_pss_rsae_sha384_04182780;
          if (iVar10 == 0x390) goto LAB_004df3f8;
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        bVar1 = false;
        if (bVar2) {
          ppuVar9 = &PTR_s_rsa_pss_rsae_sha512_041827a8;
          if (iVar10 == 0x390) goto LAB_004df3f8;
          bVar1 = true;
        }
        if ((iVar11 == 0x2a0) && (ppuVar9 = &PTR_s_rsa_pss_pss_sha256_041827d0, iVar10 == 0x390))
        goto LAB_004df3f8;
        bVar2 = false;
        if (bVar6) {
          ppuVar9 = &PTR_s_rsa_pss_pss_sha384_041827f8;
          if (iVar10 == 0x390) goto LAB_004df3f8;
          bVar2 = true;
        }
        if (bVar1) {
          ppuVar9 = &PTR_s_rsa_pss_pss_sha512_04182820;
          if (iVar10 == 0x390) goto LAB_004df3f8;
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if ((iVar11 == 0x2a0) && (ppuVar9 = &PTR_s_rsa_pkcs1_sha256_04182848, iVar10 == 6))
        goto LAB_004df3f8;
        if (bVar2) {
          ppuVar9 = &PTR_s_rsa_pkcs1_sha384_04182870;
          if (iVar10 == 6) goto LAB_004df3f8;
          bVar3 = 1;
          if (!bVar6) goto LAB_004df680;
LAB_004df694:
          ppuVar9 = &PTR_s_rsa_pkcs1_sha512_04182898;
          if (iVar10 == 6) goto LAB_004df3f8;
          bVar6 = false;
          bVar4 = 1;
        }
        else {
          bVar3 = 0;
          if (bVar6) goto LAB_004df694;
LAB_004df680:
          bVar4 = 0;
        }
        if ((bVar7) && (ppuVar9 = &PTR_s_rsa_pkcs1_sha1_041828e8, iVar10 == 6)) goto LAB_004df3f8;
LAB_004df520:
        if (((iVar11 != 0x2a0) || (ppuVar9 = (undefined **)&DAT_04182910, iVar10 != 0x74)) &&
           ((((ppuVar9 = (undefined **)&DAT_04182938, !(bool)(bVar3 & iVar10 == 0x74) &&
              (ppuVar9 = (undefined **)&DAT_04182960, !(bool)(bVar4 & iVar10 == 0x74))) &&
             (ppuVar9 = (undefined **)&DAT_04182988, !(bool)(bVar6 & iVar10 == 0x74))) &&
            (ppuVar9 = (undefined **)&DAT_041829b0, !(bool)(bVar7 & iVar10 == 0x74))))) {
          if (iVar11 == 0x329) {
            ppuVar9 = (undefined **)&DAT_04182a28;
            if (iVar10 != 0x32b) goto LAB_004df6d8;
          }
          else if (iVar11 == 0x3d7) {
            ppuVar9 = (undefined **)&DAT_04182a00;
            if (iVar10 != 0x3d4) goto LAB_004df6d8;
          }
          else if ((iVar11 != 0x3d6) || (ppuVar9 = (undefined **)&DAT_041829d8, iVar10 != 0x3d3)) {
LAB_004df6d8:
            FUN_00400420(lVar5,"external/openssl/ssl/t1_lib.c",0x817);
            return 0;
          }
        }
LAB_004df3f8:
        *(undefined2 *)(lVar5 + uVar8) = *(undefined2 *)(ppuVar9 + 1);
        uVar8 = uVar8 + 2;
        if (param_3 <= uVar8) goto LAB_004df6f0;
        iVar11 = param_2[uVar8];
        iVar10 = (param_2 + uVar8)[1];
        if (iVar11 == 0x2a0) goto LAB_004df41c;
LAB_004df460:
        if (0x2a1 < iVar11) {
          if (iVar11 == 0x2a2) {
            ppuVar9 = &PTR_s_ecdsa_secp521r1_sha512_04182690;
            if (iVar10 != 0x198) {
              bVar6 = false;
              bVar2 = true;
              goto LAB_004df498;
            }
            goto LAB_004df3f8;
          }
          if (iVar11 != 0x2a3) goto LAB_004df430;
          if (iVar10 == 6) {
            ppuVar9 = &PTR_s_rsa_pkcs1_sha224_041828c0;
            goto LAB_004df3f8;
          }
          ppuVar9 = (undefined **)&DAT_04182708;
          if (iVar10 != 0x198) goto code_r0x004df500;
          goto LAB_004df3f8;
        }
        if (iVar11 == 0) {
          if (iVar10 == 0x43f) {
            ppuVar9 = &PTR_s_ed25519_041826b8;
          }
          else {
            if (iVar10 != 0x440) goto LAB_004df430;
            ppuVar9 = &PTR_s_ed448_041826e0;
          }
          goto LAB_004df3f8;
        }
        if (iVar11 != 0x2a1) goto LAB_004df430;
        ppuVar9 = &PTR_s_ecdsa_secp384r1_sha384_04182668;
        if (iVar10 == 0x198) goto LAB_004df3f8;
        bVar2 = false;
        bVar6 = true;
LAB_004df498:
        bVar7 = false;
      } while( true );
    }
    FUN_004014b0(0x14,0x278,0x41,"external/openssl/ssl/t1_lib.c",0x7f5);
  }
  return 0;
code_r0x004df500:
  bVar7 = false;
  bVar4 = 0;
  bVar3 = 0;
  bVar6 = true;
  goto LAB_004df520;
}


