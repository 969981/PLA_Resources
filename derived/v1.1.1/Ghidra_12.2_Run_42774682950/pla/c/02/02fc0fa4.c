/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc0fa4; name: FUN_02fc0fa4
 */


void FUN_02fc0fa4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
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
  long local_40;
  undefined8 local_38;
  long local_30;
  int local_28;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  local_80 = param_2[2];
  uStack_68 = param_2[5];
  local_70 = param_2[4];
  uStack_58 = param_3[1];
  local_60 = *param_3;
  local_40 = 0;
  local_38 = 0x8000000000000000;
  local_28 = 0x40;
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x38d490);
  local_a0[0] = param_4;
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar4;
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (0xbff < *(ulong *)(lVar4 + 0x10)) {
    local_30 = *(long *)(lVar4 + 0x18);
    if (local_30 + 0xc00U <= *(ulong *)(lVar4 + 0x20)) {
      *(ulong *)(lVar4 + 0x18) = local_30 + 0xc00U;
      goto LAB_02fc102c;
    }
  }
  local_30 = FUN_032ce670(lVar4,0xc00);
LAB_02fc102c:
  local_38._4_4_ = 0x80000040;
  local_40 = local_30;
  FUN_02fc4f7c(param_1,&local_40,local_a0);
  lVar4 = local_30;
  if (local_30 == local_40) {
    local_38._0_4_ = 0;
  }
  lVar6 = (long)local_28;
  lVar5 = *(long *)(lVar2 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar5;
  }
  lVar2 = *(long *)(lVar5 + 8);
  uVar3 = lVar6 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar2 + 0x10) < uVar3) || (*(long *)(lVar2 + 0x18) != uVar3 + lVar4)) ||
     (*(long *)(lVar2 + 0x28) == lVar4)) {
    FUN_032cedf0(lVar2,lVar4);
  }
  else {
    *(long *)(lVar2 + 0x18) = lVar4;
  }
  uVar1 = local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < (int)uVar1) && (local_40 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_40,0x30,uVar1 & 0x3fffffff);
  }
  return;
}


