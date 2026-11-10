/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204da4; name: FUN_00204da4
 */


void FUN_00204da4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298), lVar2 != 0)) {
    lVar1 = param_1 + (long)param_2 * 0x18 + 0x290;
    FUN_00204fb4(lVar1);
    if (*(char *)(lVar2 + 0x108) == '\0') {
      FUN_0020500c(lVar1);
      return;
    }
  }
  return;
}


