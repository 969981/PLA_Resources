/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce92dc; name: FUN_00ce92dc
 */


void FUN_00ce92dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_88 [2];
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  if ((ulong)param_1[8] < 0x80) {
    plVar4 = param_1 + 10;
    uVar5 = param_1[2] - param_1[1] >> 3;
    lVar2 = param_1[3] - *param_1;
    if ((ulong)(lVar2 >> 3) <= uVar5) {
      local_50 = 0;
      lVar1 = lVar2 >> 2;
      if (lVar2 == 0) {
        lVar1 = 1;
      }
      local_48 = param_1 + 4;
      local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar1 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
      }
      local_60 = local_68 + uVar5 * 8;
      local_50 = local_68 + lVar1 * 8;
      local_58 = local_60;
      local_88[0] = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0x1000,8);
      if (local_88[0] == 0) {
        (**(code **)(*(long *)*plVar4 + 0xb8))();
      }
      uStack_70 = 0x80;
      local_78 = plVar4;
      FUN_00ce8a58(&local_68,local_88);
      local_88[1] = 0;
      lVar2 = param_1[2];
      if (lVar2 == param_1[1]) {
        lVar1 = lVar2;
      }
      else {
        do {
          lVar2 = lVar2 + -8;
          FUN_00ce8ee8(&local_68,lVar2);
        } while (lVar2 != param_1[1]);
        lVar1 = param_1[2];
      }
      lVar3 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      param_1[2] = local_58;
      lVar6 = param_1[3];
      param_1[3] = local_50;
      local_68 = lVar3;
      local_60 = lVar2;
      local_58 = lVar1;
      local_50 = lVar6;
      FUN_00ce9624(local_88 + 1);
      if (lVar2 != lVar1) {
        local_58 = lVar1 + ((lVar1 - lVar2) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (lVar3 == 0) {
        return;
      }
      lVar6 = lVar6 - lVar3;
      plVar4 = (long *)*local_48;
      uVar5 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar5 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar4,lVar3,lVar6,8);
          return;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar6,8);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0x1000,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar4 + 0xb8))();
      }
      FUN_00ce85d4(param_1,&local_68);
      return;
    }
    local_68 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0x1000,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar4 + 0xb8))();
    }
    FUN_00ce8814(param_1,&local_68);
  }
  else {
    param_1[8] = param_1[8] - 0x80;
  }
  local_68 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_00ce8394(param_1,&local_68);
  return;
}


