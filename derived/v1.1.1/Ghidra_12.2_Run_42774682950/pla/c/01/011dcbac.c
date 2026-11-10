/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dcbac; name: FUN_011dcbac
 */


void FUN_011dcbac(long param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x6fb) != '\0') {
    local_30 = 0x994cd76cf26dfc40;
    pcStack_28 = "anime_wake";
    local_20 = 10;
    uStack_18 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_30);
    }
  }
  return;
}


