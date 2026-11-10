/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57304; name: FUN_02e57304
 */


undefined8 FUN_02e57304(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28;
  puVar1 = (undefined4 *)*param_2;
  while (puVar1 < (undefined4 *)(lVar2 + -0x28)) {
    FUN_02e57eb8(puVar1,puVar1 + 10);
    puVar1 = puVar1 + 10;
  }
  if (*(long *)(lVar2 + -0x20) != 0) {
    FUN_02f59e60(9);
  }
  *(undefined8 *)(lVar2 + -0x20) = 0;
  *(undefined4 *)(lVar2 + -0x28) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return *param_2;
}


