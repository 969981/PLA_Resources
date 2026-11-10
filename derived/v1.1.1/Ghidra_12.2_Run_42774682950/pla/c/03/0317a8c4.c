/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317a8c4; name: FUN_0317a8c4
 */


void FUN_0317a8c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xac) < 0) {
    FUN_032bcf84(PTR_PTR_0434a080,param_2 + 0x14,8);
  }
  param_1[0x14] = param_2[0x14];
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)((long)param_2 + 0xac);
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  FUN_032c27b8(param_1 + 0x16,param_2 + 0x16);
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xcc) < 0) {
    FUN_0317add0(PTR_PTR_0434a080,param_2 + 0x18);
  }
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)((long)param_2 + 0xcc);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  FUN_032c27b8(param_1 + 0x1a,param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  return;
}


