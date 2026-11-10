/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2900; name: FUN_003f2900
 */


void FUN_003f2900(void)

{
  long *plVar1;
  long *local_28;
  long *local_18;
  
  local_18 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (local_18 != (long *)0x0) {
    *local_18 = (long)&PTR_LAB_041572a8;
  }
                    /* try { // try from 003f2930 to 003f293f has its CatchHandler @ 003f2a14 */
  FUN_003f6f5c(0,0,&local_18);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  local_28 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (local_28 != (long *)0x0) {
    *local_28 = (long)&PTR_LAB_041572f8;
  }
                    /* try { // try from 003f2990 to 003f299f has its CatchHandler @ 003f29dc */
  FUN_003f6f5c(0,1,&local_28);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  return;
}


