/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136fd78; name: FUN_0136fd78
 */


void FUN_0136fd78(long param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    uVar2 = *param_2;
    bVar4 = *(uint *)((long)plVar7 + 0x1c) < uVar2;
    plVar1 = plVar6;
    if (!bVar4) {
      plVar1 = plVar7;
    }
    for (plVar7 = (long *)plVar7[bVar4]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[bVar4]) {
      bVar4 = *(uint *)((long)plVar7 + 0x1c) < uVar2;
      if (!bVar4) {
        plVar1 = plVar7;
      }
    }
    if ((plVar1 != plVar6) && (*(uint *)((long)plVar1 + 0x1c) <= uVar2)) {
      FUN_0136fee8();
      plVar6 = *(long **)(param_1 + 0x10);
      uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar5 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar1,0x30,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0136fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x30,4);
      return;
    }
  }
  return;
}


