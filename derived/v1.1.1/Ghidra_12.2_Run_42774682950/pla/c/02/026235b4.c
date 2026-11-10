/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026235b4; name: FUN_026235b4
 */


void FUN_026235b4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0262241c(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_0262371c(param_1,0);
  }
  else {
    FUN_02622448(param_2);
    FUN_02623618(param_1);
  }
  return;
}


