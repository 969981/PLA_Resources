/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db7e6c; name: FUN_00db7e6c
 */


void FUN_00db7e6c(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_58;
  undefined8 *puStack_50;
  long local_48;
  
  local_48 = 0;
  lVar4 = param_1[4];
  lVar3 = param_2;
  puStack_50 = param_1;
  if (lVar4 == 0) {
    local_48 = 0;
  }
  else {
    local_58 = param_2;
    if (lVar4 == param_3) {
      local_48 = 0;
    }
    else {
      lVar6 = lVar4;
      do {
        FUN_00db80cc(param_1,lVar3,lVar6);
        lVar6 = lVar6 + 8;
        lVar3 = lVar3 + 8;
      } while (param_3 != lVar6);
      local_48 = lVar3 - param_2 >> 3;
    }
    lVar2 = param_1[5];
    lVar6 = lVar4 + lVar2 * 8;
    if (lVar6 != param_3) {
      do {
        FUN_00db80cc(param_1,lVar3,param_3);
        param_3 = param_3 + 8;
        lVar3 = lVar3 + 8;
      } while (lVar6 != param_3);
      lVar2 = param_1[5];
    }
    FUN_00db7c40(lVar4,lVar2);
    lVar4 = param_1[6];
    plVar7 = (long *)*param_1;
    uVar5 = param_1[4];
    uVar1 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar1 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,uVar5,lVar4 << 3,8);
        goto LAB_00db7ea4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar5,lVar4 << 3,8);
  }
LAB_00db7ea4:
  param_1[4] = param_2;
  param_1[5] = lVar3 - param_2 >> 3;
  param_1[6] = 8;
  local_58 = 0;
  FUN_00db8060(&local_58);
  return;
}


