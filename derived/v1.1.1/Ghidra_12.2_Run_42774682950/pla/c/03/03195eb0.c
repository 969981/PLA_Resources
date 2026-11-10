/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03195eb0; name: FUN_03195eb0
 */


void FUN_03195eb0(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_38 [2];
  undefined1 local_30 [8];
  float fStack_28;
  
  local_38[0] = *param_2;
  FUN_03195f14(param_1,local_38,local_30);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  fVar4 = local_30._4_4_;
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  fVar3 = local_30._0_4_;
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fStack_28 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar3 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar4,
                        (float)*(undefined8 *)(param_1 + 0x98) +
                        (float)*(undefined8 *)(param_1 + 0x88) * fStack_28 +
                        (float)*(undefined8 *)(param_1 + 0x68) * fVar3 +
                        (float)*(undefined8 *)(param_1 + 0x78) * fVar4);
  *param_3 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                      (float)((ulong)uVar5 >> 0x20) * fStack_28 +
                      (float)((ulong)uVar1 >> 0x20) * fVar3 + (float)((ulong)uVar2 >> 0x20) * fVar4,
                      (float)uVar6 +
                      (float)uVar5 * fStack_28 + (float)uVar1 * fVar3 + (float)uVar2 * fVar4);
  return;
}


