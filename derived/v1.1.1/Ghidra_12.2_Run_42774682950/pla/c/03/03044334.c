/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03044334; name: FUN_03044334
 */


void FUN_03044334(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  
  uVar1 = param_3[10];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 0xb);
  param_2[4] = uVar1;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 0xc);
  *(undefined1 *)((long)param_2 + 0x34) = *(undefined1 *)((long)param_3 + 100);
  *(undefined2 *)(param_2 + 7) = *(undefined2 *)(param_3 + 0xd);
  uVar1 = *(undefined8 *)((long)param_3 + 0x6c);
  *(undefined4 *)((long)param_2 + 0x44) = *(undefined4 *)((long)param_3 + 0x74);
  *(undefined8 *)((long)param_2 + 0x3c) = uVar1;
  fVar2 = *(float *)(param_3 + 4);
  uVar1 = *param_3;
  auVar3._0_4_ = (float)param_3[2] * ((float)*param_4 + (float)*param_5 * fVar2);
  auVar3._4_4_ = (float)((ulong)param_3[2] >> 0x20) *
                 ((float)((ulong)*param_4 >> 0x20) + (float)((ulong)*param_5 >> 0x20) * fVar2);
  auVar3._8_4_ = (float)param_3[3] * ((float)param_4[1] + (float)param_5[1] * fVar2);
  auVar3._12_4_ =
       (float)((ulong)param_3[3] >> 0x20) *
       ((float)((ulong)param_4[1] >> 0x20) + (float)((ulong)param_5[1] >> 0x20) * fVar2);
  param_2[3] = param_3[1];
  param_2[2] = uVar1;
  auVar4 = NEON_ext(auVar3,auVar3,8,1);
  uVar5 = param_3[3];
  uVar1 = param_3[2];
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[1] = CONCAT44(param_1 - (auVar3._0_4_ + auVar3._4_4_ + auVar4._0_4_),(int)uVar5);
  *param_2 = uVar1;
  return;
}


