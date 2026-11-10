/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c194c8; name: FUN_02c194c8
 */


void FUN_02c194c8(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  plVar8 = (long *)(param_1 + 0x88);
  plVar3 = *(long **)(param_1 + 0x90);
  lVar5 = (long)plVar3 - *plVar8 >> 3;
  uVar6 = lVar5 * 0x6db6db6db6db6db7;
  if (uVar6 < param_2) {
    FUN_02c19e9c(plVar8,param_2 + lVar5 * -0x6db6db6db6db6db7);
  }
  else {
    if (uVar6 != param_2) {
      plVar10 = (long *)(*plVar8 + param_2 * 0x38);
      if (plVar10 != plVar3) {
        lVar5 = tpidr_el0;
        lVar9 = plVar3[-7];
        plVar2 = plVar3 + -7;
        do {
          if (lVar9 != 0) {
            lVar4 = plVar3[-5];
            plVar1 = (long *)plVar3[-4];
            plVar3[-6] = lVar9;
            uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
            if ((uVar6 & 1) != 0) {
              if (*(char *)(lVar5 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar5 + 0x38d488) = 1;
                *(undefined8 *)(lVar5 + 0x38d478) = 0;
                *(undefined8 *)(lVar5 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar5 + 0x38d480)) {
                FUN_02bcc824(plVar1,lVar9,lVar4 - lVar9,8);
                goto LAB_02c1957c;
              }
            }
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar4 - lVar9,8);
          }
LAB_02c1957c:
          if (plVar10 == plVar2) break;
          lVar9 = plVar2[-7];
          plVar3 = plVar2;
          plVar2 = plVar2 + -7;
        } while( true );
      }
      *(long **)(param_1 + 0x90) = plVar10;
    }
    if (param_2 == 0) goto LAB_02c196c8;
  }
  lVar5 = param_2 * 0x38;
  do {
    param_2 = param_2 - 1;
    lVar9 = *plVar8 + lVar5;
    lVar4 = *(long *)(lVar9 + -0x38);
    uVar6 = (1L << (param_2 & 0x3f)) << (param_2 & 0x3f);
    uVar7 = *(long *)(lVar9 + -0x30) - lVar4 >> 3;
    if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
      FUN_02c1a530((long *)(lVar9 + -0x38),uVar6 - uVar7);
    }
    else if (uVar7 > uVar6) {
      *(ulong *)(lVar9 + -0x30) = lVar4 + uVar6 * 8;
    }
    lVar5 = lVar5 + -0x38;
  } while (param_2 != 0);
LAB_02c196c8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}


