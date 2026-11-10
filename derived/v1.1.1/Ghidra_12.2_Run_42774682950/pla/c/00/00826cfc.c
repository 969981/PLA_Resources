/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00826cfc; name: FUN_00826cfc
 */


void FUN_00826cfc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined1 *)0x0) {
    local_30[0] = 0x10407;
  }
  else {
    lVar1 = FUN_00826d78(param_2,param_4);
    if (lVar1 == 0) {
      local_30[0] = 0x2c0a;
    }
    else {
      *param_3 = *(undefined1 *)(lVar1 + 0x28);
      local_30[0] = 0;
    }
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


