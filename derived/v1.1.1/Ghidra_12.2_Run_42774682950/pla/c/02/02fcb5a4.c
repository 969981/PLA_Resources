/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcb5a4; name: FUN_02fcb5a4
 */


void FUN_02fcb5a4(long *param_1,ulong param_2,undefined8 *param_3)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float *pfVar13;
  undefined4 uVar14;
  int iVar15;
  ulong *puVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 local_240 [2];
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  long local_220;
  undefined4 local_218;
  undefined8 local_210;
  long local_200;
  long local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  float *local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  long local_1c0;
  long lStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  float local_164;
  undefined8 local_160;
  float fStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  undefined8 local_140;
  float fStack_138;
  undefined1 auStack_130 [16];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  ulong uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [32];
  long local_80;
  
  uVar3 = (**(code **)(**(long **)(*param_1 + 0x50) + 0x68))
                    (*(long **)(*param_1 + 0x50),param_2,&local_160);
  local_190 = local_160;
  local_188 = fStack_158;
  local_184 = CONCAT44(uStack_14c,uStack_150);
  local_17c = fStack_148;
  local_178 = local_140;
  local_170 = fStack_138;
  local_16c = auStack_130._0_8_;
  local_164 = auStack_130._8_4_;
  uVar4 = (**(code **)(**(long **)(*param_1 + 0x50) + 0x78))
                    (*(long **)(*param_1 + 0x50),param_2 & 0xffffffff);
  iVar5 = (**(code **)(**(long **)(*param_1 + 0x50) + 0x20))();
  iVar15 = (int)param_2;
  uVar7 = 1;
  if (iVar5 <= iVar15 && (uVar4 & 7) != 7) {
    uVar7 = 2;
  }
  local_1a0 = *(undefined8 *)param_1[6];
  uStack_198 = ((undefined8 *)param_1[6])[1];
  lVar8 = param_1[5];
  if ((*(char *)(lVar8 + 0x30) != '\0') && (0 < (int)uVar3)) {
    fVar20 = *(float *)(lVar8 + 0x40);
    fVar22 = *(float *)(lVar8 + 0x44);
    fVar24 = *(float *)(lVar8 + 0x48);
    fVar19 = (float)*(undefined8 *)(lVar8 + 0x50);
    fVar21 = (float)((ulong)*(undefined8 *)(lVar8 + 0x50) >> 0x20);
    local_190 = CONCAT44(fVar21 + fVar22 * (float)((ulong)local_190 >> 0x20),
                         fVar19 + fVar20 * (float)local_190);
    fVar23 = (float)*(undefined8 *)(lVar8 + 0x58);
    local_188 = fVar23 + fVar24 * local_188;
    if (uVar3 != 1) {
      local_184 = CONCAT44(fVar21 + fVar22 * (float)((ulong)local_184 >> 0x20),
                           fVar19 + fVar20 * (float)local_184);
      local_17c = fVar23 + fVar24 * local_17c;
      if (uVar3 != 2) {
        local_178 = CONCAT44(fVar21 + fVar22 * (float)((ulong)local_178 >> 0x20),
                             fVar19 + fVar20 * (float)local_178);
        local_170 = fVar23 + fVar24 * local_170;
        if (uVar3 != 3) {
          lVar8 = (ulong)uVar3 - 3;
          pfVar13 = &local_164;
          do {
            lVar8 = lVar8 + -1;
            *(ulong *)(pfVar13 + -2) =
                 CONCAT44(fVar21 + fVar22 * (float)((ulong)*(undefined8 *)(pfVar13 + -2) >> 0x20),
                          fVar19 + fVar20 * (float)*(undefined8 *)(pfVar13 + -2));
            *pfVar13 = fVar23 + fVar24 * *pfVar13;
            pfVar13 = pfVar13 + 3;
          } while (lVar8 != 0);
        }
      }
    }
  }
  NEON_fmov(0x3f800000,4);
  puVar16 = (ulong *)((ulong)&local_1a0 | 4);
  uVar14 = 3;
  if ((uVar4 & 7) == 7) {
    uVar14 = 4;
  }
  uVar3 = 0;
  do {
    plVar9 = (long *)param_1[5];
    local_200 = *plVar9;
    local_1f8 = plVar9[1];
    local_1f0 = plVar9[2];
    local_1e0 = (float *)plVar9[4];
    uStack_1d8 = 0;
    local_1d0 = (undefined1)plVar9[6];
    local_1c0 = plVar9[8];
    lStack_1b8 = plVar9[9];
    local_1cc = *(undefined4 *)((long)plVar9 + 0x34);
    uStack_1a8 = SUB168(*(undefined1 (*) [16])(plVar9 + 10),8);
    local_1b0 = SUB168(*(undefined1 (*) [16])(plVar9 + 10),0);
    lVar8 = *param_1;
    iVar5 = *(int *)((long)plVar9 + 0x1c) + (uint)*(byte *)(lVar8 + 0x1c);
    local_1e8 = CONCAT44(iVar5,((uVar3 | iVar15 << 1) + 1 << (ulong)(-iVar5 & 0x1f)) - 1 |
                               (&DAT_03aa74b0)[*(int *)((long)plVar9 + 0x1c)] &
                               *(uint *)(plVar9 + 3));
    local_1c8 = *(undefined4 *)(lVar8 + 0x20);
    plVar9 = (long *)param_1[2];
    if (*plVar9 == 0) {
LAB_02fcb9c8:
      local_228 = 0;
      local_220 = 0;
      local_240[0] = 3;
      local_238 = &local_190;
      local_230 = CONCAT44(local_1c8,uVar14);
      plVar17 = (long *)param_1[0x12];
      puVar1 = (uint *)param_1[3];
      plVar2 = (long *)param_1[4];
      if ((*(byte *)(plVar17 + 1) >> 1 & 1) == 0) {
        local_80 = plVar17[2];
        uVar12 = (**(code **)(*(long *)param_1[1] + (ulong)*puVar1 * 0x38 + 0x3cd0))
                           (puVar1,local_240,param_1 + 8,*(byte *)(plVar17 + 1),local_a0);
        if ((uVar12 & 1) != 0) {
          local_a8 = 5;
          local_a4 = 0;
          local_100 = CONCAT44(local_100._4_4_,(int)local_80);
          fVar21 = local_a0._0_4_;
          fVar23 = local_a0._4_4_;
          fVar20 = (float)*(undefined8 *)(local_1e0 + 4);
          fVar22 = (float)((ulong)*(undefined8 *)(local_1e0 + 4) >> 0x20);
          fVar24 = (float)*(undefined8 *)(local_1e0 + 6);
          fVar19 = (float)((ulong)*(undefined8 *)(local_1e0 + 6) >> 0x20);
          fVar26 = local_a0._8_4_;
          fVar27 = (float)*(undefined8 *)(local_1e0 + 8);
          fVar28 = (float)((ulong)*(undefined8 *)(local_1e0 + 8) >> 0x20);
          fVar29 = (float)*(undefined8 *)(local_1e0 + 10);
          fVar30 = (float)((ulong)*(undefined8 *)(local_1e0 + 10) >> 0x20);
          fVar25 = local_a0._20_4_;
          _fStack_118 = CONCAT44((float)((ulong)*(undefined8 *)(local_1e0 + 0xe) >> 0x20) +
                                 fVar30 * fVar26 + local_1e0[3] * fVar21 + fVar19 * fVar23,
                                 (float)*(undefined8 *)(local_1e0 + 0xe) +
                                 fVar29 * fVar26 + local_1e0[2] * fVar21 + fVar24 * fVar23);
          _local_120 = CONCAT44((float)((ulong)*(undefined8 *)(local_1e0 + 0xc) >> 0x20) +
                                fVar28 * fVar26 + local_1e0[1] * fVar21 + fVar22 * fVar23,
                                (float)*(undefined8 *)(local_1e0 + 0xc) +
                                fVar27 * fVar26 + *local_1e0 * fVar21 + fVar20 * fVar23);
          fVar21 = local_a0._16_4_;
          fVar23 = local_a0._24_4_;
          auVar18._0_8_ =
               CONCAT44(fVar28 * fVar23 + local_1e0[1] * fVar21 + fVar22 * fVar25,
                        fVar27 * fVar23 + *local_1e0 * fVar21 + fVar20 * fVar25);
          auVar18._8_4_ = fVar29 * fVar23 + local_1e0[2] * fVar21 + fVar24 * fVar25;
          auVar18._12_4_ = fVar30 * fVar23 + local_1e0[3] * fVar21 + fVar19 * fVar25;
          uStack_108 = auVar18._8_8_;
          lVar8 = *plVar2;
          local_e8 = (undefined4)plVar2[3];
          local_e0 = (undefined2)plVar9[2];
          local_dc = (undefined4)*(ulong *)((long)plVar9 + 0x14);
          uStack_d8 = *(ulong *)((long)plVar9 + 0x14) >> 0x20;
          local_e4 = 0xf;
          if (lVar8 == 0) {
            uVar6 = 0xffffff;
            local_f8 = 0xffffffffffffffff;
          }
          else {
            local_f8 = *(undefined8 *)(lVar8 + 0xb0);
            uVar6 = *(undefined4 *)(lVar8 + 0x50);
          }
          local_f0 = CONCAT44((int)((ulong)local_f0 >> 0x20),uVar6);
          if (local_200 == 0) {
            local_c8 = 0xffffff;
            local_d0 = 0xffffffffffffffff;
          }
          else {
            local_d0 = *(undefined8 *)(local_200 + 0xb0);
            local_c8 = *(undefined4 *)(local_200 + 0x50);
          }
          local_c0 = (undefined4)local_1e8;
          local_b8 = (undefined2)local_1a0;
          local_b4 = (undefined4)*puVar16;
          uStack_b0 = *puVar16 >> 0x20;
          local_bc = (undefined1)plVar9[4];
          local_110 = auVar18._0_8_;
          (**(code **)(*plVar17 + 0x28))(plVar17,&local_120);
        }
      }
      else {
        (**(code **)(*plVar17 + 0x30))
                  (plVar17,*(long *)param_1[1],plVar9,puVar1,plVar9 + 2,plVar2,local_240,&local_1a0,
                   &local_200,param_1 + 8);
      }
      local_17c = local_170;
      local_184 = local_178;
      local_170 = local_164;
      local_178 = local_16c;
    }
    else {
      uVar6 = (**(code **)(**(long **)(lVar8 + 0x50) + 0x70))(*(long **)(lVar8 + 0x50),iVar15);
      (**(code **)(**(long **)param_1[2] + 0x40))
                (*(long **)param_1[2],uVar6,5,*(undefined8 *)param_1[5],
                 ((undefined8 *)param_1[5])[1],*param_1,local_1e8 & 0xffffffff,0,&local_1a0);
      plVar9 = (long *)param_1[2];
      if (plVar9[1] == 0) goto LAB_02fcb9c8;
      _local_120 = CONCAT62(stack0xfffffffffffffee2,(short)plVar9[2]);
      uVar10 = *(undefined8 *)((long)plVar9 + 0x14);
      *(undefined4 *)((undefined8 *)((ulong)&local_120 | 4) + 1) =
           *(undefined4 *)((long)plVar9 + 0x1c);
      *(undefined8 *)((ulong)&local_120 | 4) = uVar10;
      puVar11 = (undefined8 *)param_1[4];
      local_110 = *puVar11;
      uStack_108 = puVar11[1];
      local_100 = puVar11[2];
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(puVar11 + 3));
      local_f0 = plVar9[5];
      local_240[0] = CONCAT22(local_240[0]._2_2_,(undefined2)local_1a0);
      uVar12 = *puVar16;
      *(int *)((ulong *)((ulong)local_240 | 4) + 1) = (int)puVar16[1];
      *(ulong *)((ulong)local_240 | 4) = uVar12;
      local_230 = *(undefined8 *)param_1[5];
      local_228 = ((undefined8 *)param_1[5])[1];
      local_220 = *param_1;
      local_218 = (undefined4)local_1e8;
      local_210 = 0;
      uVar12 = (**(code **)(*(long *)plVar9[1] + 0x40))
                         ((long *)plVar9[1],5,(char)param_1[0x11] == '\0',&local_120,local_240);
      if ((uVar12 & 1) != 0) {
        plVar9 = (long *)param_1[2];
        goto LAB_02fcb9c8;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar7 <= uVar3) {
      uVar10 = NEON_fmax(CONCAT44((float)((ulong)*(undefined8 *)(param_1[0x12] + 0x10) >> 0x20) *
                                  (float)((ulong)param_1[0x10] >> 0x20),
                                  (float)*(undefined8 *)(param_1[0x12] + 0x10) *
                                  (float)param_1[0x10]),0,4);
      fVar20 = (float)((ulong)uVar10 >> 0x20);
      *param_3 = CONCAT44(fVar20 * fVar20,(float)uVar10 * (float)uVar10);
      return;
    }
  } while( true );
}


