/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152ad48; name: FUN_0152ad48
 */


void FUN_0152ad48(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar6 = param_1 + 3;
  lVar2 = FUN_0152af88(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  lVar1 = *param_1;
  lVar5 = param_1[1];
  local_60 = 0;
  lVar3 = 0;
  plStack_58 = plVar6;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar2 * 0x30,8), lVar3 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
  }
  lVar7 = lVar3 + (lVar5 - lVar1 >> 4) * 0x10;
  lVar2 = lVar3 + lVar2 * 0x30;
  local_78 = lVar3;
  local_70 = lVar7;
  local_60 = lVar2;
  FUN_00b14ae4(plVar6,lVar7,param_2);
  lVar1 = lVar7 + 0x30;
  lVar5 = *param_1;
  lVar3 = param_1[1];
  local_68 = lVar1;
  if (lVar3 == lVar5) {
    local_68 = lVar5;
  }
  else {
    do {
      lVar7 = lVar7 + -0x30;
      lVar3 = lVar3 + -0x30;
      FUN_00b14ae4(plVar6,lVar7,lVar3);
    } while (lVar5 != lVar3);
    lVar5 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar7;
  param_1[1] = lVar1;
  local_60 = param_1[2];
  param_1[2] = lVar2;
  local_78 = lVar5;
  local_70 = lVar5;
  FUN_0152afec(&local_78);
  lVar1 = local_78;
  if (local_78 != 0) {
    lVar5 = local_60 - local_78;
    plVar6 = (long *)*plStack_58;
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar1,lVar5,8);
        return;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1,lVar5,8);
  }
  return;
}


