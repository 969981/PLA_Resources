/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c1528; name: FUN_031c1528
 */


void FUN_031c1528(undefined8 *param_1,float *param_2,undefined1 (*param_3) [12],undefined8 *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_38;
  uint uStack_34;
  
  uVar2 = FUN_031c15ac();
  uVar2 = -(uint)((uVar2 & 1) != 0);
  fVar7 = (float)param_1[1];
  fVar8 = (float)((ulong)param_1[1] >> 0x20);
  fVar5 = (float)*param_1;
  fVar6 = (float)((ulong)*param_1 >> 0x20);
  auVar3._0_4_ = fVar5 + (*param_2 - fVar5) * (float)((local_38 ^ 0x3f000000) & uVar2 ^ 0x3f000000);
  auVar3._4_4_ = fVar6 + (param_2[1] - fVar6) *
                         (float)((uStack_34 ^ 0x3f000000) & uVar2 ^ 0x3f000000);
  auVar3._8_4_ = fVar7 + (param_2[2] - fVar7) *
                         (float)((local_38 ^ 0x3f000000) & uVar2 ^ 0x3f000000);
  auVar3._12_4_ =
       fVar8 + (param_2[3] - fVar8) * (float)((uStack_34 ^ 0x3f000000) & uVar2 ^ 0x3f000000);
  auVar4._12_4_ = (int)((ulong)*(undefined8 *)param_3[2] >> 0x20);
  auVar4._0_12_ = *(undefined1 (*) [12])(param_3[1] + 4);
  auVar4 = NEON_fmin(auVar4,auVar3,4);
  auVar1._12_4_ = (int)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar1._0_12_ = *param_3;
  auVar4 = NEON_fmax(auVar1,auVar4,4);
  param_4[1] = auVar4._8_8_;
  *param_4 = auVar4._0_8_;
  return;
}


