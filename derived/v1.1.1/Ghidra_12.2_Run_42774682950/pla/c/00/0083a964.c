/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083a964; name: FUN_0083a964
 */


void FUN_0083a964(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0x60) = param_3;
  FUN_007e5bd8(param_3);
  FUN_007e5c2c(*(undefined8 *)(param_2 + 0x60));
  *(undefined2 *)(param_2 + 0x68) = 0;
  *(undefined1 *)(param_2 + 0x6a) = 0;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_007ee660(param_2 + 0x6c,&local_38);
  *(undefined1 *)(param_2 + 0x7c) = 0;
  local_38 = 0;
  FUN_007ecf14(&local_38);
  *(undefined4 *)(param_2 + 0x98) = 1;
  *(ulong *)(param_2 + 0x90) = local_38;
  local_38 = local_38 & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_007ee660(param_2 + 0x9c,&local_38);
  *(undefined **)(param_2 + 0x30) = PTR_FUN_04377e40;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "JoinMeshJob::SetupLocalAndHostStation";
  local_38 = local_38 & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,&local_38);
  return;
}


