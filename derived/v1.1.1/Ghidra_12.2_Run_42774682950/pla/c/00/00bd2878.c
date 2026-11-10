/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bd2878; name: FUN_00bd2878
 */


void FUN_00bd2878(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar5 = param_1 + 3;
  lVar2 = FUN_00bd2abc(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar1 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar5;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar2 * 0x90,0x10);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
  }
  lVar6 = local_78 + (lVar4 - lVar1 >> 4) * 0x10;
  lVar7 = local_78 + lVar2 * 0x90;
  local_70 = lVar6;
  local_60 = lVar7;
  FUN_009af634(plVar5,lVar6,param_2);
  lVar1 = lVar6 + 0x90;
  lVar4 = *param_1;
  lVar2 = param_1[1];
  local_68 = lVar1;
  if (lVar2 == lVar4) {
    local_68 = lVar4;
  }
  else {
    do {
      lVar6 = lVar6 + -0x90;
      lVar2 = lVar2 + -0x90;
      FUN_009af634(plVar5,lVar6,lVar2);
    } while (lVar4 != lVar2);
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar6;
  param_1[1] = lVar1;
  local_60 = param_1[2];
  param_1[2] = lVar7;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_00bd2b28(&local_78);
  lVar1 = local_78;
  if (local_78 != 0) {
    lVar4 = local_60 - local_78;
    plVar5 = (long *)*plStack_58;
    uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar1,lVar4,0x10);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar1,lVar4,0x10);
  }
  return;
}


