/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00801000; name: FUN_00801000
 */


void FUN_00801000(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong local_58 [2];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_008004c8(local_48,param_2,param_3,3);
  if (local_48[0] == 0) {
    local_58[0] = 0;
    FUN_007ecf14(local_58);
    *(ulong *)(param_2 + 0xc0) = local_58[0];
    *(undefined4 *)(param_2 + 200) = 8;
    *(undefined8 *)(param_2 + 0x30) = 0xf8;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartReconnectNetwork";
    iVar1 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1c0))();
    plVar2 = (long *)FUN_007ecfa4();
    lVar3 = *plVar2;
    local_58[0] = 0;
    FUN_007ecf14(local_58);
    *(ulong *)(param_2 + 0x70) = local_58[0] + lVar3 * iVar1;
    local_58[0] = local_58[0] & 0xffffffff00000000;
  }
  else {
    local_58[0] = CONCAT44(local_58[0]._4_4_,0x10408);
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_58);
  return;
}


