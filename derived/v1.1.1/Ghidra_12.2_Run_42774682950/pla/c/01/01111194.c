/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01111194; name: FUN_01111194
 */


undefined8 FUN_01111194(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_0111144c();
  if (((auVar2._0_8_ & 0xff) == 0) && (plVar1 = *(long **)(param_1 + 0x60), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  }
  return auVar2._8_8_;
}


