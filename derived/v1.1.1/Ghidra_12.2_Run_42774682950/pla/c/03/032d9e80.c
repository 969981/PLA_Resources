/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d9e80; name: FUN_032d9e80
 */


undefined8 FUN_032d9e80(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1,param_2);
  return uVar1;
}


