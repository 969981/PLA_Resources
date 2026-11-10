/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032cf34; name: FUN_0032cf34
 */


void FUN_0032cf34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    (**(code **)(param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0x70),uVar1);
  }
  if (*(code **)(param_1 + 0x68) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0032cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))(param_1,*(undefined8 *)(param_1 + 0x70),uVar1);
  return;
}


