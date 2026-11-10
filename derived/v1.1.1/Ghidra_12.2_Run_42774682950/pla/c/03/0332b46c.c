/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332b46c; name: FUN_0332b46c
 */


void FUN_0332b46c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04350898;
  (**(code **)(*(long *)param_1[0xd] + 0x30))();
  FUN_0332a3dc(param_1);
  if (param_1[0xd] != 0) {
    FUN_032d647c();
  }
  FUN_03329ca8(param_1);
  return;
}


