/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f77154; name: FUN_02f77154
 */


void FUN_02f77154(long param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar5 = *param_2;
  auVar2 = param_2[1];
  auVar10 = NEON_ext(auVar5,auVar5,8,1);
  auVar3 = param_2[2];
  auVar11 = NEON_ext(auVar2,auVar2,8,1);
  auVar4 = NEON_ext(auVar3,auVar3,8,1);
  fVar6 = *(float *)(param_1 + 0x90) - (float)*(undefined8 *)param_2[3];
  fVar7 = *(float *)(param_1 + 0x94) - (float)((ulong)*(undefined8 *)param_2[3] >> 0x20);
  fVar8 = *(float *)(param_1 + 0x98) - (float)*(undefined8 *)(param_2[3] + 8);
  *(float *)(param_1 + 0x98) = auVar4._0_4_ * fVar8 + auVar3._0_4_ * fVar6 + auVar3._4_4_ * fVar7;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(float *)(param_1 + 0x90) = auVar10._0_4_ * fVar8 + auVar5._0_4_ * fVar6 + auVar5._4_4_ * fVar7;
  *(float *)(param_1 + 0x94) = auVar11._0_4_ * fVar8 + auVar2._0_4_ * fVar6 + auVar2._4_4_ * fVar7;
  auVar3 = *param_2;
  auVar4 = param_2[1];
  pauVar1 = param_2 + 2;
  uVar9 = (undefined4)((ulong)*(undefined8 *)(param_2[2] + 8) >> 0x20);
  auVar10 = NEON_ext(auVar3,auVar3,8,1);
  auVar11 = NEON_ext(auVar4,auVar4,8,1);
  auVar5._12_4_ = uVar9;
  auVar5._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar2._12_4_ = uVar9;
  auVar2._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar5 = NEON_ext(auVar5,auVar2,8,1);
  fVar6 = *(float *)(param_1 + 0x80);
  fVar7 = *(float *)(param_1 + 0x84);
  fVar8 = *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x88) =
       auVar5._0_4_ * fVar8 +
       (float)*(undefined8 *)*pauVar1 * fVar6 +
       (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar7;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x80) = auVar10._0_4_ * fVar8 + auVar3._0_4_ * fVar6 + auVar3._4_4_ * fVar7;
  *(float *)(param_1 + 0x84) = auVar11._0_4_ * fVar8 + auVar4._0_4_ * fVar6 + auVar4._4_4_ * fVar7;
  return;
}


