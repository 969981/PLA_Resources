/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1fc90; name: FUN_01a1fc90
 */


void FUN_01a1fc90(long param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_01a19dac(param_1,param_1 + 0xee20,param_1 + 0xee30,param_1 + 0xedd0,param_1 + 0xede0,&local_30
               ,&local_40);
  *(undefined8 *)(param_1 + 0xee68) = local_28;
  *(undefined8 *)(param_1 + 0xee60) = local_30;
  *(undefined8 *)(param_1 + 0xee78) = local_38;
  *(undefined8 *)(param_1 + 0xee70) = local_40;
  FUN_01a20444(param_1,&local_30,&local_40);
  return;
}


