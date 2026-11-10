/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282c160; name: FUN_0282c160
 */


void FUN_0282c160(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

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
      FUN_0282bf28(param_1,lVar2,lVar4);
      lVar4 = lVar4 + 0x28;
      lVar2 = lVar2 + 0x28;
    } while (param_4 != lVar4);
  }
  FUN_0282bf28(param_1,lVar2,param_5);
  lVar2 = lVar2 + 0x28;
  if (lVar7 != 0) {
    lVar4 = param_1[5];
    lVar5 = lVar7 + lVar4 * 0x28;
    if (lVar5 != param_4) {
      do {
        FUN_0282bf28(param_1,lVar2,param_4);
        param_4 = param_4 + 0x28;
        lVar2 = lVar2 + 0x28;
      } while (lVar5 != param_4);
      lVar4 = param_1[5];
    }
    if (lVar4 != 0) {
      if (*(long **)(lVar7 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + 0x18) + 0x20))();
      }
      if (lVar4 != 1) {
        lVar4 = lVar4 + -2;
        if (*(long **)(lVar7 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + 0x40) + 0x20))();
        }
        if (lVar4 != 0) {
          plVar6 = (long *)(lVar7 + 0x68);
          do {
            lVar4 = lVar4 + -1;
            if ((long *)*plVar6 != (long *)0x0) {
              (**(code **)(*(long *)*plVar6 + 0x20))();
            }
            plVar6 = plVar6 + 5;
          } while (lVar4 != 0);
        }
      }
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
        FUN_02bcc824(plVar6,uVar3,lVar7 * 0x28,8);
        goto LAB_0282c2dc;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,lVar7 * 0x28,8);
  }
LAB_0282c2dc:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar2 - param_2 >> 3) * -0x3333333333333333;
  return;
}


