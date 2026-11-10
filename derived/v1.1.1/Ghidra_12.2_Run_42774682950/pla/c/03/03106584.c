/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03106584; name: FUN_03106584
 */


void FUN_03106584(long param_1,long param_2,undefined8 param_3)

{
  long local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x15df) != '\0') {
    local_20 = param_1;
    uStack_18 = param_3;
    FUN_0310652c(*(undefined8 *)(param_1 + 0x1660),param_2 + 0x30,&local_20);
  }
  return;
}


