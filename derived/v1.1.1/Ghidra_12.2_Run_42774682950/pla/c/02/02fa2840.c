/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2840; name: FUN_02fa2840
 */


void FUN_02fa2840(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  auVar5 = *param_1;
  uStack_20 = *(undefined8 *)param_1[1];
  fVar3 = auVar5._0_4_;
  auVar8._0_4_ = fVar3 + fVar3;
  fVar6 = auVar5._4_4_;
  auVar8._4_4_ = fVar6 + fVar6;
  auVar8._8_4_ = auVar5._8_4_ + auVar5._8_4_;
  fVar7 = auVar5._12_4_;
  auVar8._12_4_ = fVar7 + fVar7;
  uVar11 = NEON_fmov(0x3f800000,4);
  auVar5 = NEON_ext(auVar5,auVar5,8,1);
  auVar9 = NEON_ext(auVar8,auVar8,8,1);
  fVar4 = auVar5._0_4_ * auVar9._0_4_;
  fVar10 = (float)uVar11;
  uStack_40 = CONCAT44(fVar10 - (auVar8._0_4_ * fVar3 + fVar4),
                       auVar8._4_4_ * fVar3 - auVar8._8_4_ * fVar7);
  local_50 = CONCAT44(auVar8._4_4_ * fVar3 + auVar8._8_4_ * fVar7,
                      fVar10 - (auVar8._4_4_ * fVar6 + fVar4));
  uStack_18 = *(ulong *)(param_1[1] + 8) & 0xffffffff;
  uStack_48 = (ulong)(uint)(auVar8._8_4_ * fVar3 - auVar8._4_4_ * fVar7);
  uStack_38 = (ulong)(uint)(auVar8._8_4_ * fVar6 + auVar8._0_4_ * fVar7);
  uStack_28 = (ulong)(uint)(fVar10 - (auVar8._0_4_ * fVar3 + auVar8._4_4_ * fVar6));
  local_30 = CONCAT44(auVar8._8_4_ * fVar6 - auVar8._0_4_ * fVar7,
                      auVar8._8_4_ * fVar3 + auVar8._4_4_ * fVar7);
  lVar2 = *(long *)param_1[3];
  puVar1 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    puVar1 = param_1[3] + lVar2;
  }
  if (((byte)param_1[1][0xe] >> 3 & 1) == 0) {
    (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar1[0x18] * 0x200 + 0x18))(puVar1,&local_50,param_2)
    ;
  }
  else {
    local_60 = *(undefined8 *)param_1[2];
    uStack_58 = CONCAT44(0x3f800000,(int)*(undefined8 *)(param_1[2] + 8));
    FUN_02ffe574(puVar1,&local_50,&local_60,((byte)param_1[1][0xe] >> 5 ^ 0xff) & 1);
  }
  return;
}


