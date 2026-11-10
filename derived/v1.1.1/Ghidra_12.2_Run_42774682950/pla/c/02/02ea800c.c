/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea800c; name: FUN_02ea800c
 */


void FUN_02ea800c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    FUN_02ea7e60();
                    /* WARNING: Could not recover jumptable at 0x02ea8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0442d150)(0,param_1);
    return;
  }
  return;
}


