/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dcb2c; name: FUN_011dcb2c
 */


void FUN_011dcb2c(long param_1,int param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    FUN_011d8770(param_1 + 0x5b0);
  }
  local_40 = 0x994cd76cf26dfc40;
  pcStack_38 = "anime_wake";
  local_30 = 10;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  FUN_00d42690(param_1,1,1);
  return;
}


