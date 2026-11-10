/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413130; name: FUN_00413130
 */


undefined8 FUN_00413130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00411b00();
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_00411730(param_1,param_1,param_4);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


