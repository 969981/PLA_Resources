/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ca708; name: FUN_032ca708
 */


void FUN_032ca708(undefined8 *param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_032c9298(&local_60);
  fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  fVar1 = (float)*(undefined8 *)(param_3 + 0x30);
  fVar3 = (float)*(undefined8 *)(param_3 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  param_1[7] = CONCAT44((float)((ulong)uVar5 >> 0x20) -
                        ((float)((ulong)uStack_38 >> 0x20) * fVar3 +
                        (float)((ulong)uStack_58 >> 0x20) * fVar1 +
                        (float)((ulong)uStack_48 >> 0x20) * fVar2),
                        (float)uVar5 -
                        ((float)uStack_38 * fVar3 +
                        (float)uStack_58 * fVar1 + (float)uStack_48 * fVar2));
  param_1[6] = CONCAT44((float)((ulong)uVar4 >> 0x20) -
                        ((float)((ulong)local_40 >> 0x20) * fVar3 +
                        (float)((ulong)local_60 >> 0x20) * fVar1 +
                        (float)((ulong)uStack_50 >> 0x20) * fVar2),
                        (float)uVar4 -
                        ((float)local_40 * fVar3 +
                        (float)local_60 * fVar1 + (float)uStack_50 * fVar2));
  return;
}


