/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002565a8; name: FUN_002565a8
 */


void FUN_002565a8(long *param_1,long param_2)

{
  FUN_002419ac();
  *param_1 = (long)(PTR_DAT_04372e00 + 0x10);
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)((long)param_1 + 0xdc) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0xdd) = 0;
  *(byte *)((long)param_1 + 0xdd) = (*(byte *)(param_2 + 0x5d) & 1) << 1 | 1;
  return;
}


