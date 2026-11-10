/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec02f8; name: FUN_02ec02f8
 */


void FUN_02ec02f8(long param_1,long *param_2)

{
  if (*param_2 == 0) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    FUN_02ec03ac((long *)(param_1 + 0x18));
    if ((*(int *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      (*DAT_0442d150)(0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}


