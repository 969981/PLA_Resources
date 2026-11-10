/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd892c; name: FUN_02dd892c
 */


void FUN_02dd892c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_0434a080;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  lVar6 = lVar4;
  if (lVar5 != lVar4) {
    do {
      lVar6 = lVar5 + -0x70;
      *(undefined4 *)(lVar5 + -0x18) = 0;
      if ((-1 < *(int *)(lVar5 + -0x14)) && (*(long *)(lVar5 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar5 + -0x20),*(int *)(lVar5 + -0x14) << 2);
      }
      *(undefined8 *)(lVar5 + -0x20) = 0;
      *(undefined4 *)(lVar5 + -0x14) = 0x80000000;
      lVar5 = lVar6;
    } while (lVar4 != lVar6);
    lVar6 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar6,lVar4 - lVar6,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02dd8a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar4 - lVar6,0x10);
  return;
}


