/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191cf20; name: FUN_0191cf20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0191cf20(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_1 == 0) {
    if (((DAT_043d1c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d1c40), iVar1 != 0)) {
      DAT_043d1be0 = 0;
      FUN_00100250(&LAB_0191d1e8,&DAT_043d1be0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d1c40);
    }
    local_120 = 0x26b4169fe7c3d57;
    pcStack_118 = "backstrike_cam_shake_direction";
    local_100 = 0x61d0785fd700114b;
    pcStack_f8 = "backstrike_cam_shake_amplitude";
    local_110 = 0x1e;
    local_108 = (long *)0x0;
    local_e0 = 0xa7068657235f35c3;
    pcStack_d8 = "backstrike_cam_shake_period";
    local_d0 = 0x1b;
    local_c8 = (long *)0x0;
    local_f0 = 0x1e;
    local_e8 = (long *)0x0;
    local_c0 = 0x4ca573fb794e8b94;
    pcStack_b8 = "backstrike_cam_shake_endFrame";
    local_b0 = 0x1d;
    local_a8 = (long *)0x0;
    local_a0 = 0x4a5fb5091e0f0698;
    pcStack_98 = "backstrike_cam_shake_interpolationType";
    local_90 = 0x26;
    local_88 = (long *)0x0;
    local_80 = 0x9f018de2956218ba;
    pcStack_78 = "backstrike_cam_shake_randomRange";
    local_70 = 0x20;
    local_68 = (long *)0x0;
    local_60 = 0x617146469076bde9;
    pcStack_58 = "backstrike_cam_shake_cameraPosWeight";
    local_50 = 0x24;
    local_48 = (long *)0x0;
    local_40 = 0xad9a80fee22ff30b;
    pcStack_38 = "backstrike_cam_shake_blendRate";
    local_30 = 0x1e;
    local_28 = (long *)0x0;
    FUN_0191d1f8(&local_120);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    puVar2 = &DAT_043d1bf0;
  }
  else if ((DAT_043d1ca0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_043d1ca0);
    if (iVar1 == 0) {
      puVar2 = &DAT_043d1c50;
    }
    else {
      DAT_043d1c60 = 0x33ca3d70a;
      DAT_043d1c80 = 0;
      DAT_043d1c88 = 0;
      DAT_043d1c6c = 1;
      DAT_043d1c68 = 0;
      DAT_043d1c70 = 0;
      DAT_043d1c90 = 0x3f8000003f800000;
      uRam00000000043d1c58 = _UNK_03889a88;
      _DAT_043d1c50 = _DAT_03889a80;
      __cxa_guard_release(&DAT_043d1ca0);
      puVar2 = &DAT_043d1c50;
    }
  }
  else {
    puVar2 = &DAT_043d1c50;
  }
  return puVar2;
}


