/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800668; name: FUN_00800668
 */


void FUN_00800668(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong local_68 [2];
  undefined1 auStack_58 [16];
  int local_48 [4];
  ulong local_38;
  
  FUN_008004c8(local_48,param_2,param_3,2);
  if (local_48[0] == 0) {
    *(undefined2 *)(param_2 + 100) = 0;
    local_68[0] = 0;
    FUN_007ecf14(local_68);
    *(undefined4 *)(param_2 + 200) = 5;
    *(ulong *)(param_2 + 0xc0) = local_68[0];
    local_68[0] = local_68[0] & 0xffffffff00000000;
    local_38 = local_38 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)&local_38);
    FUN_007ee578(auStack_58,local_68);
    iVar1 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1d0))();
    plVar2 = (long *)FUN_007ecfa4();
    lVar4 = *plVar2;
    local_38 = 0;
    FUN_007ecf14(&local_38);
    *(ulong *)(param_2 + 0x70) = local_38 + lVar4 * iVar1;
    FUN_007ee660(param_2 + 0x80,auStack_58);
    *(undefined8 *)(param_2 + 0x30) = 0xd8;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartDisconnectNetwork";
    local_68[0] = local_68[0] & 0xffffffff00000000;
    local_38 = local_38 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)&local_38);
    puVar3 = local_68;
  }
  else {
    puVar3 = (ulong *)local_48;
  }
  FUN_007ee578(param_1,puVar3);
  return;
}


