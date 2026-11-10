/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc1180; name: FUN_02fc1180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fc1180(long *param_1,float *param_2,long *param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar23;
  int iVar24;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  int iVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar26;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar27 [16];
  byte bVar31;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  int iVar32;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  int iVar37;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  int iVar42;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  int iVar47;
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
  long local_530;
  undefined4 local_500 [256];
  undefined8 *local_100;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar4 = _UNK_03889708;
  uVar3 = _DAT_03889700;
  if (*param_1 == 0) {
    local_530 = 0;
  }
  else {
    local_530 = *param_1 + (long)param_1;
  }
  puVar9 = (undefined8 *)((ulong)local_b0 | 4);
  puVar14 = (undefined8 *)((ulong)local_e8 | 4);
  puVar13 = (undefined8 *)((ulong)&local_78 | 4);
  local_500[0] = 1;
  local_100 = (undefined8 *)((ulong)local_500 | 4);
  uVar12 = 1;
  do {
    puVar10 = (undefined8 *)((long)local_100 - 4);
    pfVar1 = (float *)(local_530 + (ulong)*(uint *)((long)local_100 - 4) * 0x80);
    bVar31 = (byte)uVar3;
    bVar33 = (byte)((ulong)uVar3 >> 8);
    bVar34 = (byte)((ulong)uVar3 >> 0x10);
    bVar35 = (byte)((ulong)uVar3 >> 0x18);
    bVar36 = (byte)((ulong)uVar3 >> 0x20);
    bVar38 = (byte)((ulong)uVar3 >> 0x28);
    bVar39 = (byte)((ulong)uVar3 >> 0x30);
    bVar40 = (byte)((ulong)uVar3 >> 0x38);
    bVar41 = (byte)uVar4;
    bVar43 = (byte)((ulong)uVar4 >> 8);
    bVar44 = (byte)((ulong)uVar4 >> 0x10);
    bVar45 = (byte)((ulong)uVar4 >> 0x18);
    bVar46 = (byte)((ulong)uVar4 >> 0x20);
    bVar48 = (byte)((ulong)uVar4 >> 0x28);
    bVar49 = (byte)((ulong)uVar4 >> 0x30);
    bVar50 = (byte)((ulong)uVar4 >> 0x38);
    if ((int)uVar12 < 2) {
      iVar15 = -(uint)(*param_2 <= pfVar1[4]);
      iVar23 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar24 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar25 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar26 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar28 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar29 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar30 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar32 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar47 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar51 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar52 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar53 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar54 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar55 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar56 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar57 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar58 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar59 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar60 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar61 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar62 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar15 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                        (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar51 >> 0x18) &
                        (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar59 >> 0x18) & bVar35,
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                                 (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar51 >> 0x10) &
                                 (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                                 bVar34,CONCAT11((byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar15 >> 8) &
                                                 (byte)((uint)iVar32 >> 8) &
                                                 (byte)((uint)iVar51 >> 8) &
                                                 (byte)((uint)iVar55 >> 8) &
                                                 (byte)((uint)iVar59 >> 8) & bVar33,
                                                 (byte)iVar26 & (byte)iVar15 & (byte)iVar32 &
                                                 (byte)iVar51 & (byte)iVar55 & (byte)iVar59 & bVar31
                                                )));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                    (byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar60 >> 0x18) & bVar40,
                    CONCAT16((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                             (byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar60 >> 0x10) & bVar39,
                             CONCAT15((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar52 >> 8) &
                                      (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar60 >> 8) & bVar38
                                      ,CONCAT14((byte)iVar28 & (byte)iVar23 & (byte)iVar37 &
                                                (byte)iVar52 & (byte)iVar56 & (byte)iVar60 & bVar36,
                                                iVar15))));
      auVar19[8] = (byte)iVar29 & (byte)iVar24 & (byte)iVar42 & (byte)iVar53 & (byte)iVar57 &
                   (byte)iVar61 & bVar41;
      auVar19[9] = (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar42 >> 8)
                   & (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar57 >> 8) &
                   (byte)((uint)iVar61 >> 8) & bVar43;
      auVar19[10] = (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                    (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                    (byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar61 >> 0x10) & bVar44;
      auVar19[0xb] = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                     (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                     (byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar61 >> 0x18) & bVar45;
      auVar21[0xc] = (byte)iVar30 & (byte)iVar25 & (byte)iVar47 & (byte)iVar54 & (byte)iVar58 &
                     (byte)iVar62 & bVar46;
      auVar21._0_12_ = auVar19;
      auVar21[0xd] = (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar25 >> 8) &
                     (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar54 >> 8) &
                     (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar62 >> 8) & bVar48;
      auVar21[0xe] = (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                     (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                     (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar62 >> 0x10) & bVar49;
      auVar21[0xf] = (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                     (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                     (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar62 >> 0x18) & bVar50;
      uVar17 = iVar15 + (int)((ulong)auVar19._0_8_ >> 0x20) + auVar19._8_4_ + auVar21._12_4_;
      iVar15 = *(int *)(&DAT_03aadfe0 + (ulong)uVar17 * 4);
      auVar21 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar17 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        *(long *)((long)local_100 - 4) = auVar21._0_8_;
        auVar21 = NEON_ext(auVar21,auVar21,8,1);
        *(long *)((long)local_100 + 4) = auVar21._0_8_;
        local_100 = (undefined8 *)((long)puVar10 + (long)iVar15 * 4);
        goto LAB_02fc1218;
      }
      local_100 = puVar10;
      if (uVar17 != 0) {
        iVar23 = 0;
        do {
          switch(iVar23) {
          case 0:
            iVar24 = auVar21._0_4_;
            break;
          case 1:
            iVar24 = auVar21._4_4_;
            break;
          case 2:
            iVar24 = auVar21._8_4_;
            break;
          case 3:
            iVar24 = auVar21._12_4_;
            break;
          default:
            iVar24 = 0;
          }
          uVar5 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x70))
                            (*(long **)(*param_3 + 0x50),iVar24);
          uVar17 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x78))
                             (*(long **)(*param_3 + 0x50),iVar24);
          iVar25 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x20))();
          if (iVar24 < iVar25) {
            uVar16 = 1;
          }
          else {
            uVar16 = 1;
            if (((uVar17 ^ 0xffffffff) & 7) != 0) {
              uVar16 = 2;
            }
          }
          uVar17 = 0;
          do {
            puVar10 = (undefined8 *)param_3[4];
            uVar7 = ((uVar17 | iVar24 << 1) + 1 <<
                    (ulong)(-((uint)*(byte *)(*param_3 + 0x1c) + *(int *)((long)puVar10 + 0x1c)) &
                           0x1f)) - 1 |
                    (&DAT_03aa74b0)[*(int *)((long)puVar10 + 0x1c)] & *(uint *)(puVar10 + 3);
            if (*(long *)param_3[2] != 0) {
              local_78 = *(undefined8 *)param_3[5];
              uStack_70 = ((undefined8 *)param_3[5])[1];
              plVar6 = *(long **)param_3[2];
              (**(code **)(*plVar6 + 0x40))
                        (plVar6,uVar5,6,*puVar10,puVar10[1],*param_3,uVar7,0,&local_78);
              lVar8 = param_3[2];
              if (*(long *)(lVar8 + 8) != 0) {
                local_b0[0] = *(undefined2 *)(lVar8 + 0x10);
                uVar11 = *(undefined8 *)(lVar8 + 0x14);
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar8 + 0x1c);
                *puVar9 = uVar11;
                puVar10 = (undefined8 *)param_3[3];
                local_a0 = *puVar10;
                local_98 = puVar10[1];
                local_90 = puVar10[2];
                local_88 = *(undefined4 *)(puVar10 + 3);
                local_e8[0] = (undefined2)local_78;
                uVar11 = *puVar13;
                local_80 = 0;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar13 + 1);
                *puVar14 = uVar11;
                local_d8 = *(undefined8 *)param_3[4];
                local_d0 = ((undefined8 *)param_3[4])[1];
                local_c8 = *param_3;
                local_b8 = 0;
                local_c0 = uVar7;
                uVar12 = (**(code **)(**(long **)(lVar8 + 8) + 0x40))
                                   (*(long **)(lVar8 + 8),6,1,local_b0,local_e8);
                if ((uVar12 & 1) == 0) break;
              }
            }
            plVar6 = (long *)param_3[6];
            iVar26 = (int)plVar6[1];
            lVar8 = *plVar6;
            iVar25 = iVar26 + 1;
            if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x3fffffff) <= iVar26) {
              lVar8 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar25);
              iVar26 = (int)plVar6[1];
              *plVar6 = lVar8;
            }
            uVar17 = uVar17 + 1;
            *(uint *)(lVar8 + (long)iVar26 * 4) = uVar7;
            *(int *)(plVar6 + 1) = iVar25;
          } while (uVar17 < uVar16);
          iVar23 = iVar23 + 1;
        } while (iVar23 != iVar15);
      }
    }
    else {
      puVar10 = local_100 + -1;
      iVar15 = -(uint)(*param_2 <= pfVar1[4]);
      iVar23 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar24 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar25 = -(uint)(param_2[3] <= pfVar1[7]);
      uVar17 = *(uint *)(local_100 + -1);
      iVar26 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar28 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar29 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar30 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar32 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar47 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar51 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar52 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar53 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar54 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar59 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar60 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar61 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar62 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar55 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar56 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar57 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar58 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar15 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                        (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar51 >> 0x18) &
                        (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar55 >> 0x18) & bVar35,
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                                 (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar51 >> 0x10) &
                                 (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                 bVar34,CONCAT11((byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar15 >> 8) &
                                                 (byte)((uint)iVar32 >> 8) &
                                                 (byte)((uint)iVar51 >> 8) &
                                                 (byte)((uint)iVar59 >> 8) &
                                                 (byte)((uint)iVar55 >> 8) & bVar33,
                                                 (byte)iVar26 & (byte)iVar15 & (byte)iVar32 &
                                                 (byte)iVar51 & (byte)iVar59 & (byte)iVar55 & bVar31
                                                )));
      auVar18._0_8_ =
           CONCAT17((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                    (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar56 >> 0x18) & bVar40,
                    CONCAT16((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                             (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar56 >> 0x10) & bVar39,
                             CONCAT15((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar52 >> 8) &
                                      (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar56 >> 8) & bVar38
                                      ,CONCAT14((byte)iVar28 & (byte)iVar23 & (byte)iVar37 &
                                                (byte)iVar52 & (byte)iVar60 & (byte)iVar56 & bVar36,
                                                iVar15))));
      auVar18[8] = (byte)iVar29 & (byte)iVar24 & (byte)iVar42 & (byte)iVar53 & (byte)iVar61 &
                   (byte)iVar57 & bVar41;
      auVar18[9] = (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar42 >> 8)
                   & (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar61 >> 8) &
                   (byte)((uint)iVar57 >> 8) & bVar43;
      auVar18[10] = (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                    (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                    (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar57 >> 0x10) & bVar44;
      auVar18[0xb] = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                     (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                     (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar57 >> 0x18) & bVar45;
      auVar27[0xc] = (byte)iVar30 & (byte)iVar25 & (byte)iVar47 & (byte)iVar54 & (byte)iVar62 &
                     (byte)iVar58 & bVar46;
      auVar27._0_12_ = auVar18;
      auVar27[0xd] = (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar25 >> 8) &
                     (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar54 >> 8) &
                     (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar58 >> 8) & bVar48;
      auVar27[0xe] = (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                     (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                     (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar58 >> 0x10) & bVar49;
      auVar27[0xf] = (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                     (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                     (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar58 >> 0x18) & bVar50;
      uVar16 = iVar15 + (int)((ulong)auVar18._0_8_ >> 0x20) + auVar18._8_4_ + auVar27._12_4_;
      iVar15 = *(int *)(&DAT_03aadfe0 + (ulong)uVar16 * 4);
      auVar21 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar16 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        local_100[-1] = auVar21._0_8_;
        auVar21 = NEON_ext(auVar21,auVar21,8,1);
        *local_100 = auVar21._0_8_;
        local_100 = (undefined8 *)((long)puVar10 + (long)iVar15 * 4);
      }
      else {
        local_100 = puVar10;
        if (uVar16 != 0) {
          iVar23 = 0;
          do {
            switch(iVar23) {
            case 0:
              iVar24 = auVar21._0_4_;
              break;
            case 1:
              iVar24 = auVar21._4_4_;
              break;
            case 2:
              iVar24 = auVar21._8_4_;
              break;
            case 3:
              iVar24 = auVar21._12_4_;
              break;
            default:
              iVar24 = 0;
            }
            uVar5 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x70))
                              (*(long **)(*param_3 + 0x50),iVar24);
            uVar16 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x78))
                               (*(long **)(*param_3 + 0x50),iVar24);
            iVar25 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x20))();
            if (iVar24 < iVar25) {
              uVar7 = 1;
            }
            else {
              uVar7 = 1;
              if (((uVar16 ^ 0xffffffff) & 7) != 0) {
                uVar7 = 2;
              }
            }
            uVar16 = 0;
            do {
              puVar10 = (undefined8 *)param_3[4];
              uVar2 = ((uVar16 | iVar24 << 1) + 1 <<
                      (ulong)(-((uint)*(byte *)(*param_3 + 0x1c) + *(int *)((long)puVar10 + 0x1c)) &
                             0x1f)) - 1 |
                      (&DAT_03aa74b0)[*(int *)((long)puVar10 + 0x1c)] & *(uint *)(puVar10 + 3);
              if (*(long *)param_3[2] != 0) {
                local_78 = *(undefined8 *)param_3[5];
                uStack_70 = ((undefined8 *)param_3[5])[1];
                plVar6 = *(long **)param_3[2];
                (**(code **)(*plVar6 + 0x40))
                          (plVar6,uVar5,6,*puVar10,puVar10[1],*param_3,uVar2,0,&local_78);
                lVar8 = param_3[2];
                if (*(long *)(lVar8 + 8) != 0) {
                  local_b0[0] = *(undefined2 *)(lVar8 + 0x10);
                  uVar11 = *(undefined8 *)(lVar8 + 0x14);
                  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar8 + 0x1c);
                  *puVar9 = uVar11;
                  puVar10 = (undefined8 *)param_3[3];
                  local_a0 = *puVar10;
                  local_98 = puVar10[1];
                  local_90 = puVar10[2];
                  local_88 = *(undefined4 *)(puVar10 + 3);
                  local_e8[0] = (undefined2)local_78;
                  uVar11 = *puVar13;
                  local_80 = 0;
                  *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar13 + 1);
                  *puVar14 = uVar11;
                  local_d8 = *(undefined8 *)param_3[4];
                  local_d0 = ((undefined8 *)param_3[4])[1];
                  local_c8 = *param_3;
                  local_b8 = 0;
                  local_c0 = uVar2;
                  uVar12 = (**(code **)(**(long **)(lVar8 + 8) + 0x40))
                                     (*(long **)(lVar8 + 8),6,1,local_b0,local_e8);
                  if ((uVar12 & 1) == 0) break;
                }
              }
              plVar6 = (long *)param_3[6];
              iVar26 = (int)plVar6[1];
              lVar8 = *plVar6;
              iVar25 = iVar26 + 1;
              if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x3fffffff) <= iVar26) {
                lVar8 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar25);
                iVar26 = (int)plVar6[1];
                *plVar6 = lVar8;
              }
              uVar16 = uVar16 + 1;
              *(uint *)(lVar8 + (long)iVar26 * 4) = uVar2;
              *(int *)(plVar6 + 1) = iVar25;
            } while (uVar16 < uVar7);
            iVar23 = iVar23 + 1;
          } while (iVar23 != iVar15);
        }
      }
      pfVar1 = (float *)(local_530 + (ulong)uVar17 * 0x80);
      iVar15 = -(uint)(*param_2 <= pfVar1[4]);
      iVar23 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar24 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar25 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar26 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar28 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar29 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar30 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar32 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar42 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar47 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar51 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar52 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar53 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar54 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar55 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar56 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar57 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar58 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar59 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar60 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar61 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar62 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar15 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                        (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar51 >> 0x18) &
                        (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar59 >> 0x18) & bVar35,
                        CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                                 (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar51 >> 0x10) &
                                 (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                                 bVar34,CONCAT11((byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar15 >> 8) &
                                                 (byte)((uint)iVar32 >> 8) &
                                                 (byte)((uint)iVar51 >> 8) &
                                                 (byte)((uint)iVar55 >> 8) &
                                                 (byte)((uint)iVar59 >> 8) & bVar33,
                                                 (byte)iVar26 & (byte)iVar15 & (byte)iVar32 &
                                                 (byte)iVar51 & (byte)iVar55 & (byte)iVar59 & bVar31
                                                )));
      auVar20._0_8_ =
           CONCAT17((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                    (byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar60 >> 0x18) & bVar40,
                    CONCAT16((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                             (byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar60 >> 0x10) & bVar39,
                             CONCAT15((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar52 >> 8) &
                                      (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar60 >> 8) & bVar38
                                      ,CONCAT14((byte)iVar28 & (byte)iVar23 & (byte)iVar37 &
                                                (byte)iVar52 & (byte)iVar56 & (byte)iVar60 & bVar36,
                                                iVar15))));
      auVar20[8] = (byte)iVar29 & (byte)iVar24 & (byte)iVar42 & (byte)iVar53 & (byte)iVar57 &
                   (byte)iVar61 & bVar41;
      auVar20[9] = (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar42 >> 8)
                   & (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar57 >> 8) &
                   (byte)((uint)iVar61 >> 8) & bVar43;
      auVar20[10] = (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                    (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                    (byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar61 >> 0x10) & bVar44;
      auVar20[0xb] = (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                     (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                     (byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar61 >> 0x18) & bVar45;
      auVar22[0xc] = (byte)iVar30 & (byte)iVar25 & (byte)iVar47 & (byte)iVar54 & (byte)iVar58 &
                     (byte)iVar62 & bVar46;
      auVar22._0_12_ = auVar20;
      auVar22[0xd] = (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar25 >> 8) &
                     (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar54 >> 8) &
                     (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar62 >> 8) & bVar48;
      auVar22[0xe] = (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                     (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                     (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar62 >> 0x10) & bVar49;
      auVar22[0xf] = (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                     (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                     (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar62 >> 0x18) & bVar50;
      uVar17 = iVar15 + (int)((ulong)auVar20._0_8_ >> 0x20) + auVar20._8_4_ + auVar22._12_4_;
      iVar15 = *(int *)(&DAT_03aadfe0 + (ulong)uVar17 * 4);
      auVar21 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar17 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        auVar27 = NEON_ext(auVar21,auVar21,8,1);
        *local_100 = auVar21._0_8_;
        local_100[1] = auVar27._0_8_;
        local_100 = (undefined8 *)((long)local_100 + (long)iVar15 * 4);
LAB_02fc1218:
      }
      else if (uVar17 != 0) {
        iVar23 = 0;
        do {
          switch(iVar23) {
          case 0:
            iVar24 = auVar21._0_4_;
            break;
          case 1:
            iVar24 = auVar21._4_4_;
            break;
          case 2:
            iVar24 = auVar21._8_4_;
            break;
          case 3:
            iVar24 = auVar21._12_4_;
            break;
          default:
            iVar24 = 0;
          }
          uVar5 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x70))
                            (*(long **)(*param_3 + 0x50),iVar24);
          uVar17 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x78))
                             (*(long **)(*param_3 + 0x50),iVar24);
          iVar25 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x20))();
          if (iVar24 < iVar25) {
            uVar16 = 1;
          }
          else {
            uVar16 = 1;
            if (((uVar17 ^ 0xffffffff) & 7) != 0) {
              uVar16 = 2;
            }
          }
          uVar17 = 0;
          do {
            puVar10 = (undefined8 *)param_3[4];
            uVar7 = ((uVar17 | iVar24 << 1) + 1 <<
                    (ulong)(-((uint)*(byte *)(*param_3 + 0x1c) + *(int *)((long)puVar10 + 0x1c)) &
                           0x1f)) - 1 |
                    (&DAT_03aa74b0)[*(int *)((long)puVar10 + 0x1c)] & *(uint *)(puVar10 + 3);
            if (*(long *)param_3[2] != 0) {
              local_78 = *(undefined8 *)param_3[5];
              uStack_70 = ((undefined8 *)param_3[5])[1];
              plVar6 = *(long **)param_3[2];
              (**(code **)(*plVar6 + 0x40))
                        (plVar6,uVar5,6,*puVar10,puVar10[1],*param_3,uVar7,0,&local_78);
              lVar8 = param_3[2];
              if (*(long *)(lVar8 + 8) != 0) {
                local_b0[0] = *(undefined2 *)(lVar8 + 0x10);
                uVar11 = *(undefined8 *)(lVar8 + 0x14);
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar8 + 0x1c);
                *puVar9 = uVar11;
                puVar10 = (undefined8 *)param_3[3];
                local_a0 = *puVar10;
                local_98 = puVar10[1];
                local_90 = puVar10[2];
                local_88 = *(undefined4 *)(puVar10 + 3);
                local_e8[0] = (undefined2)local_78;
                uVar11 = *puVar13;
                local_80 = 0;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar13 + 1);
                *puVar14 = uVar11;
                local_d8 = *(undefined8 *)param_3[4];
                local_d0 = ((undefined8 *)param_3[4])[1];
                local_c8 = *param_3;
                local_b8 = 0;
                local_c0 = uVar7;
                uVar12 = (**(code **)(**(long **)(lVar8 + 8) + 0x40))
                                   (*(long **)(lVar8 + 8),6,1,local_b0,local_e8);
                if ((uVar12 & 1) == 0) break;
              }
            }
            plVar6 = (long *)param_3[6];
            iVar26 = (int)plVar6[1];
            lVar8 = *plVar6;
            iVar25 = iVar26 + 1;
            if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x3fffffff) <= iVar26) {
              lVar8 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar25);
              iVar26 = (int)plVar6[1];
              *plVar6 = lVar8;
            }
            uVar17 = uVar17 + 1;
            *(uint *)(lVar8 + (long)iVar26 * 4) = uVar7;
            *(int *)(plVar6 + 1) = iVar25;
          } while (uVar17 < uVar16);
          iVar23 = iVar23 + 1;
        } while (iVar23 != iVar15);
      }
    }
    uVar12 = (ulong)((long)local_100 - (long)local_500) >> 2;
    if ((int)uVar12 == 0) {
      return;
    }
  } while( true );
}


