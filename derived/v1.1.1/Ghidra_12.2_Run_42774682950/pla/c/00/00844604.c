/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844604; name: FUN_00844604
 */


void FUN_00844604(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  if ((uVar1 & 1) == 0) {
    FUN_008443dc(param_1);
    return;
  }
  return;
}


