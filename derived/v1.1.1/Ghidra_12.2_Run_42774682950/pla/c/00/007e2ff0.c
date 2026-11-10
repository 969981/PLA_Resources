/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2ff0; name: FUN_007e2ff0
 */


void FUN_007e2ff0(undefined8 param_1)

{
  ErrorResultVariant *this;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  if ((DAT_043a3510 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else {
    if (DAT_043a3512 != '\x01') {
      FUN_007e3388(2);
      DAT_043a3512 = '\x01';
      this = (ErrorResultVariant *)((ulong)local_30 | 4);
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_40);
      FUN_007e7fb8(local_40);
      FUN_007ee660(local_30,local_40);
      FUN_007e4c50(local_40);
      FUN_007ee660(local_30,local_40);
      local_30[0] = 0;
      goto LAB_007e30a8;
    }
    local_30[0] = 0x10408;
  }
  this = (ErrorResultVariant *)((ulong)local_30 | 4);
LAB_007e30a8:
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_40);
  FUN_007ee578(param_1,local_30);
  return;
}


