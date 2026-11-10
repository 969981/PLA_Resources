/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326940; name: FUN_03326940
 */


undefined8 FUN_03326940(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    FUN_03326dfc(param_3,param_2,*(undefined1 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x03326988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1);
  return uVar1;
}


