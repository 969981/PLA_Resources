/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335d290; name: FUN_0335d290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0335d290(long *param_1,float *param_2,long param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  int iVar15;
  int iVar16;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  int iVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar19 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined4 local_460 [256];
  undefined8 *local_60;
  
  uVar5 = _UNK_03889708;
  uVar4 = _DAT_03889700;
  if (*param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *param_1 + (long)param_1;
  }
  local_60 = (undefined8 *)((ulong)local_460 | 4);
  uVar6 = 1;
  local_460[0] = param_4;
  do {
    pfVar1 = (float *)(lVar8 + (ulong)*(uint *)((long)local_60 - 4) * 0x80);
    bVar39 = (byte)uVar4;
    bVar40 = (byte)((ulong)uVar4 >> 8);
    bVar41 = (byte)((ulong)uVar4 >> 0x10);
    bVar42 = (byte)((ulong)uVar4 >> 0x18);
    bVar43 = (byte)((ulong)uVar4 >> 0x20);
    bVar44 = (byte)((ulong)uVar4 >> 0x28);
    bVar45 = (byte)((ulong)uVar4 >> 0x30);
    bVar46 = (byte)((ulong)uVar4 >> 0x38);
    bVar47 = (byte)uVar5;
    bVar48 = (byte)((ulong)uVar5 >> 8);
    bVar49 = (byte)((ulong)uVar5 >> 0x10);
    bVar50 = (byte)((ulong)uVar5 >> 0x18);
    bVar51 = (byte)((ulong)uVar5 >> 0x20);
    bVar52 = (byte)((ulong)uVar5 >> 0x28);
    bVar53 = (byte)((ulong)uVar5 >> 0x30);
    bVar54 = (byte)((ulong)uVar5 >> 0x38);
    if ((int)uVar6 < 2) {
      iVar9 = -(uint)(*param_2 <= pfVar1[4]);
      iVar15 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar16 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar17 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar18 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar20 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar21 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar22 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar23 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar24 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar25 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar26 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar27 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar29 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar31 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar32 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar33 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar34 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar35 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar36 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar37 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar9 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
                       (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                       (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) & bVar42,
                       CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                                (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) & bVar41
                                ,CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar9 >> 8) &
                                          (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8) &
                                          (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                                          bVar40,(byte)iVar18 & (byte)iVar9 & (byte)iVar23 &
                                                 (byte)iVar27 & (byte)iVar31 & (byte)iVar35 & bVar39
                                         )));
      auVar11._0_8_ =
           CONCAT17((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                    (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar36 >> 0x18) & bVar46,
                    CONCAT16((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar36 >> 0x10) & bVar45,
                             CONCAT15((byte)((uint)iVar20 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar36 >> 8) & bVar44
                                      ,CONCAT14((byte)iVar20 & (byte)iVar15 & (byte)iVar24 &
                                                (byte)iVar28 & (byte)iVar32 & (byte)iVar36 & bVar43,
                                                iVar9))));
      auVar11[8] = (byte)iVar21 & (byte)iVar16 & (byte)iVar25 & (byte)iVar29 & (byte)iVar33 &
                   (byte)iVar37 & bVar47;
      auVar11[9] = (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar25 >> 8)
                   & (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8) &
                   (byte)((uint)iVar37 >> 8) & bVar48;
      auVar11[10] = (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                    (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                    (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) & bVar49;
      auVar11[0xb] = (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                     (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) & bVar50;
      auVar13[0xc] = (byte)iVar22 & (byte)iVar17 & (byte)iVar26 & (byte)iVar30 & (byte)iVar34 &
                     (byte)iVar38 & bVar51;
      auVar13._0_12_ = auVar11;
      auVar13[0xd] = (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar17 >> 8) &
                     (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8) &
                     (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar38 >> 8) & bVar52;
      auVar13[0xe] = (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                     (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                     (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar38 >> 0x10) & bVar53;
      auVar13[0xf] = (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                     (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar38 >> 0x18) & bVar54;
      uVar6 = (ulong)(uint)(iVar9 + (int)((ulong)auVar11._0_8_ >> 0x20) +
                           auVar11._8_4_ + auVar13._12_4_);
      iVar9 = *(int *)(&DAT_03aadfe0 + uVar6 * 4);
      auVar19 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar6 * 0x10));
      auVar13 = NEON_ext(auVar19,auVar19,8,1);
      if (*(char *)(pfVar1 + 0x1c) != '\0') {
        puVar7 = (undefined8 *)(param_3 + (long)*(int *)(param_3 + 0x100) * 4);
        *puVar7 = auVar19._0_8_;
        puVar7[1] = auVar13._0_8_;
        iVar9 = *(int *)(param_3 + 0x100) + iVar9;
        local_60 = (undefined8 *)((long)local_60 - 4U);
        goto LAB_0335d524;
      }
      *(long *)((long)local_60 - 4) = auVar19._0_8_;
      *(long *)((long)local_60 + 4) = auVar13._0_8_;
      local_60 = (undefined8 *)((long)((long)local_60 - 4U) + (long)iVar9 * 4);
    }
    else {
      puVar7 = local_60 + -1;
      iVar9 = -(uint)(*param_2 <= pfVar1[4]);
      iVar15 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar16 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar17 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar18 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar20 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar21 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar22 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar23 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar24 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar25 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar26 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar27 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar29 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar31 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar32 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar33 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar34 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar35 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar36 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar37 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar9 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
                       (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                       (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) & bVar42,
                       CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                                (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) & bVar41
                                ,CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar9 >> 8) &
                                          (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8) &
                                          (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                                          bVar40,(byte)iVar18 & (byte)iVar9 & (byte)iVar23 &
                                                 (byte)iVar27 & (byte)iVar31 & (byte)iVar35 & bVar39
                                         )));
      auVar10._0_8_ =
           CONCAT17((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                    (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar36 >> 0x18) & bVar46,
                    CONCAT16((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar36 >> 0x10) & bVar45,
                             CONCAT15((byte)((uint)iVar20 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar36 >> 8) & bVar44
                                      ,CONCAT14((byte)iVar20 & (byte)iVar15 & (byte)iVar24 &
                                                (byte)iVar28 & (byte)iVar32 & (byte)iVar36 & bVar43,
                                                iVar9))));
      auVar10[8] = (byte)iVar21 & (byte)iVar16 & (byte)iVar25 & (byte)iVar29 & (byte)iVar33 &
                   (byte)iVar37 & bVar47;
      auVar10[9] = (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar25 >> 8)
                   & (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8) &
                   (byte)((uint)iVar37 >> 8) & bVar48;
      auVar10[10] = (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                    (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                    (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) & bVar49;
      auVar10[0xb] = (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                     (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) & bVar50;
      auVar19[0xc] = (byte)iVar22 & (byte)iVar17 & (byte)iVar26 & (byte)iVar30 & (byte)iVar34 &
                     (byte)iVar38 & bVar51;
      auVar19._0_12_ = auVar10;
      auVar19[0xd] = (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar17 >> 8) &
                     (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8) &
                     (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar38 >> 8) & bVar52;
      auVar19[0xe] = (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                     (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                     (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar38 >> 0x10) & bVar53;
      auVar19[0xf] = (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                     (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar38 >> 0x18) & bVar54;
      uVar6 = (ulong)(uint)(iVar9 + (int)((ulong)auVar10._0_8_ >> 0x20) +
                           auVar10._8_4_ + auVar19._12_4_);
      uVar3 = *(uint *)(local_60 + -1);
      iVar9 = *(int *)(&DAT_03aadfe0 + uVar6 * 4);
      auVar19 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar6 * 0x10));
      auVar13 = NEON_ext(auVar19,auVar19,8,1);
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        local_60[-1] = auVar19._0_8_;
        *local_60 = auVar13._0_8_;
        local_60 = (undefined8 *)((long)puVar7 + (long)iVar9 * 4);
      }
      else {
        puVar2 = (undefined8 *)(param_3 + (long)*(int *)(param_3 + 0x100) * 4);
        *puVar2 = auVar19._0_8_;
        puVar2[1] = auVar13._0_8_;
        iVar9 = *(int *)(param_3 + 0x100) + iVar9;
        *(int *)(param_3 + 0x100) = iVar9;
        local_60 = puVar7;
        if (0x3b < iVar9) {
          (**(code **)(**(long **)(param_3 + 0x108) + 0x10))
                    (*(long **)(param_3 + 0x108),param_3,iVar9,*(undefined8 *)(param_3 + 0x110));
          *(undefined4 *)(param_3 + 0x100) = 0;
        }
      }
      pfVar1 = (float *)(lVar8 + (ulong)uVar3 * 0x80);
      iVar9 = -(uint)(*param_2 <= pfVar1[4]);
      iVar15 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar16 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar17 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar18 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar20 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar21 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar22 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar23 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar24 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar25 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar26 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar27 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar29 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar30 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar31 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar32 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar33 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar34 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar35 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar36 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar37 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar9 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
                       (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                       (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) & bVar42,
                       CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                                (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) & bVar41
                                ,CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar9 >> 8) &
                                          (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8) &
                                          (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                                          bVar40,(byte)iVar18 & (byte)iVar9 & (byte)iVar23 &
                                                 (byte)iVar27 & (byte)iVar31 & (byte)iVar35 & bVar39
                                         )));
      auVar12._0_8_ =
           CONCAT17((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                    (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar36 >> 0x18) & bVar46,
                    CONCAT16((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar36 >> 0x10) & bVar45,
                             CONCAT15((byte)((uint)iVar20 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar36 >> 8) & bVar44
                                      ,CONCAT14((byte)iVar20 & (byte)iVar15 & (byte)iVar24 &
                                                (byte)iVar28 & (byte)iVar32 & (byte)iVar36 & bVar43,
                                                iVar9))));
      auVar12[8] = (byte)iVar21 & (byte)iVar16 & (byte)iVar25 & (byte)iVar29 & (byte)iVar33 &
                   (byte)iVar37 & bVar47;
      auVar12[9] = (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar25 >> 8)
                   & (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8) &
                   (byte)((uint)iVar37 >> 8) & bVar48;
      auVar12[10] = (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                    (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                    (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) & bVar49;
      auVar12[0xb] = (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                     (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) & bVar50;
      auVar14[0xc] = (byte)iVar22 & (byte)iVar17 & (byte)iVar26 & (byte)iVar30 & (byte)iVar34 &
                     (byte)iVar38 & bVar51;
      auVar14._0_12_ = auVar12;
      auVar14[0xd] = (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar17 >> 8) &
                     (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8) &
                     (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar38 >> 8) & bVar52;
      auVar14[0xe] = (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                     (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                     (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar38 >> 0x10) & bVar53;
      auVar14[0xf] = (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                     (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar38 >> 0x18) & bVar54;
      uVar6 = (ulong)(uint)(iVar9 + (int)((ulong)auVar12._0_8_ >> 0x20) +
                           auVar12._8_4_ + auVar14._12_4_);
      iVar9 = *(int *)(&DAT_03aadfe0 + uVar6 * 4);
      auVar19 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar6 * 0x10));
      auVar13 = NEON_ext(auVar19,auVar19,8,1);
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        *local_60 = auVar19._0_8_;
        local_60[1] = auVar13._0_8_;
        local_60 = (undefined8 *)((long)local_60 + (long)iVar9 * 4);
      }
      else {
        puVar7 = (undefined8 *)(param_3 + (long)*(int *)(param_3 + 0x100) * 4);
        *puVar7 = auVar19._0_8_;
        puVar7[1] = auVar13._0_8_;
        iVar9 = *(int *)(param_3 + 0x100) + iVar9;
LAB_0335d524:
        *(int *)(param_3 + 0x100) = iVar9;
        if (0x3b < iVar9) {
          (**(code **)(**(long **)(param_3 + 0x108) + 0x10))
                    (*(long **)(param_3 + 0x108),param_3,iVar9,*(undefined8 *)(param_3 + 0x110));
          *(undefined4 *)(param_3 + 0x100) = 0;
        }
      }
    }
    uVar6 = (ulong)((long)local_60 - (long)local_460) >> 2;
    if ((int)uVar6 == 0) {
      return;
    }
  } while( true );
}


