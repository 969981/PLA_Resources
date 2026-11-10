/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f4b4; name: FUN_0021f4b4
 */


void FUN_0021f4b4(long param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,byte param_7)

{
  *(byte *)(param_1 + 0x17) = param_7 & 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  *(undefined2 *)(param_1 + 0x12) = param_4;
  *(undefined2 *)(param_1 + 0x10) = param_5;
  *(undefined1 *)(param_1 + 0x16) = param_6;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


