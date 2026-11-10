/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329e608; name: FUN_0329e608
 */


void FUN_0329e608(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0329e418();
                    /* WARNING: Could not recover jumptable at 0x0329e63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,uVar1,param_2);
  return;
}


