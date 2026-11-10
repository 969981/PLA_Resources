/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcdf74; name: FUN_02bcdf74
 */


ulong * FUN_02bcdf74(ulong *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0xc) >> 2 & 1) == 0) {
    lVar1 = *param_1 + 0x18;
    if (*param_1 < 0x11) {
      lVar1 = 0x28;
    }
    param_1 = (ulong *)((long)param_1 + lVar1);
  }
  return param_1;
}


