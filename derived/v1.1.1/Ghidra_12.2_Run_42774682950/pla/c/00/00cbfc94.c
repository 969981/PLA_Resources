/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cbfc94; name: FUN_00cbfc94
 */


void FUN_00cbfc94(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((long *)param_1[6] != (long *)0x0) {
    lVar3 = tpidr_el0;
    plVar6 = (long *)param_1[6];
LAB_00cbfcd4:
    do {
      plVar5 = (long *)*plVar6;
      lVar8 = plVar6[4];
      if (lVar8 != 0) {
        lVar4 = plVar6[5];
        if (lVar4 == lVar8) {
          lVar4 = lVar8;
        }
        else {
          do {
            plVar7 = (long *)(lVar4 + -8);
            lVar4 = lVar4 + -0x20;
            if ((long *)*plVar7 != (long *)0x0) {
              (**(code **)(*(long *)*plVar7 + 0x20))();
            }
          } while (lVar8 != lVar4);
          lVar4 = plVar6[4];
        }
        lVar1 = plVar6[6];
        plVar7 = (long *)plVar6[7];
        plVar6[5] = lVar8;
        uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar2 & 1) != 0) {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar3 + 0x38d480)) {
            FUN_02bcc824(plVar7,lVar4,lVar1 - lVar4,8);
            goto LAB_00cbfd94;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,lVar1 - lVar4,8);
      }
LAB_00cbfd94:
      plVar7 = (long *)param_1[7];
      uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar2 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar6,0x58,8);
          plVar6 = plVar5;
          if (plVar5 == (long *)0x0) break;
          goto LAB_00cbfcd4;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x58,8);
      plVar6 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  lVar8 = param_1[1];
  plVar6 = (long *)param_1[2];
  uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar2 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar3,lVar8 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cbffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar8 << 3,8);
  return;
}


