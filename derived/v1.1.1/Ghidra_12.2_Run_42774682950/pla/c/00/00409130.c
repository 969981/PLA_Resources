/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00409130; name: FUN_00409130
 */


ulong FUN_00409130(long param_1,int param_2,byte *param_3,int param_4)

{
  ulong *puVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 local_88 [24];
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == -1) {
    sVar8 = strlen((char *)param_3);
    param_4 = (int)sVar8;
  }
  if ((byte)(*param_3 - 0x30) < 3) {
    iVar24 = param_4 + -2;
    if (param_4 < 2) {
      uVar10 = 0x8a;
      uVar11 = 0x4e;
      goto LAB_004091c8;
    }
    if (0 < iVar24) {
      lVar12 = (ulong)*param_3 - 0x30;
      uVar29 = (ulong)param_3[1];
      lVar23 = 0;
      uVar28 = 0;
      param_3 = param_3 + 2;
      lVar13 = lVar12 * 0x28;
      puVar9 = local_88;
      iVar3 = 0x18;
LAB_00409248:
      do {
        if (((int)uVar29 != 0x2e) && ((int)uVar29 != 0x20)) {
          uVar10 = 0x83;
          uVar11 = 0x57;
LAB_00409614:
          FUN_004014b0(0xd,100,uVar10,"external/openssl/crypto/asn1/a_object.c",uVar11);
LAB_00409618:
          if (puVar9 != local_88) {
LAB_00409624:
            FUN_00400420(puVar9,"external/openssl/crypto/asn1/a_object.c",0xaf);
          }
          goto LAB_004091d0;
        }
        uVar26 = 0;
        bVar5 = false;
        pbVar2 = param_3 + 1;
        do {
          while( true ) {
            iVar25 = iVar24;
            param_3 = pbVar2;
            bVar4 = param_3[-1];
            uVar29 = (ulong)bVar4;
            iVar24 = iVar25 + -1;
            if ((bVar4 == 0x20) || (bVar4 == 0x2e)) goto LAB_0040933c;
            iVar6 = FUN_00405430(uVar29,4);
            if (iVar6 == 0) {
              uVar10 = 0x82;
              uVar11 = 100;
              goto LAB_00409614;
            }
            if ((bVar5) || (uVar26 < 0x1999999999999991)) break;
            if (((lVar23 == 0) && (lVar23 = FUN_0040c260(), lVar23 == 0)) ||
               (iVar6 = FUN_0040c6b0(lVar23,uVar26 & 0xffffffff), iVar6 == 0)) goto LAB_00409618;
            bVar5 = true;
            iVar6 = FUN_0040bf40(lVar23,10);
            if (iVar6 == 0) goto LAB_00409618;
LAB_0040931c:
            iVar6 = FUN_0040bd20(lVar23,bVar4 - 0x30);
            if (iVar6 == 0) goto LAB_00409618;
            pbVar2 = param_3 + 1;
            if (iVar25 < 2) goto LAB_0040933c;
          }
          if (bVar5) {
            iVar6 = FUN_0040bf40(lVar23,10);
            if (iVar6 != 0) goto LAB_0040931c;
            goto LAB_00409618;
          }
          uVar26 = (uVar29 + uVar26 * 10) - 0x30;
          pbVar2 = param_3 + 1;
        } while (1 < iVar25);
LAB_0040933c:
        uVar27 = (uint)uVar28;
        if (uVar27 == 0) {
          if (((int)lVar12 < 2) && (0x27 < uVar26)) {
            uVar10 = 0x93;
            uVar11 = 0x78;
            goto LAB_00409614;
          }
          if (!bVar5) {
            uVar26 = uVar26 + lVar13;
            goto LAB_00409450;
          }
          iVar6 = FUN_0040bd20(lVar23,lVar13);
          if (iVar6 != 0) goto LAB_00409370;
          goto LAB_00409618;
        }
        if (bVar5) {
LAB_00409370:
          iVar7 = FUN_0040c070(lVar23);
          iVar6 = (iVar7 + 6) / 7;
          if (iVar6 <= iVar3) {
LAB_004093f0:
            if (0xc < iVar7 + 0xcU) {
              lVar21 = 0;
              do {
                iVar7 = FUN_0040bc10(lVar23,0x80);
                if (iVar7 == -1) goto LAB_00409618;
                lVar14 = lVar21 + 1;
                puVar9[lVar21] = (char)iVar7;
                lVar21 = lVar14;
              } while (iVar6 != (int)lVar14);
              goto LAB_00409468;
            }
            iVar6 = 0;
            uVar16 = uVar27;
            if (param_1 == 0) goto LAB_00409408;
            goto LAB_00409470;
          }
          if (puVar9 != local_88) {
            FUN_00400420(puVar9,"external/openssl/crypto/asn1/a_object.c",0x88);
          }
          iVar3 = iVar6 + 0x20;
          puVar9 = (undefined1 *)
                   FUN_00400260((long)iVar3,"external/openssl/crypto/asn1/a_object.c",0x8a);
          if (puVar9 != (undefined1 *)0x0) goto LAB_004093f0;
          goto LAB_00409624;
        }
LAB_00409450:
        lVar14 = 0;
        do {
          bVar4 = (byte)uVar26;
          uVar26 = uVar26 >> 7;
          puVar9[lVar14] = bVar4 & 0x7f;
          lVar14 = lVar14 + 1;
        } while (uVar26 != 0);
LAB_00409468:
        iVar6 = (int)lVar14;
        uVar16 = iVar6 + uVar27;
        if (param_1 != 0) {
LAB_00409470:
          if (param_2 < (int)uVar16) {
            uVar10 = 0x6b;
            uVar11 = 0xa0;
            goto LAB_00409614;
          }
          uVar16 = iVar6 - 1;
          if (0 < (int)uVar16) {
            uVar15 = (ulong)(int)uVar16;
            uVar17 = (ulong)(int)uVar27;
            uVar26 = uVar15;
            if ((7 < uVar16) &&
               ((puVar9 + 1 + uVar15 <= (undefined1 *)(param_1 + uVar17) ||
                ((undefined1 *)(param_1 + uVar17 + uVar15) <= puVar9 + 1)))) {
              uVar19 = uVar15 & 0xfffffffffffffff8;
              uVar28 = (uVar19 - 8 >> 3) + 1;
              uVar20 = uVar28 & 3;
              if (uVar19 - 8 < 0x18) {
                lVar21 = 0;
              }
              else {
                lVar21 = 0;
                lVar14 = uVar28 - uVar20;
                puVar22 = (ulong *)(puVar9 + (uVar15 - 0xf));
                do {
                  uVar10 = NEON_rev64(puVar22[1] | 0x8080808080808080,1);
                  puVar18 = (undefined8 *)(param_1 + 0x10 + uVar17 + lVar21);
                  lVar21 = lVar21 + 0x20;
                  puVar18[-2] = uVar10;
                  uVar10 = NEON_rev64(*puVar22 | 0x8080808080808080,1);
                  puVar18[-1] = uVar10;
                  uVar10 = NEON_rev64(puVar22[-1] | 0x8080808080808080,1);
                  *puVar18 = uVar10;
                  puVar1 = puVar22 + -2;
                  puVar22 = puVar22 + -4;
                  uVar10 = NEON_rev64(*puVar1 | 0x8080808080808080,1);
                  lVar14 = lVar14 + -4;
                  puVar18[1] = uVar10;
                } while (lVar14 != 0);
              }
              uVar26 = uVar15 - uVar19;
              if (uVar20 != 0) {
                lVar14 = -uVar20;
                puVar18 = (undefined8 *)(param_1 + lVar21 + uVar17);
                puVar22 = (ulong *)(puVar9 + (uVar15 - lVar21) + -7);
                do {
                  uVar10 = NEON_rev64(*puVar22 | 0x8080808080808080,1);
                  bVar5 = lVar14 != -1;
                  lVar14 = lVar14 + 1;
                  *puVar18 = uVar10;
                  puVar18 = puVar18 + 1;
                  puVar22 = puVar22 + -1;
                } while (bVar5);
              }
              uVar28 = uVar19 + uVar17;
              uVar17 = uVar28;
              if (uVar19 == uVar15) goto LAB_004095c0;
            }
            do {
              pbVar2 = puVar9 + uVar26;
              uVar28 = uVar17 + 1;
              uVar26 = uVar26 - 1;
              *(byte *)(param_1 + uVar17) = *pbVar2 | 0x80;
              uVar17 = uVar28;
            } while (0 < (long)uVar26);
          }
LAB_004095c0:
          *(undefined1 *)(param_1 + (int)uVar28) = *puVar9;
          uVar28 = (ulong)((int)uVar28 + 1);
          if (iVar25 < 2) break;
          goto LAB_00409248;
        }
LAB_00409408:
        uVar28 = (ulong)uVar16;
      } while (1 < iVar25);
      if (puVar9 != local_88) {
        FUN_00400420(puVar9,"external/openssl/crypto/asn1/a_object.c",0xaa);
      }
      goto LAB_004091d4;
    }
  }
  else {
    uVar10 = 0x7a;
    uVar11 = 0x49;
LAB_004091c8:
    FUN_004014b0(0xd,100,uVar10,"external/openssl/crypto/asn1/a_object.c",uVar11);
  }
  lVar23 = 0;
LAB_004091d0:
  uVar28 = 0;
LAB_004091d4:
  FUN_0040c1e0(lVar23);
  return uVar28;
}


