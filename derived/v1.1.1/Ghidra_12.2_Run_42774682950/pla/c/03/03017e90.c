/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03017e90; name: FUN_03017e90
 */


void FUN_03017e90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 local_18;
  
  uStack_30 = CONCAT44((float)(double)param_2[3],(float)(double)param_2[2]);
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_28 = (ulong)(uint)(float)(double)param_2[4];
  uVar4 = param_2[8];
  auVar5._0_8_ = CONCAT44((int)(short)((ulong)uVar4 >> 0x10) << 0x10,(int)(short)uVar4 << 0x10);
  auVar5._8_4_ = (int)(short)((ulong)uVar4 >> 0x20) << 0x10;
  auVar5._12_4_ = (int)(short)((ulong)uVar4 >> 0x30) << 0x10;
  uStack_48 = auVar5._8_8_;
  auVar6 = NEON_ext(auVar5,auVar5,8,1);
  local_18 = CONCAT44(auVar6._4_4_,auVar6._4_4_);
  local_50 = auVar5._0_8_;
  FUN_03018070(param_1,&local_40,param_2 + 0xc,param_2 + 0xe,&local_18,&local_50,param_3,param_4,
               param_5,&local_60,&local_70);
  fVar8 = local_60 * local_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58;
  fVar9 = local_60 * local_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58;
  uVar4 = CONCAT44(fVar9,fVar8);
  fVar7 = (float)((ulong)param_2[0xd] >> 0x20);
  auVar6._12_4_ = fVar7;
  auVar6._0_12_ = *(undefined1 (*) [12])(param_2 + 0xc);
  auVar1._12_4_ = fVar7;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_2 + 0xc);
  auVar6 = NEON_ext(auVar6,auVar1,8,1);
  fVar11 = auVar6._4_4_ * auVar6._4_4_;
  if (fVar11 < fVar8 && fVar11 < fVar9) {
    if ((~(uint)fVar8 & 0x7fc00000) == 0) goto LAB_03017f60;
    uVar10 = NEON_frsqrte(uVar4,4);
    fVar8 = (float)uVar10;
    fVar9 = (float)((ulong)uVar10 >> 0x20);
    uVar10 = NEON_frsqrts(uVar4,CONCAT44(fVar9 * fVar9,fVar8 * fVar8),4);
    fVar8 = fVar8 * (float)uVar10;
    fVar9 = fVar9 * (float)((ulong)uVar10 >> 0x20);
    uVar4 = NEON_frsqrts(uVar4,CONCAT44(fVar9 * fVar9,fVar8 * fVar8),4);
    fVar8 = (float)uVar4 * fVar8;
    if ((~(uint)fVar8 & 0x7fc00000) == 0) goto LAB_03017f60;
    fVar8 = fVar7 * fVar8 * 0.99999976;
    local_60 = local_60 * fVar8;
    fStack_5c = fStack_5c * fVar7 * (float)((ulong)uVar4 >> 0x20) * fVar9 * 0.99999976;
    fStack_58 = fStack_58 * fVar8;
  }
  *(float *)(param_2 + 0xd) = fStack_58;
  *(float *)((long)param_2 + 0x6c) = fVar7;
  *(float *)(param_2 + 0xc) = local_60;
  *(float *)((long)param_2 + 100) = fStack_5c;
LAB_03017f60:
  fVar8 = local_70 * local_70 + fStack_6c * fStack_6c + fStack_68 * fStack_68;
  fVar9 = local_70 * local_70 + fStack_6c * fStack_6c + fStack_68 * fStack_68;
  uVar4 = CONCAT44(fVar9,fVar8);
  fVar7 = (float)((ulong)param_2[0xf] >> 0x20);
  auVar2._12_4_ = fVar7;
  auVar2._0_12_ = *(undefined1 (*) [12])(param_2 + 0xe);
  auVar3._12_4_ = fVar7;
  auVar3._0_12_ = *(undefined1 (*) [12])(param_2 + 0xe);
  auVar6 = NEON_ext(auVar2,auVar3,8,1);
  fVar11 = auVar6._4_4_ * auVar6._4_4_;
  if (fVar11 < fVar8 && fVar11 < fVar9) {
    if ((~(uint)fVar8 & 0x7fc00000) == 0) {
      return;
    }
    uVar10 = NEON_frsqrte(uVar4,4);
    fVar8 = (float)uVar10;
    fVar9 = (float)((ulong)uVar10 >> 0x20);
    uVar10 = NEON_frsqrts(uVar4,CONCAT44(fVar9 * fVar9,fVar8 * fVar8),4);
    fVar8 = fVar8 * (float)uVar10;
    fVar9 = fVar9 * (float)((ulong)uVar10 >> 0x20);
    uVar4 = NEON_frsqrts(uVar4,CONCAT44(fVar9 * fVar9,fVar8 * fVar8),4);
    fVar8 = (float)uVar4 * fVar8;
    if ((~(uint)fVar8 & 0x7fc00000) == 0) {
      return;
    }
    fVar8 = fVar7 * fVar8 * 0.99999976;
    local_70 = local_70 * fVar8;
    fStack_6c = fStack_6c * fVar7 * (float)((ulong)uVar4 >> 0x20) * fVar9 * 0.99999976;
    fStack_68 = fStack_68 * fVar8;
  }
  *(float *)(param_2 + 0xf) = fStack_68;
  *(float *)((long)param_2 + 0x7c) = fVar7;
  *(float *)(param_2 + 0xe) = local_70;
  *(float *)((long)param_2 + 0x74) = fStack_6c;
  return;
}


