/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114e6e0; name: FUN_0114e6e0
 */


void FUN_0114e6e0(undefined8 param_1,int param_2,uint param_3)

{
  if (param_2 != 0) {
    FUN_0114e70c(param_1,"linked");
    return;
  }
  if ((param_3 & 1) == 0) {
    FUN_0114e7f4(param_1,&DAT_0395ca85);
    return;
  }
  FUN_0114e70c(param_1,"backup");
  return;
}


