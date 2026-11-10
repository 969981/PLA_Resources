/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03001ff0; name: FUN_03001ff0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_03001ff0(float param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  unkbyte10 Var8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  ushort uVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 == (undefined4 *)0x0) {
    lVar11 = *(long *)(param_2 + 0x30);
    iVar2 = *(int *)(param_2 + 0x38);
    plVar12 = (long *)0x0;
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + param_2 + 0x30);
    }
    if (iVar2 != 0) {
      lVar11 = (long)iVar2 << 3;
      plVar13 = plVar12;
      do {
        lVar1 = *plVar13 + (long)plVar13;
        if ((*plVar13 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xf00)) {
          auVar19._0_8_ =
               CONCAT17(*(undefined1 *)(lVar1 + 0x33),
                        CONCAT16(*(undefined1 *)(lVar1 + 0x32),
                                 (uint6)*(ushort *)(lVar1 + 0x30) << 0x10)) ^ 0x8000000080000000;
          auVar19._8_2_ = 0;
          auVar19[10] = *(undefined1 *)(lVar1 + 0x34);
          auVar19[0xb] = *(byte *)(lVar1 + 0x35) ^ 0x80;
          auVar19._12_2_ = 0;
          auVar19[0xe] = *(undefined1 *)(lVar1 + 0x36);
          auVar19[0xf] = *(byte *)(lVar1 + 0x37) ^ 0x80;
          auVar20 = NEON_scvtf(auVar19,4);
          fVar17 = auVar20._0_4_ * 5.086263e-10;
          fVar21 = auVar20._4_4_ * 5.086263e-10;
          fVar22 = auVar20._8_4_ * 5.086263e-10;
          fVar23 = auVar20._12_4_ * 5.086263e-10;
          fVar18 = fVar17 * fVar17;
          fVar6 = fVar21 * fVar21;
          uVar24 = (undefined1)((uint)fVar6 >> 8);
          uVar25 = (undefined1)((uint)fVar6 >> 0x10);
          uVar26 = (undefined1)((uint)fVar6 >> 0x18);
          fVar15 = fVar22 * fVar22;
          uVar27 = (undefined1)((uint)fVar15 >> 8);
          uVar28 = (undefined1)((uint)fVar15 >> 0x10);
          uVar29 = (undefined1)((uint)fVar15 >> 0x18);
          fVar34 = fVar23 * fVar23;
          uVar30 = (undefined1)((uint)fVar34 >> 8);
          uVar31 = (undefined1)((uint)fVar34 >> 0x10);
          uVar32 = (undefined1)((uint)fVar34 >> 0x18);
          auVar4[4] = SUB41(fVar6,0);
          auVar4._0_4_ = fVar18;
          auVar4[5] = uVar24;
          auVar4[6] = uVar25;
          auVar4[7] = uVar26;
          auVar4[8] = SUB41(fVar15,0);
          auVar4[9] = uVar27;
          auVar4[10] = uVar28;
          auVar4[0xb] = uVar29;
          auVar4[0xc] = SUB41(fVar34,0);
          auVar4[0xd] = uVar30;
          auVar4[0xe] = uVar31;
          auVar4[0xf] = uVar32;
          auVar5[4] = SUB41(fVar6,0);
          auVar5._0_4_ = fVar18;
          auVar5[5] = uVar24;
          auVar5[6] = uVar25;
          auVar5[7] = uVar26;
          auVar5[8] = SUB41(fVar15,0);
          auVar5[9] = uVar27;
          auVar5[10] = uVar28;
          auVar5[0xb] = uVar29;
          auVar5[0xc] = SUB41(fVar34,0);
          auVar5[0xd] = uVar30;
          auVar5[0xe] = uVar31;
          auVar5[0xf] = uVar32;
          auVar20 = NEON_ext(auVar4,auVar5,8,1);
          fVar15 = auVar20._0_4_ + auVar20._4_4_;
          fVar14 = fVar18 + fVar6 + fVar15;
          fVar15 = fVar18 + fVar6 + fVar15;
          uVar24 = SUB41(fVar15,0);
          uVar25 = (undefined1)((uint)fVar15 >> 8);
          uVar26 = (undefined1)((uint)fVar15 >> 0x10);
          uVar27 = (undefined1)((uint)fVar15 >> 0x18);
          uVar33 = NEON_frsqrte(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,
                                                  fVar14)))),4);
          fVar15 = (float)uVar33;
          fVar34 = (float)((ulong)uVar33 >> 0x20);
          uVar33 = NEON_frsqrts(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,
                                                  fVar14)))),
                                CONCAT26((short)((uint)(fVar34 * fVar34) >> 0x10),
                                         CONCAT24(SUB42(fVar34 * fVar34,0),fVar15 * fVar15)),4);
          fVar15 = fVar15 * (float)uVar33;
          fVar34 = fVar34 * (float)((ulong)uVar33 >> 0x20);
          uVar33 = NEON_frsqrts(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,
                                                  fVar14)))),
                                CONCAT26((short)((uint)(fVar34 * fVar34) >> 0x10),
                                         CONCAT24(SUB42(fVar34 * fVar34,0),fVar15 * fVar15)),4);
          Var8 = *(unkbyte10 *)(lVar1 + 0x28);
          uVar16 = (ushort)((unkuint10)Var8 >> 0x30);
          fVar15 = (float)uVar33 * fVar15;
          fVar34 = (float)((ulong)uVar33 >> 0x20) * fVar34;
          auVar7._6_2_ = (short)((unkuint10)Var8 >> 0x10);
          auVar7._0_6_ = (uint6)(ushort)Var8 << 0x10;
          auVar7._8_2_ = 0;
          auVar7._10_2_ = (short)((unkuint10)Var8 >> 0x20);
          auVar7._12_2_ = 0;
          auVar7._14_2_ = uVar16;
          auVar20 = NEON_scvtf(auVar7,4);
          param_4[10] = auVar20._8_4_ * (float)((uint)uVar16 << 0x10);
          param_4[0xb] = auVar20._12_4_ * (float)((uint)uVar16 << 0x10);
          param_4[8] = auVar20._0_4_ * (float)((uint)uVar16 << 0x10);
          param_4[9] = auVar20._4_4_ * (float)((uint)uVar16 << 0x10);
          uVar16 = *(ushort *)(lVar1 + 0x26);
          auVar20._6_2_ = *(undefined2 *)(lVar1 + 0x22);
          auVar20._0_6_ = (uint6)*(ushort *)(lVar1 + 0x20) << 0x10;
          auVar20._8_2_ = 0;
          auVar20._10_2_ = *(undefined2 *)(lVar1 + 0x24);
          auVar20._12_2_ = 0;
          auVar20._14_2_ = uVar16;
          auVar20 = NEON_scvtf(auVar20,4);
          fVar18 = auVar20._4_4_ * (float)((uint)uVar16 << 0x10);
          fVar6 = auVar20._12_4_ * (float)((uint)uVar16 << 0x10);
          *(ulong *)(param_4 + 6) =
               CONCAT26((short)((uint)fVar6 >> 0x10),
                        CONCAT24(SUB42(fVar6,0),auVar20._8_4_ * (float)((uint)uVar16 << 0x10)));
          *(ulong *)(param_4 + 4) =
               CONCAT26((short)((uint)fVar18 >> 0x10),
                        CONCAT24(SUB42(fVar18,0),auVar20._0_4_ * (float)((uint)uVar16 << 0x10)));
          *param_4 = *(undefined4 *)(lVar1 + 0x3c);
          param_4[1] = *(undefined4 *)(lVar1 + 0x38);
          param_4[0xe] = fVar22 * fVar15;
          param_4[0xf] = fVar23 * (float)CONCAT13((char)((uint)fVar34 >> 0x18),
                                                  CONCAT12((char)((uint)fVar34 >> 0x10),
                                                           (short)(CONCAT15((char)((uint)fVar34 >> 8
                                                                                  ),CONCAT14(SUB41(
                                                  fVar34,0),fVar15)) >> 0x20)));
          param_4[0xc] = fVar17 * fVar15;
          param_4[0xd] = fVar21 * fVar34;
          goto joined_r0x030022c4;
        }
        plVar13 = plVar13 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    local_78 = 0;
    local_88 = 0xffffffff;
    uStack_80 = 1;
    local_90 = &DAT_042d95d8;
    uStack_74 = 0x3fc00000;
    uStack_70 = 0xc47a0000;
    if (iVar2 != 0) {
      lVar11 = (long)iVar2 << 3;
      do {
        lVar1 = *plVar12 + (long)plVar12;
        if ((*plVar12 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xefd)) {
          uStack_70 = *(undefined4 *)(lVar1 + 0x40);
          local_78 = (undefined4)*(undefined8 *)(lVar1 + 0x38);
          uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
          break;
        }
        plVar12 = plVar12 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2 + 0x18) * 0x200 + 0x38))
              (param_2,&local_90,param_4);
  }
  else {
    *param_4 = param_3[3];
    param_4[1] = 0x3f800000;
    uVar9 = *param_3;
    uVar10 = param_3[1];
    *(ulong *)(param_4 + 6) = (ulong)(uint)param_3[2];
    param_4[4] = uVar9;
    param_4[5] = uVar10;
    uVar9 = param_3[8];
    uVar10 = param_3[9];
    *(ulong *)(param_4 + 10) = (ulong)(uint)param_3[10];
    param_4[8] = uVar9;
    param_4[9] = uVar10;
    auVar20 = *(undefined1 (*) [16])(param_3 + 4);
    *(long *)(param_4 + 0xe) = auVar20._8_8_;
    *(long *)(param_4 + 0xc) = auVar20._0_8_;
    if (param_1 < 0.0) {
      lVar11 = *(long *)(param_2 + 0x30);
      iVar2 = *(int *)(param_2 + 0x38);
      plVar12 = (long *)0x0;
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + param_2 + 0x30);
      }
      if (iVar2 != 0) {
        lVar11 = (long)iVar2 << 3;
        plVar13 = plVar12;
        do {
          lVar1 = *plVar13 + (long)plVar13;
          if ((*plVar13 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xf00)) {
            param_1 = *(float *)(lVar1 + 0x38);
            goto joined_r0x030022c4;
          }
          plVar13 = plVar13 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      local_30 = 0;
      local_40 = 0xffffffff;
      uStack_38 = 1;
      local_48 = &DAT_042d95d8;
      uStack_2c = 0x3fc00000;
      uStack_28 = 0xc47a0000;
      if (iVar2 != 0) {
        lVar11 = (long)iVar2 << 3;
        do {
          lVar1 = *plVar12 + (long)plVar12;
          if ((*plVar12 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xefd)) {
            uStack_28 = *(undefined4 *)(lVar1 + 0x40);
            local_30 = (undefined4)*(undefined8 *)(lVar1 + 0x38);
            uStack_2c = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
            break;
          }
          plVar12 = plVar12 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2 + 0x18) * 0x200 + 0x38))
                (param_2,&local_48,&local_90);
      param_1 = local_90._4_4_;
    }
  }
joined_r0x030022c4:
  if (0.0 <= param_1) {
    if (param_1 != 0.0) {
      fVar18 = param_1 / (float)param_4[1];
      uVar3 = *(undefined8 *)(param_4 + 10);
      uVar33 = *(undefined8 *)(param_4 + 8);
      param_4[10] = (float)uVar3 * fVar18;
      param_4[0xb] = (float)((ulong)uVar3 >> 0x20) * fVar18;
      param_4[8] = (float)uVar33 * fVar18;
      param_4[9] = (float)((ulong)uVar33 >> 0x20) * fVar18;
    }
    param_4[1] = param_1;
  }
  return;
}


