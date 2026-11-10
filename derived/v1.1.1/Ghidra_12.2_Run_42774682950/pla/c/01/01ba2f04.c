/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba2f04; name: FUN_01ba2f04
 */


void FUN_01ba2f04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0x9e8) = param_2[2];
  *(undefined8 *)(param_1 + 0x9e0) = uVar2;
  *(undefined8 *)(param_1 + 0x9d8) = uVar1;
  return;
}


