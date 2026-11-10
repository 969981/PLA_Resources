/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dde4c; name: FUN_013dde4c
 */


bool FUN_013dde4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_013e199c(*(undefined8 *)*param_1);
  uVar2 = FUN_013e199c(*(undefined8 *)*param_1,param_4);
  return uVar1 < uVar2;
}


