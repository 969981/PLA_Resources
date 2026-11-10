/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4dfc; name: FUN_032c4dfc
 */


void FUN_032c4dfc(long *param_1,long param_2,int param_3,uint param_4)

{
  *(undefined4 *)(param_1 + 0x12) = 1;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_4 | 0x80000000;
  if (0 < param_3) {
    *(undefined1 *)(param_2 + param_3 + -1) = 0;
  }
  return;
}


