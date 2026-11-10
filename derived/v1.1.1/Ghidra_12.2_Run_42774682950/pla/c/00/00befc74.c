/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00befc74; name: FUN_00befc74
 */


void FUN_00befc74(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long local_18;
  
  *param_1 = 0;
  pcVar4 = *(char **)(param_2 + 8);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    plVar3 = (long *)FUN_00938550();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
    plVar5 = (long *)*param_1;
    *param_1 = (long)plVar3;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00befd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5);
      return;
    }
  }
  else {
    if ((*PTR_DAT_04379cd0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0);
      if (iVar1 != 0) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar2;
    FUN_02a47cd8(&local_18,uVar2,pcVar4);
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *param_1 = local_18;
  }
  return;
}


