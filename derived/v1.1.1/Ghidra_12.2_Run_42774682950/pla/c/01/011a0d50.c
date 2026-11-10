/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a0d50; name: FUN_011a0d50
 */


void FUN_011a0d50(long param_1)

{
  long *plVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_0119e304();
  local_40 = &DAT_e2c06acab97c29c2;
  pcStack_38 = "CommonOptionBar";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  plVar1 = (long *)FUN_00d6adf4(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (*(char *)((long)plVar1 + 0xa2) != '\0') {
    *(undefined1 *)((long)plVar1 + 0xa2) = 0;
    (**(code **)(*plVar1 + 0x98))(plVar1,0);
  }
  return;
}


