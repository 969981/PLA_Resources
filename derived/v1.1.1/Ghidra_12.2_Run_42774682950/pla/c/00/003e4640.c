/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4640; name: FUN_003e4640
 */


void FUN_003e4640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  free(*(void **)(param_1 + 0x68));
  uVar1 = FUN_002ec2d0(param_2);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}


