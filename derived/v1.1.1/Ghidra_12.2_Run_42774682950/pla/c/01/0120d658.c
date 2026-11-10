/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120d658; name: FUN_0120d658
 */


void FUN_0120d658(long param_1)

{
  undefined4 *puVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  puVar1 = *(undefined4 **)(param_1 + 0x5b0);
  *(undefined2 *)(puVar1 + 1) = 0x1212;
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = 0x1900000000;
  puVar1[4] = 3;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x16) = 0;
  FUN_0120ddac(param_1,1);
  FUN_0120e0b8(param_1);
  local_40 = 0x7788dc1eb6cdc49e;
  pcStack_38 = "search_main_cursor";
  local_30 = 0x12;
  local_28 = (long *)0x0;
  FUN_0120d780(param_1,&local_40,1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


