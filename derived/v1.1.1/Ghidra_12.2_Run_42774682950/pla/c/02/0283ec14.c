/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283ec14; name: FUN_0283ec14
 */


void FUN_0283ec14(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[4];
  lVar2 = param_2;
  if (lVar7 != param_4 && lVar7 != 0) {
    lVar4 = lVar7;
    do {
      FUN_0283dcf4(param_1,lVar2,lVar4);
      lVar4 = lVar4 + 0x30;
      lVar2 = lVar2 + 0x30;
    } while (param_4 != lVar4);
  }
  FUN_0283dcf4(param_1,lVar2,param_6);
  lVar2 = lVar2 + param_5 * 0x30;
  if (lVar7 != 0) {
    lVar4 = param_1[5];
    lVar5 = lVar7 + lVar4 * 0x30;
    if (lVar5 != param_4) {
      do {
        FUN_0283dcf4(param_1,lVar2,param_4);
        param_4 = param_4 + 0x30;
        lVar2 = lVar2 + 0x30;
      } while (lVar5 != param_4);
      lVar4 = param_1[5];
    }
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar7 + 0x18);
      do {
        lVar4 = lVar4 + -1;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x20))();
        }
        plVar6 = plVar6 + 6;
      } while (lVar4 != 0);
    }
    lVar7 = param_1[6];
    plVar6 = (long *)*param_1;
    uVar3 = param_1[4];
    uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar1 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar6,uVar3,lVar7 * 0x30,8);
        goto LAB_0283ed90;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,lVar7 * 0x30,8);
  }
LAB_0283ed90:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar2 - param_2 >> 4) * -0x5555555555555555;
  return;
}


