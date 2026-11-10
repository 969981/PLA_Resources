/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008010e4; name: FUN_008010e4
 */


void FUN_008010e4(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong *puVar1;
  ulong local_50 [2];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = local_50;
  FUN_008004c8(local_40,param_2,param_3,8);
  if (local_40[0] == 0) {
    local_50[0] = 0;
    FUN_007ecf14(local_50);
    *(undefined4 *)(param_2 + 200) = 10;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(undefined8 *)(param_2 + 0x30) = 0x128;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(ulong *)(param_2 + 0xc0) = local_50[0];
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartChangeNetworkState";
    local_50[0] = local_50[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    puVar1 = (ulong *)local_40;
  }
  FUN_007ee578(param_1,puVar1);
  return;
}


