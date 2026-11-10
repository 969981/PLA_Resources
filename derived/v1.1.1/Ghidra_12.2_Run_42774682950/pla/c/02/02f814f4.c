/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f814f4; name: FUN_02f814f4
 */


void FUN_02f814f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  local_80 = param_2[2];
  uStack_68 = param_4[1];
  local_70 = *param_4;
  uStack_58 = param_4[3];
  local_60 = param_4[2];
  local_50 = 0;
  local_48 = 0x8000000000000000;
  local_38 = 0x40;
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x38d490);
  local_a0[0] = param_3;
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (0x7f < *(ulong *)(lVar5 + 0x10)) {
    local_40 = *(long *)(lVar5 + 0x18);
    if (local_40 + 0x80U <= *(ulong *)(lVar5 + 0x20)) {
      *(ulong *)(lVar5 + 0x18) = local_40 + 0x80U;
      goto LAB_02f81584;
    }
  }
  local_40 = FUN_032ce670(lVar5,0x80);
LAB_02f81584:
  local_48._4_4_ = 0x80000040;
  local_50 = local_40;
  FUN_02f81f78(param_1,&local_50,local_a0);
  iVar2 = local_38;
  lVar5 = local_40;
  if (local_40 == local_50) {
    local_48._0_4_ = 0;
  }
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  lVar3 = *(long *)(lVar6 + 8);
  uVar4 = (ulong)(int)(iVar2 * 2 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar3 + 0x10) < uVar4) || (*(long *)(lVar3 + 0x18) != uVar4 + lVar5)) ||
     (*(long *)(lVar3 + 0x28) == lVar5)) {
    FUN_032cedf0(lVar3,lVar5);
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar5;
  }
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (int)uVar1) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_50,(uVar1 & 0x3fffffff) << 1);
  }
  param_4[1] = uStack_68;
  *param_4 = local_70;
  param_4[3] = uStack_58;
  param_4[2] = local_60;
  return;
}


