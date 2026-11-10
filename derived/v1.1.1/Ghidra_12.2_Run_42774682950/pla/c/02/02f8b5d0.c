/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f8b5d0; name: FUN_02f8b5d0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02f8b5d0(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 *param_7,uint param_8,undefined8 param_9)

{
  long *plVar1;
  undefined1 (*pauVar2) [12];
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  long local_210;
  long *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined1 *local_1e8;
  long lStack_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  uint local_138;
  int local_134;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  uint local_11c;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_88;
  undefined1 *local_80;
  
  lVar18 = param_2[5];
  plVar1 = (long *)(lVar18 + 0x48);
  uVar8 = 0;
  do {
    uVar17 = uVar8;
    if (*(int *)(lVar18 + 0x50) <= (int)uVar17) {
      return;
    }
    uVar8 = uVar17 + 1;
  } while ((*(byte *)((long)plVar1 + (ulong)(uVar17 & 0xffff) * 0x40 + *plVar1 + 0x1e) & 1) != 0);
  if (uVar17 + 1 != 0) {
    uVar36 = NEON_fmov(0x3f800000,4);
    lVar15 = *(long *)(lVar18 + 0x48);
    uVar10 = local_200._4_4_;
    uVar11 = uStack_1f8._4_4_;
    do {
      uStack_1f8._4_4_ = uVar11;
      local_200._4_4_ = uVar10;
      uVar11 = uStack_1f8._4_4_;
      uVar10 = local_200._4_4_;
      local_150 = *param_3;
      local_148 = param_3[1];
      local_140 = param_3[2];
      local_138 = *(uint *)(param_3 + 3);
      local_134 = *(int *)((long)param_3 + 0x1c);
      local_130 = (undefined8 *)param_3[4];
      uStack_128 = 0;
      local_11c = *(uint *)((long)param_3 + 0x34);
      local_118[0] = *(undefined4 *)(param_3 + 7);
      pauVar2 = (undefined1 (*) [12])((long)plVar1 + (ulong)(uVar17 & 0xffff) * 0x40 + lVar15);
      uVar23 = param_3[9];
      uVar14 = param_3[8];
      local_f8 = param_3[0xb];
      local_100 = param_3[10];
      fVar32 = (float)*(undefined8 *)(*pauVar2 + 8);
      fVar24 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
      fVar20 = (float)*(undefined8 *)*pauVar2;
      fVar21 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      uVar39 = *(undefined8 *)(pauVar2[1] + 4);
      local_110 = *(undefined8 *)(pauVar2[2] + 8);
      fVar19 = (float)*(undefined8 *)(pauVar2[3] + 4);
      uStack_108 = CONCAT44(0x3f800000,fVar19);
      fVar30 = fVar20 + fVar20;
      fVar31 = fVar21 + fVar21;
      fVar32 = fVar32 + fVar32;
      auVar35._4_4_ = fVar31;
      auVar35._0_4_ = fVar30;
      auVar35._8_4_ = fVar32;
      auVar35._12_4_ = fVar24 + fVar24;
      auVar7._4_4_ = fVar31;
      auVar7._0_4_ = fVar30;
      auVar7._8_4_ = fVar32;
      auVar7._12_4_ = fVar24 + fVar24;
      auVar35 = NEON_ext(auVar35,auVar7,8,1);
      fVar41 = (float)*(undefined8 *)pauVar2[2];
      auVar34._12_4_ = fVar24;
      auVar34._0_12_ = *pauVar2;
      auVar6._12_4_ = fVar24;
      auVar6._0_12_ = *pauVar2;
      auVar34 = NEON_ext(auVar34,auVar6,8,1);
      fVar33 = auVar34._0_4_ * auVar35._0_4_;
      fVar37 = (float)uVar36;
      fVar43 = fVar37 - (fVar31 * fVar21 + fVar33);
      fVar46 = fVar37 - (fVar30 * fVar20 + fVar33);
      fVar42 = fVar31 * fVar20 + fVar32 * fVar24;
      fVar45 = fVar31 * fVar20 - fVar32 * fVar24;
      fVar33 = fVar32 * fVar21 - fVar30 * fVar24;
      fVar47 = fVar32 * fVar21 + fVar30 * fVar24;
      fVar44 = fVar32 * fVar20 - fVar31 * fVar24;
      fVar32 = fVar32 * fVar20 + fVar31 * fVar24;
      fVar37 = fVar37 - (fVar30 * fVar20 + fVar31 * fVar21);
      if (*(char *)(param_3 + 6) == '\0') {
        local_120 = 0;
        if (((byte)pauVar2[2][6] >> 3 & 1) != 0) goto LAB_02f8ba44;
      }
      else {
        fVar20 = (float)((ulong)uVar14 >> 0x20);
        local_110 = CONCAT44(fVar20 * (float)((ulong)local_110 >> 0x20),
                             (float)uVar14 * (float)local_110);
        uStack_108 = CONCAT44((float)((ulong)uVar23 >> 0x20) * 1.0,(float)uVar23 * fVar19);
        uVar39 = CONCAT44(fVar20 * (float)((ulong)uVar39 >> 0x20),(float)uVar14 * (float)uVar39);
        fVar41 = (float)uVar23 * fVar41;
LAB_02f8ba44:
        local_f8 = 0;
        local_100 = 0;
        local_120 = 1;
        bVar4 = pauVar2[2][6];
        if ((bVar4 >> 3 & 1) != 0) {
          local_11c = (bVar4 >> 5 ^ 0xffffffff) & 1;
        }
        lVar15 = *(long *)pauVar2[4];
        if (lVar15 == 0) {
          puVar16 = (undefined1 *)0x0;
        }
        else {
          puVar16 = pauVar2[4] + lVar15;
        }
        local_118[0] = *(undefined4 *)(puVar16 + 0x20);
        uVar14 = local_110;
        uVar23 = uStack_108;
        if ((puVar16 != (undefined1 *)0x0) && ((*(ushort *)(puVar16 + 0x1a) & 1) != 0)) {
          iVar5 = *(int *)(puVar16 + 0x40);
          if (iVar5 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = (long)iVar5 + (long)(puVar16 + 0x40);
          }
          lVar3 = local_200;
          local_200._4_4_ = uVar10;
          lVar9 = uStack_1f8;
          uStack_1f8._4_4_ = uVar11;
          FUN_02ffe20c(lVar15,*(undefined4 *)(puVar16 + 0x44),local_11c,&local_110,local_118,
                       &local_100);
          local_130 = (undefined8 *)param_3[4];
          uVar14 = local_110;
          uVar23 = uStack_108;
        }
      }
      uStack_108 = uVar23;
      local_110 = uVar14;
      fVar30 = (float)param_7[2];
      fVar22 = (float)((ulong)param_7[2] >> 0x20);
      fVar26 = (float)param_7[3];
      fVar28 = (float)((ulong)param_7[3] >> 0x20);
      fVar40 = (float)((ulong)uVar39 >> 0x20);
      fVar19 = (float)*param_7;
      fVar20 = (float)((ulong)*param_7 >> 0x20);
      fVar21 = (float)param_7[1];
      fVar24 = (float)((ulong)param_7[1] >> 0x20);
      fVar38 = (float)uVar39;
      fVar31 = (float)param_7[4];
      fVar25 = (float)((ulong)param_7[4] >> 0x20);
      fVar27 = (float)param_7[5];
      fVar29 = (float)((ulong)param_7[5] >> 0x20);
      uStack_178 = CONCAT44(fVar29 * fVar47 + fVar24 * fVar45 + fVar28 * fVar46,
                            fVar27 * fVar47 + fVar21 * fVar45 + fVar26 * fVar46);
      local_190 = CONCAT44(fVar25 * fVar44 + fVar20 * fVar43 + fVar22 * fVar42,
                           fVar31 * fVar44 + fVar19 * fVar43 + fVar30 * fVar42);
      uStack_188 = CONCAT44(fVar29 * fVar44 + fVar24 * fVar43 + fVar28 * fVar42,
                            fVar27 * fVar44 + fVar21 * fVar43 + fVar26 * fVar42);
      uStack_170 = CONCAT44(fVar25 * fVar37 + fVar20 * fVar32 + fVar22 * fVar33,
                            fVar31 * fVar37 + fVar19 * fVar32 + fVar30 * fVar33);
      uStack_168 = CONCAT44(fVar29 * fVar37 + fVar24 * fVar32 + fVar28 * fVar33,
                            fVar27 * fVar37 + fVar21 * fVar32 + fVar26 * fVar33);
      local_180 = CONCAT44(fVar25 * fVar47 + fVar20 * fVar45 + fVar22 * fVar46,
                           fVar31 * fVar47 + fVar19 * fVar45 + fVar30 * fVar46);
      local_160 = CONCAT44(fVar25 * fVar41 + fVar20 * fVar38 + fVar22 * fVar40 +
                           (float)((ulong)param_7[6] >> 0x20),
                           fVar31 * fVar41 + fVar19 * fVar38 + fVar30 * fVar40 + (float)param_7[6]);
      uStack_158 = CONCAT44(fVar29 * fVar41 + fVar24 * fVar38 + fVar28 * fVar40 +
                            (float)((ulong)param_7[7] >> 0x20),
                            fVar27 * fVar41 + fVar21 * fVar38 + fVar26 * fVar40 + (float)param_7[7])
      ;
      fVar26 = (float)local_130[2];
      fVar27 = (float)((ulong)local_130[2] >> 0x20);
      fVar28 = (float)local_130[3];
      fVar29 = (float)((ulong)local_130[3] >> 0x20);
      fVar19 = *(float *)(local_130 + 4);
      fVar20 = *(float *)((long)local_130 + 0x24);
      fVar21 = *(float *)(local_130 + 5);
      fVar24 = *(float *)((long)local_130 + 0x2c);
      fVar30 = (float)*local_130;
      fVar31 = (float)((ulong)*local_130 >> 0x20);
      fVar22 = (float)local_130[1];
      fVar25 = (float)((ulong)local_130[1] >> 0x20);
      uStack_1a8 = CONCAT44(fVar24 * fVar37 + fVar25 * fVar32 + fVar29 * fVar33,
                            fVar21 * fVar37 + fVar22 * fVar32 + fVar28 * fVar33);
      local_1b0 = CONCAT44(fVar20 * fVar37 + fVar31 * fVar32 + fVar27 * fVar33,
                           fVar19 * fVar37 + fVar30 * fVar32 + fVar26 * fVar33);
      local_1d0 = CONCAT44(fVar20 * fVar44 + fVar31 * fVar43 + fVar27 * fVar42,
                           fVar19 * fVar44 + fVar30 * fVar43 + fVar26 * fVar42);
      uStack_1c8 = CONCAT44(fVar24 * fVar44 + fVar25 * fVar43 + fVar29 * fVar42,
                            fVar21 * fVar44 + fVar22 * fVar43 + fVar28 * fVar42);
      uStack_1b8 = CONCAT44(fVar24 * fVar47 + fVar25 * fVar45 + fVar29 * fVar46,
                            fVar21 * fVar47 + fVar22 * fVar45 + fVar28 * fVar46);
      uStack_1c0 = CONCAT44(fVar20 * fVar47 + fVar31 * fVar45 + fVar27 * fVar46,
                            fVar19 * fVar47 + fVar30 * fVar45 + fVar26 * fVar46);
      local_1a0 = CONCAT44(fVar20 * fVar41 + fVar31 * fVar38 + fVar27 * fVar40 +
                           (float)((ulong)local_130[6] >> 0x20),
                           fVar19 * fVar41 + fVar30 * fVar38 + fVar26 * fVar40 + (float)local_130[6]
                          );
      uStack_198 = CONCAT44(fVar24 * fVar41 + fVar25 * fVar38 + fVar29 * fVar40 +
                            (float)((ulong)local_130[7] >> 0x20),
                            fVar21 * fVar41 + fVar22 * fVar38 + fVar28 * fVar40 +
                            (float)local_130[7]);
      lVar15 = *(long *)pauVar2[4];
      if (lVar15 == 0) {
        local_1e8 = (undefined1 *)0x0;
      }
      else {
        local_1e8 = pauVar2[4] + lVar15;
      }
      lVar15 = (long)local_134;
      local_134 = local_134 + (uint)*(byte *)(lVar18 + 0x1c);
      local_138 = ((uVar17 & 0xffff) + 1 << (ulong)(-local_134 & 0x1f)) - 1 |
                  (&DAT_03aa74b0)[lVar15] & local_138;
      local_130 = &local_1d0;
      lStack_1e0 = param_2[6];
      local_1d8 = param_2[7];
      local_1f0 = param_2[4];
      local_210 = *param_2;
      local_208 = (long *)param_2[1];
      lVar15 = param_2[2];
      lVar3 = param_2[3];
      local_200._4_4_ = (undefined4)((ulong)lVar15 >> 0x20);
      uStack_1f8._4_4_ = (undefined4)((ulong)lVar3 >> 0x20);
      plVar12 = (long *)*param_2;
      if (plVar12 != (long *)0x0) {
        uVar10 = local_200._4_4_;
        local_200 = lVar15;
        uVar11 = uStack_1f8._4_4_;
        uStack_1f8 = lVar3;
        lVar15 = local_200;
        local_200._4_4_ = uVar10;
        lVar3 = uStack_1f8;
        uStack_1f8._4_4_ = uVar11;
        (**(code **)(*plVar12 + 0x40))
                  (plVar12,*(undefined2 *)(pauVar2[3] + 8),5,*param_3,param_3[1],lVar18,local_138,
                   local_1e8,&local_200);
        uVar11 = uStack_1f8._4_4_;
        uVar10 = local_200._4_4_;
        lVar15 = local_200;
        lVar3 = uStack_1f8;
        local_200._4_4_ = uVar10;
        uStack_1f8._4_4_ = uVar11;
      }
      uStack_1f8 = lVar3;
      local_200 = lVar15;
      uVar11 = uStack_1f8._4_4_;
      uVar10 = local_200._4_4_;
      lVar15 = *param_1;
      if (local_208 == (long *)0x0) {
LAB_02f8b9c8:
        uStack_1f8._4_4_ = uVar11;
        local_200._4_4_ = uVar10;
        uVar11 = uStack_1f8._4_4_;
        uVar10 = local_200._4_4_;
        lVar3 = local_200;
        local_200._4_4_ = uVar10;
        lVar9 = uStack_1f8;
        uStack_1f8._4_4_ = uVar11;
        (**(code **)(lVar15 + (ulong)(byte)local_1e8[0x18] * 0xf8 +
                     (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                  (param_1,&local_210,&local_150,param_4,param_5,param_6,&local_190,param_8 & 1,
                   param_9);
        lVar9 = uStack_1f8;
        lVar3 = local_200;
        uVar10 = local_200._4_4_;
        uVar11 = uStack_1f8._4_4_;
      }
      else {
        local_b0[0] = (undefined2)local_200;
        *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) = uVar11;
        *(undefined8 *)((ulong)local_b0 | 4) = CONCAT84(uStack_1f8,uVar10);
        local_a0 = local_150;
        uStack_98 = local_148;
        local_90 = local_140;
        local_88 = local_138;
        local_80 = local_1e8;
        local_e8[0] = *param_5;
        uVar14 = *(undefined8 *)(param_5 + 2);
        *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
        *(undefined8 *)((ulong)local_e8 | 4) = uVar14;
        local_d8 = *param_6;
        local_d0 = param_6[1];
        local_c8 = param_6[2];
        local_c0 = *(undefined4 *)(param_6 + 3);
        local_b8 = param_4;
        lVar3 = local_200;
        local_200._4_4_ = uVar10;
        lVar9 = uStack_1f8;
        uStack_1f8._4_4_ = uVar11;
        uVar13 = (**(code **)(*local_208 + 0x40))(local_208,5,(param_8 ^ 1) & 1,local_b0,local_e8);
        uVar11 = uStack_1f8._4_4_;
        uVar10 = local_200._4_4_;
        lVar3 = local_200;
        lVar9 = uStack_1f8;
        if ((uVar13 & 1) != 0) goto LAB_02f8b9c8;
      }
      uStack_1f8._4_4_ = uVar11;
      local_200._4_4_ = uVar10;
      uStack_1f8 = lVar9;
      local_200 = lVar3;
      uVar11 = uStack_1f8._4_4_;
      uVar10 = local_200._4_4_;
      uVar8 = uVar17 + 1;
      do {
        uVar17 = uVar8;
        if (*(int *)(lVar18 + 0x50) <= (int)uVar17) {
          return;
        }
        lVar15 = *plVar1;
        uVar8 = uVar17 + 1;
      } while ((*(byte *)((long)plVar1 + (ulong)(uVar17 & 0xffff) * 0x40 + lVar15 + 0x1e) & 1) != 0)
      ;
    } while (uVar17 + 1 != 0);
  }
  return;
}


