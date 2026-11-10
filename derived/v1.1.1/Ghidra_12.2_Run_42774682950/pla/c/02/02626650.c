/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02626650; name: FUN_02626650
 */


void FUN_02626650(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0262241c(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_026266f4(param_1,0);
  }
  else {
    FUN_02622448(param_2);
    FUN_009d0e68(param_1);
  }
  return;
}


