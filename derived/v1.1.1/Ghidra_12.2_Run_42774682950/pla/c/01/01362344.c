/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01362344; name: FUN_01362344
 */


void FUN_01362344(long param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(byte *)(param_1 + 0xc1) = param_3 & 1;
  uVar1 = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x68) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}


