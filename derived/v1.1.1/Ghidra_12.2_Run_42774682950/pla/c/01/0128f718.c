/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128f718; name: FUN_0128f718
 */


void FUN_0128f718(long param_1)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0;
  local_40 = 0x917b65ee1c0b5d9c;
  local_38 = 1;
  if (*(char *)(param_1 + *(int *)(param_1 + 0x6d8) + 0x1785) != '\0') {
    uVar1 = FUN_00d606e0(param_1);
    local_30 = 0x917b63ee1c0b5a36;
    if ((uVar1 & 1) == 0) {
      local_30 = 0x917b66ee1c0b5f4f;
    }
    local_28 = 2;
  }
  FUN_0128eecc(param_1,&local_40);
  return;
}


