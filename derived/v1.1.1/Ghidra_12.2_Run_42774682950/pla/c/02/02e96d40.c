/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96d40; name: FUN_02e96d40
 */


undefined8 FUN_02e96d40(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_02e97f7c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x20));
  }
  FUN_02e8f2c8(param_1,param_2);
  if (*(char *)(param_2 + 0x10) != '\0') {
    (*DAT_0442d150)(0,*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return 1;
}


