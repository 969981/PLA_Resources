/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e7704; name: FUN_003e7704
 */


void FUN_003e7704(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_29;
  undefined7 uStack_28;
  
  uVar3 = *(undefined8 *)((long)param_4 + 1);
  uVar1 = *(undefined1 *)param_4;
  uStack_28 = (undefined7)((ulong)param_4[1] >> 8);
  local_29 = (undefined1)((ulong)uVar3 >> 0x38);
  *param_4 = 0;
  param_4[1] = 0;
  puVar2 = PTR_DAT_043740e0;
  lVar4 = param_4[2];
  param_4[2] = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 3) = 4;
  param_1[4] = -1;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[6] = CONCAT71(uStack_28,local_29);
  param_1[7] = lVar4;
  *(undefined8 *)((long)param_1 + 0x29) = uVar3;
                    /* try { // try from 003e7780 to 003e778b has its CatchHandler @ 003e77ec */
  uVar3 = FUN_003eed6c();
  FUN_003eedac(uVar3,param_1);
  puVar2 = PTR_DAT_043740f0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  lVar5 = param_2[1];
  lVar4 = *param_2;
  param_1[0x14] = param_2[2];
  param_1[0x13] = lVar5;
  param_1[0x12] = lVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar5 = param_3[1];
  lVar4 = *param_3;
  param_1[0x17] = param_3[2];
  param_1[0x16] = lVar5;
  param_1[0x15] = lVar4;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


