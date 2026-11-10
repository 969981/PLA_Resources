/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db82a4; name: FUN_00db82a4
 */


void FUN_00db82a4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long local_78;
  undefined8 *puStack_70;
  long local_68;
  
  local_68 = 0;
  lVar4 = param_1[4];
  lVar3 = param_2;
  local_78 = param_2;
  puStack_70 = param_1;
  if (lVar4 != 0) {
    if (lVar4 != param_4) {
      lVar7 = lVar4;
      do {
        FUN_00db80cc(param_1,lVar3,lVar7);
        lVar7 = lVar7 + 8;
        lVar3 = lVar3 + 8;
      } while (param_4 != lVar7);
    }
    local_68 = lVar3 - param_2 >> 3;
  }
  lVar7 = local_68;
  FUN_00db80cc(param_1,lVar3,param_6);
  lVar3 = lVar3 + param_5 * 8;
  local_68 = lVar7 + (param_5 * 8 >> 3);
  if (lVar4 != 0) {
    lVar2 = param_1[5];
    lVar7 = lVar4 + lVar2 * 8;
    if (lVar7 != param_4) {
      do {
        FUN_00db80cc(param_1,lVar3,param_4);
        param_4 = param_4 + 8;
        lVar3 = lVar3 + 8;
      } while (lVar7 != param_4);
      lVar2 = param_1[5];
    }
    FUN_00db7c40(lVar4,lVar2);
    lVar4 = param_1[6];
    plVar6 = (long *)*param_1;
    uVar5 = param_1[4];
    uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar1 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar6,uVar5,lVar4 << 3,8);
        goto LAB_00db841c;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,lVar4 << 3,8);
  }
LAB_00db841c:
  param_1[4] = param_2;
  param_1[5] = lVar3 - param_2 >> 3;
  param_1[6] = param_3;
  local_78 = 0;
  FUN_00db8060(&local_78);
  return;
}


