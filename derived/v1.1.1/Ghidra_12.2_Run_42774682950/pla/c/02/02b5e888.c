/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5e888; name: FUN_02b5e888
 */


void FUN_02b5e888(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  lVar7 = param_1[1];
  lVar2 = tpidr_el0;
  if (lVar7 != lVar6) {
    lVar5 = *(long *)(lVar7 + -0x40);
    do {
      if (lVar5 != 0) {
        lVar4 = *(long *)(lVar7 + -0x38);
        if (lVar4 == lVar5) {
          lVar4 = lVar5;
        }
        else {
          do {
            plVar1 = (long *)(lVar4 + -0x10);
            lVar4 = lVar4 + -0x28;
            if ((long *)*plVar1 != (long *)0x0) {
              (**(code **)(*(long *)*plVar1 + 0x20))();
            }
          } while (lVar5 != lVar4);
          lVar4 = *(long *)(lVar7 + -0x40);
        }
        plVar1 = *(long **)(lVar7 + -0x28);
        *(long *)(lVar7 + -0x38) = lVar5;
        lVar5 = *(long *)(lVar7 + -0x30) - lVar4;
        uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar3 & 1) != 0) {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar2 + 0x38d480)) {
            FUN_02bcc824(plVar1,lVar4,lVar5,8);
            goto LAB_02b5e9ac;
          }
        }
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
      }
LAB_02b5e9ac:
      if (*(long **)(lVar7 + -0x48) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + -0x48) + 0x20))();
      }
      if (lVar7 + -0x60 == lVar6) goto LAB_02b5ea2c;
      lVar5 = *(long *)(lVar7 + -0xa0);
      lVar7 = lVar7 + -0x60;
    } while( true );
  }
  lVar7 = lVar6;
LAB_02b5ea54:
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  param_1[1] = lVar6;
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar7,lVar5 - lVar7,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b5eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar5 - lVar7,8);
  return;
LAB_02b5ea2c:
  lVar7 = *param_1;
  goto LAB_02b5ea54;
}


