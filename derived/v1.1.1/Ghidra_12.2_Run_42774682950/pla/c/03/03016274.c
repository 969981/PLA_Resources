/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016274; name: FUN_03016274
 */


void FUN_03016274(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [48];
  
  FUN_032c9fc0(local_50,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  fVar1 = (float)((int)(short)uVar2 << 0x10);
  fVar3 = (float)((int)(short)((ulong)uVar2 >> 0x10) << 0x10);
  fVar4 = (float)((int)(short)((ulong)uVar2 >> 0x20) << 0x10);
  local_80 = CONCAT44(local_50._4_4_ * fVar1,local_50._0_4_ * fVar1);
  uStack_78 = CONCAT44(local_50._12_4_ * fVar1,local_50._8_4_ * fVar1);
  uStack_70 = CONCAT44(local_50._20_4_ * fVar3,local_50._16_4_ * fVar3);
  uStack_68 = CONCAT44(local_50._28_4_ * fVar3,local_50._24_4_ * fVar3);
  local_60 = CONCAT44(local_50._36_4_ * fVar4,local_50._32_4_ * fVar4);
  uStack_58 = CONCAT44(local_50._44_4_ * fVar4,local_50._40_4_ * fVar4);
  FUN_032c9298(param_2,&local_80,local_50);
  return;
}


