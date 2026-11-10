/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b3b0; name: FUN_0082b3b0
 */


undefined8 FUN_0082b3b0(long param_1)

{
  int *piVar1;
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  FUN_007e8b38(local_30,*(undefined8 *)PTR_DAT_04377458);
  local_40[0] = 0xc406;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  if (local_30[0] != local_40[0]) {
    local_60[0] = 0;
    local_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    if (local_30[0] != local_50[0]) {
      local_70[0] = 0;
      local_60[0] = 0xc421;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
      if (local_30[0] != local_60[0]) {
        local_80[0] = 0;
        local_70[0] = 0xa469;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
        if (local_30[0] != local_70[0]) {
          local_90[0] = 0;
          local_80[0] = 0xec73;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
          if (local_30[0] != local_80[0]) {
            local_a0[0] = 0;
            local_90[0] = 0xa484;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_a0);
            if (local_30[0] != local_90[0]) {
              local_b0[0] = 0;
              local_a0[0] = 0xc47f;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_b0);
              if (local_30[0] != local_a0[0]) {
                local_c0[0] = 0;
                local_b0[0] = 0xc480;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)local_b0 | 4),(Result *)local_c0);
                if (local_30[0] != local_b0[0]) {
                  local_d0[0] = 0;
                  local_c0[0] = 0xc482;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)local_c0 | 4),(Result *)local_d0);
                  if (local_30[0] != local_c0[0]) {
                    local_18[0] = 0;
                    local_d0[0] = 0xc481;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)local_18);
                    if (local_30[0] != local_d0[0]) {
                      FUN_00854f28(local_40,*(undefined8 *)PTR_DAT_043773c0);
                      if (local_40[0] == 0) {
                        return 1;
                      }
                      piVar1 = local_40;
                      goto LAB_0082b5c8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  piVar1 = local_30;
LAB_0082b5c8:
  FUN_007ee660(param_1 + 0xa0,piVar1);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377cf8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::CompleteFailure";
  return 0;
}


