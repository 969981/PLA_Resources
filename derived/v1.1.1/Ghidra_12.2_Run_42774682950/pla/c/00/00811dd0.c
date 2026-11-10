/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00811dd0; name: FUN_00811dd0
 */


void FUN_00811dd0(undefined8 param_1)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((DAT_043a4219 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else if (DAT_043a421a == '\x01') {
    local_30[0] = 0x10408;
  }
  else {
    FUN_007e3388(5);
    DAT_043a421a = '\x01';
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


