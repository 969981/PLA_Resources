/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287a874; name: FUN_0287a874
 */


void FUN_0287a874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04271330;
  param_1[1] = &PTR_LAB_04271418;
  FUN_0287b8e0();
  FUN_02bcf270(param_1 + 7);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x24));
  return;
}


