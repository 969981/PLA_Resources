/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a068; name: FUN_0281a068
 */


void FUN_0281a068(long param_1)

{
  undefined4 local_14;
  
  FUN_0280fcd0(*(undefined8 *)(param_1 + 0x8d0),*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x940) = 0xffffffff;
  if (*(code **)(param_1 + 0x510) != (code *)0x0) {
    local_14 = 1;
    (**(code **)(param_1 + 0x510))(param_1 + 0x530,&local_14);
  }
  return;
}


