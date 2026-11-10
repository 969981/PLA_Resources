/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00806580; name: FUN_00806580
 */


void FUN_00806580(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  if (param_3 == 0) {
    local_40[0] = 0x10407;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    piVar1 = local_40;
  }
  else {
    (**(code **)(**(long **)(param_2[0xb] + 0x180) + 0x68))
              (local_40,*(long **)(param_2[0xb] + 0x180),param_2[0xf]);
    if (local_40[0] == 0) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[0xe] = param_3;
      FUN_007e5bd8(param_3);
      FUN_007e5c2c(param_2[0xe]);
      FUN_007e5e70(*(undefined8 *)(param_2[0xb] + 0x180),1);
      FUN_007f6f40(param_2[0xb]);
      if (*(char *)(param_2[0xb] + 0x1168) != '\x01') {
        *(char *)(param_2[0xb] + 0x1168) = '\x01';
      }
      param_2[8] = (long)"NetConnectNetworkJob::WaitReconnectNetwork";
      param_2[6] = (long)PTR_FUN_04377820;
      param_2[7] = 0;
      local_50[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    }
    else {
      piVar1 = local_40;
    }
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


