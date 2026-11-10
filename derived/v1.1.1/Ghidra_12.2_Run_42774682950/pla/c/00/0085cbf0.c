/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085cbf0; name: FUN_0085cbf0
 */


void FUN_0085cbf0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (((*(long *)(param_2 + 0x13b0) == 0) || (*(char *)(*(long *)(param_2 + 0x13b0) + 8) != '\x02'))
     || (uVar1 = FUN_007e3604(param_4), (uVar1 & 1) == 0)) {
    local_38[0] = 0x10408;
  }
  else {
    FUN_007e346c(param_2 + 0x1350,param_4);
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


