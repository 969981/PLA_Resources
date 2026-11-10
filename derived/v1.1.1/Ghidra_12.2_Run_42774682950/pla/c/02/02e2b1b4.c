/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e2b1b4; name: FUN_02e2b1b4
 */


void FUN_02e2b1b4(long param_1)

{
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}


