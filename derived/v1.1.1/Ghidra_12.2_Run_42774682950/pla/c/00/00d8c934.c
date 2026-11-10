/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8c934; name: FUN_00d8c934
 */


void FUN_00d8c934(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  param_1[3] = *(undefined8 *)(param_2 + 0xb0);
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


