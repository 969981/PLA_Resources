/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4d70; name: FUN_02ee4d70
 */


ulong FUN_02ee4d70(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28 + -0x28);
  for (puVar1 = (undefined8 *)*param_2; puVar1 < puVar2; puVar1 = puVar1 + 5) {
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar1 + 9);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + 6);
    *(undefined1 *)((long)puVar1 + 0xc) = *(undefined1 *)((long)puVar1 + 0x34);
    FUN_02ee4f14(puVar1 + 2,puVar1 + 7);
  }
  (**(code **)*puVar2)(puVar2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return *param_2;
}


