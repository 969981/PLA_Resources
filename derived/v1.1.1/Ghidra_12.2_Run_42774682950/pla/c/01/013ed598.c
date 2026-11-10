/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ed598; name: FUN_013ed598
 */


void FUN_013ed598(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_00d39e50();
  *param_1 = &PTR_LAB_0420c0d8;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  param_1[9] = &PTR_LAB_0420c128;
  param_1[10] = &PTR_LAB_0420c170;
  *(undefined4 *)((long)param_1 + 0xf14) = 0;
  *(undefined2 *)(param_1 + 0x1e3) = 0;
  *(undefined4 *)((long)param_1 + 0xf1c) = 0;
  *(undefined2 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)((long)param_1 + 0xf24) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  memset((void *)((long)param_1 + 0x7c),0,0xe95);
  uVar3 = param_1[1];
  *(undefined4 *)(param_1 + 0x1e5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xf2c) = 0;
  local_38 = uVar3;
  FUN_013ed6d0(&local_58,uVar3,&local_38);
  uVar1 = local_58;
  local_58 = 0;
  lVar2 = param_1[0x10];
  param_1[0x10] = uVar1;
  if (lVar2 != 0) {
    FUN_013eddd8(param_1 + 0x11);
  }
  param_1[0x12] = uStack_48;
  param_1[0x13] = local_40;
  param_1[0x11] = local_50;
  FUN_013ed7e0(&local_58,uVar3);
  uVar1 = local_58;
  local_58 = 0;
  lVar2 = param_1[0x14];
  param_1[0x14] = uVar1;
  if (lVar2 != 0) {
    FUN_013ee040(param_1 + 0x15);
  }
  param_1[0x16] = uStack_48;
  param_1[0x17] = local_40;
  param_1[0x15] = local_50;
  return;
}


