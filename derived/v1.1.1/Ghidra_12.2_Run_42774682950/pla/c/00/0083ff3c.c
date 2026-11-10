/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ff3c; name: FUN_0083ff3c
 */


void FUN_0083ff3c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_48[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    puVar6 = local_48;
  }
  else {
    local_58[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    FUN_007ee578(local_48,local_58);
    uVar2 = FUN_007ed3d0(param_3);
    FUN_007f0e44(local_58,param_2 + 0x18,param_3 + 1,uVar2);
    FUN_007ee660(local_48,local_58);
    uVar4 = FUN_007f0d7c(param_2 + 0x18);
    lVar1 = param_3 + 1 + (uVar4 & 0xffffffff);
    uVar5 = FUN_007ed370(lVar1);
    *(undefined8 *)(param_2 + 8) = uVar5;
    uVar3 = FUN_007ed3b0(lVar1 + 8);
    *(undefined2 *)(param_2 + 0x10) = uVar3;
    uVar2 = FUN_007ed3d0(lVar1 + 10);
    *(undefined1 *)(param_2 + 0x38) = uVar2;
    local_58[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    puVar6 = local_58;
  }
  FUN_007ee578(param_1,puVar6);
  return;
}


