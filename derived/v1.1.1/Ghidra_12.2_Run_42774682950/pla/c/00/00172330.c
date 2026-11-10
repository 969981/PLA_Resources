/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00172330; name: FUN_00172330
 */


undefined8 * FUN_00172330(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_2 - 1U < (ulong)*(uint *)(param_1 + 0xc)) {
    return (undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 - 1U) * 0x10);
  }
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x18) +
           (long)(int)((uint)param_2 &
                      (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
  if (*(int *)(puVar2 + 3) == 0x13) goto LAB_00172394;
  do {
    do {
      piVar1 = (int *)((long)puVar2 + 0x1c);
      puVar2 = puVar2 + (long)*piVar1 * 4;
      if (*piVar1 == 0) {
        return &DAT_039c5c28;
      }
    } while (*(int *)(puVar2 + 3) != 0x13);
LAB_00172394:
  } while (puVar2[2] != param_2);
  return puVar2;
}


