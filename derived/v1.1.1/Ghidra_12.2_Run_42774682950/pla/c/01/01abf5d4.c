/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abf5d4; name: FUN_01abf5d4
 */


void FUN_01abf5d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  *(undefined8 *)(param_1 + 0x2d0) = uVar1;
  return;
}


