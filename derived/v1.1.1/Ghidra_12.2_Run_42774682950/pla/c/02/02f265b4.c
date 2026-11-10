/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f265b4; name: FUN_02f265b4
 */


void FUN_02f265b4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  plVar1 = (long *)FUN_02eca560(param_1 + 0x68);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f265f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
  return;
}


