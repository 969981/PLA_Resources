/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae7134; name: FUN_00ae7134
 */


void FUN_00ae7134(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x238);
  param_1[1] = *(undefined8 *)(param_2 + 0x228);
  param_1[3] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x220);
  param_1[2] = *(undefined8 *)(param_2 + 0x230);
  *param_1 = uVar1;
  return;
}


