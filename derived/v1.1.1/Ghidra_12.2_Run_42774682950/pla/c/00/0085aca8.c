/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085aca8; name: FUN_0085aca8
 */


void FUN_0085aca8(undefined8 param_1,long param_2,long param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar5 = local_60;
  if ((param_3 == 0) || (param_4 == (undefined2 *)0x0)) {
    local_40[0] = 0x10407;
LAB_0085ad00:
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  else {
    if ((*(int *)(param_2 + 0x13a8) == 1) ||
       (uVar4 = FUN_007e5f0c(*(undefined8 *)(param_2 + 0x1398)), (uVar4 & 1) != 0)) {
      local_40[0] = 0x10408;
      goto LAB_0085ad00;
    }
    *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x13b0) = *(undefined8 *)(param_4 + 0x24);
    FUN_0085ce14(local_40);
    if (local_40[0] == 0) {
      iVar3 = FUN_007e5ee4(*(undefined8 *)(param_2 + 0x1398));
      if (iVar3 != 0) {
        (**(code **)(**(long **)(param_2 + 0x1398) + 0x10))(*(long **)(param_2 + 0x1398),1);
      }
      *(undefined2 *)(param_2 + 0x38) = *param_4;
      FUN_007e346c(param_2 + 0x40,param_4 + 4);
      uVar1 = *(undefined8 *)(param_4 + 0x14);
      uVar2 = *(undefined8 *)(param_4 + 0x18);
      uVar6 = *(undefined8 *)(param_4 + 0x1c);
      *(undefined2 *)(param_2 + 0x78) = param_4[0x20];
      *(undefined8 *)(param_2 + 0x60) = uVar1;
      *(undefined8 *)(param_2 + 0x68) = uVar2;
      *(undefined8 *)(param_2 + 0x70) = uVar6;
      *(bool *)(*(long *)(param_2 + 0x10) + 0x1371) = (int)uVar1 == 1;
      FUN_007ec6ec(local_50,param_2 + 0x2e0,param_4 + 0x28);
      FUN_007ec6ec(local_50,param_2 + 0x410,param_4 + 0x100);
      *(undefined8 *)(param_2 + 0x770) = *(undefined8 *)(param_4 + 0x198);
      (**(code **)(**(long **)(param_2 + 0x1398) + 0x38))
                (local_50,*(long **)(param_2 + 0x1398),param_3,param_4);
      if (local_50[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x1398),0);
        local_60[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_28);
      }
      else {
        piVar5 = local_50;
      }
      goto LAB_0085ad1c;
    }
  }
  piVar5 = local_40;
LAB_0085ad1c:
  FUN_007ee578(param_1,piVar5);
  return;
}


