/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecf6d8; name: FUN_02ecf6d8
 */


void FUN_02ecf6d8(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ushort *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_042aa348;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      do {
        puVar4 = *(ushort **)(lVar3 + 0x20);
        if ((puVar4 != (ushort *)0x0) && ((ulong)*puVar4 != 0)) {
          lVar6 = (ulong)*puVar4 << 1;
          plVar2 = (long *)((long)puVar4 + ((ulong)((int)lVar6 + 5) & 0x3fffc) + 8);
          do {
            if (*plVar2 != 0) {
              FUN_02f0efb8(DAT_0440a150,*plVar2,lVar3);
              *plVar2 = 0;
              (**(code **)(**(long **)(lVar3 + 0x18) + 0x18))();
            }
            plVar2 = plVar2 + 2;
            lVar6 = lVar6 + -2;
          } while (lVar6 != 0);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
      } while (lVar3 != 0);
      FUN_02f047d4(param_1,0);
      plVar2 = (long *)param_1[2];
    }
    FUN_02ecf6a0(2,plVar2);
    param_1[2] = 0;
  }
  plVar2 = DAT_043f1798;
  lVar3 = tpidr_el0;
  plVar5 = *(long **)(lVar3 + 0x20);
  if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
    *(long **)(lVar3 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  uVar1 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar5,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02ecf7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,0,8);
  return;
}


