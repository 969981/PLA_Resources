/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a747c0; name: FUN_02a747c0
 */


void FUN_02a747c0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1[0xb];
  *param_1 = (long)&PTR_FUN_0427edf8;
  param_1[9] = (long)&PTR_LAB_0427ee38;
  param_1[0xb] = 0;
  if (lVar6 != 0) {
    plVar2 = (long *)param_1[0xc];
    lVar3 = param_1[0xd];
    lVar7 = param_1[0xe];
    uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar5 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar6,lVar3,lVar7);
        goto LAB_02a74874;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,lVar3,lVar7);
  }
LAB_02a74874:
  puVar1 = PTR_DAT_04388070 + 0x50;
  *param_1 = (long)(PTR_DAT_04388070 + 0x10);
  param_1[9] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x02a748a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xa8))();
  return;
}


