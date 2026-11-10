/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0ff04; name: FUN_00b0ff04
 */


void FUN_00b0ff04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == plVar6) {
    plVar5 = plVar6;
  }
  else {
    if ((long *)plVar5[-1] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[-1] + 0x20))();
    }
    if ((long *)plVar5[-5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[-5] + 0x20))();
    }
    if ((long *)plVar5[-10] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[-10] + 0x20))();
    }
    plVar3 = (long *)plVar5[-0xe];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    if (plVar5 + -0xe != plVar6) {
      if ((long *)plVar5[-0xf] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[-0xf] + 0x20))();
      }
      if ((long *)plVar5[-0x13] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[-0x13] + 0x20))();
      }
      if ((long *)plVar5[-0x18] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[-0x18] + 0x20))();
      }
      plVar3 = (long *)plVar5[-0x1c];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      if (plVar5 + -0x1c != plVar6) {
        do {
          if ((long *)plVar5[-0x1d] != (long *)0x0) {
            (**(code **)(*(long *)plVar5[-0x1d] + 0x20))();
          }
          if ((long *)plVar5[-0x21] != (long *)0x0) {
            (**(code **)(*(long *)plVar5[-0x21] + 0x20))();
          }
          if ((long *)plVar5[-0x26] != (long *)0x0) {
            (**(code **)(*(long *)plVar5[-0x26] + 0x20))();
          }
          if ((long *)plVar5[-0x2a] != (long *)0x0) {
            (**(code **)(*(long *)plVar5[-0x2a] + 0x20))();
          }
          plVar5 = plVar5 + -0xe;
        } while (plVar6 + 0x1c != plVar5);
      }
    }
    plVar5 = (long *)*param_1;
  }
  param_1[1] = plVar6;
  lVar1 = param_1[2];
  plVar6 = (long *)param_1[3];
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,plVar5,lVar1 - (long)plVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b10070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,lVar1 - (long)plVar5,8);
  return;
}


