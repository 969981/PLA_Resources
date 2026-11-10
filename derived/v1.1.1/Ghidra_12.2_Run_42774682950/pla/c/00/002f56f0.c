/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f56f0; name: thunk_FUN_002f5d20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_002f5d20(void)

{
  FUN_002ef6d0(&DAT_0438f878);
  FUN_002ef7d0(&DAT_0438f898);
  FUN_002ef7d0(&DAT_0438f8b8);
  _DAT_0438f848 = 0;
  _DAT_0438f84c = 0;
  DAT_0438f858 = 0;
  DAT_0438f860 = 0x7fffffffffffffff;
  FUN_002ef750(&DAT_0438f878);
  if ((_DAT_0438f848 & 1) == 0) {
    _DAT_0438f848 = CONCAT11(DAT_0438f849,1);
    FUN_002f60a0();
    return;
  }
  FUN_002ef790(&DAT_0438f878);
  return;
}


