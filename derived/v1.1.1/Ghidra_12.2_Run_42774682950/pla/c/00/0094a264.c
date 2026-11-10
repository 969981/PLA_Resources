/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094a264; name: FUN_0094a264
 */


void FUN_0094a264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_041c2be8;
  param_1[1] = &PTR_LAB_041c2cc8;
  FUN_0094af34();
  FUN_02bcf270(param_1 + 7);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x24));
  return;
}


