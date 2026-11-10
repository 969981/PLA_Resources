/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e55964; name: FUN_02e55964
 */


void FUN_02e55964(undefined8 *param_1,float *param_2)

{
  undefined4 uVar2;
  undefined1 auVar1 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50;
  float local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x20] = param_2;
  param_1[0x21] = 0;
  local_48 = param_2[0x19];
  fVar3 = local_48 + local_48;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  local_48 = -local_48;
  param_1[0x1b] = (ulong)(uint)(param_2[2] * fVar3);
  param_1[0x1a] = CONCAT44(fVar5 * fVar3,fVar3 * fVar4);
  local_50 = 0;
  FUN_02e546e8(local_40,param_2,&local_50);
  auVar1 = NEON_fmov(0x3f800000,4);
  uVar2 = *(undefined4 *)((ulong)local_40 | 4);
  *(undefined4 *)(param_1 + 0x19) = local_38;
  *(int *)((long)param_1 + 0xcc) = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0x18) = local_40[0];
  *(undefined4 *)((long)param_1 + 0xc4) = uVar2;
  *(float *)(param_1 + 0x23) = -param_2[0x19];
  *(float *)((long)param_1 + 0x11c) = param_2[0x19];
  return;
}


