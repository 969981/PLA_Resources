/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bac48; name: FUN_031bac48
 */


void FUN_031bac48(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,long param_5,
                 undefined4 param_6,long *param_7,long *param_8,undefined4 param_9,
                 undefined4 param_10,long *param_11,long param_12)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = (float)param_1;
  *param_2 = (long)(PTR_DAT_04388d78 + 0x10);
  param_2[1] = 0xffffffff;
  param_2[2] = 1;
  *(uint *)(param_2 + 4) = (uint)(fVar3 == 0.0);
  uVar1 = *(undefined4 *)(param_5 + 8);
  param_2[5] = param_3;
  *(undefined4 *)((long)param_2 + 0x24) = uVar1;
  FUN_031ba65c(param_2 + 6,param_5);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = -0x8000000000000000;
  lVar2 = param_11[1];
  param_2[0x12] = *param_11;
  param_2[0x13] = lVar2;
  param_2[0x15] = param_7[1];
  param_2[0x14] = *param_7;
  param_2[0x17] = param_8[1];
  lVar2 = *param_8;
  param_2[0x18] = param_12;
  *(undefined4 *)((long)param_2 + 0xd5) = 0;
  *(undefined4 *)(param_2 + 0x20) = param_9;
  *(undefined4 *)((long)param_2 + 0x104) = param_6;
  param_2[3] = CONCAT44(fVar3,fVar3);
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x16] = lVar2;
  *(undefined4 *)(param_2 + 0x1a) = 0xffffffff;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined1 *)((long)param_2 + 0xd4) = 0xff;
  FUN_033299e0(0xa36ada13);
  FUN_031ba730(param_1,param_2 + 6,param_3,param_4,param_6,param_2 + 0x12,param_10);
  return;
}


