/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f58c0; name: FUN_031f58c0
 */


void FUN_031f58c0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  lVar1 = (long)((int)((uint)*(byte *)(param_1 + 3) << 0x18) >> 0x19);
  fVar8 = (float)((ulong)(&DAT_03aae438)[lVar1 * 2] >> 0x20);
  uVar4 = *(undefined8 *)*(undefined1 (*) [12])(&DAT_03aae430 + lVar1 * 2);
  auVar5[0] = -((*(byte *)(param_1 + 3) & 1) == 0);
  auVar6._0_4_ = -(float)uVar4;
  auVar6._4_4_ = -(float)((ulong)uVar4 >> 0x20);
  auVar6._8_4_ = -(float)(&DAT_03aae438)[lVar1 * 2];
  auVar6._12_4_ = -fVar8;
  auVar5[1] = auVar5[0];
  auVar5[2] = auVar5[0];
  auVar5[3] = auVar5[0];
  auVar5[4] = auVar5[0];
  auVar5[5] = auVar5[0];
  auVar5[6] = auVar5[0];
  auVar5[7] = auVar5[0];
  auVar5[8] = auVar5[0];
  auVar5[9] = auVar5[0];
  auVar5[10] = auVar5[0];
  auVar5[0xb] = auVar5[0];
  auVar5[0xc] = auVar5[0];
  auVar5[0xd] = auVar5[0];
  auVar5[0xe] = auVar5[0];
  auVar5[0xf] = auVar5[0];
  auVar12._12_4_ = fVar8;
  auVar12._0_12_ = *(undefined1 (*) [12])(&DAT_03aae430 + lVar1 * 2);
  auVar6 = auVar6 ^ (auVar6 ^ auVar12) & auVar5;
  fVar8 = (float)*param_1 * auVar6._0_4_;
  fVar9 = (float)((ulong)*param_1 >> 0x20) * auVar6._4_4_;
  fVar10 = (float)param_1[1] * auVar6._8_4_;
  fVar11 = (float)((ulong)param_1[1] >> 0x20) * auVar6._12_4_;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar11;
  auVar12 = NEON_ext(auVar2,auVar3,8,1);
  auVar7._0_12_ = auVar6._0_12_;
  auVar7._12_4_ = -(fVar8 + fVar9 + auVar12._0_4_);
  param_2[1] = auVar7._8_8_;
  *param_2 = auVar6._0_8_;
  return;
}


