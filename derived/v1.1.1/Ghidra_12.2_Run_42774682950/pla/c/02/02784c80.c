/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02784c80; name: FUN_02784c80
 */


void FUN_02784c80(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char local_48 [4];
  int local_44;
  int local_28 [2];
  
  FUN_0277dbe0(local_48);
  if (local_48[0] != '\0') {
    if (local_44 != 0) {
      FUN_02727b8c(param_1,(ulong)local_48 | 4);
      return;
    }
    local_48[0] = '\0';
  }
  FUN_0277dcf0(local_48,param_2);
  if ((local_48[0] == '\0') || (local_28[0] = local_44, local_44 == 0)) {
    FUN_02784dac(local_48,param_2);
    if (local_48[0] != '\0') {
      if (local_44 != 0) {
        FUN_02727bb4(param_1,(ulong)local_48 | 4);
        return;
      }
      local_48[0] = '\0';
    }
    FUN_02784ed8(local_48,param_2);
    if (local_48[0] != '\0') {
      uVar1 = nn::err::ErrorCode::IsValid();
      if ((uVar1 & 1) != 0) {
        FUN_02727bf4(param_1,(ulong)local_48 | 4);
        return;
      }
      if (local_48[0] != '\0') {
        local_48[0] = '\0';
      }
    }
    FUN_02784bc0(param_1);
  }
  else {
    FUN_02727b8c(param_1,local_28);
  }
  return;
}


