/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014cdfdc; name: FUN_014cdfdc
 */


bool FUN_014cdfdc(long param_1)

{
  bool bVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  bVar1 = *(int *)(*(long *)(param_1 + 0x5b0) + 0xb0) == 0;
  if (bVar1) {
    local_40 = (undefined1 *)0xed0b30a5002612fd;
    pcStack_38 = "appInputChangePageL";
    local_30 = 0x13;
    uStack_28 = 0;
    FUN_014cda88(param_1,&local_40,0);
    local_40 = &DAT_ed0b32a500261663;
    pcStack_38 = "appInputChangePageR";
    local_30 = 0x13;
    uStack_28 = 0;
    FUN_014cda88(param_1,&local_40,0);
  }
  return !bVar1;
}


