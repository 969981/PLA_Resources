/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bb30; name: FUN_01a4bb30
 */


void FUN_01a4bb30(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x378);
  param_1[5] = *(undefined8 *)(param_2 + 0x368);
  param_1[7] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x358);
  param_1[1] = *(undefined8 *)(param_2 + 0x348);
  param_1[3] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x340);
  param_1[2] = *(undefined8 *)(param_2 + 0x350);
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x360);
  param_1[6] = *(undefined8 *)(param_2 + 0x370);
  param_1[4] = uVar1;
  return;
}


