/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c660; name: FUN_02f0c660
 */


void FUN_02f0c660(long param_1)

{
  if (*(long *)(param_1 + 0x180) != 0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    if (param_1 != *(long *)(param_1 + 0x180)) {
      FUN_02f59e70(0);
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  return;
}


