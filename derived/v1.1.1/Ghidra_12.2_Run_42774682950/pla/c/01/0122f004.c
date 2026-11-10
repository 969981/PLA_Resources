/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122f004; name: FUN_0122f004
 */


void FUN_0122f004(long param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  if (*(code **)(param_1 + 0x5c0) != (code *)0x0) {
    local_14 = 0;
    local_18 = 2;
    (**(code **)(param_1 + 0x5c0))(param_1 + 0x5e0,&local_14,&local_18);
  }
  FUN_00d428b0(param_1,0);
  FUN_00d42438(param_1,1,1);
  return;
}


