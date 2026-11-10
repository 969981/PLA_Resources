/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f621d4; name: FUN_02f621d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f621d4(long *param_1,float *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  byte bVar29;
  byte bVar30;
  int iVar27;
  byte bVar31;
  float fVar28;
  byte bVar32;
  byte bVar35;
  byte bVar36;
  int iVar33;
  byte bVar37;
  float fVar34;
  byte bVar40;
  byte bVar41;
  int iVar38;
  byte bVar42;
  float fVar39;
  byte bVar43;
  byte bVar46;
  byte bVar47;
  int iVar44;
  byte bVar48;
  float fVar45;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460 [256];
  undefined4 *local_60;
  
  uVar20 = _UNK_03889708;
  uVar19 = _DAT_03889700;
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar18 = param_2[2];
  fVar3 = (float)*(undefined8 *)(param_2 + 4);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_2 + 6);
  local_460[0] = 1;
  local_60 = (undefined4 *)((ulong)local_460 | 4);
  do {
    while( true ) {
      puVar1 = (undefined8 *)((long)param_1 + (long)(int)local_60[-1] * 0x80 + *param_1);
      bVar29 = (byte)((ulong)uVar19 >> 8);
      bVar30 = (byte)((ulong)uVar19 >> 0x10);
      bVar31 = (byte)((ulong)uVar19 >> 0x18);
      bVar32 = (byte)((ulong)uVar19 >> 0x20);
      bVar35 = (byte)((ulong)uVar19 >> 0x28);
      bVar36 = (byte)((ulong)uVar19 >> 0x30);
      bVar37 = (byte)((ulong)uVar19 >> 0x38);
      bVar40 = (byte)((ulong)uVar20 >> 8);
      bVar41 = (byte)((ulong)uVar20 >> 0x10);
      bVar42 = (byte)((ulong)uVar20 >> 0x18);
      bVar43 = (byte)((ulong)uVar20 >> 0x20);
      bVar46 = (byte)((ulong)uVar20 >> 0x28);
      bVar47 = (byte)((ulong)uVar20 >> 0x30);
      bVar48 = (byte)((ulong)uVar20 >> 0x38);
      if (*(char *)(puVar1 + 0xe) != '\0') break;
      iVar11 = -(uint)((float)*puVar1 < fVar16);
      iVar12 = -(uint)((float)((ulong)*puVar1 >> 0x20) < fVar16);
      iVar13 = -(uint)((float)puVar1[1] < fVar16);
      iVar15 = -(uint)((float)((ulong)puVar1[1] >> 0x20) < fVar16);
      iVar27 = -(uint)(fVar3 < (float)puVar1[2]);
      iVar33 = -(uint)(fVar3 < (float)((ulong)puVar1[2] >> 0x20));
      iVar38 = -(uint)(fVar3 < (float)puVar1[3]);
      iVar44 = -(uint)(fVar3 < (float)((ulong)puVar1[3] >> 0x20));
      iVar49 = -(uint)((float)puVar1[4] < fVar17);
      iVar50 = -(uint)((float)((ulong)puVar1[4] >> 0x20) < fVar17);
      iVar51 = -(uint)((float)puVar1[5] < fVar17);
      iVar52 = -(uint)((float)((ulong)puVar1[5] >> 0x20) < fVar17);
      iVar53 = -(uint)(fVar6 < (float)puVar1[6]);
      iVar54 = -(uint)(fVar6 < (float)((ulong)puVar1[6] >> 0x20));
      iVar55 = -(uint)(fVar6 < (float)puVar1[7]);
      iVar56 = -(uint)(fVar6 < (float)((ulong)puVar1[7] >> 0x20));
      iVar57 = -(uint)((float)puVar1[8] < fVar18);
      iVar58 = -(uint)((float)((ulong)puVar1[8] >> 0x20) < fVar18);
      iVar59 = -(uint)((float)puVar1[9] < fVar18);
      iVar60 = -(uint)((float)((ulong)puVar1[9] >> 0x20) < fVar18);
      iVar61 = -(uint)(fVar8 < (float)puVar1[10]);
      iVar62 = -(uint)(fVar8 < (float)((ulong)puVar1[10] >> 0x20));
      iVar63 = -(uint)(fVar8 < (float)puVar1[0xb]);
      iVar64 = -(uint)(fVar8 < (float)((ulong)puVar1[0xb] >> 0x20));
      uVar21 = (ulong)(uint)(CONCAT13(((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar11 >> 0x18) |
                                       (byte)((uint)iVar49 >> 0x18) | (byte)((uint)iVar53 >> 0x18) |
                                       (byte)((uint)iVar57 >> 0x18) | (byte)((uint)iVar61 >> 0x18))
                                      & bVar31,CONCAT12(((byte)((uint)iVar27 >> 0x10) |
                                                         (byte)((uint)iVar11 >> 0x10) |
                                                         (byte)((uint)iVar49 >> 0x10) |
                                                         (byte)((uint)iVar53 >> 0x10) |
                                                         (byte)((uint)iVar57 >> 0x10) |
                                                        (byte)((uint)iVar61 >> 0x10)) & bVar30,
                                                        CONCAT11(((byte)((uint)iVar27 >> 8) |
                                                                  (byte)((uint)iVar11 >> 8) |
                                                                  (byte)((uint)iVar49 >> 8) |
                                                                  (byte)((uint)iVar53 >> 8) |
                                                                  (byte)((uint)iVar57 >> 8) |
                                                                 (byte)((uint)iVar61 >> 8)) & bVar29
                                                                 ,((byte)iVar27 | (byte)iVar11 |
                                                                   (byte)iVar49 | (byte)iVar53 |
                                                                   (byte)iVar57 | (byte)iVar61) &
                                                                  (byte)uVar19))) +
                             CONCAT13(((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar12 >> 0x18) |
                                       (byte)((uint)iVar50 >> 0x18) | (byte)((uint)iVar54 >> 0x18) |
                                       (byte)((uint)iVar58 >> 0x18) | (byte)((uint)iVar62 >> 0x18))
                                      & bVar37,CONCAT12(((byte)((uint)iVar33 >> 0x10) |
                                                         (byte)((uint)iVar12 >> 0x10) |
                                                         (byte)((uint)iVar50 >> 0x10) |
                                                         (byte)((uint)iVar54 >> 0x10) |
                                                         (byte)((uint)iVar58 >> 0x10) |
                                                        (byte)((uint)iVar62 >> 0x10)) & bVar36,
                                                        CONCAT11(((byte)((uint)iVar33 >> 8) |
                                                                  (byte)((uint)iVar12 >> 8) |
                                                                  (byte)((uint)iVar50 >> 8) |
                                                                  (byte)((uint)iVar54 >> 8) |
                                                                  (byte)((uint)iVar58 >> 8) |
                                                                 (byte)((uint)iVar62 >> 8)) & bVar35
                                                                 ,((byte)iVar33 | (byte)iVar12 |
                                                                   (byte)iVar50 | (byte)iVar54 |
                                                                   (byte)iVar58 | (byte)iVar62) &
                                                                  bVar32))) +
                            CONCAT13(((byte)((uint)iVar38 >> 0x18) | (byte)((uint)iVar13 >> 0x18) |
                                      (byte)((uint)iVar51 >> 0x18) | (byte)((uint)iVar55 >> 0x18) |
                                      (byte)((uint)iVar59 >> 0x18) | (byte)((uint)iVar63 >> 0x18)) &
                                     bVar42,CONCAT12(((byte)((uint)iVar38 >> 0x10) |
                                                      (byte)((uint)iVar13 >> 0x10) |
                                                      (byte)((uint)iVar51 >> 0x10) |
                                                      (byte)((uint)iVar55 >> 0x10) |
                                                      (byte)((uint)iVar59 >> 0x10) |
                                                     (byte)((uint)iVar63 >> 0x10)) & bVar41,
                                                     CONCAT11(((byte)((uint)iVar38 >> 8) |
                                                               (byte)((uint)iVar13 >> 8) |
                                                               (byte)((uint)iVar51 >> 8) |
                                                               (byte)((uint)iVar55 >> 8) |
                                                               (byte)((uint)iVar59 >> 8) |
                                                              (byte)((uint)iVar63 >> 8)) & bVar40,
                                                              ((byte)iVar38 | (byte)iVar13 |
                                                               (byte)iVar51 | (byte)iVar55 |
                                                               (byte)iVar59 | (byte)iVar63) &
                                                              (byte)uVar20))) +
                            CONCAT13(((byte)((uint)iVar44 >> 0x18) | (byte)((uint)iVar15 >> 0x18) |
                                      (byte)((uint)iVar52 >> 0x18) | (byte)((uint)iVar56 >> 0x18) |
                                      (byte)((uint)iVar60 >> 0x18) | (byte)((uint)iVar64 >> 0x18)) &
                                     bVar48,CONCAT12(((byte)((uint)iVar44 >> 0x10) |
                                                      (byte)((uint)iVar15 >> 0x10) |
                                                      (byte)((uint)iVar52 >> 0x10) |
                                                      (byte)((uint)iVar56 >> 0x10) |
                                                      (byte)((uint)iVar60 >> 0x10) |
                                                     (byte)((uint)iVar64 >> 0x10)) & bVar47,
                                                     CONCAT11(((byte)((uint)iVar44 >> 8) |
                                                               (byte)((uint)iVar15 >> 8) |
                                                               (byte)((uint)iVar52 >> 8) |
                                                               (byte)((uint)iVar56 >> 8) |
                                                               (byte)((uint)iVar60 >> 8) |
                                                              (byte)((uint)iVar64 >> 8)) & bVar46,
                                                              ((byte)iVar44 | (byte)iVar15 |
                                                               (byte)iVar52 | (byte)iVar56 |
                                                               (byte)iVar60 | (byte)iVar64) & bVar43
                                                             ))));
      lVar2 = uVar21 * 0x10;
      uVar14 = *(undefined8 *)(&UNK_03aae128 + lVar2);
      iVar11 = *(int *)(&DAT_03aadfe0 + uVar21 * 4);
      auVar22[9] = (char)((ulong)uVar14 >> 8);
      auVar22._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar2);
      auVar22[10] = (char)((ulong)uVar14 >> 0x10);
      auVar22[0xb] = (char)((ulong)uVar14 >> 0x18);
      auVar22[0xc] = (char)((ulong)uVar14 >> 0x20);
      auVar22[0xd] = (char)((ulong)uVar14 >> 0x28);
      auVar22[0xe] = (char)((ulong)uVar14 >> 0x30);
      auVar22[0xf] = (char)((ulong)uVar14 >> 0x38);
      auVar22 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar1 + 0xc),auVar22);
      *(long *)(local_60 + -1) = auVar22._0_8_;
      auVar22 = NEON_ext(auVar22,auVar22,8,1);
      *(long *)(local_60 + 1) = auVar22._0_8_;
      local_60 = local_60 + -1 + iVar11;
      if (local_460 == local_60) {
        return;
      }
    }
    fVar4 = (float)*puVar1;
    fVar7 = (float)((ulong)*puVar1 >> 0x20);
    fVar9 = (float)puVar1[1];
    fVar10 = (float)((ulong)puVar1[1] >> 0x20);
    fVar28 = (float)puVar1[2];
    fVar34 = (float)((ulong)puVar1[2] >> 0x20);
    fVar39 = (float)puVar1[3];
    fVar45 = (float)((ulong)puVar1[3] >> 0x20);
    uVar21 = (ulong)CONCAT16(-(fVar10 <= fVar45),
                             (uint6)CONCAT14(-(fVar9 <= fVar39),
                                             (uint)CONCAT12(-(fVar7 <= fVar34),
                                                            -(ushort)(fVar4 <= fVar28)))) &
             ((ulong)CONCAT16(-(fVar10 <= fVar3) & -(fVar16 <= fVar45) &
                              -(fVar17 <= (float)((ulong)puVar1[7] >> 0x20)) &
                              -((float)((ulong)puVar1[5] >> 0x20) <= fVar6) &
                              -(fVar18 <= (float)((ulong)puVar1[0xb] >> 0x20)) &
                              -((float)((ulong)puVar1[9] >> 0x20) <= fVar8),
                              (uint6)CONCAT14(-(fVar9 <= fVar3) & -(fVar16 <= fVar39) &
                                              -(fVar17 <= (float)puVar1[7]) &
                                              -((float)puVar1[5] <= fVar6) &
                                              -(fVar18 <= (float)puVar1[0xb]) &
                                              -((float)puVar1[9] <= fVar8),
                                              (uint)CONCAT12(-(fVar7 <= fVar3) & -(fVar16 <= fVar34)
                                                             & -(fVar17 <=
                                                                (float)((ulong)puVar1[6] >> 0x20)) &
                                                             -((float)((ulong)puVar1[4] >> 0x20) <=
                                                              fVar6) & -(fVar18 <=
                                                                        (float)((ulong)puVar1[10] >>
                                                                               0x20)) &
                                                             -((float)((ulong)puVar1[8] >> 0x20) <=
                                                              fVar8),(ushort)(byte)(-(fVar4 <= fVar3
                                                                                     ) & -(fVar16 <=
                                                                                          fVar28) &
                                                                                    -(fVar17 <=
                                                                                     (float)puVar1[6
                                                  ]) & -((float)puVar1[4] <= fVar6) &
                                                  -(fVar18 <= (float)puVar1[10]) &
                                                  -((float)puVar1[8] <= fVar8))))) ^ 0x1000100010001
             );
    cVar23 = (char)(((uint)(ushort)uVar21 << 0x1f) >> 0x18);
    cVar24 = (char)(((uint)(ushort)(uVar21 >> 0x10) << 0x1f) >> 0x18);
    cVar25 = (char)(((uint)(ushort)(uVar21 >> 0x20) << 0x1f) >> 0x18);
    cVar26 = (char)(((uint)(ushort)(uVar21 >> 0x30) << 0x1f) >> 0x18);
    iVar11 = (int)cVar23 >> 7;
    iVar12 = (int)cVar24 >> 7;
    iVar13 = (int)cVar25 >> 7;
    iVar15 = (int)cVar26 >> 7;
    uVar21 = (ulong)(uint)(CONCAT13(cVar23 >> 7 & bVar31,
                                    CONCAT12((byte)((uint)iVar11 >> 0x10) & bVar30,
                                             CONCAT11((byte)((uint)iVar11 >> 8) & bVar29,
                                                      (byte)iVar11 & (byte)uVar19))) +
                           CONCAT13(cVar24 >> 7 & bVar37,
                                    CONCAT12((byte)((uint)iVar12 >> 0x10) & bVar36,
                                             CONCAT11((byte)((uint)iVar12 >> 8) & bVar35,
                                                      (byte)iVar12 & bVar32))) +
                          CONCAT13(cVar25 >> 7 & bVar42,
                                   CONCAT12((byte)((uint)iVar13 >> 0x10) & bVar41,
                                            CONCAT11((byte)((uint)iVar13 >> 8) & bVar40,
                                                     (byte)iVar13 & (byte)uVar20))) +
                          CONCAT13(cVar26 >> 7 & bVar48,
                                   CONCAT12((byte)((uint)iVar15 >> 0x10) & bVar47,
                                            CONCAT11((byte)((uint)iVar15 >> 8) & bVar46,
                                                     (byte)iVar15 & bVar43))));
    lVar2 = uVar21 * 0x10;
    uVar14 = *(undefined8 *)(&UNK_03aae128 + lVar2);
    auVar5[9] = (char)((ulong)uVar14 >> 8);
    auVar5._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar2);
    auVar5[10] = (char)((ulong)uVar14 >> 0x10);
    auVar5[0xb] = (char)((ulong)uVar14 >> 0x18);
    auVar5[0xc] = (char)((ulong)uVar14 >> 0x20);
    auVar5[0xd] = (char)((ulong)uVar14 >> 0x28);
    auVar5[0xe] = (char)((ulong)uVar14 >> 0x30);
    auVar5[0xf] = (char)((ulong)uVar14 >> 0x38);
    auVar22 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar1 + 0xc),auVar5);
    uStack_468 = auVar22._8_8_;
    local_470 = auVar22._0_8_;
    local_60 = local_60 + -1;
    FUN_02f6b6e0(param_3,&local_470,*(undefined4 *)(&DAT_03aadfe0 + uVar21 * 4));
  } while (local_460 != local_60);
  return;
}


