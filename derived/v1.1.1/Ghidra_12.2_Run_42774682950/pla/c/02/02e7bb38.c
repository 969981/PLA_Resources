/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7bb38; name: FUN_02e7bb38
 */


void FUN_02e7bb38(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,uint *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined4 local_2e0 [2];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 *puStack_2c8;
  int *local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_250;
  uint local_248 [2];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  long local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined1 auStack_180 [256];
  undefined1 *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  byte local_58;
  byte local_44 [4];
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar1 == 0xb) {
    return;
  }
  local_1a8 = 0;
  local_264 = 0;
  local_80 = (undefined1 *)0x0;
  local_78 = 0;
  local_1ac = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1b4 = 0;
  local_1bc = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1d0 = 0x3f800000;
  local_1a0 = 0;
  local_188 = 0;
  local_70 = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  local_63 = 0;
  local_250 = 0;
  local_2e0[0] = 0;
  local_2ac = *(undefined4 *)((long)param_5 + 0x14);
  uStack_2a8 = 0;
  local_2b8 = param_5[1];
  local_2b0 = *(undefined4 *)(param_5 + 2);
  local_2c0 = (int *)*param_5;
  if (local_2c0 != (int *)0x0) {
    *local_2c0 = *local_2c0 + 1;
  }
  uStack_25c = *(undefined4 *)(param_1 + 0x2c);
  local_2e8 = 0;
  local_260 = 0;
  local_58 = 3;
  local_258 = 0;
  local_2f0 = 0x400000000;
  local_248[0] = *param_6;
  local_240 = *(undefined8 *)(param_1 + 0x10);
  local_2d8 = param_3;
  local_2d0 = param_4;
  puStack_2c8 = (undefined1 *)&local_2f0;
  if ((local_248[0] >> 0x18 != 0) &&
     (puStack_2c8 = (undefined1 *)&local_2f0, (local_248[0] & 0xff) == 0x90)) {
    local_44[0] = 1;
    puStack_2c8 = (undefined1 *)&local_2f0;
    uVar2 = FUN_02ecf10c(local_2e0);
    iVar1 = FUN_02ed13fc(param_2,local_248,uVar2,local_44,local_2d0,local_2ac);
    if (iVar1 != 1) goto LAB_02e7bcb8;
    local_58 = local_58 & 0xfe | local_44[0];
  }
  iVar1 = FUN_02ed2bb4(param_2,local_2e0);
  if (iVar1 == 1) {
    (**(code **)(*param_2 + 0x240))(param_2,local_2e0);
  }
LAB_02e7bcb8:
  FUN_02ed2db4();
  if (local_1a8 != 0) {
    local_1a0 = local_1a0 & 0xffffffff00000000;
    FUN_02f59e60(0);
    local_1a0 = local_1a0 & 0xffffffff;
  }
  local_1a8 = 0;
  if (local_80 != (undefined1 *)0x0) {
    local_1a8 = 0;
    local_78 = local_78 & 0xffffffff00000000;
    if (auStack_180 != local_80) {
      FUN_02f59e70(0);
    }
    local_78 = local_78 & 0xffffffff;
  }
  local_80 = (undefined1 *)0x0;
  if (local_2c0 != (int *)0x0) {
    FUN_02e771a8();
  }
  return;
}


