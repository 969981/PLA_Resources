/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016c3c; name: FUN_03016c3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03016c3c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulong uStack_18;
  
  *(short *)(param_1 + 0x56) =
       (short)((uint)((float)*param_2 * (float)((uint)*(ushort *)(param_1 + 0x56) << 0x10)) >> 0x10)
  ;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined8 *)(param_1 + 0x28);
  local_20 = *(undefined8 *)(param_1 + 0x38);
  fVar1 = (float)((ulong)uStack_28 >> 0x20);
  uStack_18 = (ulong)(uint)fVar1;
  fVar4 = (float)*param_2;
  fVar6 = (float)*param_3;
  fVar5 = (float)((ulong)*param_2 >> 0x20);
  fVar9 = (float)((ulong)*param_3 >> 0x20);
  fVar2 = (float)local_20 * fVar4;
  fVar3 = (float)((ulong)local_20 >> 0x20) * fVar5;
  local_38 = CONCAT44(fVar5 * fVar9 - fVar9,fVar4 * fVar6 - fVar6);
  auVar7._8_8_ = _UNK_0388a1f8;
  auVar7._0_8_ = _DAT_0388a1f0;
  *(ulong *)(param_1 + 0x38) = CONCAT44(fVar3,fVar2);
  auVar8._4_4_ = fVar3;
  auVar8._0_4_ = fVar2;
  auVar8._8_4_ = fVar1 * fVar4;
  auVar8._12_4_ = fVar5 * 0.0;
  auVar8 = a64_TBL(ZEXT816(0),auVar8,auVar7);
  *(ulong *)(param_1 + 0x30) = CONCAT44(auVar8._12_4_,(float)uStack_28 * fVar4);
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((float)((ulong)local_30 >> 0x20) * fVar5,(float)local_30 * fVar4);
  FUN_03018fb0(&local_20,&local_30,&local_38,param_1);
  return;
}


