/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002043b0; name: FUN_002043b0
 */


void FUN_002043b0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0xe));
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_001e381c(param_1 + 6,0);
    FUN_002044d4(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 1;
  }
  return;
}


