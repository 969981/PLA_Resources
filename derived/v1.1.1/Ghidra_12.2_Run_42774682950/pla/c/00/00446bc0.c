/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446bc0; name: FUN_00446bc0
 */


undefined8 FUN_00446bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00413a60(*param_1,*param_2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (param_1[1] == 0 && param_2[1] == 0) {
    return 0;
  }
  uVar1 = FUN_0041ecf0();
  return uVar1;
}


