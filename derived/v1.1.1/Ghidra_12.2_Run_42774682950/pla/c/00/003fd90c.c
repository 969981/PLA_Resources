/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd90c; name: FUN_003fd90c
 */


long FUN_003fd90c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_28;
  
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x38);
  if (lVar2 != 0) {
    local_28 = *param_2;
    *param_2 = 0;
                    /* try { // try from 003fd944 to 003fd953 has its CatchHandler @ 003fd97c */
    FUN_003fd99c(lVar2,param_1,&local_28);
    lVar1 = local_28;
    local_28 = 0;
    if (lVar1 != 0) {
                    /* try { // try from 003fd960 to 003fd963 has its CatchHandler @ 003fd978 */
      FUN_003fef10();
    }
  }
  return lVar2;
}


