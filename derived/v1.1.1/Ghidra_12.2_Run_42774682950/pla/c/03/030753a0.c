/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030753a0; name: FUN_030753a0
 */


void FUN_030753a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x38);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  uVar7 = *(undefined8 *)(param_4 + 0x10);
  fVar2 = (float)uVar7 * fVar4 * (float)uVar6;
  fVar3 = (float)((ulong)uVar7 >> 0x20) * fVar5 * (float)((ulong)uVar6 >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_4 + 0x18);
  fVar4 = fVar8 * fVar4 * (float)((ulong)*(undefined8 *)(*(long *)(param_3 + 8) + 0x30) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20);
  fVar5 = fVar9 * fVar5 * 0.0;
  auVar10._4_4_ = fVar3;
  auVar10._0_4_ = fVar2;
  auVar10._8_4_ = fVar4;
  auVar10._12_4_ = fVar5;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = fVar5;
  auVar10 = NEON_ext(auVar10,auVar1,8,1);
  *(ulong *)(param_4 + 0x18) = CONCAT44(fVar9 + fVar2 + fVar3 + auVar10._0_4_,fVar8);
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  return;
}


