/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d1754; name: FUN_011d1754
 */


void FUN_011d1754(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != param_2) {
    lVar2 = tpidr_el0;
    do {
      *(long *)(param_1 + 0x10) = lVar4 + -0x40;
      lVar5 = *(long *)(lVar4 + -0x38);
      if (lVar5 != 0) {
        plVar1 = *(long **)(lVar4 + -0x20);
        *(long *)(lVar4 + -0x30) = lVar5;
        lVar4 = *(long *)(lVar4 + -0x28) - lVar5;
        uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar3 & 1) != 0) {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar2 + 0x38d480)) {
            FUN_02bcc824(plVar1,lVar5,lVar4,4);
            goto LAB_011d17c8;
          }
        }
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,4);
      }
LAB_011d17c8:
      lVar4 = *(long *)(param_1 + 0x10);
    } while (lVar4 != param_2);
  }
  return;
}


