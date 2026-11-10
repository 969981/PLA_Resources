/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805f48; name: FUN_00805f48
 */


void FUN_00805f48(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  (**(code **)(**(long **)(param_2[0xd] + 0x180) + 0x50))
            (local_38,*(long **)(param_2[0xd] + 0x180),param_2[0xc]);
  if (local_38[0] == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[0xb] = param_3;
    FUN_007e5bd8(param_3);
    FUN_007e5c2c(param_2[0xb]);
    FUN_007e5e70(*(undefined8 *)(param_2[0xd] + 0x180),1);
    param_2[8] = (long)"NetSearchNetworkJob::WaitSearchNetwork";
    param_2[6] = (long)PTR_FUN_04377800;
    param_2[7] = 0;
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar1 = local_48;
  }
  else {
    piVar1 = local_38;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


