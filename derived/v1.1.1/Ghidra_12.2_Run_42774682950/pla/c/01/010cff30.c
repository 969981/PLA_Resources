/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cff30; name: FUN_010cff30
 */


void FUN_010cff30(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555) < param_2) {
    FUN_010cffa8(auStack_48,param_2,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
    FUN_010d003c(param_1,auStack_48);
    FUN_010d00e4(auStack_48);
  }
  return;
}


