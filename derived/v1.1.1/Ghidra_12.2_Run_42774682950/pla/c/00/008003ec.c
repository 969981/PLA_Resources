/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008003ec; name: FUN_008003ec
 */


void FUN_008003ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong local_50 [2];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar3 = local_50;
  FUN_008004c8(local_40,param_2,param_3,2);
  if (local_40[0] == 0) {
    *(undefined1 *)(param_2 + 100) = 0;
    iVar1 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1d8))();
    plVar2 = (long *)FUN_007ecfa4();
    lVar4 = *plVar2;
    local_50[0] = 0;
    FUN_007ecf14(local_50);
    *(ulong *)(param_2 + 0x70) = local_50[0] + lVar4 * iVar1;
    local_50[0] = 0;
    FUN_007ecf14(local_50);
    *(undefined4 *)(param_2 + 200) = 4;
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartDestroyNetwork";
    *(undefined8 *)(param_2 + 0x30) = 200;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(ulong *)(param_2 + 0xc0) = local_50[0];
    local_50[0] = local_50[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    puVar3 = (ulong *)local_40;
  }
  FUN_007ee578(param_1,puVar3);
  return;
}


