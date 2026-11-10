/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120b970; name: FUN_0120b970
 */


void FUN_0120b970(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xcb07401a63eb6009;
  local_28 = 0x9997fff9c33176c5;
  local_30 = 0x9997fcf9c33171ac;
  FUN_027bcb98(param_1 + 0xc0,&local_18,&local_28,&local_30,param_2);
  *(undefined8 *)(param_1 + 0xb0) = 2;
  return;
}


