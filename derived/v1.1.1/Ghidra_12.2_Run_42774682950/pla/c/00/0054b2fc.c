/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054b2fc; name: FUN_0054b2fc
 */


void FUN_0054b2fc(void)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (local_18 != (long *)0x0) {
    *local_18 = (long)(PTR_DAT_04374ce8 + 0x10);
  }
                    /* try { // try from 0054b32c to 0054b333 has its CatchHandler @ 0054b374 */
  DAT_0439ed30 = FUN_0050088c(&local_18);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  return;
}


