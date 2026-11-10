/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7331c; name: FUN_00d7331c
 */


void FUN_00d7331c(long *param_1,uint param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_350;
  code *local_348;
  undefined1 *local_340;
  undefined1 *puStack_338;
  long *local_330;
  undefined4 local_328;
  undefined1 *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  long *local_2b0;
  undefined4 local_2a8;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  long *local_230;
  undefined4 local_228;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  long *local_1b0;
  undefined4 local_1a8;
  undefined1 auStack_150 [24];
  long *local_138;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  long *local_110;
  undefined4 local_108;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long *local_90;
  undefined4 local_88;
  
  if (param_2 < 6) {
    plVar1 = param_1 + 0x30;
    switch(param_2) {
    case 0:
      local_88 = 0;
      local_b0 = FUN_00d738bc;
      local_a8 = FUN_00d738e8;
      local_a0 = &LAB_00d738ec;
      puStack_98 = &LAB_00d738f8;
      local_90 = param_1;
      FUN_00d2df9c(plVar1,&DAT_043acdb8,&local_b0);
      pcVar2 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = (undefined1 *)0x0;
        puStack_98 = (undefined1 *)0x0;
        local_b0 = (code *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar2)(&local_90);
      }
      if (param_1[0x59] != 0) {
        FUN_0283b1e8(param_1[0x59],&DAT_043ace78);
      }
      lVar4 = *param_1;
      uVar3 = 0;
      break;
    case 1:
      local_108 = 1;
      local_130 = &LAB_00d73904;
      local_120 = &LAB_00d73934;
      local_128 = FUN_00d73930;
      local_118 = &LAB_00d73940;
      local_110 = param_1;
      FUN_00d2df9c(plVar1,&DAT_043acdd8,&local_130);
      pcVar2 = local_128;
      if (local_128 != (code *)0x0) {
        local_118 = (undefined1 *)0x0;
        local_120 = (undefined1 *)0x0;
        local_128 = (code *)0x0;
        local_130 = (undefined1 *)0x0;
        (*pcVar2)(&local_110);
      }
      lVar4 = *param_1;
      uVar3 = 1;
      break;
    case 2:
      if ((char)param_1[0x2e] != '\0') {
        FUN_02a4754c(auStack_150,&DAT_041ec188);
        FUN_028354b0(auStack_150);
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
      }
      local_1a8 = 2;
      local_1d0 = &LAB_00d7394c;
      local_1c8 = FUN_00d73978;
      local_1c0 = &LAB_00d7397c;
      puStack_1b8 = &LAB_00d73988;
      local_1b0 = param_1;
      FUN_00d2df9c(plVar1,&DAT_043acdf8,&local_1d0);
      pcVar2 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (undefined1 *)0x0;
        puStack_1b8 = (undefined1 *)0x0;
        local_1d0 = (undefined1 *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar2)(&local_1b0);
      }
      if (param_1[0x59] != 0) {
        FUN_0283b1e8(param_1[0x59],&DAT_043ace78);
      }
      lVar4 = *param_1;
      uVar3 = 2;
      break;
    case 3:
      if ((char)param_1[0x2e] != '\0') {
        FUN_02a4754c(auStack_150,&DAT_041ec188);
        FUN_028354b0(auStack_150);
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
      }
      local_228 = 3;
      local_250 = &LAB_00d73994;
      local_248 = FUN_00d739c0;
      local_240 = &LAB_00d739c4;
      puStack_238 = &LAB_00d739d0;
      local_230 = param_1;
      FUN_00d2df9c(plVar1,&DAT_043ace18,&local_250);
      pcVar2 = local_248;
      if (local_248 != (code *)0x0) {
        local_240 = (undefined1 *)0x0;
        puStack_238 = (undefined1 *)0x0;
        local_250 = (undefined1 *)0x0;
        local_248 = (code *)0x0;
        (*pcVar2)(&local_230);
      }
      if (param_1[0x59] != 0) {
        FUN_0283b1e8(param_1[0x59],&DAT_043ace78);
      }
      lVar4 = *param_1;
      uVar3 = 3;
      break;
    case 4:
      if (*(char *)((long)param_1 + 0x171) != '\0') {
        FUN_02a4754c(auStack_150,&DAT_041ec1a0);
        FUN_028354b0(auStack_150);
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
      }
      local_2a8 = 4;
      local_2d0 = &LAB_00d739dc;
      local_2c8 = FUN_00d73a08;
      local_2c0 = &LAB_00d73a0c;
      puStack_2b8 = &LAB_00d73a18;
      local_2b0 = param_1;
      FUN_00d2df9c(plVar1,&DAT_043ace38,&local_2d0);
      pcVar2 = local_2c8;
      if (local_2c8 != (code *)0x0) {
        local_2c0 = (undefined1 *)0x0;
        puStack_2b8 = (undefined1 *)0x0;
        local_2d0 = (undefined1 *)0x0;
        local_2c8 = (code *)0x0;
        (*pcVar2)(&local_2b0);
      }
      lVar4 = *param_1;
      uVar3 = 4;
      break;
    case 5:
      if (*(char *)((long)param_1 + 0x171) != '\0') {
        FUN_02a4754c(auStack_150,&DAT_041ec1a0);
        FUN_028354b0(auStack_150);
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
      }
      local_328 = 5;
      local_350 = &LAB_00d73a24;
      local_348 = FUN_00d73a50;
      local_340 = &LAB_00d73a54;
      puStack_338 = &LAB_00d73a60;
      local_330 = param_1;
      FUN_00d2df9c(plVar1,&DAT_043ace58,&local_350);
      pcVar2 = local_348;
      if (local_348 != (code *)0x0) {
        local_340 = (undefined1 *)0x0;
        puStack_338 = (undefined1 *)0x0;
        local_350 = (undefined1 *)0x0;
        local_348 = (code *)0x0;
        (*pcVar2)(&local_330);
      }
      lVar4 = *param_1;
      uVar3 = 5;
    }
    (**(code **)(lVar4 + 0x60))(param_1,uVar3);
  }
  return;
}


