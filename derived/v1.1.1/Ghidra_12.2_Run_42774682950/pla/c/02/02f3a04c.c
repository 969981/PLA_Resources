/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a04c; name: FUN_02f3a04c
 */


void FUN_02f3a04c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_042ad6f8;
  param_1[6] = (long)&PTR_LAB_042ada40;
  plVar3 = (long *)param_1[0x1f];
  param_1[3] = (long)&PTR_LAB_042ad9a8;
  if (plVar3 == (long *)0x0) goto LAB_02f3a080;
  if (*plVar3 == 0) {
LAB_02f3a114:
    FUN_02f59e60(2,plVar3);
  }
  else {
    *(undefined4 *)(plVar3 + 1) = 0;
    FUN_02f59e60(2,*plVar3);
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    plVar3 = (long *)param_1[0x1f];
    if (plVar3 != (long *)0x0) goto LAB_02f3a114;
  }
  param_1[0x1f] = 0;
LAB_02f3a080:
  puVar1 = PTR_DAT_043887a0 + 0x288;
  puVar2 = PTR_DAT_043887a0 + 800;
  *param_1 = (long)(PTR_DAT_043887a0 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  if ((long *)param_1[0x1a] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    if (param_1 + 0x19 != (long *)param_1[0x1a]) {
      (*DAT_0442d158)(0);
    }
    param_1[0x1a] = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
  }
  FUN_02ecfe78(param_1);
  return;
}


