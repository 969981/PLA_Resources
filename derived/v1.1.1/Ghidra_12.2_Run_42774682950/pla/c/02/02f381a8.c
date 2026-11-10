/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f381a8; name: FUN_02f381a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_02f381a8(void)

{
  long *plVar1;
  
  plVar1 = DAT_0442c050;
  if (DAT_0442c050 == (long *)0x0) {
    plVar1 = (long *)(*DAT_0442d138)(0,0x18);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)DAT_0442c050;
  }
  if (DAT_0442c040 == (long *)0x0) {
    DAT_0442c048 = plVar1;
  }
  DAT_0442c050 = (long *)*plVar1;
  *plVar1 = (long)DAT_0442c040;
  _DAT_0442c064 = _DAT_0442c064 + 1;
  DAT_0442c040 = plVar1;
  return plVar1 + 1;
}


