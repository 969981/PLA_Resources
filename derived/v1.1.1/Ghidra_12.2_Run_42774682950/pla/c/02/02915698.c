/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02915698; name: FUN_02915698
 */


void FUN_02915698(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xd));
  if ((long *)param_1[6] != (long *)0x0) {
    lVar6 = tpidr_el0;
    plVar7 = (long *)param_1[6];
    do {
      while( true ) {
        plVar8 = (long *)*plVar7;
        pcVar5 = (code *)plVar7[9];
        if (pcVar5 == (code *)0x0) {
          plVar3 = (long *)plVar7[4];
        }
        else {
          plVar7[10] = 0;
          plVar7[0xb] = 0;
          plVar7[8] = 0;
          plVar7[9] = 0;
          (*pcVar5)(plVar7 + 0xc);
          plVar3 = (long *)plVar7[4];
        }
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))();
        }
        plVar3 = (long *)param_1[7];
        uVar4 = (**(code **)(*plVar3 + 0xc0))(plVar3);
        if ((uVar4 & 1) != 0) break;
LAB_02915760:
        (**(code **)(*plVar3 + 0x18))(plVar3,plVar7,0xd0,0x10);
        plVar7 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_02915808;
      }
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02915760;
      FUN_02bcc824(plVar3,plVar7,0xd0,0x10);
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_02915808:
  lVar6 = *param_1;
  *param_1 = 0;
  if (lVar6 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar7 = (long *)param_1[2];
  uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar4 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar6,lVar1 << 3,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029158a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar1 << 3,0x10);
  return;
}


