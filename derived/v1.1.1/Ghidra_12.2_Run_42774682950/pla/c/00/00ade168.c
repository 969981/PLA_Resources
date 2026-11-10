/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ade168; name: FUN_00ade168
 */


void FUN_00ade168(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  for (puVar2 = *(undefined8 **)(param_1 + 0x78); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00ae346c(*puVar2);
  }
  FUN_00adc498(param_1);
  return;
}


