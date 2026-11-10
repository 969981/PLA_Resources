/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2650; name: thunk_FUN_003f2900
 */


void thunk_FUN_003f2900(void)

{
  long *plVar1;
  long *plStack_28;
  long *plStack_18;
  
  plStack_18 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (plStack_18 != (long *)0x0) {
    *plStack_18 = (long)&PTR_LAB_041572a8;
  }
  FUN_003f6f5c(0,0,&plStack_18);
  plVar1 = plStack_18;
  plStack_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  plStack_28 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (plStack_28 != (long *)0x0) {
    *plStack_28 = (long)&PTR_LAB_041572f8;
  }
  FUN_003f6f5c(0,1,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  return;
}


