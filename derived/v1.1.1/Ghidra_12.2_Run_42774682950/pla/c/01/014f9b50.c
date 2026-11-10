/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f9b50; name: FUN_014f9b50
 */


void FUN_014f9b50(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((param_2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x65c) == '\0';
  }
  local_40 = 0xc64bb3c1135acd2f;
  pcStack_38 = "InputKeyLeft";
  local_30 = 0xc;
  uStack_28 = 0;
  FUN_014f99d0(param_1,&local_40,bVar1);
  local_40 = 0x2995cda10cc51420;
  pcStack_38 = "InputKeyRight";
  local_30 = 0xd;
  uStack_28 = 0;
  FUN_014f99d0(param_1,&local_40,bVar1);
  return;
}


