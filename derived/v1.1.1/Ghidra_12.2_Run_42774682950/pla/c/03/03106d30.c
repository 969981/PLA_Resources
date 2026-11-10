/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03106d30; name: FUN_03106d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03106d30(long *param_1,float *param_2,long param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar23;
  int iVar24;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  int iVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
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
  undefined4 local_440 [256];
  undefined8 *local_40;
  
  uVar6 = _UNK_03889708;
  uVar5 = _DAT_03889700;
  if (*param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *param_1 + (long)param_1;
  }
  uVar12 = 1;
  local_40 = (undefined8 *)((ulong)local_440 | 4);
  local_440[0] = 1;
  do {
    puVar9 = (undefined8 *)((long)local_40 - 4);
    pfVar1 = (float *)(lVar11 + (ulong)*(uint *)((long)local_40 - 4) * 0x80);
    bVar46 = (byte)uVar5;
    bVar47 = (byte)((ulong)uVar5 >> 8);
    bVar48 = (byte)((ulong)uVar5 >> 0x10);
    bVar49 = (byte)((ulong)uVar5 >> 0x18);
    bVar50 = (byte)((ulong)uVar5 >> 0x20);
    bVar51 = (byte)((ulong)uVar5 >> 0x28);
    bVar52 = (byte)((ulong)uVar5 >> 0x30);
    bVar53 = (byte)((ulong)uVar5 >> 0x38);
    bVar54 = (byte)uVar6;
    bVar55 = (byte)((ulong)uVar6 >> 8);
    bVar56 = (byte)((ulong)uVar6 >> 0x10);
    bVar57 = (byte)((ulong)uVar6 >> 0x18);
    bVar58 = (byte)((ulong)uVar6 >> 0x20);
    bVar59 = (byte)((ulong)uVar6 >> 0x28);
    bVar60 = (byte)((ulong)uVar6 >> 0x30);
    bVar61 = (byte)((ulong)uVar6 >> 0x38);
    if ((int)uVar12 < 2) {
      iVar14 = -(uint)(*param_2 <= pfVar1[4]);
      iVar23 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar24 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar25 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar26 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar27 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar28 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar29 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar30 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar31 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar32 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar33 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar34 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar35 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar38 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar39 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar40 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar41 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar43 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar44 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar45 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar14 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar14 >> 0x18) &
                        (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                        (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) & bVar49,
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar14 >> 0x10) &
                                 (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                                 (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                                 bVar48,CONCAT11((byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar14 >> 8) &
                                                 (byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar34 >> 8) &
                                                 (byte)((uint)iVar38 >> 8) &
                                                 (byte)((uint)iVar42 >> 8) & bVar47,
                                                 (byte)iVar26 & (byte)iVar14 & (byte)iVar30 &
                                                 (byte)iVar34 & (byte)iVar38 & (byte)iVar42 & bVar46
                                                )));
      auVar18._0_8_ =
           CONCAT17((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                    (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) & bVar53,
                    CONCAT16((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                             (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) & bVar52,
                             CONCAT15((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                                      (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar43 >> 8) & bVar51
                                      ,CONCAT14((byte)iVar27 & (byte)iVar23 & (byte)iVar31 &
                                                (byte)iVar35 & (byte)iVar39 & (byte)iVar43 & bVar50,
                                                iVar14))));
      auVar18[8] = (byte)iVar28 & (byte)iVar24 & (byte)iVar32 & (byte)iVar36 & (byte)iVar40 &
                   (byte)iVar44 & bVar54;
      auVar18[9] = (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar32 >> 8)
                   & (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar40 >> 8) &
                   (byte)((uint)iVar44 >> 8) & bVar55;
      auVar18[10] = (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                    (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                    (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar44 >> 0x10) & bVar56;
      auVar18[0xb] = (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                     (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar44 >> 0x18) & bVar57;
      auVar20[0xc] = (byte)iVar29 & (byte)iVar25 & (byte)iVar33 & (byte)iVar37 & (byte)iVar41 &
                     (byte)iVar45 & bVar58;
      auVar20._0_12_ = auVar18;
      auVar20[0xd] = (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar25 >> 8) &
                     (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar37 >> 8) &
                     (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar45 >> 8) & bVar59;
      auVar20[0xe] = (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                     (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                     (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar45 >> 0x10) & bVar60;
      auVar20[0xf] = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                     (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar45 >> 0x18) & bVar61;
      uVar16 = iVar14 + (int)((ulong)auVar18._0_8_ >> 0x20) + auVar18._8_4_ + auVar20._12_4_;
      uVar3 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar16 * 4);
      auVar20 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar16 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        *(long *)((long)local_40 - 4) = auVar20._0_8_;
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        *(long *)((long)local_40 + 4) = auVar20._0_8_;
        local_40 = puVar9;
        goto LAB_03106db0;
      }
      plVar7 = *(long **)(param_3 + 8);
      lVar4 = plVar7[1];
      lVar10 = *plVar7;
      iVar14 = (int)lVar4 + uVar3;
      if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) < iVar14) {
        local_40 = puVar9;
        lVar10 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar14,lVar10);
        *plVar7 = lVar10;
        *(int *)(plVar7 + 1) = iVar14;
      }
      else {
        *(int *)(plVar7 + 1) = iVar14;
        local_40 = puVar9;
      }
      if (uVar16 != 0) {
        puVar2 = (undefined4 *)(lVar10 + (long)(int)lVar4 * 4);
        uVar16 = uVar3 & 3;
        if (uVar3 - 1 < 3) {
          iVar14 = 0;
        }
        else {
          iVar14 = 0;
          puVar8 = puVar2;
          do {
            uVar13 = auVar20._0_4_;
            if (iVar14 != 0) {
              uVar13 = 0;
            }
            *puVar8 = uVar13;
            uVar13 = auVar20._4_4_;
            if (iVar14 != 0) {
              uVar13 = 0;
            }
            puVar8[1] = uVar13;
            uVar13 = auVar20._8_4_;
            if (iVar14 != 0) {
              uVar13 = 0;
            }
            puVar8[2] = uVar13;
            uVar13 = auVar20._12_4_;
            if (iVar14 != 0) {
              uVar13 = 0;
            }
            puVar2 = puVar8 + 4;
            iVar14 = iVar14 + -4;
            puVar8[3] = uVar13;
            puVar8 = puVar2;
          } while (uVar16 - uVar3 != iVar14);
          iVar14 = -iVar14;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          switch(iVar14) {
          case 0:
            uVar13 = auVar20._0_4_;
            break;
          case 1:
            uVar13 = auVar20._4_4_;
            break;
          case 2:
            uVar13 = auVar20._8_4_;
            break;
          case 3:
            uVar13 = auVar20._12_4_;
            break;
          default:
            uVar13 = 0;
          }
          iVar14 = iVar14 + 1;
          *puVar2 = uVar13;
          puVar2 = puVar2 + 1;
        }
      }
    }
    else {
      puVar9 = local_40 + -1;
      iVar14 = -(uint)(*param_2 <= pfVar1[4]);
      iVar23 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar24 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar25 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar26 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar27 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar28 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar29 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar30 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar31 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar32 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar33 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar34 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar35 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar43 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar44 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar45 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar38 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar39 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar40 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar41 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar14 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar14 >> 0x18) &
                        (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                        (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar38 >> 0x18) & bVar49,
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar14 >> 0x10) &
                                 (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                                 (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                 bVar48,CONCAT11((byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar14 >> 8) &
                                                 (byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar34 >> 8) &
                                                 (byte)((uint)iVar42 >> 8) &
                                                 (byte)((uint)iVar38 >> 8) & bVar47,
                                                 (byte)iVar26 & (byte)iVar14 & (byte)iVar30 &
                                                 (byte)iVar34 & (byte)iVar42 & (byte)iVar38 & bVar46
                                                )));
      auVar17._0_8_ =
           CONCAT17((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                    (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar39 >> 0x18) & bVar53,
                    CONCAT16((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                             (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar39 >> 0x10) & bVar52,
                             CONCAT15((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                                      (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar39 >> 8) & bVar51
                                      ,CONCAT14((byte)iVar27 & (byte)iVar23 & (byte)iVar31 &
                                                (byte)iVar35 & (byte)iVar43 & (byte)iVar39 & bVar50,
                                                iVar14))));
      auVar17[8] = (byte)iVar28 & (byte)iVar24 & (byte)iVar32 & (byte)iVar36 & (byte)iVar44 &
                   (byte)iVar40 & bVar54;
      auVar17[9] = (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar32 >> 8)
                   & (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar44 >> 8) &
                   (byte)((uint)iVar40 >> 8) & bVar55;
      auVar17[10] = (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                    (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                    (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar40 >> 0x10) & bVar56;
      auVar17[0xb] = (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                     (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                     (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar40 >> 0x18) & bVar57;
      auVar22[0xc] = (byte)iVar29 & (byte)iVar25 & (byte)iVar33 & (byte)iVar37 & (byte)iVar45 &
                     (byte)iVar41 & bVar58;
      auVar22._0_12_ = auVar17;
      auVar22[0xd] = (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar25 >> 8) &
                     (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar37 >> 8) &
                     (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar41 >> 8) & bVar59;
      auVar22[0xe] = (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                     (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                     (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar41 >> 0x10) & bVar60;
      auVar22[0xf] = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                     (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar41 >> 0x18) & bVar61;
      uVar15 = iVar14 + (int)((ulong)auVar17._0_8_ >> 0x20) + auVar17._8_4_ + auVar22._12_4_;
      auVar20 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar15 * 0x10));
      uVar3 = *(uint *)(local_40 + -1);
      uVar16 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar15 * 4);
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        local_40[-1] = auVar20._0_8_;
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        *local_40 = auVar20._0_8_;
        local_40 = (undefined8 *)((long)puVar9 + (long)(int)uVar16 * 4);
      }
      else {
        plVar7 = *(long **)(param_3 + 8);
        lVar4 = plVar7[1];
        lVar10 = *plVar7;
        iVar14 = (int)lVar4 + uVar16;
        local_40 = puVar9;
        if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) < iVar14) {
          lVar10 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar14,lVar10);
          *plVar7 = lVar10;
          *(int *)(plVar7 + 1) = iVar14;
        }
        else {
          *(int *)(plVar7 + 1) = iVar14;
        }
        if (uVar15 != 0) {
          puVar2 = (undefined4 *)(lVar10 + (long)(int)lVar4 * 4);
          uVar15 = uVar16 & 3;
          if (uVar16 - 1 < 3) {
            iVar14 = 0;
          }
          else {
            iVar14 = 0;
            puVar8 = puVar2;
            do {
              uVar13 = auVar20._0_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              *puVar8 = uVar13;
              uVar13 = auVar20._4_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              puVar8[1] = uVar13;
              uVar13 = auVar20._8_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              puVar8[2] = uVar13;
              uVar13 = auVar20._12_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              puVar2 = puVar8 + 4;
              iVar14 = iVar14 + -4;
              puVar8[3] = uVar13;
              puVar8 = puVar2;
            } while (uVar15 - uVar16 != iVar14);
            iVar14 = -iVar14;
          }
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            switch(iVar14) {
            case 0:
              uVar13 = auVar20._0_4_;
              break;
            case 1:
              uVar13 = auVar20._4_4_;
              break;
            case 2:
              uVar13 = auVar20._8_4_;
              break;
            case 3:
              uVar13 = auVar20._12_4_;
              break;
            default:
              uVar13 = 0;
            }
            iVar14 = iVar14 + 1;
            *puVar2 = uVar13;
            puVar2 = puVar2 + 1;
          }
        }
      }
      pfVar1 = (float *)(lVar11 + (ulong)uVar3 * 0x80);
      iVar14 = -(uint)(*param_2 <= pfVar1[4]);
      iVar23 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar24 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar25 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar26 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar27 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar28 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar29 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar30 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar31 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar32 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar33 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar34 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar35 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar38 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar39 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar40 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar41 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar43 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar44 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar45 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar14 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar14 >> 0x18) &
                        (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                        (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) & bVar49,
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar14 >> 0x10) &
                                 (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                                 (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                                 bVar48,CONCAT11((byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar14 >> 8) &
                                                 (byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar34 >> 8) &
                                                 (byte)((uint)iVar38 >> 8) &
                                                 (byte)((uint)iVar42 >> 8) & bVar47,
                                                 (byte)iVar26 & (byte)iVar14 & (byte)iVar30 &
                                                 (byte)iVar34 & (byte)iVar38 & (byte)iVar42 & bVar46
                                                )));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                    (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) & bVar53,
                    CONCAT16((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                             (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) & bVar52,
                             CONCAT15((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                                      (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar43 >> 8) & bVar51
                                      ,CONCAT14((byte)iVar27 & (byte)iVar23 & (byte)iVar31 &
                                                (byte)iVar35 & (byte)iVar39 & (byte)iVar43 & bVar50,
                                                iVar14))));
      auVar19[8] = (byte)iVar28 & (byte)iVar24 & (byte)iVar32 & (byte)iVar36 & (byte)iVar40 &
                   (byte)iVar44 & bVar54;
      auVar19[9] = (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar32 >> 8)
                   & (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar40 >> 8) &
                   (byte)((uint)iVar44 >> 8) & bVar55;
      auVar19[10] = (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                    (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                    (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar44 >> 0x10) & bVar56;
      auVar19[0xb] = (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                     (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar44 >> 0x18) & bVar57;
      auVar21[0xc] = (byte)iVar29 & (byte)iVar25 & (byte)iVar33 & (byte)iVar37 & (byte)iVar41 &
                     (byte)iVar45 & bVar58;
      auVar21._0_12_ = auVar19;
      auVar21[0xd] = (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar25 >> 8) &
                     (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar37 >> 8) &
                     (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar45 >> 8) & bVar59;
      auVar21[0xe] = (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                     (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                     (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar45 >> 0x10) & bVar60;
      auVar21[0xf] = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                     (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar45 >> 0x18) & bVar61;
      uVar16 = iVar14 + (int)((ulong)auVar19._0_8_ >> 0x20) + auVar19._8_4_ + auVar21._12_4_;
      uVar3 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar16 * 4);
      auVar20 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar16 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        auVar22 = NEON_ext(auVar20,auVar20,8,1);
        *local_40 = auVar20._0_8_;
        local_40[1] = auVar22._0_8_;
LAB_03106db0:
        local_40 = (undefined8 *)((long)local_40 + (long)(int)uVar3 * 4);
      }
      else {
        plVar7 = *(long **)(param_3 + 8);
        lVar4 = plVar7[1];
        lVar10 = *plVar7;
        iVar14 = (int)lVar4 + uVar3;
        if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) < iVar14) {
          lVar10 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar14,lVar10);
          *plVar7 = lVar10;
          *(int *)(plVar7 + 1) = iVar14;
        }
        else {
          *(int *)(plVar7 + 1) = iVar14;
        }
        if (uVar16 != 0) {
          puVar2 = (undefined4 *)(lVar10 + (long)(int)lVar4 * 4);
          uVar16 = uVar3 & 3;
          if (uVar3 - 1 < 3) {
            iVar14 = 0;
          }
          else {
            iVar14 = 0;
            puVar8 = puVar2;
            do {
              uVar13 = auVar20._0_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              *puVar8 = uVar13;
              uVar13 = auVar20._4_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              puVar8[1] = uVar13;
              uVar13 = auVar20._8_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              puVar8[2] = uVar13;
              uVar13 = auVar20._12_4_;
              if (iVar14 != 0) {
                uVar13 = 0;
              }
              puVar2 = puVar8 + 4;
              iVar14 = iVar14 + -4;
              puVar8[3] = uVar13;
              puVar8 = puVar2;
            } while (uVar16 - uVar3 != iVar14);
            iVar14 = -iVar14;
          }
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            switch(iVar14) {
            case 0:
              uVar13 = auVar20._0_4_;
              break;
            case 1:
              uVar13 = auVar20._4_4_;
              break;
            case 2:
              uVar13 = auVar20._8_4_;
              break;
            case 3:
              uVar13 = auVar20._12_4_;
              break;
            default:
              uVar13 = 0;
            }
            iVar14 = iVar14 + 1;
            *puVar2 = uVar13;
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
    uVar12 = (ulong)((long)local_40 - (long)local_440) >> 2;
    if ((int)uVar12 == 0) {
      return;
    }
  } while( true );
}


