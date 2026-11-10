/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0cd68; name: FUN_02f0cd68
 */


void FUN_02f0cd68(long param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_02ee0d5c(DAT_0440a160,param_1);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      (*DAT_0442d150)(2);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}


