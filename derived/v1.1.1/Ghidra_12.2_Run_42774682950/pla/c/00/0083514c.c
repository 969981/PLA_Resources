/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083514c; name: FUN_0083514c
 */


void FUN_0083514c(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_007e5f0c(*(undefined8 *)(param_2 + 0xc0));
  if ((uVar2 & 1) == 0) {
    iVar1 = FUN_007e5ee4(*(undefined8 *)(param_2 + 0xc0));
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_2 + 0xc0) + 0x10))(*(long **)(param_2 + 0xc0),1);
    }
    FUN_0083bcf0(local_38,*(undefined8 *)(param_2 + 0xc0),param_3 & 1);
    if (local_38[0] == 0) {
      FUN_007e5e70(*(undefined8 *)(param_2 + 0xc0),0);
    }
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar3 = local_48;
  }
  else {
    local_38[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar3 = local_38;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


