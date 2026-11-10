/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fe588; name: FUN_030fe588
 */


void FUN_030fe588(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1600);
  param_2[1] = *(undefined8 *)(param_1 + 0x1608);
  *param_2 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1610);
  param_2[3] = *(undefined8 *)(param_1 + 0x1618);
  param_2[2] = uVar1;
  return;
}


