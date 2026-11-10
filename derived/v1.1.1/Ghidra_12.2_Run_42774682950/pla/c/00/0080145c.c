/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080145c; name: FUN_0080145c
 */


void FUN_0080145c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong local_48 [2];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_008004c8(local_38,param_2,param_3,8);
  if (local_38[0] == 0) {
    local_48[0] = 0;
    FUN_007ecf14(local_48);
    *(undefined4 *)(param_2 + 200) = 0xb;
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartInquireNetworkState";
    *(undefined8 *)(param_2 + 0x30) = 0x138;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(ulong *)(param_2 + 0xc0) = local_48[0];
    local_48[0] = local_48[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    puVar1 = local_48;
  }
  else {
    puVar1 = (ulong *)local_38;
  }
  FUN_007ee578(param_1,puVar1);
  return;
}


