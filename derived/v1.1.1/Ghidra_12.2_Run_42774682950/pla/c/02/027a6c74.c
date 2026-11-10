/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6c74; name: FUN_027a6c74
 */


void FUN_027a6c74(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1fe8) != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1fec);
    param_1[8] = 0;
    if (*(char *)(param_2 + 0x1ff0) != '\0') {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x1ff4);
      param_1[8] = 1;
    }
    *param_1 = 1;
  }
  return;
}


