/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee4d4; name: FUN_007ee4d4
 */


void FUN_007ee4d4(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_2 - 2U < 0x13) {
    if ((*(int *)PTR_DAT_04377510 < 1) ||
       (iVar1 = *(int *)PTR_DAT_04377510 + -1,
       *(int *)(PTR_DAT_04377518 + (long)iVar1 * 4) != param_2)) {
      local_30[0] = 0x10408;
    }
    else {
      *(int *)PTR_DAT_04377510 = iVar1;
      local_30[0] = 0;
    }
  }
  else {
    local_30[0] = 0x10407;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


