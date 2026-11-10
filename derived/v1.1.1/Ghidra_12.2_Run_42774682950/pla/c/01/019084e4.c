/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019084e4; name: FUN_019084e4
 */


void FUN_019084e4(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x58) = *param_2;
  *(undefined1 *)(param_1 + 0x59) = param_2[1];
  *(byte *)(param_1 + 0x5a) = param_2[3] ^ 1;
  *(byte *)(param_1 + 0x5d) = (byte)param_2[0x30] >> 1 & 1;
  *(undefined1 *)(param_1 + 0x5f) = param_2[7];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}


