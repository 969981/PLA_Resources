/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00857fdc; name: FUN_00857fdc
 */


void FUN_00857fdc(undefined8 param_1,long *param_2)

{
  long lVar1;
  ErrorResultVariant *this;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if ((int)param_2[0x16] == 1) {
    if (param_2[0x19] != 0) {
      FUN_00855c6c();
    }
    FUN_00845c5c(param_2 + 1);
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    local_38[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
    FUN_007ee660(param_2 + 0x17,local_48);
    *(undefined4 *)(param_2 + 7) = 0;
    (**(code **)(*param_2 + 0x10))(param_2);
    if ((int)param_2[0x16] != 2) {
      *(undefined4 *)(param_2 + 0x16) = 0x12;
      FUN_008248e4(param_2 + 0xd);
      if ((int)param_2[0x16] != 2) {
        lVar1 = *(long *)PTR_DAT_043774c8;
        do {
          FUN_00824d50(lVar1 / 10000);
          if ((int)param_2[0x16] == 3) break;
        } while ((int)param_2[0x16] != 2);
      }
    }
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10408;
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


