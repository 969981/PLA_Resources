/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5cb0; name: FUN_02eb5cb0
 */


void FUN_02eb5cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_28;
  long lStack_20;
  undefined8 local_18;
  
  lStack_20 = *(long *)(param_1 + 0x30);
  if (*(char *)(lStack_20 + 0x108) == '\0') {
    local_18 = 4;
    local_28 = param_1;
    FUN_02ec512c(DAT_0440a180,&local_28,param_2,param_3);
  }
  return;
}


