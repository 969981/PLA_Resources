/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad0c28; name: FUN_00ad0c28
 */


void FUN_00ad0c28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x3b8) = param_2[1];
  *(undefined8 *)(param_1 + 0x3c8) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x3b0) = *param_2;
  *(undefined8 *)(param_1 + 0x3c0) = uVar1;
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  return;
}


