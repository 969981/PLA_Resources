/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d03c; name: FUN_02f0d03c
 */


void FUN_02f0d03c(long param_1)

{
  long *plVar1;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  plVar1 = (long *)(param_1 + 0x38);
  local_40 = 0;
  local_48 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  local_50 = 0;
  FUN_02edf018(plVar1,&local_50);
  FUN_02f0cd68(param_1);
  FUN_02edef28(plVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *plVar1 = (long)(PTR_DAT_043887c8 + 0x10);
  return;
}


