/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01091160; name: FUN_01091160
 */


undefined4 FUN_01091160(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  long *local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  char acStack_50 [32];
  long *local_28;
  
  snprintf(acStack_50,0x20,"PLAY_PV_%03d_%02d_%02d",param_1,param_2 & 0xffff,param_3);
  FUN_01091310(&local_28,acStack_50);
  if (local_28 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)local_28[0xc] == '\0') {
      uVar2 = 0;
    }
    else {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar5 = *(undefined8 *)PTR_DAT_04379c30;
      *(undefined8 *)PTR_DAT_04379c38 = uVar5;
      FUN_0291304c(uVar5,auStack_60,auStack_70,auStack_80);
      uVar4 = FUN_02911ed0(uVar5);
      FUN_029130c4(uVar5,auStack_60,auStack_70,auStack_80,uVar4);
      FUN_02a47560(auStack_a0,&local_28);
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      local_118 = (code *)0x0;
      uVar2 = FUN_02913338(uVar5,auStack_a0,&local_120,0,0,0);
      pcVar1 = local_118;
      if (local_118 == (code *)0x0) {
        local_118 = (code *)0x0;
      }
      else {
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        local_118 = (code *)0x0;
        (*pcVar1)(&local_100);
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_28 == (long *)0x0) {
        return uVar2;
      }
    }
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2;
}


