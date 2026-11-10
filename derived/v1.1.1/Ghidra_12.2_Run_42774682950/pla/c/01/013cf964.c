/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cf964; name: FUN_013cf964
 */


void FUN_013cf964(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  
  FUN_013cf9a0(param_1,~param_2 & 1);
  uVar1 = 2;
  if ((param_2 & 1) == 0) {
    uVar1 = 3;
  }
  FUN_013cf9a0(param_1,uVar1);
  return;
}


