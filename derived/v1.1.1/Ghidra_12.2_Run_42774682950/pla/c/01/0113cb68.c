/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113cb68; name: FUN_0113cb68
 */


undefined1  [16] FUN_0113cb68(long param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = FUN_0113d864();
  if (((auVar3._0_8_ & 0xff) == 0) && (plVar1 = *(long **)(param_1 + 0x60), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x50))(plVar1,&DAT_03a7902c);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar3._8_8_;
  return auVar2;
}


