/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f30394; name: FUN_02f30394
 */


undefined8 FUN_02f30394(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1[3] + 0x2a5) >> 6 & 1) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x02f303a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  return uVar1;
}


