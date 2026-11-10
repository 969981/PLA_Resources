/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d9570; name: FUN_005d9570
 */


void FUN_005d9570(void)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (local_18 != (long *)0x0) {
    *local_18 = (long)&PTR_LAB_0418dbf0;
  }
                    /* try { // try from 005d959c to 005d95ab has its CatchHandler @ 005d95e4 */
  FUN_003f6f5c(1,0,&local_18);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  return;
}


