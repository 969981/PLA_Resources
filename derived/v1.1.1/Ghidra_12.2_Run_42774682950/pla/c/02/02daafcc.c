/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02daafcc; name: FUN_02daafcc
 */


void FUN_02daafcc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x234);
  uVar2 = *(undefined8 *)(param_2 + 0x23c);
  uVar3 = *(undefined8 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x24c);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *param_1 = uVar1;
  return;
}


