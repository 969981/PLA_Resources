/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c33c; name: FUN_0087c33c
 */


void FUN_0087c33c(undefined8 param_1,undefined4 *param_2)

{
  (**(code **)PTR_DAT_04378920)();
  (**(code **)PTR_DAT_04378930)(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x0087c398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378928)(param_1,*(undefined8 *)(param_2 + 2),param_2[1]);
  return;
}


