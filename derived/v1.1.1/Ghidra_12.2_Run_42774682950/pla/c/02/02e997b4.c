/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e997b4; name: FUN_02e997b4
 */


void FUN_02e997b4(long param_1)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xd0);
    do {
      puVar2 = puVar1 + 1;
      (**(code **)(*(long *)*puVar1 + 0x148))();
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0xd8) * 8));
  }
  return;
}


