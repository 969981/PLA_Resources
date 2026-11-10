/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019dc030; name: FUN_019dc030
 */


void FUN_019dc030(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x208) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x248) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  return;
}


