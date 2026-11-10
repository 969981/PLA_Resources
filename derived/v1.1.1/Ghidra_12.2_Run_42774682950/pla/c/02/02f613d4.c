/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f613d4; name: FUN_02f613d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f613d4(long param_1,long param_2,undefined8 param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  int iVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  long *local_5b8;
  undefined8 local_5b0;
  long local_5a8 [32];
  long local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_490 [256];
  undefined8 *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar11 = PTR_PTR_0434a080;
  local_498 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  local_5b8 = local_5a8;
  local_5b0 = 0x8000002000000000;
  iVar19 = *(int *)(param_1 + 0x18);
  local_4a8 = param_2;
  uStack_4a0 = param_3;
  if (0 < iVar19) {
    plVar17 = *(long **)(param_2 + 8);
    if (plVar17 == (long *)0x0) {
      iVar16 = 0;
      lVar15 = 0;
      do {
        lVar14 = *(long *)(*(long *)(param_1 + 0x10) + lVar15 * 8);
        if (((*(char *)(lVar14 + 0x20) != '\0') &&
            ((*(byte *)(param_2 + 0x21) & *(byte *)(lVar14 + 0x1ae0)) == 0)) &&
           ((*(byte *)(param_2 + 0x22) & *(byte *)(lVar14 + 0x1ae0)) != 0)) {
          iVar26 = iVar16 + 1;
          if ((int)(local_5b0._4_4_ & 0x3fffffff) <= iVar16) {
            local_5b8 = (long *)FUN_02f6a1c4(puVar11,iVar26,local_5b8,iVar16,(long)&local_5b0 + 4);
            iVar16 = (int)local_5b0;
          }
          local_5b8[iVar16] = lVar14 + 8;
          local_5b0 = CONCAT44(local_5b0._4_4_,iVar26);
          iVar19 = *(int *)(param_1 + 0x18);
          iVar16 = iVar26;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar19);
    }
    else {
      uVar18 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
        if (((*(char *)(lVar15 + 0x20) != '\0') &&
            ((*(byte *)(param_2 + 0x21) & *(byte *)(lVar15 + 0x1ae0)) == 0)) &&
           (((*(byte *)(param_2 + 0x22) & *(byte *)(lVar15 + 0x1ae0)) != 0 &&
            (uVar13 = (**(code **)(*plVar17 + 0x28))
                                (plVar17,6,uVar18 & 0xffffffff,*(undefined8 *)(param_2 + 0x18)),
            (uVar13 & 1) != 0)))) {
          iVar19 = (int)local_5b0 + 1;
          if ((int)(local_5b0._4_4_ & 0x3fffffff) <= (int)local_5b0) {
            local_5b8 = (long *)FUN_02f6a1c4(puVar11,iVar19,local_5b8,local_5b0 & 0xffffffff,
                                             (long)&local_5b0 + 4);
          }
          local_5b8[(int)local_5b0] = lVar15 + 8;
          local_5b0 = CONCAT44(local_5b0._4_4_,iVar19);
        }
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)*(int *)(param_1 + 0x18));
      iVar16 = (int)local_5b0;
    }
    uVar10 = _UNK_03889708;
    uVar9 = _DAT_03889700;
    if (iVar16 != 0) {
      plVar17 = local_5b8;
      do {
        uVar18 = 1;
        lVar14 = *(long *)*plVar17;
        fVar3 = *(float *)(param_2 + 0x30);
        fVar4 = *(float *)(param_2 + 0x34);
        fVar5 = *(float *)(param_2 + 0x38);
        fVar6 = *(float *)(param_2 + 0x40);
        fVar7 = *(float *)(param_2 + 0x44);
        fVar8 = *(float *)(param_2 + 0x48);
        local_490[0] = 1;
        lVar15 = 0;
        if (lVar14 != 0) {
          lVar15 = lVar14 + *plVar17;
        }
        local_90 = (undefined8 *)((ulong)local_490 | 4);
        do {
          pfVar1 = (float *)(lVar15 + (ulong)*(uint *)((long)local_90 - 4) * 0x80);
          bVar49 = (byte)uVar9;
          bVar50 = (byte)((ulong)uVar9 >> 8);
          bVar51 = (byte)((ulong)uVar9 >> 0x10);
          bVar52 = (byte)((ulong)uVar9 >> 0x18);
          bVar53 = (byte)((ulong)uVar9 >> 0x20);
          bVar54 = (byte)((ulong)uVar9 >> 0x28);
          bVar55 = (byte)((ulong)uVar9 >> 0x30);
          bVar56 = (byte)((ulong)uVar9 >> 0x38);
          bVar57 = (byte)uVar10;
          bVar58 = (byte)((ulong)uVar10 >> 8);
          bVar59 = (byte)((ulong)uVar10 >> 0x10);
          bVar60 = (byte)((ulong)uVar10 >> 0x18);
          bVar61 = (byte)((ulong)uVar10 >> 0x20);
          bVar62 = (byte)((ulong)uVar10 >> 0x28);
          bVar63 = (byte)((ulong)uVar10 >> 0x30);
          bVar64 = (byte)((ulong)uVar10 >> 0x38);
          if ((int)uVar18 < 2) {
            iVar19 = -(uint)(fVar3 <= pfVar1[4]);
            iVar26 = -(uint)(fVar3 <= pfVar1[5]);
            iVar27 = -(uint)(fVar3 <= pfVar1[6]);
            iVar28 = -(uint)(fVar3 <= pfVar1[7]);
            iVar33 = -(uint)(fVar4 <= (float)*(undefined8 *)(pfVar1 + 0xc));
            iVar34 = -(uint)(fVar4 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
            iVar35 = -(uint)(fVar4 <= (float)*(undefined8 *)(pfVar1 + 0xe));
            iVar36 = -(uint)(fVar4 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
            iVar29 = -(uint)(*pfVar1 <= fVar6);
            iVar30 = -(uint)(pfVar1[1] <= fVar6);
            iVar31 = -(uint)(pfVar1[2] <= fVar6);
            iVar32 = -(uint)(pfVar1[3] <= fVar6);
            iVar37 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= fVar7);
            iVar38 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <= fVar7);
            iVar39 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= fVar7);
            iVar40 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <= fVar7);
            iVar41 = -(uint)(fVar5 <= (float)*(undefined8 *)(pfVar1 + 0x14));
            iVar42 = -(uint)(fVar5 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
            iVar43 = -(uint)(fVar5 <= (float)*(undefined8 *)(pfVar1 + 0x16));
            iVar44 = -(uint)(fVar5 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
            iVar45 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <= fVar8);
            iVar46 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <= fVar8);
            iVar47 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <= fVar8);
            iVar48 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <= fVar8);
            iVar19 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
                              (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                              (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar45 >> 0x18) & bVar52,
                              CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                                       (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                                       (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar45 >> 0x10) &
                                       bVar51,CONCAT11((byte)((uint)iVar29 >> 8) &
                                                       (byte)((uint)iVar19 >> 8) &
                                                       (byte)((uint)iVar33 >> 8) &
                                                       (byte)((uint)iVar37 >> 8) &
                                                       (byte)((uint)iVar41 >> 8) &
                                                       (byte)((uint)iVar45 >> 8) & bVar50,
                                                       (byte)iVar29 & (byte)iVar19 & (byte)iVar33 &
                                                       (byte)iVar37 & (byte)iVar41 & (byte)iVar45 &
                                                       bVar49)));
            auVar20._0_8_ =
                 CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                          (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                          (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar46 >> 0x18) & bVar56,
                          CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                                   (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                   (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                                   bVar55,CONCAT15((byte)((uint)iVar30 >> 8) &
                                                   (byte)((uint)iVar26 >> 8) &
                                                   (byte)((uint)iVar34 >> 8) &
                                                   (byte)((uint)iVar38 >> 8) &
                                                   (byte)((uint)iVar42 >> 8) &
                                                   (byte)((uint)iVar46 >> 8) & bVar54,
                                                   CONCAT14((byte)iVar30 & (byte)iVar26 &
                                                            (byte)iVar34 & (byte)iVar38 &
                                                            (byte)iVar42 & (byte)iVar46 & bVar53,
                                                            iVar19))));
            auVar20[8] = (byte)iVar31 & (byte)iVar27 & (byte)iVar35 & (byte)iVar39 & (byte)iVar43 &
                         (byte)iVar47 & bVar57;
            auVar20[9] = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8) &
                         (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar39 >> 8) &
                         (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar47 >> 8) & bVar58;
            auVar20[10] = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                          (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                          (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar47 >> 0x10) & bVar59;
            auVar20[0xb] = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                           (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                           (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar47 >> 0x18) & bVar60;
            auVar23[0xc] = (byte)iVar32 & (byte)iVar28 & (byte)iVar36 & (byte)iVar40 & (byte)iVar44
                           & (byte)iVar48 & bVar61;
            auVar23._0_12_ = auVar20;
            auVar23[0xd] = (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar28 >> 8) &
                           (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar40 >> 8) &
                           (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar48 >> 8) & bVar62;
            auVar23[0xe] = (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                           (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                           (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar48 >> 0x10) & bVar63;
            auVar23[0xf] = (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                           (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                           (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar48 >> 0x18) & bVar64;
            uVar18 = (ulong)(uint)(iVar19 + (int)((ulong)auVar20._0_8_ >> 0x20) +
                                  auVar20._8_4_ + auVar23._12_4_);
            iVar19 = *(int *)(&DAT_03aadfe0 + uVar18 * 4);
            auVar24 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                              *(undefined1 (*) [16])(&DAT_03aae120 + uVar18 * 0x10));
            uStack_78 = auVar24._8_8_;
            local_80 = auVar24._0_8_;
            puVar12 = (undefined8 *)((long)local_90 - 4U);
            if (*(char *)(pfVar1 + 0x1c) == '\0') {
              *(undefined8 *)((long)local_90 - 4) = local_80;
              auVar24 = NEON_ext(auVar24,auVar24,8,1);
              *(long *)((long)local_90 + 4) = auVar24._0_8_;
              local_90 = (undefined8 *)((long)local_90 - 4U);
              goto LAB_02f615d8;
            }
LAB_02f616f0:
            local_90 = puVar12;
            FUN_02f6b1c0(&local_4a8,&local_80);
          }
          else {
            uVar2 = *(uint *)(local_90 + -1);
            iVar29 = -(uint)(fVar3 <= pfVar1[4]);
            iVar30 = -(uint)(fVar3 <= pfVar1[5]);
            iVar31 = -(uint)(fVar3 <= pfVar1[6]);
            iVar32 = -(uint)(fVar3 <= pfVar1[7]);
            iVar37 = -(uint)(fVar4 <= (float)*(undefined8 *)(pfVar1 + 0xc));
            iVar38 = -(uint)(fVar4 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
            iVar39 = -(uint)(fVar4 <= (float)*(undefined8 *)(pfVar1 + 0xe));
            iVar40 = -(uint)(fVar4 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
            iVar19 = -(uint)(*pfVar1 <= fVar6);
            iVar26 = -(uint)(pfVar1[1] <= fVar6);
            iVar27 = -(uint)(pfVar1[2] <= fVar6);
            iVar28 = -(uint)(pfVar1[3] <= fVar6);
            iVar33 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= fVar7);
            iVar34 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <= fVar7);
            iVar35 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= fVar7);
            iVar36 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <= fVar7);
            iVar45 = -(uint)(fVar5 <= (float)*(undefined8 *)(pfVar1 + 0x14));
            iVar46 = -(uint)(fVar5 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
            iVar47 = -(uint)(fVar5 <= (float)*(undefined8 *)(pfVar1 + 0x16));
            iVar48 = -(uint)(fVar5 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
            iVar41 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <= fVar8);
            iVar42 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <= fVar8);
            iVar43 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <= fVar8);
            iVar44 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <= fVar8);
            iVar19 = CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                              (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                              (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar41 >> 0x18) & bVar52,
                              CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                                       (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                                       (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                                       bVar51,CONCAT11((byte)((uint)iVar19 >> 8) &
                                                       (byte)((uint)iVar29 >> 8) &
                                                       (byte)((uint)iVar37 >> 8) &
                                                       (byte)((uint)iVar33 >> 8) &
                                                       (byte)((uint)iVar45 >> 8) &
                                                       (byte)((uint)iVar41 >> 8) & bVar50,
                                                       (byte)iVar19 & (byte)iVar29 & (byte)iVar37 &
                                                       (byte)iVar33 & (byte)iVar45 & (byte)iVar41 &
                                                       bVar49)));
            auVar21._0_8_ =
                 CONCAT17((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                          (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                          (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar42 >> 0x18) & bVar56,
                          CONCAT16((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                                   (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                                   (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                                   bVar55,CONCAT15((byte)((uint)iVar26 >> 8) &
                                                   (byte)((uint)iVar30 >> 8) &
                                                   (byte)((uint)iVar38 >> 8) &
                                                   (byte)((uint)iVar34 >> 8) &
                                                   (byte)((uint)iVar46 >> 8) &
                                                   (byte)((uint)iVar42 >> 8) & bVar54,
                                                   CONCAT14((byte)iVar26 & (byte)iVar30 &
                                                            (byte)iVar38 & (byte)iVar34 &
                                                            (byte)iVar46 & (byte)iVar42 & bVar53,
                                                            iVar19))));
            auVar21[8] = (byte)iVar27 & (byte)iVar31 & (byte)iVar39 & (byte)iVar35 & (byte)iVar47 &
                         (byte)iVar43 & bVar57;
            auVar21[9] = (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar31 >> 8) &
                         (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar35 >> 8) &
                         (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar43 >> 8) & bVar58;
            auVar21[10] = (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                          (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                          (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar43 >> 0x10) & bVar59;
            auVar21[0xb] = (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                           (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                           (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar43 >> 0x18) & bVar60;
            auVar24[0xc] = (byte)iVar28 & (byte)iVar32 & (byte)iVar40 & (byte)iVar36 & (byte)iVar48
                           & (byte)iVar44 & bVar61;
            auVar24._0_12_ = auVar21;
            auVar24[0xd] = (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar32 >> 8) &
                           (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar36 >> 8) &
                           (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar44 >> 8) & bVar62;
            auVar24[0xe] = (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                           (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                           (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar44 >> 0x10) & bVar63;
            auVar24[0xf] = (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                           (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                           (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar44 >> 0x18) & bVar64;
            uVar18 = (ulong)(uint)(iVar19 + (int)((ulong)auVar21._0_8_ >> 0x20) +
                                  auVar21._8_4_ + auVar24._12_4_);
            iVar19 = *(int *)(&DAT_03aadfe0 + uVar18 * 4);
            auVar24 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                              *(undefined1 (*) [16])(&DAT_03aae120 + uVar18 * 0x10));
            uStack_78 = auVar24._8_8_;
            local_80 = auVar24._0_8_;
            if (*(char *)(pfVar1 + 0x1c) == '\0') {
              local_90[-1] = local_80;
              auVar24 = NEON_ext(auVar24,auVar24,8,1);
              *local_90 = auVar24._0_8_;
              local_90 = (undefined8 *)((long)(local_90 + -1) + (long)iVar19 * 4);
            }
            else {
              local_90 = local_90 + -1;
              FUN_02f6b1c0(&local_4a8,&local_80);
            }
            pfVar1 = (float *)(lVar15 + (ulong)uVar2 * 0x80);
            iVar19 = -(uint)(fVar3 <= pfVar1[4]);
            iVar26 = -(uint)(fVar3 <= pfVar1[5]);
            iVar27 = -(uint)(fVar3 <= pfVar1[6]);
            iVar28 = -(uint)(fVar3 <= pfVar1[7]);
            iVar29 = -(uint)(*pfVar1 <= fVar6);
            iVar30 = -(uint)(pfVar1[1] <= fVar6);
            iVar31 = -(uint)(pfVar1[2] <= fVar6);
            iVar32 = -(uint)(pfVar1[3] <= fVar6);
            iVar33 = -(uint)(fVar4 <= (float)*(undefined8 *)(pfVar1 + 0xc));
            iVar34 = -(uint)(fVar4 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
            iVar35 = -(uint)(fVar4 <= (float)*(undefined8 *)(pfVar1 + 0xe));
            iVar36 = -(uint)(fVar4 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
            iVar37 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= fVar7);
            iVar38 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <= fVar7);
            iVar39 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= fVar7);
            iVar40 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <= fVar7);
            iVar41 = -(uint)(fVar5 <= (float)*(undefined8 *)(pfVar1 + 0x14));
            iVar42 = -(uint)(fVar5 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
            iVar43 = -(uint)(fVar5 <= (float)*(undefined8 *)(pfVar1 + 0x16));
            iVar44 = -(uint)(fVar5 <= (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
            iVar45 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <= fVar8);
            iVar46 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <= fVar8);
            iVar47 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <= fVar8);
            iVar48 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <= fVar8);
            iVar19 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
                              (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                              (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar45 >> 0x18) & bVar52,
                              CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                                       (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                                       (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar45 >> 0x10) &
                                       bVar51,CONCAT11((byte)((uint)iVar29 >> 8) &
                                                       (byte)((uint)iVar19 >> 8) &
                                                       (byte)((uint)iVar33 >> 8) &
                                                       (byte)((uint)iVar37 >> 8) &
                                                       (byte)((uint)iVar41 >> 8) &
                                                       (byte)((uint)iVar45 >> 8) & bVar50,
                                                       (byte)iVar29 & (byte)iVar19 & (byte)iVar33 &
                                                       (byte)iVar37 & (byte)iVar41 & (byte)iVar45 &
                                                       bVar49)));
            auVar22._0_8_ =
                 CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                          (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                          (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar46 >> 0x18) & bVar56,
                          CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                                   (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                   (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                                   bVar55,CONCAT15((byte)((uint)iVar30 >> 8) &
                                                   (byte)((uint)iVar26 >> 8) &
                                                   (byte)((uint)iVar34 >> 8) &
                                                   (byte)((uint)iVar38 >> 8) &
                                                   (byte)((uint)iVar42 >> 8) &
                                                   (byte)((uint)iVar46 >> 8) & bVar54,
                                                   CONCAT14((byte)iVar30 & (byte)iVar26 &
                                                            (byte)iVar34 & (byte)iVar38 &
                                                            (byte)iVar42 & (byte)iVar46 & bVar53,
                                                            iVar19))));
            auVar22[8] = (byte)iVar31 & (byte)iVar27 & (byte)iVar35 & (byte)iVar39 & (byte)iVar43 &
                         (byte)iVar47 & bVar57;
            auVar22[9] = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8) &
                         (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar39 >> 8) &
                         (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar47 >> 8) & bVar58;
            auVar22[10] = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                          (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                          (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar47 >> 0x10) & bVar59;
            auVar22[0xb] = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                           (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                           (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar47 >> 0x18) & bVar60;
            auVar25[0xc] = (byte)iVar32 & (byte)iVar28 & (byte)iVar36 & (byte)iVar40 & (byte)iVar44
                           & (byte)iVar48 & bVar61;
            auVar25._0_12_ = auVar22;
            auVar25[0xd] = (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar28 >> 8) &
                           (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar40 >> 8) &
                           (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar48 >> 8) & bVar62;
            auVar25[0xe] = (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                           (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                           (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar48 >> 0x10) & bVar63;
            auVar25[0xf] = (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                           (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                           (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar48 >> 0x18) & bVar64;
            uVar18 = (ulong)(uint)(iVar19 + (int)((ulong)auVar22._0_8_ >> 0x20) +
                                  auVar22._8_4_ + auVar25._12_4_);
            iVar19 = *(int *)(&DAT_03aadfe0 + uVar18 * 4);
            auVar24 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                              *(undefined1 (*) [16])(&DAT_03aae120 + uVar18 * 0x10));
            uStack_78 = auVar24._8_8_;
            local_80 = auVar24._0_8_;
            puVar12 = local_90;
            if (*(char *)(pfVar1 + 0x1c) != '\0') goto LAB_02f616f0;
            auVar24 = NEON_ext(auVar24,auVar24,8,1);
            *local_90 = local_80;
            local_90[1] = auVar24._0_8_;
LAB_02f615d8:
            local_90 = (undefined8 *)((long)local_90 + (long)iVar19 * 4);
          }
          uVar18 = (ulong)((long)local_90 - (long)local_490) >> 2;
        } while ((int)uVar18 != 0);
        plVar17 = plVar17 + 1;
      } while (plVar17 != local_5b8 + iVar16);
    }
  }
  uVar18 = local_5b0;
  uVar13 = (ulong)local_5b0._4_4_;
  local_5b0 = (ulong)local_5b0._4_4_ << 0x20;
  if ((-1 < (long)uVar18) && (local_5b8 != (long *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_5b8,(uVar13 & 0x3fffffff) << 3);
  }
  return;
}


