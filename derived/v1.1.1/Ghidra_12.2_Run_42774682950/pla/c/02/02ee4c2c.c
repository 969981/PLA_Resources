/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4c2c; name: FUN_02ee4c2c
 */


ulong FUN_02ee4c2c(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28 + -0x28);
  puVar1 = (undefined8 *)*param_2;
  while (puVar1 < puVar2) {
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar1 + 9);
    FUN_02ee4ff0(puVar1,puVar1 + 5);
    puVar1 = puVar1 + 5;
  }
  (**(code **)*puVar2)(puVar2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return *param_2;
}


