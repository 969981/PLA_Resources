/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc27d0; name: FUN_02fc27d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fc27d0(long *param_1,float *param_2,long *param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar27;
  int iVar28;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  int iVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar30;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar31 [16];
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  int iVar36;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  int iVar41;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  int iVar46;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  int iVar51;
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
  int iVar65;
  int iVar66;
  long local_588;
  undefined4 local_550 [256];
  undefined8 *local_150;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar4 = _UNK_03889708;
  uVar3 = _DAT_03889700;
  if (*param_1 == 0) {
    local_588 = 0;
  }
  else {
    local_588 = *param_1 + (long)param_1;
  }
  local_550[0] = 1;
  local_150 = (undefined8 *)((ulong)local_550 | 4);
  puVar14 = (undefined8 *)((ulong)&local_f0 | 4);
  puVar15 = (undefined8 *)((ulong)local_138 | 4);
  puVar18 = (undefined8 *)((ulong)&local_100 | 4);
  uVar16 = 1;
  do {
    puVar10 = (undefined8 *)((long)local_150 - 4);
    pfVar1 = (float *)(local_588 + (ulong)*(uint *)((long)local_150 - 4) * 0x80);
    bVar35 = (byte)uVar3;
    bVar37 = (byte)((ulong)uVar3 >> 8);
    bVar38 = (byte)((ulong)uVar3 >> 0x10);
    bVar39 = (byte)((ulong)uVar3 >> 0x18);
    bVar40 = (byte)((ulong)uVar3 >> 0x20);
    bVar42 = (byte)((ulong)uVar3 >> 0x28);
    bVar43 = (byte)((ulong)uVar3 >> 0x30);
    bVar44 = (byte)((ulong)uVar3 >> 0x38);
    bVar45 = (byte)uVar4;
    bVar47 = (byte)((ulong)uVar4 >> 8);
    bVar48 = (byte)((ulong)uVar4 >> 0x10);
    bVar49 = (byte)((ulong)uVar4 >> 0x18);
    bVar50 = (byte)((ulong)uVar4 >> 0x20);
    bVar52 = (byte)((ulong)uVar4 >> 0x28);
    bVar53 = (byte)((ulong)uVar4 >> 0x30);
    bVar54 = (byte)((ulong)uVar4 >> 0x38);
    if ((int)uVar16 < 2) {
      iVar19 = -(uint)(*param_2 <= pfVar1[4]);
      iVar27 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar28 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar29 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar30 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar32 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar33 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar34 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar41 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar46 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar51 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar55 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar56 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar57 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar58 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar59 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar60 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar61 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar62 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar63 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar64 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar65 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar66 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar19 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
                        (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                        (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar63 >> 0x18) & bVar39,
                        CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                                 (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                 (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                                 bVar38,CONCAT11((byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar19 >> 8) &
                                                 (byte)((uint)iVar36 >> 8) &
                                                 (byte)((uint)iVar55 >> 8) &
                                                 (byte)((uint)iVar59 >> 8) &
                                                 (byte)((uint)iVar63 >> 8) & bVar37,
                                                 (byte)iVar30 & (byte)iVar19 & (byte)iVar36 &
                                                 (byte)iVar55 & (byte)iVar59 & (byte)iVar63 & bVar35
                                                )));
      auVar23._0_8_ =
           CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                    (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                    (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar64 >> 0x18) & bVar44,
                    CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                             (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                             (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar64 >> 0x10) & bVar43,
                             CONCAT15((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar27 >> 8) &
                                      (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar56 >> 8) &
                                      (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar64 >> 8) & bVar42
                                      ,CONCAT14((byte)iVar32 & (byte)iVar27 & (byte)iVar41 &
                                                (byte)iVar56 & (byte)iVar60 & (byte)iVar64 & bVar40,
                                                iVar19))));
      auVar23[8] = (byte)iVar33 & (byte)iVar28 & (byte)iVar46 & (byte)iVar57 & (byte)iVar61 &
                   (byte)iVar65 & bVar45;
      auVar23[9] = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar46 >> 8)
                   & (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar61 >> 8) &
                   (byte)((uint)iVar65 >> 8) & bVar47;
      auVar23[10] = (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                    (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                    (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar65 >> 0x10) & bVar48;
      auVar23[0xb] = (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                     (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar65 >> 0x18) & bVar49;
      auVar25[0xc] = (byte)iVar34 & (byte)iVar29 & (byte)iVar51 & (byte)iVar58 & (byte)iVar62 &
                     (byte)iVar66 & bVar50;
      auVar25._0_12_ = auVar23;
      auVar25[0xd] = (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar29 >> 8) &
                     (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar58 >> 8) &
                     (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar66 >> 8) & bVar52;
      auVar25[0xe] = (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                     (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                     (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar66 >> 0x10) & bVar53;
      auVar25[0xf] = (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                     (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                     (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar66 >> 0x18) & bVar54;
      uVar21 = iVar19 + (int)((ulong)auVar23._0_8_ >> 0x20) + auVar23._8_4_ + auVar25._12_4_;
      iVar19 = *(int *)(&DAT_03aadfe0 + (ulong)uVar21 * 4);
      auVar25 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar21 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        *(long *)((long)local_150 - 4) = auVar25._0_8_;
        auVar25 = NEON_ext(auVar25,auVar25,8,1);
        *(long *)((long)local_150 + 4) = auVar25._0_8_;
        local_150 = (undefined8 *)((long)puVar10 + (long)iVar19 * 4);
        goto LAB_02fc287c;
      }
      local_150 = puVar10;
      if (uVar21 != 0) {
        iVar27 = 0;
        do {
          switch(iVar27) {
          case 0:
            iVar28 = auVar25._0_4_;
            break;
          case 1:
            iVar28 = auVar25._4_4_;
            break;
          case 2:
            iVar28 = auVar25._8_4_;
            break;
          case 3:
            iVar28 = auVar25._12_4_;
            break;
          default:
            iVar28 = 0;
          }
          uVar5 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x70))
                            (*(long **)(*param_3 + 0x50),iVar28);
          uVar21 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x78))
                             (*(long **)(*param_3 + 0x50),iVar28);
          iVar29 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x20))();
          if (iVar28 < iVar29) {
            uVar20 = 1;
          }
          else {
            uVar20 = 1;
            if (((uVar21 ^ 0xffffffff) & 7) != 0) {
              uVar20 = 2;
            }
          }
          uVar21 = 0;
          do {
            plVar8 = (long *)param_3[4];
            uVar7 = ((uVar21 | iVar28 << 1) + 1 <<
                    (ulong)(-((uint)*(byte *)(*param_3 + 0x1c) + *(int *)((long)plVar8 + 0x1c)) &
                           0x1f)) - 1 |
                    (&DAT_03aa74b0)[*(int *)((long)plVar8 + 0x1c)] & *(uint *)(plVar8 + 3);
            if (*(long *)param_3[2] == 0) {
              lVar9 = *plVar8;
              plVar8 = (long *)param_3[6];
              lVar12 = *(long *)param_3[3];
              uVar13 = 0xffffff;
              local_b0 = 0xffff;
              local_ac = 0;
              local_88 = 0xffff;
              local_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_a8 = 0;
              uStack_a4 = 0;
              if (lVar12 == 0) {
                local_c8 = 0xffffffffffffffff;
              }
              else {
                local_c8 = *(undefined8 *)(lVar12 + 0xb0);
                uVar13 = *(undefined4 *)(lVar12 + 0x50);
              }
              local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar13);
              if (lVar9 == 0) {
                local_98 = 0xffffff;
                local_a0 = 0xffffffffffffffff;
              }
              else {
                local_a0 = *(undefined8 *)(lVar9 + 0xb0);
                local_98 = *(undefined4 *)(lVar9 + 0x50);
              }
            }
            else {
              local_100 = *(undefined8 *)param_3[5];
              uStack_f8 = ((undefined8 *)param_3[5])[1];
              plVar6 = *(long **)param_3[2];
              (**(code **)(*plVar6 + 0x40))
                        (plVar6,uVar5,6,*plVar8,plVar8[1],*param_3,uVar7,0,&local_100);
              lVar9 = param_3[2];
              if (*(long *)(lVar9 + 8) != 0) {
                local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar9 + 0x10));
                uVar11 = *(undefined8 *)(lVar9 + 0x14);
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(lVar9 + 0x1c);
                *puVar14 = uVar11;
                puVar10 = (undefined8 *)param_3[3];
                local_e0 = *puVar10;
                local_d8 = puVar10[1];
                local_d0 = puVar10[2];
                local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar10 + 3));
                local_138[0] = (undefined2)local_100;
                uVar11 = *puVar18;
                local_c0 = 0;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar18 + 1);
                *puVar15 = uVar11;
                local_128 = *(undefined8 *)param_3[4];
                local_120 = ((undefined8 *)param_3[4])[1];
                local_118 = *param_3;
                local_108 = 0;
                local_110 = uVar7;
                uVar16 = (**(code **)(**(long **)(lVar9 + 8) + 0x40))
                                   (*(long **)(lVar9 + 8),6,1,&local_f0,local_138);
                if ((uVar16 & 1) == 0) break;
                lVar9 = param_3[2];
              }
              plVar8 = (long *)param_3[6];
              lVar17 = *(long *)param_3[3];
              lVar12 = *(long *)param_3[4];
              uVar13 = 0xffffff;
              if (lVar17 == 0) {
                local_c8 = 0xffffffffffffffff;
              }
              else {
                local_c8 = *(undefined8 *)(lVar17 + 0xb0);
                uVar13 = *(undefined4 *)(lVar17 + 0x50);
              }
              local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar13);
              local_b0 = *(undefined2 *)(lVar9 + 0x10);
              uStack_a4 = *(undefined4 *)(lVar9 + 0x1c);
              local_ac = (undefined4)*(undefined8 *)(lVar9 + 0x14);
              uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20);
              if (lVar12 == 0) {
                local_98 = 0xffffff;
                local_a0 = 0xffffffffffffffff;
              }
              else {
                local_a0 = *(undefined8 *)(lVar12 + 0xb0);
                local_98 = *(undefined4 *)(lVar12 + 0x50);
              }
              uStack_7c = *(undefined4 *)(puVar18 + 1);
              local_88 = (undefined2)local_100;
              local_84 = (undefined4)*puVar18;
              uStack_80 = (undefined4)((ulong)*puVar18 >> 0x20);
            }
            local_d0 = local_d0 & 0xffffffff00000000;
            uStack_74 = 0;
            local_78 = 6;
            local_8c = 0xf;
            local_b4 = 0xf;
            local_b8 = 0xffffffff;
            local_d8 = 0;
            local_e0 = 0;
            uStack_e8 = 0;
            local_f0 = 0;
            local_90 = uVar7;
            (**(code **)(*plVar8 + 0x28))(plVar8,&local_f0);
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar20);
          iVar27 = iVar27 + 1;
        } while (iVar27 != iVar19);
      }
    }
    else {
      puVar10 = local_150 + -1;
      iVar19 = -(uint)(*param_2 <= pfVar1[4]);
      iVar27 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar28 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar29 = -(uint)(param_2[3] <= pfVar1[7]);
      uVar21 = *(uint *)(local_150 + -1);
      iVar30 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar32 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar33 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar34 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar41 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar46 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar51 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar55 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar56 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar57 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar58 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar63 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar64 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar65 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar66 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar59 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar60 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar61 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar62 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar19 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
                        (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                        (byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar59 >> 0x18) & bVar39,
                        CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                                 (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                 (byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                                 bVar38,CONCAT11((byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar19 >> 8) &
                                                 (byte)((uint)iVar36 >> 8) &
                                                 (byte)((uint)iVar55 >> 8) &
                                                 (byte)((uint)iVar63 >> 8) &
                                                 (byte)((uint)iVar59 >> 8) & bVar37,
                                                 (byte)iVar30 & (byte)iVar19 & (byte)iVar36 &
                                                 (byte)iVar55 & (byte)iVar63 & (byte)iVar59 & bVar35
                                                )));
      auVar22._0_8_ =
           CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                    (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                    (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar60 >> 0x18) & bVar44,
                    CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                             (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                             (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar60 >> 0x10) & bVar43,
                             CONCAT15((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar27 >> 8) &
                                      (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar56 >> 8) &
                                      (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar60 >> 8) & bVar42
                                      ,CONCAT14((byte)iVar32 & (byte)iVar27 & (byte)iVar41 &
                                                (byte)iVar56 & (byte)iVar64 & (byte)iVar60 & bVar40,
                                                iVar19))));
      auVar22[8] = (byte)iVar33 & (byte)iVar28 & (byte)iVar46 & (byte)iVar57 & (byte)iVar65 &
                   (byte)iVar61 & bVar45;
      auVar22[9] = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar46 >> 8)
                   & (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar65 >> 8) &
                   (byte)((uint)iVar61 >> 8) & bVar47;
      auVar22[10] = (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                    (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                    (byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar61 >> 0x10) & bVar48;
      auVar22[0xb] = (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                     (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar61 >> 0x18) & bVar49;
      auVar31[0xc] = (byte)iVar34 & (byte)iVar29 & (byte)iVar51 & (byte)iVar58 & (byte)iVar66 &
                     (byte)iVar62 & bVar50;
      auVar31._0_12_ = auVar22;
      auVar31[0xd] = (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar29 >> 8) &
                     (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar58 >> 8) &
                     (byte)((uint)iVar66 >> 8) & (byte)((uint)iVar62 >> 8) & bVar52;
      auVar31[0xe] = (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                     (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                     (byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar62 >> 0x10) & bVar53;
      auVar31[0xf] = (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                     (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                     (byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar62 >> 0x18) & bVar54;
      uVar20 = iVar19 + (int)((ulong)auVar22._0_8_ >> 0x20) + auVar22._8_4_ + auVar31._12_4_;
      iVar19 = *(int *)(&DAT_03aadfe0 + (ulong)uVar20 * 4);
      auVar25 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar20 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        local_150[-1] = auVar25._0_8_;
        auVar25 = NEON_ext(auVar25,auVar25,8,1);
        *local_150 = auVar25._0_8_;
        local_150 = (undefined8 *)((long)puVar10 + (long)iVar19 * 4);
      }
      else {
        local_150 = puVar10;
        if (uVar20 != 0) {
          iVar27 = 0;
          do {
            switch(iVar27) {
            case 0:
              iVar28 = auVar25._0_4_;
              break;
            case 1:
              iVar28 = auVar25._4_4_;
              break;
            case 2:
              iVar28 = auVar25._8_4_;
              break;
            case 3:
              iVar28 = auVar25._12_4_;
              break;
            default:
              iVar28 = 0;
            }
            uVar5 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x70))
                              (*(long **)(*param_3 + 0x50),iVar28);
            uVar20 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x78))
                               (*(long **)(*param_3 + 0x50),iVar28);
            iVar29 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x20))();
            if (iVar28 < iVar29) {
              uVar7 = 1;
            }
            else {
              uVar7 = 1;
              if (((uVar20 ^ 0xffffffff) & 7) != 0) {
                uVar7 = 2;
              }
            }
            uVar20 = 0;
            do {
              plVar8 = (long *)param_3[4];
              uVar2 = ((uVar20 | iVar28 << 1) + 1 <<
                      (ulong)(-((uint)*(byte *)(*param_3 + 0x1c) + *(int *)((long)plVar8 + 0x1c)) &
                             0x1f)) - 1 |
                      (&DAT_03aa74b0)[*(int *)((long)plVar8 + 0x1c)] & *(uint *)(plVar8 + 3);
              if (*(long *)param_3[2] == 0) {
                lVar9 = *plVar8;
                plVar8 = (long *)param_3[6];
                lVar12 = *(long *)param_3[3];
                uVar13 = 0xffffff;
                local_b0 = 0xffff;
                local_ac = 0;
                local_88 = 0xffff;
                local_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                uStack_a8 = 0;
                uStack_a4 = 0;
                if (lVar12 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar12 + 0xb0);
                  uVar13 = *(undefined4 *)(lVar12 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar13);
                if (lVar9 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar9 + 0xb0);
                  local_98 = *(undefined4 *)(lVar9 + 0x50);
                }
              }
              else {
                local_100 = *(undefined8 *)param_3[5];
                uStack_f8 = ((undefined8 *)param_3[5])[1];
                plVar6 = *(long **)param_3[2];
                (**(code **)(*plVar6 + 0x40))
                          (plVar6,uVar5,6,*plVar8,plVar8[1],*param_3,uVar2,0,&local_100);
                lVar9 = param_3[2];
                if (*(long *)(lVar9 + 8) != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar9 + 0x10));
                  uVar11 = *(undefined8 *)(lVar9 + 0x14);
                  *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(lVar9 + 0x1c);
                  *puVar14 = uVar11;
                  puVar10 = (undefined8 *)param_3[3];
                  local_e0 = *puVar10;
                  local_d8 = puVar10[1];
                  local_d0 = puVar10[2];
                  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar10 + 3));
                  local_138[0] = (undefined2)local_100;
                  uVar11 = *puVar18;
                  local_c0 = 0;
                  *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar18 + 1);
                  *puVar15 = uVar11;
                  local_128 = *(undefined8 *)param_3[4];
                  local_120 = ((undefined8 *)param_3[4])[1];
                  local_118 = *param_3;
                  local_108 = 0;
                  local_110 = uVar2;
                  uVar16 = (**(code **)(**(long **)(lVar9 + 8) + 0x40))
                                     (*(long **)(lVar9 + 8),6,1,&local_f0,local_138);
                  if ((uVar16 & 1) == 0) break;
                  lVar9 = param_3[2];
                }
                plVar8 = (long *)param_3[6];
                lVar17 = *(long *)param_3[3];
                lVar12 = *(long *)param_3[4];
                uVar13 = 0xffffff;
                if (lVar17 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar17 + 0xb0);
                  uVar13 = *(undefined4 *)(lVar17 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar13);
                local_b0 = *(undefined2 *)(lVar9 + 0x10);
                uStack_a4 = *(undefined4 *)(lVar9 + 0x1c);
                local_ac = (undefined4)*(undefined8 *)(lVar9 + 0x14);
                uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20);
                if (lVar12 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar12 + 0xb0);
                  local_98 = *(undefined4 *)(lVar12 + 0x50);
                }
                uStack_7c = *(undefined4 *)(puVar18 + 1);
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar18;
                uStack_80 = (undefined4)((ulong)*puVar18 >> 0x20);
              }
              local_d0 = local_d0 & 0xffffffff00000000;
              uStack_74 = 0;
              local_78 = 6;
              local_8c = 0xf;
              local_b4 = 0xf;
              local_b8 = 0xffffffff;
              local_d8 = 0;
              local_e0 = 0;
              uStack_e8 = 0;
              local_f0 = 0;
              local_90 = uVar2;
              (**(code **)(*plVar8 + 0x28))(plVar8,&local_f0);
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar7);
            iVar27 = iVar27 + 1;
          } while (iVar27 != iVar19);
        }
      }
      pfVar1 = (float *)(local_588 + (ulong)uVar21 * 0x80);
      iVar19 = -(uint)(*param_2 <= pfVar1[4]);
      iVar27 = -(uint)(param_2[1] <= pfVar1[5]);
      iVar28 = -(uint)(param_2[2] <= pfVar1[6]);
      iVar29 = -(uint)(param_2[3] <= pfVar1[7]);
      iVar30 = -(uint)(*pfVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar32 = -(uint)(pfVar1[1] <= (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar33 = -(uint)(pfVar1[2] <= (float)*(undefined8 *)(param_2 + 6));
      iVar34 = -(uint)(pfVar1[3] <= (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)*(undefined8 *)(pfVar1 + 0xc));
      iVar41 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20));
      iVar46 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)*(undefined8 *)(pfVar1 + 0xe))
      ;
      iVar51 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20));
      iVar55 = -(uint)((float)*(undefined8 *)(pfVar1 + 8) <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar56 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar57 = -(uint)((float)*(undefined8 *)(pfVar1 + 10) <= (float)*(undefined8 *)(param_2 + 0xe))
      ;
      iVar58 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar59 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <=
                      (float)*(undefined8 *)(pfVar1 + 0x14));
      iVar60 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20));
      iVar61 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <=
                      (float)*(undefined8 *)(pfVar1 + 0x16));
      iVar62 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20));
      iVar63 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <=
                      (float)*(undefined8 *)(param_2 + 0x14));
      iVar64 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar65 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <=
                      (float)*(undefined8 *)(param_2 + 0x16));
      iVar66 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar19 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
                        (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                        (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar63 >> 0x18) & bVar39,
                        CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                                 (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                                 (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar63 >> 0x10) &
                                 bVar38,CONCAT11((byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar19 >> 8) &
                                                 (byte)((uint)iVar36 >> 8) &
                                                 (byte)((uint)iVar55 >> 8) &
                                                 (byte)((uint)iVar59 >> 8) &
                                                 (byte)((uint)iVar63 >> 8) & bVar37,
                                                 (byte)iVar30 & (byte)iVar19 & (byte)iVar36 &
                                                 (byte)iVar55 & (byte)iVar59 & (byte)iVar63 & bVar35
                                                )));
      auVar24._0_8_ =
           CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                    (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                    (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar64 >> 0x18) & bVar44,
                    CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                             (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                             (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar64 >> 0x10) & bVar43,
                             CONCAT15((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar27 >> 8) &
                                      (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar56 >> 8) &
                                      (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar64 >> 8) & bVar42
                                      ,CONCAT14((byte)iVar32 & (byte)iVar27 & (byte)iVar41 &
                                                (byte)iVar56 & (byte)iVar60 & (byte)iVar64 & bVar40,
                                                iVar19))));
      auVar24[8] = (byte)iVar33 & (byte)iVar28 & (byte)iVar46 & (byte)iVar57 & (byte)iVar61 &
                   (byte)iVar65 & bVar45;
      auVar24[9] = (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar46 >> 8)
                   & (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar61 >> 8) &
                   (byte)((uint)iVar65 >> 8) & bVar47;
      auVar24[10] = (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                    (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                    (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar65 >> 0x10) & bVar48;
      auVar24[0xb] = (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                     (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                     (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar65 >> 0x18) & bVar49;
      auVar26[0xc] = (byte)iVar34 & (byte)iVar29 & (byte)iVar51 & (byte)iVar58 & (byte)iVar62 &
                     (byte)iVar66 & bVar50;
      auVar26._0_12_ = auVar24;
      auVar26[0xd] = (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar29 >> 8) &
                     (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar58 >> 8) &
                     (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar66 >> 8) & bVar52;
      auVar26[0xe] = (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                     (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                     (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar66 >> 0x10) & bVar53;
      auVar26[0xf] = (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                     (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                     (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar66 >> 0x18) & bVar54;
      uVar21 = iVar19 + (int)((ulong)auVar24._0_8_ >> 0x20) + auVar24._8_4_ + auVar26._12_4_;
      iVar19 = *(int *)(&DAT_03aadfe0 + (ulong)uVar21 * 4);
      auVar25 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar21 * 0x10));
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        auVar31 = NEON_ext(auVar25,auVar25,8,1);
        *local_150 = auVar25._0_8_;
        local_150[1] = auVar31._0_8_;
        local_150 = (undefined8 *)((long)local_150 + (long)iVar19 * 4);
LAB_02fc287c:
      }
      else if (uVar21 != 0) {
        iVar27 = 0;
        do {
          switch(iVar27) {
          case 0:
            iVar28 = auVar25._0_4_;
            break;
          case 1:
            iVar28 = auVar25._4_4_;
            break;
          case 2:
            iVar28 = auVar25._8_4_;
            break;
          case 3:
            iVar28 = auVar25._12_4_;
            break;
          default:
            iVar28 = 0;
          }
          uVar5 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x70))
                            (*(long **)(*param_3 + 0x50),iVar28);
          uVar21 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x78))
                             (*(long **)(*param_3 + 0x50),iVar28);
          iVar29 = (**(code **)(**(long **)(*param_3 + 0x50) + 0x20))();
          if (iVar28 < iVar29) {
            uVar20 = 1;
          }
          else {
            uVar20 = 1;
            if (((uVar21 ^ 0xffffffff) & 7) != 0) {
              uVar20 = 2;
            }
          }
          uVar21 = 0;
          do {
            plVar8 = (long *)param_3[4];
            uVar7 = ((uVar21 | iVar28 << 1) + 1 <<
                    (ulong)(-((uint)*(byte *)(*param_3 + 0x1c) + *(int *)((long)plVar8 + 0x1c)) &
                           0x1f)) - 1 |
                    (&DAT_03aa74b0)[*(int *)((long)plVar8 + 0x1c)] & *(uint *)(plVar8 + 3);
            if (*(long *)param_3[2] == 0) {
              lVar9 = *plVar8;
              plVar8 = (long *)param_3[6];
              lVar12 = *(long *)param_3[3];
              uVar13 = 0xffffff;
              local_b0 = 0xffff;
              local_ac = 0;
              local_88 = 0xffff;
              local_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_a8 = 0;
              uStack_a4 = 0;
              if (lVar12 == 0) {
                local_c8 = 0xffffffffffffffff;
              }
              else {
                local_c8 = *(undefined8 *)(lVar12 + 0xb0);
                uVar13 = *(undefined4 *)(lVar12 + 0x50);
              }
              local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar13);
              if (lVar9 == 0) {
                local_98 = 0xffffff;
                local_a0 = 0xffffffffffffffff;
              }
              else {
                local_a0 = *(undefined8 *)(lVar9 + 0xb0);
                local_98 = *(undefined4 *)(lVar9 + 0x50);
              }
            }
            else {
              local_100 = *(undefined8 *)param_3[5];
              uStack_f8 = ((undefined8 *)param_3[5])[1];
              plVar6 = *(long **)param_3[2];
              (**(code **)(*plVar6 + 0x40))
                        (plVar6,uVar5,6,*plVar8,plVar8[1],*param_3,uVar7,0,&local_100);
              lVar9 = param_3[2];
              if (*(long *)(lVar9 + 8) != 0) {
                local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar9 + 0x10));
                uVar11 = *(undefined8 *)(lVar9 + 0x14);
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(lVar9 + 0x1c);
                *puVar14 = uVar11;
                puVar10 = (undefined8 *)param_3[3];
                local_e0 = *puVar10;
                local_d8 = puVar10[1];
                local_d0 = puVar10[2];
                local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar10 + 3));
                local_138[0] = (undefined2)local_100;
                uVar11 = *puVar18;
                local_c0 = 0;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar18 + 1);
                *puVar15 = uVar11;
                local_128 = *(undefined8 *)param_3[4];
                local_120 = ((undefined8 *)param_3[4])[1];
                local_118 = *param_3;
                local_108 = 0;
                local_110 = uVar7;
                uVar16 = (**(code **)(**(long **)(lVar9 + 8) + 0x40))
                                   (*(long **)(lVar9 + 8),6,1,&local_f0,local_138);
                if ((uVar16 & 1) == 0) break;
                lVar9 = param_3[2];
              }
              plVar8 = (long *)param_3[6];
              lVar17 = *(long *)param_3[3];
              lVar12 = *(long *)param_3[4];
              uVar13 = 0xffffff;
              if (lVar17 == 0) {
                local_c8 = 0xffffffffffffffff;
              }
              else {
                local_c8 = *(undefined8 *)(lVar17 + 0xb0);
                uVar13 = *(undefined4 *)(lVar17 + 0x50);
              }
              local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar13);
              local_b0 = *(undefined2 *)(lVar9 + 0x10);
              uStack_a4 = *(undefined4 *)(lVar9 + 0x1c);
              local_ac = (undefined4)*(undefined8 *)(lVar9 + 0x14);
              uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20);
              if (lVar12 == 0) {
                local_98 = 0xffffff;
                local_a0 = 0xffffffffffffffff;
              }
              else {
                local_a0 = *(undefined8 *)(lVar12 + 0xb0);
                local_98 = *(undefined4 *)(lVar12 + 0x50);
              }
              uStack_7c = *(undefined4 *)(puVar18 + 1);
              local_88 = (undefined2)local_100;
              local_84 = (undefined4)*puVar18;
              uStack_80 = (undefined4)((ulong)*puVar18 >> 0x20);
            }
            local_d0 = local_d0 & 0xffffffff00000000;
            uStack_74 = 0;
            local_78 = 6;
            local_8c = 0xf;
            local_b4 = 0xf;
            local_b8 = 0xffffffff;
            local_d8 = 0;
            local_e0 = 0;
            uStack_e8 = 0;
            local_f0 = 0;
            local_90 = uVar7;
            (**(code **)(*plVar8 + 0x28))(plVar8,&local_f0);
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar20);
          iVar27 = iVar27 + 1;
        } while (iVar27 != iVar19);
      }
    }
    uVar16 = (ulong)((long)local_150 - (long)local_550) >> 2;
    if ((int)uVar16 == 0) {
      return;
    }
  } while( true );
}


