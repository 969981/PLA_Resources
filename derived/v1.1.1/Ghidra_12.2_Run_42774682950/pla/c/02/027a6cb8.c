/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6cb8; name: FUN_027a6cb8
 */


void FUN_027a6cb8(undefined1 *param_1,long param_2)

{
  undefined2 uVar1;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1ff8) != '\0') {
    uVar1 = *(undefined2 *)(param_2 + 0x1ffd);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x1ff9);
    *(undefined2 *)(param_1 + 5) = uVar1;
    *param_1 = 1;
  }
  return;
}


