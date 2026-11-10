/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4aa68; name: FUN_01a4aa68
 */


void FUN_01a4aa68(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  if (((uVar1 & 1) == 0) || (*(char *)((long)param_1 + 0x3e1) == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a4aab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1,param_2);
  return;
}


