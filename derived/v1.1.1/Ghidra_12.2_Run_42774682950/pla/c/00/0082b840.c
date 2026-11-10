/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b840; name: FUN_0082b840
 */


void FUN_0082b840(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong local_48 [2];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_38[0] = 0x10407;
    local_48[0] = local_48[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    puVar2 = (ulong *)local_38;
  }
  else {
    (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x40))
              (local_38,*(long **)(*(long *)PTR_DAT_04377550 + 0x18),param_2 + 0xc);
    if (local_38[0] == 0) {
      param_2[0xb] = param_3;
      *(undefined4 *)((long)param_2 + 0x94) = 1;
      FUN_007e5c2c(param_3);
      local_48[0] = local_48[0] & 0xffffffff00000000;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      FUN_007ee660(param_2 + 0x14,local_48);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_48[0] = 0;
      FUN_007ecf14(local_48);
      param_2[8] = (long)"JoinSessionJob::WaitConnectNetwork";
      puVar1 = PTR_FUN_04377d08;
      param_2[0x16] = local_48[0];
      param_2[6] = (long)puVar1;
      param_2[7] = 0;
      local_48[0] = local_48[0] & 0xffffffff00000000;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      puVar2 = local_48;
    }
    else {
      puVar2 = (ulong *)local_38;
    }
  }
  FUN_007ee578(param_1,puVar2);
  return;
}


