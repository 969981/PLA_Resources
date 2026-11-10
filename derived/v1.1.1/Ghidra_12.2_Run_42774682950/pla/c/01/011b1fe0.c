/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b1fe0; name: FUN_011b1fe0
 */


void FUN_011b1fe0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x220) = *param_2;
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  *(undefined1 *)(param_1 + 0x20a) = 1;
  return;
}


