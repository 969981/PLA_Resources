/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec26c; name: FUN_007ec26c
 */


undefined8 FUN_007ec26c(int *param_1)

{
  int iVar1;
  int local_30 [4];
  undefined4 local_18 [2];
  
  local_30[0] = 0xc480;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  if (*param_1 != local_30[0]) {
    local_30[0] = 0xc47f;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
    if ((*param_1 != local_30[0]) ||
       (((iVar1 = FUN_007f018c(param_1), iVar1 != 0x65 &&
         (iVar1 = FUN_007f018c(param_1), iVar1 != 0x71)) &&
        (iVar1 = FUN_007f018c(param_1), iVar1 != 0x70)))) {
      return 0;
    }
  }
  return 1;
}


