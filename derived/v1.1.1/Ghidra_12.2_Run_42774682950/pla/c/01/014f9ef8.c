/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f9ef8; name: FUN_014f9ef8
 */


void FUN_014f9ef8(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = 0xe591f7cd38c690c3;
  pcStack_38 = "InputDecide";
  local_30 = 0xb;
  FUN_014f99d0(param_1,&local_40,0);
  local_40 = 0x9f583d657f2a540d;
  pcStack_38 = "InputWazaSwap";
  local_30 = 0xd;
  local_28 = 0;
  FUN_014f99d0(param_1,&local_40,0);
  FUN_014f9b50(param_1,0);
  if (*(long *)(param_1 + 0x440) == 0) {
    return;
  }
  FUN_02831440();
  return;
}


