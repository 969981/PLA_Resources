/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f22f8; name: FUN_001f22f8
 */


undefined8 FUN_001f22f8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x4a8);
  FUN_001e3718((undefined8 *)(param_2 + 0x4a8),*(undefined8 *)(param_2 + 0x4b0),param_1,
               param_1 + 0x30);
  if ((**(int **)(param_2 + 0x660) == 1) &&
     (puVar1 = *(undefined8 **)(param_2 + 0x4a8), puVar2 != puVar1)) {
    *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) & 0xfb;
    FUN_001e6b54(*puVar1,0,6);
  }
  return 0;
}


