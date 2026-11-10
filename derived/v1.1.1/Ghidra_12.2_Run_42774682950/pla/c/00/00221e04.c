/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00221e04; name: FUN_00221e04
 */


void FUN_00221e04(long param_1)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  byte *pbVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  char cVar25;
  short sVar26;
  byte bVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_88 [4];
  int iStack_84;
  int iStack_78;
  short local_74 [2];
  
  plVar17 = *(long **)(param_1 + 0x58);
  plVar1 = (long *)(param_1 + 0x50);
  if (plVar1 == plVar17) {
    return;
  }
  plVar2 = (long *)(param_1 + 0x70);
  pbVar3 = (byte *)(param_1 + 0x94);
  plVar9 = (long *)plVar17[1];
  do {
    if (plVar1 != plVar17) {
      lVar15 = *plVar9;
      *(long **)(*plVar17 + 8) = plVar9;
      *plVar9 = *plVar17;
      *(long **)(lVar15 + 8) = plVar17;
      *plVar17 = lVar15;
    }
    FUN_00221a20(param_1,*(undefined2 *)((long)plVar17 + 0x34));
    uVar14 = nn::fontll::ScalableFontEngine::CheckGlyphExist((uint)*(undefined8 *)(param_1 + 8));
    if ((uVar14 & 1) == 0) {
      *(byte *)(plVar17 + 7) = *(byte *)(plVar17 + 7) | 0x40;
      lVar15 = *plVar17;
      *plVar17 = *plVar2;
      *(long **)(lVar15 + 8) = plVar2;
      *(long **)(*plVar2 + 8) = plVar17;
      *plVar2 = lVar15;
    }
    else {
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 8),(uint)*(ushort *)((long)plVar17 + 0x36) << 0x10,0
                 ,0);
      nn::fontll::ScalableFontEngine::GetError();
      fVar29 = (float)NEON_ucvtf((uint)*(ushort *)((long)plVar17 + 0x36));
      iVar28 = (int)(*(float *)(*(long *)(param_1 + 0x1bf0) +
                                (ulong)*(ushort *)((long)plVar17 + 0x34) * 0x1c + 8) * fVar29 + 0.5)
      ;
      lVar15 = nn::fontll::ScalableFontEngine::AcquireGlyphmap
                         ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar17[6]);
      nn::fontll::ScalableFontEngine::GetError();
      uVar10 = (**(code **)(param_1 + 0x1be0))
                         (((uint)*(ushort *)(lVar15 + 0x1e) + iVar28) -
                          (uint)*(ushort *)(lVar15 + 0xe));
      *(char *)((long)plVar17 + 0x3a) = (char)uVar10;
      uVar22 = *(uint *)(param_1 + 0x1880);
      if (uVar22 == 0) {
LAB_00222064:
        iVar11 = 0;
LAB_00222068:
        iVar12 = (**(code **)(param_1 + 0x1be8))(uVar10);
        if ((uint)(iVar12 + iVar11) < *(uint *)(param_1 + 0x2c)) {
          uVar14 = (ulong)*(uint *)(param_1 + 0x1880);
          lVar18 = param_1 + uVar14 * 0x18;
          *(undefined2 *)(lVar18 + 0x92) = 0;
          *(short *)(lVar18 + 0x90) = (short)iVar11;
          *(char *)(lVar18 + 0x94) = (char)uVar10;
          iVar11 = *(int *)(param_1 + 0x1880);
          *(char *)(lVar18 + 0x95) = (char)iVar11;
          *(int *)(param_1 + 0x1880) = iVar11 + 1;
          goto LAB_002220ac;
        }
        lVar18 = FUN_002226d8(param_1,*(undefined1 *)((long)plVar17 + 0x3a),
                              *(undefined2 *)(lVar15 + 0x1c));
        if (lVar18 == 0) {
          lVar15 = *plVar17;
          *plVar17 = *(long *)(param_1 + 0x60);
          *(long *)(lVar15 + 8) = param_1 + 0x60;
          *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar17;
          *(long *)(param_1 + 0x60) = lVar15;
          nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
          nn::fontll::ScalableFontEngine::GetError();
          *(undefined4 *)(param_1 + 0x1bcc) = 3;
          goto joined_r0x00222030;
        }
        plVar21 = plVar17 + 2;
        lVar23 = *plVar21;
        *(undefined2 *)(plVar17 + 8) = *(undefined2 *)(lVar18 + 0x40);
        *(undefined2 *)((long)plVar17 + 0x42) = *(undefined2 *)(lVar18 + 0x42);
        *(undefined1 *)((long)plVar17 + 0x3b) = *(undefined1 *)(lVar18 + 0x3b);
        plVar19 = (long *)(lVar18 + 0x10);
        *plVar21 = *plVar19;
        *(long **)(lVar23 + 8) = plVar19;
        *(long **)(*plVar19 + 8) = plVar21;
        *plVar19 = lVar23;
      }
      else {
        uVar14 = 0;
        pbVar20 = pbVar3;
        if ((uint)*pbVar3 == (uVar10 & 0xff)) goto LAB_00221fc0;
        do {
          do {
            uVar14 = uVar14 + 1;
            pbVar20 = pbVar20 + 0x18;
            if (uVar22 <= uVar14) {
              if (0xff < uVar22) {
                lVar15 = *plVar17;
                *plVar17 = *(long *)(param_1 + 0x60);
                *(long *)(lVar15 + 8) = param_1 + 0x60;
                *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar17;
                *(long *)(param_1 + 0x60) = lVar15;
                nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
                nn::fontll::ScalableFontEngine::GetError();
                *(undefined4 *)(param_1 + 0x1bcc) = 2;
                goto joined_r0x00222030;
              }
              if (uVar22 == 0) goto LAB_00222064;
              lVar18 = param_1 + (ulong)(uVar22 - 1) * 0x18;
              uVar7 = *(ushort *)(lVar18 + 0x90);
              iVar11 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)(lVar18 + 0x94));
              iVar11 = (uint)uVar7 + iVar11 + 2;
              goto LAB_00222068;
            }
          } while ((uint)*pbVar20 != (uVar10 & 0xff));
LAB_00221fc0:
        } while (*(uint *)(param_1 + 0x28) <=
                 (uint)*(ushort *)(pbVar20 + -2) + (int)*(short *)(lVar15 + 0x1c) + 2);
LAB_002220ac:
        lVar18 = param_1 + uVar14 * 0x18;
        plVar21 = plVar17 + 2;
        lVar23 = *plVar21;
        *(undefined2 *)(plVar17 + 8) = *(undefined2 *)(lVar18 + 0x92);
        *(undefined2 *)((long)plVar17 + 0x42) = *(undefined2 *)(lVar18 + 0x90);
        *(undefined1 *)((long)plVar17 + 0x3b) = *(undefined1 *)(lVar18 + 0x95);
        plVar19 = (long *)(lVar18 + 0x80);
        *plVar21 = *plVar19;
        *(long **)(lVar23 + 8) = plVar19;
        *(long **)(*plVar19 + 8) = plVar21;
        *plVar19 = lVar23;
        *(short *)(lVar18 + 0x92) = *(short *)(lVar15 + 0x1c) + *(short *)(lVar18 + 0x92) + 2;
      }
      iVar16 = (int)*(short *)(lVar15 + 0xe);
      iVar12 = iVar28 - iVar16;
      uVar14 = (ulong)*(ushort *)((long)plVar17 + 0x34);
      lVar18 = *(long *)(param_1 + 0x1bf0) + uVar14 * 0x1c;
      uVar22 = (uint)*(ushort *)((long)plVar17 + 0x42);
      iVar11 = iVar12 + uVar22;
      fVar30 = *(float *)(lVar18 + 0x10);
      fVar29 = *(float *)(lVar18 + 0x14);
      *(short *)(plVar17 + 9) = (short)(int)(fVar30 * (float)(int)*(short *)(lVar15 + 0x1c));
      *(short *)((long)plVar17 + 0x4a) =
           (short)(int)(fVar29 * (float)(iVar12 + *(short *)(lVar15 + 0x1e)));
      *(undefined2 *)((long)plVar17 + 0x44) = *(undefined2 *)(lVar15 + 0x1c);
      *(short *)((long)plVar17 + 0x46) = *(short *)(lVar15 + 0x1e) + (short)iVar12;
      if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar14) == '\0') ||
         (*(short *)(lVar15 + 0x1c) == 0)) {
        if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar14) == '\0') {
          if (*(char *)(param_1 + 0x1c50) == '\0') {
            nn::fontll::ScalableFontEngine::GetAdvance
                      (*(short **)(param_1 + 8),local_74,&iStack_78,&iStack_84,(uint)auStack_88,
                       (ushort)plVar17[6]);
            lVar18 = *(long *)(param_1 + 0x1c10);
            uVar14 = (ulong)*(ushort *)((long)plVar17 + 0x34);
            sVar8 = local_74[0];
          }
          else {
            lVar18 = *(long *)(param_1 + 0x1c10);
            sVar8 = *(short *)(lVar15 + 0x10);
          }
          *(short *)((long)plVar17 + 0x4c) =
               (short)(int)(fVar30 * (float)((int)*(short *)(lVar18 + uVar14 * 2) + (int)sVar8));
          sVar8 = *(short *)(*(long *)(param_1 + 0x1c10) + uVar14 * 2);
          iVar12 = (int)*(short *)(lVar15 + 0xc) + ((int)(short)(sVar8 - (sVar8 >> 0xf)) >> 1);
        }
        else {
          *(short *)((long)plVar17 + 0x4c) =
               (short)(int)(fVar30 * (float)(int)*(short *)(*(long *)(param_1 + 0x1c28) + uVar14 * 2
                                                           ));
          iVar12 = (int)*(short *)(*(long *)(param_1 + 0x1c28) + uVar14 * 2) -
                   (int)*(short *)(lVar15 + 0x1c);
          if (iVar12 < 0) {
            iVar12 = iVar12 + 1;
          }
          iVar12 = iVar12 >> 1;
        }
      }
      else {
        *(short *)((long)plVar17 + 0x4c) =
             (short)(int)(fVar30 * (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) + uVar14 * 2)
                                          + (int)*(short *)(lVar15 + 0x1c)));
        uVar7 = *(ushort *)(*(long *)(param_1 + 0x1c10) + uVar14 * 2);
        iVar12 = (int)(((uint)uVar7 + (uint)(uVar7 >> 0xf)) * 0x10000) >> 0x11;
      }
      *(short *)((long)plVar17 + 0x4e) = (short)(int)(fVar30 * (float)iVar12);
      *(short *)(plVar17 + 10) =
           (short)(int)(fVar29 * (float)iVar28 +
                       (float)*(int *)(*(long *)(param_1 + 0x1bf0) + uVar14 * 0x1c + 0x18));
      uVar14 = (ulong)((int)*(short *)(lVar15 + 0x1c) + 2);
      lVar18 = FUN_00878558(*(undefined8 *)(param_1 + 0x1e98));
      lVar18 = lVar18 + *(long *)(param_1 + 0x1ea0);
      uVar7 = *(ushort *)((long)plVar17 + 0x42);
      if ((int)(uint)uVar7 < iVar11) {
        iVar12 = (iVar28 + uVar22) - iVar16;
        uVar10 = (uint)uVar7;
        if ((iVar12 - uVar10 & 1) != 0) {
          memset((void *)(lVar18 + (ulong)((uint)*(ushort *)(plVar17 + 8) +
                                          (*(int *)(param_1 + 0x2c) + ~uVar10) *
                                          *(int *)(param_1 + 0x28))),0,uVar14);
          uVar10 = uVar10 + 1;
        }
        if (iVar12 - 1U != (uint)uVar7) {
          iVar12 = -uVar10;
          do {
            memset((void *)(lVar18 + (ulong)((uint)*(ushort *)(plVar17 + 8) +
                                            (iVar12 + *(int *)(param_1 + 0x2c) + -1) *
                                            *(int *)(param_1 + 0x28))),0,uVar14);
            memset((void *)(lVar18 + (ulong)((uint)*(ushort *)(plVar17 + 8) +
                                            (iVar12 + *(int *)(param_1 + 0x2c) + -2) *
                                            *(int *)(param_1 + 0x28))),0,uVar14);
            iVar12 = iVar12 + -2;
          } while ((iVar16 - iVar28) - uVar22 != iVar12);
        }
      }
      uVar10 = -iVar11 & (-iVar11 >> 0x1f ^ 0xffffffffU);
      if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)*(ushort *)((long)plVar17 + 0x34)) == '\0')
      {
        if ((int)uVar10 < (int)*(short *)(lVar15 + 0x1e)) {
          iVar11 = ~uVar22 + ((iVar16 - iVar28) - uVar10);
          do {
            puVar4 = (undefined1 *)
                     (lVar18 + (ulong)((uint)*(ushort *)(plVar17 + 8) +
                                      (iVar11 + *(int *)(param_1 + 0x2c)) * *(int *)(param_1 + 0x28)
                                      ));
            memcpy(puVar4 + 1,
                   (void *)(lVar15 + (long)(int)uVar10 * (long)*(short *)(lVar15 + 0x1c) + 0x28),
                   (long)*(short *)(lVar15 + 0x1c));
            *puVar4 = 0;
            puVar4[(long)*(short *)(lVar15 + 0x1c) + 1] = 0;
            uVar10 = uVar10 + 1;
            iVar11 = iVar11 + -1;
          } while ((int)uVar10 < (int)*(short *)(lVar15 + 0x1e));
        }
      }
      else {
        nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),1);
        lVar23 = nn::fontll::ScalableFontEngine::AcquireGlyphmap
                           ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar17[6]);
        nn::fontll::ScalableFontEngine::GetError();
        nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),2);
        sVar8 = *(short *)(lVar15 + 0x1e);
        if (*(short *)(lVar15 + 0x1e) <= *(short *)(lVar23 + 0x1e)) {
          sVar8 = *(short *)(lVar23 + 0x1e);
        }
        if ((int)uVar10 < (int)sVar8) {
          iVar12 = ~uVar22 + ((iVar16 - iVar28) - uVar10);
          do {
            iVar5 = *(int *)(param_1 + 0x28);
            iVar6 = *(int *)(param_1 + 0x2c);
            uVar7 = *(ushort *)(plVar17 + 8);
            sVar26 = *(short *)(lVar15 + 0x1c);
            puVar4 = (undefined1 *)
                     (lVar18 + (ulong)((uint)uVar7 + (iVar6 + ~(uVar10 + iVar11)) * iVar5));
            if (0 < sVar26) {
              lVar24 = 0;
              if ((int)uVar10 < (int)*(short *)(lVar15 + 0x1e)) goto LAB_0022253c;
LAB_0022255c:
              cVar25 = '\0';
              if ((int)uVar10 < (int)*(short *)(lVar23 + 0x1e)) goto LAB_00222500;
              do {
                bVar27 = 0;
                while( true ) {
                  *(byte *)(lVar18 + 1 + (ulong)((uint)uVar7 + iVar5 * (iVar6 + iVar12)) + lVar24) =
                       cVar25 - bVar27;
                  sVar26 = *(short *)(lVar15 + 0x1c);
                  lVar24 = lVar24 + 1;
                  if (sVar26 <= lVar24) goto LAB_00222498;
                  if ((int)*(short *)(lVar15 + 0x1e) <= (int)uVar10) goto LAB_0022255c;
LAB_0022253c:
                  cVar25 = *(char *)(lVar15 + (int)((int)lVar24 + uVar10 * (int)sVar26) + 0x28);
                  if ((int)*(short *)(lVar23 + 0x1e) <= (int)uVar10) break;
LAB_00222500:
                  bVar27 = *(byte *)(lVar23 + (int)((int)lVar24 +
                                                   uVar10 * (int)*(short *)(lVar23 + 0x1c)) + 0x28)
                           >> 1;
                }
              } while( true );
            }
LAB_00222498:
            *puVar4 = 0;
            uVar10 = uVar10 + 1;
            iVar12 = iVar12 + -1;
            puVar4[(long)*(short *)(lVar15 + 0x1c) + 1] = 0;
          } while ((int)uVar10 < (int)sVar8);
        }
        nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
        lVar15 = lVar23;
      }
      uVar13 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)((long)plVar17 + 0x3a));
      uVar10 = (uint)(short)*(ushort *)(lVar15 + 0x1e);
      if ((uVar10 < uVar13) && (*(ushort *)(lVar15 + 0x1e) < 0xfffe)) {
        iVar28 = ~uVar22 + ((iVar16 - iVar28) - uVar10);
        do {
          uVar10 = uVar10 + 1;
          memset((void *)(lVar18 + (ulong)((uint)*(ushort *)(plVar17 + 8) +
                                          (iVar28 + *(int *)(param_1 + 0x2c)) *
                                          *(int *)(param_1 + 0x28))),0,uVar14);
          if (uVar13 <= uVar10) break;
          iVar28 = iVar28 + -1;
        } while (uVar10 < (int)*(short *)(lVar15 + 0x1e) + 2U);
      }
      FUN_0087856c(*(undefined8 *)(param_1 + 0x1e98));
      nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
      nn::fontll::ScalableFontEngine::GetError();
    }
joined_r0x00222030:
    if (plVar1 == plVar9) {
      return;
    }
    plVar17 = plVar9;
    plVar9 = (long *)plVar9[1];
  } while( true );
}


