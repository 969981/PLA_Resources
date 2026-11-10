/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131e8f0; name: FUN_0131e8f0
 */


undefined8 FUN_0131e8f0(int param_1,undefined1 *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)param_1;
  if ((param_3 & 1) == 0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = (&DAT_03a7ae98)[lVar1 * 0x20];
    }
    return *(undefined8 *)(&DAT_03a7ae90 + lVar1 * 0x20);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (&DAT_03a7aea8)[lVar1 * 0x20];
  }
  return *(undefined8 *)(&DAT_03a7aea0 + lVar1 * 0x20);
}


