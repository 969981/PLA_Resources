/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00447580; name: FUN_00447580
 */


undefined8 FUN_00447580(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_00447fa0();
    return uVar1;
  }
  return 0;
}


