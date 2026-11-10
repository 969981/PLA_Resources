/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa6668; name: FUN_02fa6668
 */


undefined8
FUN_02fa6668(long param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
            undefined8 *param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  fVar8 = (*(float *)(param_4[1] + 4) - *(float *)(*param_4 + 4)) * 0.5;
  uStack_60 = CONCAT44(fVar8,(*(float *)param_4[1] - *(float *)*param_4) * 0.5);
  uStack_58 = CONCAT44((*(float *)(param_4[1] + 0xc) - *(float *)(*param_4 + 0xc)) * 0.5,
                       (*(float *)(param_4[1] + 8) - *(float *)(*param_4 + 8)) * 0.5);
  fVar4 = (*(float *)(param_4[1] + 4) + *(float *)(*param_4 + 4)) * 0.5;
  auVar5._0_8_ = CONCAT44(fVar4,(*(float *)param_4[1] + *(float *)*param_4) * 0.5);
  auVar5._8_4_ = (*(float *)(param_4[1] + 8) + *(float *)(*param_4 + 8)) * 0.5;
  auVar5._12_4_ = (*(float *)(param_4[1] + 0xc) + *(float *)(*param_4 + 0xc)) * 0.5;
  uStack_68 = auVar5._8_8_;
  local_70 = auVar5._0_8_;
  FUN_0333e220(param_2,param_1 + 0x90,local_90);
  fVar11 = auStack_80._4_4_;
  fVar7 = local_90._4_4_;
  uVar12 = NEON_fmin(CONCAT44(fVar8 + fVar11,fVar8 + fVar11),CONCAT44(fVar4,fVar4),4);
  uVar12 = NEON_fmax(CONCAT44(fVar7 - fVar8,fVar7 - fVar8),uVar12,4);
  fVar8 = fVar4 - (float)uVar12;
  fVar4 = fVar4 - (float)((ulong)uVar12 >> 0x20);
  if (fVar8 * fVar8 <= (float)*param_5) {
    fVar9 = (fVar11 - fVar7) + ABS(fVar8);
    fVar11 = (fVar11 - fVar7) + ABS(fVar4);
    fStack_94 = (float)((ulong)*(undefined8 *)(param_4[1] + 8) >> 0x20);
    fVar7 = fVar9 * fVar9 - fVar8 * fVar8;
    fVar4 = fVar11 * fVar11 - fVar4 * fVar4;
    uVar12 = CONCAT44(fVar4,fVar7);
    uVar10 = NEON_frsqrte(uVar12,4);
    fVar11 = (float)uVar10;
    fVar8 = (float)((ulong)uVar10 >> 0x20);
    uVar10 = NEON_frsqrts(uVar12,CONCAT44(fVar8 * fVar8,fVar11 * fVar11),4);
    fVar11 = fVar11 * (float)uVar10;
    fVar8 = fVar8 * (float)((ulong)uVar10 >> 0x20);
    uVar12 = NEON_frsqrts(uVar12,CONCAT44(fVar8 * fVar8,fVar11 * fVar11),4);
    auVar6._12_4_ = fStack_94;
    auVar6._0_12_ = *(undefined1 (*) [12])param_4[1];
    auVar13 = NEON_fmax(local_90,auVar6,4);
    auVar5 = NEON_fmax(local_90,*param_4,4);
    iVar2 = -(uint)(fVar7 <= 0.0);
    iVar3 = -(uint)(fVar4 <= 0.0);
    fVar7 = fVar7 * (float)uVar12 * fVar11;
    fVar4 = fVar4 * (float)((ulong)uVar12 >> 0x20) * fVar8;
    fVar7 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                            CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10),
                                     CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar2 >> 8),
                                              SUB41(fVar7,0) & ~(byte)iVar2)));
    auVar6 = NEON_fmin(auStack_80,auVar5,4);
    auVar5 = NEON_fmin(auStack_80,auVar13,4);
    local_a0 = fVar7 + auVar5._0_4_;
    fVar4 = (float)(CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                             CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                      CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                               CONCAT14(SUB41(fVar4,0) & ~(byte)iVar3,fVar7)))) >>
                   0x20);
    fStack_9c = fVar4 + auVar5._4_4_;
    fStack_98 = fVar7 + auVar5._8_4_;
    fStack_94 = fVar4 + auVar5._12_4_;
    auVar13._0_8_ = CONCAT44(auVar6._4_4_ - fVar4,auVar6._0_4_ - fVar7);
    auVar13._8_4_ = auVar6._8_4_ - fVar7;
    auVar13._12_4_ = auVar6._12_4_ - fVar4;
    uStack_a8 = auVar13._8_8_;
    local_b0 = auVar13._0_8_;
    FUN_0333e220(param_3,&local_b0,&local_d0);
    local_f0 = local_d0 * *(float *)(param_1 + 0x70);
    fStack_ec = fStack_cc * *(float *)(param_1 + 0x74);
    fStack_e8 = fStack_c8 * *(float *)(param_1 + 0x78);
    fStack_e4 = fStack_c4 * *(float *)(param_1 + 0x7c);
    fStack_e0 = *(float *)(param_1 + 0x70) * (float)uStack_c0;
    fStack_dc = *(float *)(param_1 + 0x74) * (float)((ulong)uStack_c0 >> 0x20);
    fStack_d8 = *(float *)(param_1 + 0x78) * (float)uStack_b8;
    fStack_d4 = *(float *)(param_1 + 0x7c) * (float)((ulong)uStack_b8 >> 0x20);
    uVar12 = NEON_fmax(CONCAT44(fStack_e0 - local_f0,fStack_e0 - local_f0),
                       CONCAT44(fStack_d8 - fStack_e8,fStack_d8 - fStack_e8),4);
    uVar1 = (int)(float)uVar12 + 1;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar12 = FUN_02fa5d60(1,param_1,param_2,&local_f0,
                          (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18,&local_70,
                          &uStack_60,param_5,param_6);
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}


