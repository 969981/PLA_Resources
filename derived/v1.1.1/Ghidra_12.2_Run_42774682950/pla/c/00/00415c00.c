/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415c00; name: FUN_00415c00
 */


void FUN_00415c00(undefined8 param_1)

{
  long local_38 [2];
  undefined8 local_28;
  
  if (DAT_0439e708 == 0) {
    DAT_0439e708 = FUN_00415d20();
  }
  (**(code **)(DAT_0439e708 + 0x10))(local_38);
  local_28 = param_1;
  (**(code **)(local_38[0] + 0x20))(local_38);
  return;
}


