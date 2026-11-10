/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032e954; name: FUN_0032e954
 */


bool FUN_0032e954(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 auVar1 [12];
  
  auVar1 = FUN_00335f6c();
  *param_4 = auVar1._0_8_;
  *(undefined8 *)(auVar1._0_8_ + 0x10) = param_3;
  return (auVar1._8_4_ & 0xff) != 0;
}


