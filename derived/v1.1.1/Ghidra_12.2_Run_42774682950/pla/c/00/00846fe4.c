/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00846fe4; name: FUN_00846fe4
 */


void FUN_00846fe4(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 < 0) {
    local_30[0] = 0x10407;
  }
  else {
    iVar1 = 1000;
    if (param_3 != 0) {
      iVar1 = param_3;
    }
    *param_2 = iVar1;
    local_30[0] = 0;
    *(int *)(PTR_DAT_043773b8 + 0x3b0) = iVar1;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


