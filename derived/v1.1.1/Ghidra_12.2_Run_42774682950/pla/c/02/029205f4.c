/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029205f4; name: FUN_029205f4
 */


void FUN_029205f4(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar8 = param_1 + 3;
  *plVar8 = (long)param_2;
  param_1[4] = 0x1fffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8,8);
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0xb8))();
  }
  lVar9 = *plVar8;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    *puVar5 = param_3;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar5 = param_3;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  lVar9 = *param_1;
  lVar6 = param_1[1];
  puVar1 = puVar5 + 1;
  if (lVar6 != lVar9) {
    do {
      puVar5 = puVar5 + -1;
      lVar6 = lVar6 + -8;
      FUN_0292380c(plVar8,puVar5,lVar6);
    } while (lVar9 != lVar6);
    lVar9 = *param_1;
  }
  lVar6 = param_1[2];
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar1;
  if (lVar9 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar7 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar8,lVar9,lVar6 - lVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0292077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar6 - lVar9,8);
  return;
}


