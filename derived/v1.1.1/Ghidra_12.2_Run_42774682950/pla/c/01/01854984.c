/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01854984; name: FUN_01854984
 */


void FUN_01854984(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar4 = lVar5;
  }
  else {
    if (*(long **)(lVar4 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0x18) + 0x20))();
    }
    if (*(long **)(lVar4 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0x38) + 0x20))();
    }
    if (*(long **)(lVar4 + -0x58) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0x58) + 0x20))();
    }
    if (*(long **)(lVar4 + -0x78) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0x78) + 0x20))();
    }
    if (*(long **)(lVar4 + -0x98) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0x98) + 0x20))();
    }
    if (lVar4 + -0x110 != lVar5) {
      if (*(long **)(lVar4 + -0x128) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x128) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x148) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x148) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x168) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x168) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x188) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x188) + 0x20))();
      }
      if (*(long **)(lVar4 + -0x1a8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x1a8) + 0x20))();
      }
      if (lVar4 + -0x220 != lVar5) {
        do {
          if (*(long **)(lVar4 + -0x238) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x238) + 0x20))();
          }
          if (*(long **)(lVar4 + -600) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -600) + 0x20))();
          }
          if (*(long **)(lVar4 + -0x278) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x278) + 0x20))();
          }
          if (*(long **)(lVar4 + -0x298) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x298) + 0x20))();
          }
          if (*(long **)(lVar4 + -0x2b8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x2b8) + 0x20))();
          }
          lVar4 = lVar4 + -0x110;
        } while (lVar5 + 0x220 != lVar4);
      }
    }
    lVar4 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar4,lVar5 - lVar4,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01854b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,0x10);
  return;
}


