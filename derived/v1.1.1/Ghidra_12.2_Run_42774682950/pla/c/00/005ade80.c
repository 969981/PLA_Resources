/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ade80; name: FUN_005ade80
 */


void FUN_005ade80(long param_1)

{
  if (*(undefined **)(param_1 + 0x1238) != PTR_LAB_04374fb8) {
    *(undefined1 **)(param_1 + 0x1238) = &LAB_005af230;
    return;
  }
  *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fb8;
  *(long *)(param_1 + 0x1228) = param_1 + 0xfd0;
  *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  *(bool *)(param_1 + 0x10a5) = *(int *)(param_1 + 0x1218) != 0;
  if (*(int *)(param_1 + 0x1218) == 0) {
    *(undefined1 *)(param_1 + 0x10a6) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x10a6) = *(undefined1 *)(param_1 + 0x1216);
  return;
}


