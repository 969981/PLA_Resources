/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c9820; name: FUN_003c9820
 */


void FUN_003c9820(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  param_1 = param_1 + (ulong)param_2 * 0x10;
  if (*(code **)(param_1 + 0x620) != (code *)0x0) {
    (**(code **)(param_1 + 0x620))(*(undefined8 *)(param_1 + 0x618));
  }
  *(undefined8 *)(param_1 + 0x618) = param_3;
  *(undefined8 *)(param_1 + 0x620) = param_4;
  return;
}


