/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081a7a0; name: FUN_0081a7a0
 */


void FUN_0081a7a0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  if ((param_2 == (long *)0x0) &&
     (param_2 = (long *)FUN_0081edbc(*(undefined8 *)PTR_DAT_04377b08), param_2 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0081a7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1,param_3);
  return;
}


