/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00680c24; name: FUN_00680c24
 */


void FUN_00680c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    *param_2 = 0;
    *param_1 = uVar1;
  }
  return;
}


