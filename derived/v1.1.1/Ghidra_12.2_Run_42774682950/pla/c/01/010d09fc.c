/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d09fc; name: FUN_010d09fc
 */


void FUN_010d09fc(long *param_1)

{
  ulong uVar1;
  undefined1 auStack_48 [40];
  
  uVar1 = (param_1[1] - *param_1 >> 4) * -0x5555555555555555;
  if (uVar1 < (ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555)) {
    FUN_010cffa8(auStack_48,uVar1,uVar1,param_1 + 3);
    FUN_010d003c(param_1,auStack_48);
    FUN_010d00e4(auStack_48);
  }
  return;
}


