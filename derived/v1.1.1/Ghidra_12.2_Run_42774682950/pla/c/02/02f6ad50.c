/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6ad50; name: FUN_02f6ad50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6ad50(long *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar15;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  int iVar16;
  int iVar17;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  int iVar23;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  int iVar28;
  byte bVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  int iVar33;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  int iVar38;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined4 local_470 [256];
  undefined8 *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = _UNK_03889708;
  uVar3 = _DAT_03889700;
  if (*param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *param_1 + (long)param_1;
  }
  uVar6 = 1;
  local_70 = (undefined8 *)((ulong)local_470 | 4);
  local_470[0] = 1;
  do {
    pfVar1 = (float *)(lVar7 + (ulong)*(uint *)((long)local_70 - 4) * 0x80);
    bVar22 = (byte)uVar3;
    bVar24 = (byte)((ulong)uVar3 >> 8);
    bVar25 = (byte)((ulong)uVar3 >> 0x10);
    bVar26 = (byte)((ulong)uVar3 >> 0x18);
    bVar27 = (byte)((ulong)uVar3 >> 0x20);
    bVar29 = (byte)((ulong)uVar3 >> 0x28);
    bVar30 = (byte)((ulong)uVar3 >> 0x30);
    bVar31 = (byte)((ulong)uVar3 >> 0x38);
    bVar32 = (byte)uVar4;
    bVar34 = (byte)((ulong)uVar4 >> 8);
    bVar35 = (byte)((ulong)uVar4 >> 0x10);
    bVar36 = (byte)((ulong)uVar4 >> 0x18);
    bVar37 = (byte)((ulong)uVar4 >> 0x20);
    bVar39 = (byte)((ulong)uVar4 >> 0x28);
    bVar40 = (byte)((ulong)uVar4 >> 0x30);
    bVar41 = (byte)((ulong)uVar4 >> 0x38);
    if ((int)uVar6 < 2) {
      iVar8 = -(uint)(*param_2 <= pfVar1[4]);
      iVar15 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar16 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar17 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar18 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar19 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar20 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar21 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar23 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar33 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar43 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar44 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar45 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar46 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar47 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar48 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar49 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar50 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar51 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar52 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar53 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar8 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                       (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                       (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar50 >> 0x18) & bVar26,
                       CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                                (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                                (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar50 >> 0x10) & bVar25
                                ,CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar8 >> 8) &
                                          (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar42 >> 8) &
                                          (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar50 >> 8) &
                                          bVar24,(byte)iVar18 & (byte)iVar8 & (byte)iVar23 &
                                                 (byte)iVar42 & (byte)iVar46 & (byte)iVar50 & bVar22
                                         )));
      auVar9._0_8_ = CONCAT17((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                              (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                              (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar31,
                              CONCAT16((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                                       (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                                       (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar51 >> 0x10) &
                                       bVar30,CONCAT15((byte)((uint)iVar19 >> 8) &
                                                       (byte)((uint)iVar15 >> 8) &
                                                       (byte)((uint)iVar28 >> 8) &
                                                       (byte)((uint)iVar43 >> 8) &
                                                       (byte)((uint)iVar47 >> 8) &
                                                       (byte)((uint)iVar51 >> 8) & bVar29,
                                                       CONCAT14((byte)iVar19 & (byte)iVar15 &
                                                                (byte)iVar28 & (byte)iVar43 &
                                                                (byte)iVar47 & (byte)iVar51 & bVar27
                                                                ,iVar8))));
      auVar9[8] = (byte)iVar20 & (byte)iVar16 & (byte)iVar33 & (byte)iVar44 & (byte)iVar48 &
                  (byte)iVar52 & bVar32;
      auVar9[9] = (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar33 >> 8)
                  & (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar48 >> 8) &
                  (byte)((uint)iVar52 >> 8) & bVar34;
      auVar9[10] = (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                   (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                   (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar52 >> 0x10) & bVar35;
      auVar9[0xb] = (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                    (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                    (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar52 >> 0x18) & bVar36;
      auVar13[0xc] = (byte)iVar21 & (byte)iVar17 & (byte)iVar38 & (byte)iVar45 & (byte)iVar49 &
                     (byte)iVar53 & bVar37;
      auVar13._0_12_ = auVar9;
      auVar13[0xd] = (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar17 >> 8) &
                     (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar45 >> 8) &
                     (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar53 >> 8) & bVar39;
      auVar13[0xe] = (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                     (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar45 >> 0x10) &
                     (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar53 >> 0x10) & bVar40;
      auVar13[0xf] = (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar45 >> 0x18) &
                     (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar53 >> 0x18) & bVar41;
      uVar6 = (ulong)(uint)(iVar8 + (int)((ulong)auVar9._0_8_ >> 0x20) +
                           auVar9._8_4_ + auVar13._12_4_);
      iVar8 = *(int *)(&DAT_03aadfe0 + uVar6 * 4);
      auVar13 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar6 * 0x10));
      uStack_58 = auVar13._8_8_;
      local_60 = auVar13._0_8_;
      puVar5 = (undefined8 *)((long)local_70 - 4U);
      if (*(char *)(pfVar1 + 0x1c) != '\0') goto LAB_02f6ae30;
      *(undefined8 *)((long)local_70 - 4) = local_60;
      auVar13 = NEON_ext(auVar13,auVar13,8,1);
      *(long *)((long)local_70 + 4) = auVar13._0_8_;
      local_70 = (undefined8 *)((long)local_70 - 4U);
LAB_02f6af90:
      local_70 = (undefined8 *)((long)local_70 + (long)iVar8 * 4);
    }
    else {
      iVar8 = -(uint)(*param_2 <= pfVar1[4]);
      iVar15 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar16 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar17 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar18 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar19 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar20 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar21 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar23 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar33 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar43 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar44 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar45 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar50 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar51 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar52 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar53 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar46 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar47 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar48 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar49 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar8 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                       (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                       (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar46 >> 0x18) & bVar26,
                       CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                                (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                                (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar46 >> 0x10) & bVar25
                                ,CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar8 >> 8) &
                                          (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar42 >> 8) &
                                          (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar46 >> 8) &
                                          bVar24,(byte)iVar18 & (byte)iVar8 & (byte)iVar23 &
                                                 (byte)iVar42 & (byte)iVar50 & (byte)iVar46 & bVar22
                                         )));
      auVar10._0_8_ =
           CONCAT17((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                    (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                    (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar47 >> 0x18) & bVar31,
                    CONCAT16((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                             (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar47 >> 0x10) & bVar30,
                             CONCAT15((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar43 >> 8) &
                                      (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar47 >> 8) & bVar29
                                      ,CONCAT14((byte)iVar19 & (byte)iVar15 & (byte)iVar28 &
                                                (byte)iVar43 & (byte)iVar51 & (byte)iVar47 & bVar27,
                                                iVar8))));
      auVar10[8] = (byte)iVar20 & (byte)iVar16 & (byte)iVar33 & (byte)iVar44 & (byte)iVar52 &
                   (byte)iVar48 & bVar32;
      auVar10[9] = (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar33 >> 8)
                   & (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar52 >> 8) &
                   (byte)((uint)iVar48 >> 8) & bVar34;
      auVar10[10] = (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                    (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                    (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar48 >> 0x10) & bVar35;
      auVar10[0xb] = (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                     (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar48 >> 0x18) & bVar36;
      auVar12[0xc] = (byte)iVar21 & (byte)iVar17 & (byte)iVar38 & (byte)iVar45 & (byte)iVar53 &
                     (byte)iVar49 & bVar37;
      auVar12._0_12_ = auVar10;
      auVar12[0xd] = (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar17 >> 8) &
                     (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar45 >> 8) &
                     (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar49 >> 8) & bVar39;
      auVar12[0xe] = (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                     (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar45 >> 0x10) &
                     (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar49 >> 0x10) & bVar40;
      auVar12[0xf] = (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar45 >> 0x18) &
                     (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar49 >> 0x18) & bVar41;
      uVar2 = *(uint *)(local_70 + -1);
      uVar6 = (ulong)(uint)(iVar8 + (int)((ulong)auVar10._0_8_ >> 0x20) +
                           auVar10._8_4_ + auVar12._12_4_);
      iVar8 = *(int *)(&DAT_03aadfe0 + uVar6 * 4);
      auVar13 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar6 * 0x10));
      uStack_58 = auVar13._8_8_;
      local_60 = auVar13._0_8_;
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        local_70[-1] = local_60;
        auVar13 = NEON_ext(auVar13,auVar13,8,1);
        *local_70 = auVar13._0_8_;
        local_70 = (undefined8 *)((long)(local_70 + -1) + (long)iVar8 * 4);
      }
      else {
        local_70 = local_70 + -1;
        FUN_02f6afe0(param_3,&local_60);
      }
      pfVar1 = (float *)(lVar7 + (ulong)uVar2 * 0x80);
      iVar8 = -(uint)(*param_2 <= pfVar1[4]);
      iVar15 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar16 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar17 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar18 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar19 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar20 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar21 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar23 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar33 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar43 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar44 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar45 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar46 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar47 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar48 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar49 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar50 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar51 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar52 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar53 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar8 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                       (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                       (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar50 >> 0x18) & bVar26,
                       CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                                (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                                (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar50 >> 0x10) & bVar25
                                ,CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar8 >> 8) &
                                          (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar42 >> 8) &
                                          (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar50 >> 8) &
                                          bVar24,(byte)iVar18 & (byte)iVar8 & (byte)iVar23 &
                                                 (byte)iVar42 & (byte)iVar46 & (byte)iVar50 & bVar22
                                         )));
      auVar11._0_8_ =
           CONCAT17((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                    (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                    (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar31,
                    CONCAT16((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                             (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                             (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar51 >> 0x10) & bVar30,
                             CONCAT15((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar15 >> 8) &
                                      (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar43 >> 8) &
                                      (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar51 >> 8) & bVar29
                                      ,CONCAT14((byte)iVar19 & (byte)iVar15 & (byte)iVar28 &
                                                (byte)iVar43 & (byte)iVar47 & (byte)iVar51 & bVar27,
                                                iVar8))));
      auVar11[8] = (byte)iVar20 & (byte)iVar16 & (byte)iVar33 & (byte)iVar44 & (byte)iVar48 &
                   (byte)iVar52 & bVar32;
      auVar11[9] = (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar33 >> 8)
                   & (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar48 >> 8) &
                   (byte)((uint)iVar52 >> 8) & bVar34;
      auVar11[10] = (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                    (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                    (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar52 >> 0x10) & bVar35;
      auVar11[0xb] = (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                     (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar52 >> 0x18) & bVar36;
      auVar14[0xc] = (byte)iVar21 & (byte)iVar17 & (byte)iVar38 & (byte)iVar45 & (byte)iVar49 &
                     (byte)iVar53 & bVar37;
      auVar14._0_12_ = auVar11;
      auVar14[0xd] = (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar17 >> 8) &
                     (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar45 >> 8) &
                     (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar53 >> 8) & bVar39;
      auVar14[0xe] = (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                     (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar45 >> 0x10) &
                     (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar53 >> 0x10) & bVar40;
      auVar14[0xf] = (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar45 >> 0x18) &
                     (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar53 >> 0x18) & bVar41;
      uVar6 = (ulong)(uint)(iVar8 + (int)((ulong)auVar11._0_8_ >> 0x20) +
                           auVar11._8_4_ + auVar14._12_4_);
      auVar13 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar6 * 0x10));
      uStack_58 = auVar13._8_8_;
      local_60 = auVar13._0_8_;
      iVar8 = *(int *)(&DAT_03aadfe0 + uVar6 * 4);
      puVar5 = local_70;
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        auVar13 = NEON_ext(auVar13,auVar13,8,1);
        *local_70 = local_60;
        local_70[1] = auVar13._0_8_;
        goto LAB_02f6af90;
      }
LAB_02f6ae30:
      local_70 = puVar5;
      FUN_02f6afe0(param_3,&local_60);
    }
    uVar6 = (ulong)((long)local_70 - (long)local_470) >> 2;
    if ((int)uVar6 == 0) {
      return;
    }
  } while( true );
}


