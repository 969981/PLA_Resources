/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee360; name: FUN_007ee360
 */


void FUN_007ee360(undefined8 param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    local_38[0] = 0x10407;
  }
  else if ((*(long *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x28) != 0)) {
    local_38[0] = 0x10408;
  }
  else {
    iVar1 = FUN_00216d50(param_2 + 0x20,4);
    if (iVar1 == 1) {
      *param_3 = (int)*(undefined8 *)(param_2 + 0x48);
      local_38[0] = 0;
    }
    else {
      local_38[0] = 0xc0b;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


