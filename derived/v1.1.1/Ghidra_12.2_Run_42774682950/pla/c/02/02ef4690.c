/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4690; name: FUN_02ef4690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ef4690(uint param_1,uint param_2)

{
  DAT_042ab25c = (int)((float)param_2 / ((float)param_1 * 0.001));
  DAT_042ab258 = param_1;
  _DAT_042ab268 = param_2;
  DAT_042ab264 = (param_1 << 7) / 48000 + 3 & 0x3fffc;
  DAT_042ab260 = (int)((((float)param_2 * 1000.0) / (float)param_1) * 0.25);
  DAT_042ab26c = 0;
  if (DAT_042ab264 != 0) {
    DAT_042ab26c = (undefined2)((param_2 + (DAT_042ab264 >> 1)) / DAT_042ab264);
  }
  return;
}


