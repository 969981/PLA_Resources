/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271730; name: FUN_00271730
 */


void FUN_00271730(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0027175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_04372e90 + 0x10))
            (*(long **)PTR_DAT_04372e90,(param_1 + param_3) - 1U & -param_3,param_2);
  return;
}


