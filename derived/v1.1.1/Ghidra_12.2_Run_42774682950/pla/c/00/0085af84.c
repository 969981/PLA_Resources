/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085af84; name: FUN_0085af84
 */


void FUN_0085af84(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 local_88 [4];
  undefined4 local_78;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_78 = 0x10407;
LAB_0085afd4:
    local_88[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_78 | 4),(Result *)local_88);
  }
  else {
    if ((*(int *)(param_2 + 0x13a8) == 1) ||
       (uVar2 = FUN_007e5f0c(*(undefined8 *)(param_2 + 0x1398)), (uVar2 & 1) != 0)) {
      local_78 = 0x10408;
      goto LAB_0085afd4;
    }
    FUN_0085cf60(*(undefined8 *)(param_2 + 0x10));
    local_78 = (uint)local_78._2_2_ << 0x10;
    FUN_007e3400(auStack_70);
    local_38 = 1;
    local_40 = local_40 & 0xffffff00;
    local_50 = 0;
    local_48 = 0;
    local_3c = 0;
    *(undefined2 *)(param_2 + 0x38) = (undefined2)local_78;
    FUN_007e346c(param_2 + 0x40,auStack_70);
    *(undefined2 *)(param_2 + 0x78) = local_38;
    *(undefined8 *)(param_2 + 0x68) = local_48;
    *(ulong *)(param_2 + 0x70) = CONCAT44(local_3c,local_40);
    *(undefined8 *)(param_2 + 0x60) = local_50;
    FUN_007e34a4(auStack_70);
    *(undefined8 *)(param_2 + 0x770) = 0;
    iVar1 = FUN_007e5ee4(*(undefined8 *)(param_2 + 0x1398));
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_2 + 0x1398) + 0x10))(*(long **)(param_2 + 0x1398),1);
    }
    (**(code **)(**(long **)(param_2 + 0x1398) + 0x48))
              (&local_78,*(long **)(param_2 + 0x1398),param_3);
    if (local_78 == 0) {
      FUN_007e5e70(*(undefined8 *)(param_2 + 0x1398),0);
      local_88[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_28);
      puVar3 = local_88;
      goto LAB_0085aff0;
    }
  }
  puVar3 = &local_78;
LAB_0085aff0:
  FUN_007ee578(param_1,puVar3);
  return;
}


