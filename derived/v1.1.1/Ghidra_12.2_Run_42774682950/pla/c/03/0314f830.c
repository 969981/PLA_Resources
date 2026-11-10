/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314f830; name: FUN_0314f830
 */


void FUN_0314f830(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0 [32];
  
  puVar4 = PTR_PTR_0434a080;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0x80000020;
  local_e8 = *(undefined4 *)(param_2 + 0x110);
  local_e4 = *(undefined4 *)(param_2 + 0x114);
  uVar3 = *(uint *)(param_2 + 0x120);
  local_e0 = local_d0;
  if ((int)uVar3 < 0x21) {
    if (uVar3 == 0) goto LAB_0314f8dc;
  }
  else {
    if ((int)uVar3 < 0x40000000) {
      uVar5 = 0x40;
    }
    else {
      FUN_032bd0a8(uVar3);
      uVar5 = (local_d8._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
    }
    uVar2 = uVar3;
    if ((int)uVar3 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    local_e0 = (undefined4 *)FUN_032bd1d4(puVar4,uVar2,4,local_d0,0,(long)&local_d8 + 4);
    if ((uint)local_d8 == uVar3) goto LAB_0314f8dc;
  }
  local_d8._0_4_ = uVar3;
LAB_0314f8dc:
  if ((0 < *(int *)(param_2 + 0x120)) &&
     (*local_e0 = **(undefined4 **)(param_2 + 0x118), 1 < *(int *)(param_2 + 0x120))) {
    lVar6 = 1;
    do {
      lVar1 = lVar6 + 1;
      local_e0[lVar6] = *(undefined4 *)(*(long *)(param_2 + 0x118) + lVar6 * 4);
      lVar6 = lVar1;
    } while (lVar1 < *(int *)(param_2 + 0x120));
  }
  (**(code **)(**(long **)(param_2 + 0x48) + 0x20))
            (param_1,*(long **)(param_2 + 0x48),param_2,param_3,&local_e8);
  uVar3 = local_d8._4_4_;
  *(undefined4 *)(param_2 + 0x110) = local_e8;
  *(undefined4 *)(param_2 + 0x114) = local_e4;
  if (0 < *(int *)(param_2 + 0x120)) {
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x118) + lVar6 * 4) = local_e0[lVar6];
      lVar6 = lVar1;
    } while (lVar1 < *(int *)(param_2 + 0x120));
  }
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_e0 != (undefined4 *)0x0)) {
    FUN_032cf244(puVar4,local_e0,4,uVar3 & 0x3fffffff);
  }
  return;
}


