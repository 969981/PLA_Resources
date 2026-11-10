/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015074e8; name: FUN_015074e8
 */


void FUN_015074e8(long param_1)

{
  undefined8 uVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = &DAT_e2c06acab97c29c2;
  pcStack_38 = "CommonOptionBar";
  local_30 = 0xf;
  uVar1 = FUN_00d6adf4(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_0280779c(uVar1,0);
  return;
}


