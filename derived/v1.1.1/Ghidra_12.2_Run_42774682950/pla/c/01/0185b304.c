/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185b304; name: FUN_0185b304
 */


void FUN_0185b304(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 local_18;
  
  local_18 = *param_3;
  FUN_0185ae98(*(undefined4 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2c),
               *(undefined1 *)(param_1 + 0x6c),param_2 & 1,&local_18);
  return;
}


