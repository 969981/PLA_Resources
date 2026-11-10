/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027db9f8; name: FUN_027db9f8
 */


void FUN_027db9f8(long *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 1;
                    /* WARNING: Could not recover jumptable at 0x027dba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}


