/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0fde8; name: FUN_00b0fde8
 */


void FUN_00b0fde8(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  long local_28;
  
  *param_1 = 0;
  if (((*param_2 == 0) || (pcVar5 = *(char **)(*param_2 + 0x60), pcVar5 == (char *)0x0)) ||
     (*pcVar5 == '\0')) {
    plVar2 = (long *)FUN_00938550();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar3 = (long *)*param_1;
    *param_1 = (long)plVar2;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0fe44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar4;
    FUN_02a47cd8(&local_28,uVar4,pcVar5);
    plVar2 = (long *)*param_1;
    *param_1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *param_1 = local_28;
  }
  return;
}


