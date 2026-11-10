/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03041f78; name: FUN_03041f78
 */


void FUN_03041f78(long *param_1,long param_2,long param_3,undefined1 (*param_4) [12],float *param_5,
                 undefined1 (*param_6) [16],undefined8 param_7)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar8;
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar6 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar9 = fVar6 * 1.01;
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar10 = fVar8 * 1.01;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  fVar1 = (float)((uint)*(ushort *)(param_2 + 0x5a) << 0x10);
  auVar3._0_4_ = fVar9 * (float)((int)(short)uVar2 << 0x10);
  auVar3._4_4_ = fVar10 * (float)((int)(short)((ulong)uVar2 >> 0x10) << 0x10);
  auVar3._8_4_ = fVar9 * (float)((int)(short)((ulong)uVar2 >> 0x20) << 0x10);
  auVar3._12_4_ = fVar10 * (float)((int)(short)((ulong)uVar2 >> 0x30) << 0x10);
  auVar11 = NEON_fmin(auVar3,ZEXT816(0),4);
  auVar4 = NEON_fmax(auVar3,ZEXT816(0),4);
  fVar6 = fVar6 * fVar1;
  fVar8 = fVar8 * fVar1;
  auVar5._0_4_ = auVar4._0_4_ + fVar6;
  auVar5._4_4_ = auVar4._4_4_ + fVar8;
  auVar5._8_4_ = auVar4._8_4_ + fVar6;
  auVar5._12_4_ = auVar4._12_4_ + fVar8;
  auVar7._0_4_ = auVar11._0_4_ - fVar6;
  auVar7._4_4_ = auVar11._4_4_ - fVar8;
  auVar7._8_4_ = auVar11._8_4_ - fVar6;
  auVar7._12_4_ = auVar11._12_4_ - fVar8;
  auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  auVar4._0_12_ = *param_4;
  auVar4 = NEON_fmax(auVar4,auVar7,4);
  auVar4 = NEON_fmin(auVar4,auVar5,4);
  local_50 = *param_5;
  fStack_4c = param_5[1];
  fStack_48 = param_5[2];
  fStack_44 = param_5[3];
  if (1.1920929e-07 < ABS(fStack_48 - auVar4._8_4_) ||
      (1.1920929e-07 < ABS(fStack_4c - auVar4._4_4_) || 1.1920929e-07 < ABS(local_50 - auVar4._0_4_)
      )) {
    uStack_38 = SUB168(*param_6,8);
    local_40 = SUB168(*param_6,0);
    uStack_28 = auVar4._8_8_;
    uStack_30 = auVar4._0_8_;
    (**(code **)(*param_1 + 0x38))(param_1,param_7,param_2,&local_50);
    *(ulong *)(param_5 + 2) = CONCAT44(fStack_44,fStack_48);
    *(ulong *)param_5 = CONCAT44(fStack_4c,local_50);
    *(undefined8 *)(*param_6 + 8) = uStack_38;
    *(undefined8 *)*param_6 = local_40;
  }
  return;
}


