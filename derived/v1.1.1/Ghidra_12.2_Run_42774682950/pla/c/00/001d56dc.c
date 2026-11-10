/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d56dc; name: FUN_001d56dc
 */


void FUN_001d56dc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x18);
  local_80 = &local_28;
  local_78 = 1;
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  local_60 = param_2[2];
  local_50 = 0;
  local_48 = 0x8000000000000000;
  local_38 = 0x40;
  lVar3 = tpidr_el0;
  local_28 = param_3;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
    lVar5 = *(long *)(lVar5 + 8);
    uVar6 = *(ulong *)(lVar5 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar3 + 0x38d490) + 8);
    uVar6 = *(ulong *)(lVar5 + 0x10);
  }
  if (0xff < uVar6) {
    local_40 = *(long *)(lVar5 + 0x18);
    if (local_40 + 0x100U <= *(ulong *)(lVar5 + 0x20)) {
      *(ulong *)(lVar5 + 0x18) = local_40 + 0x100U;
      goto LAB_001d57c0;
    }
  }
  local_40 = FUN_032ce670(lVar5,0x100);
LAB_001d57c0:
  local_48._4_4_ = 0x80000040;
  local_50 = local_40;
  FUN_001d6a20(lVar4 + 0x18,&local_50,&local_80);
  iVar2 = local_38;
  lVar4 = local_40;
  if (local_40 == local_50) {
    local_48._0_4_ = 0;
    lVar5 = *(long *)(lVar3 + 0x38d490);
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x38d490);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  lVar3 = *(long *)(lVar5 + 8);
  uVar6 = (ulong)(int)(iVar2 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar3 + 0x10) < uVar6) || (*(long *)(lVar3 + 0x18) != uVar6 + lVar4)) ||
     (*(long *)(lVar3 + 0x28) == lVar4)) {
    FUN_032cedf0(lVar3,lVar4);
    uVar1 = local_48._4_4_;
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar4;
    uVar1 = local_48._4_4_;
  }
  if ((-1 < (int)uVar1) && (local_48 = (ulong)uVar1 << 0x20, local_50 != 0)) {
    FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,local_50,4,uVar1 & 0x3fffffff);
  }
  return;
}


