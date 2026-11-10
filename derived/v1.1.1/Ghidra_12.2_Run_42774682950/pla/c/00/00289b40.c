/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00289b40; name: FUN_00289b40
 */


undefined8 FUN_00289b40(long param_1)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0xfc0) = 0;
  *(undefined **)(param_1 + 0xfc8) = PTR_LAB_04372ff0;
  puVar1 = PTR_LAB_04372ff8;
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  *(undefined **)(param_1 + 0xfe8) = puVar1;
  *(undefined8 *)(param_1 + 0xff0) = 0;
  *(undefined8 *)(param_1 + 0xff8) = 0;
  *(undefined8 *)(param_1 + 0x1000) = 0;
  puVar1 = PTR_LAB_04373000;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined **)(param_1 + 0x1010) = puVar1;
  return 1;
}


