/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d4910; name: FUN_030d4910
 */


void FUN_030d4910(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long local_70;
  undefined8 local_68;
  long local_60;
  int local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  
  local_50 = 0;
  local_48 = 0x8000000000000000;
  local_38 = 0x100;
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  lVar4 = *(long *)(lVar7 + 8);
  if (*(ulong *)(lVar4 + 0x10) < 0x800) {
LAB_030d4c24:
    local_40 = FUN_032ce670(lVar4,0x800);
    lVar7 = *(long *)(lVar5 + 0x38d490);
  }
  else {
    local_40 = *(long *)(lVar4 + 0x18);
    if (*(ulong *)(lVar4 + 0x20) < local_40 + 0x800U) goto LAB_030d4c24;
    *(ulong *)(lVar4 + 0x18) = local_40 + 0x800U;
  }
  local_48 = CONCAT44(0x80000100,(int)local_48);
  local_68 = 0x8000000000000000;
  local_58 = 0x100;
  local_50 = local_40;
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(ulong *)(lVar7 + 0x10) < 0x800) {
LAB_030d4c48:
    local_70 = FUN_032ce670(lVar7,0x800);
  }
  else {
    local_70 = *(long *)(lVar7 + 0x18);
    if (*(ulong *)(lVar7 + 0x20) < local_70 + 0x800U) goto LAB_030d4c48;
    *(ulong *)(lVar7 + 0x18) = local_70 + 0x800U;
  }
  local_68 = CONCAT44(0x80000100,(int)local_68);
  local_60 = local_70;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar4 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x20) + lVar4;
      if (*(int *)(lVar2 + 0x20) < 1) {
        iVar1 = (int)local_48 + 1;
        if ((int)(local_48._4_4_ & 0x3fffffff) <= (int)local_48) {
          local_50 = FUN_02f6b138(PTR_PTR_0434a080,iVar1,local_50,local_48 & 0xffffffff,
                                  (long)&local_48 + 4);
        }
        *(undefined8 *)(local_50 + (long)(int)local_48 * 8) = *(undefined8 *)(lVar2 + 0x10);
        local_48 = CONCAT44(local_48._4_4_,iVar1);
      }
      else {
        iVar1 = (int)local_68 + 1;
        if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)local_68) {
          local_70 = FUN_02f6b138(PTR_PTR_0434a080,iVar1,local_70,local_68 & 0xffffffff,
                                  (long)&local_68 + 4);
        }
        *(undefined8 *)(local_70 + (long)(int)local_68 * 8) = *(undefined8 *)(lVar2 + 0x10);
        local_68 = CONCAT44(local_68._4_4_,iVar1);
      }
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x28;
    } while (lVar7 < *(int *)(param_1 + 0x28));
    if ((int)local_68 != 0) {
      FUN_030376f0(*(long *)(param_1 + 0x18) + 0x748,*(long *)(param_1 + 0x18),local_70);
      goto joined_r0x030d4bcc;
    }
  }
joined_r0x030d4bcc:
  if ((int)local_48 != 0) {
    FUN_030376f0(*(long *)(param_1 + 0x18) + 0x750,*(long *)(param_1 + 0x18),local_50);
  }
  iVar1 = local_58;
  lVar7 = local_60;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (local_60 == local_70) {
    local_68 = local_68 & 0xffffffff00000000;
  }
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  lVar4 = *(long *)(lVar4 + 8);
  uVar6 = (ulong)(int)(iVar1 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar4 + 0x10) < uVar6) || (*(long *)(lVar4 + 0x18) != uVar6 + lVar7)) ||
     (*(long *)(lVar4 + 0x28) == lVar7)) {
    if (lVar7 != 0) {
      if (*(ulong *)(lVar4 + 0x10) < uVar6) {
        *(int *)(*(long *)(lVar4 + 8) + 0x20) = *(int *)(*(long *)(lVar4 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar4 + 0x40) + 0x18))(*(long **)(lVar4 + 0x40),lVar7);
      }
      else if (*(long *)(lVar4 + 0x18) == uVar6 + lVar7) {
        *(long *)(lVar4 + 0x18) = lVar7;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar4,lVar7);
      }
    }
  }
  else {
    *(long *)(lVar4 + 0x18) = lVar7;
  }
  uVar8 = local_68;
  puVar3 = PTR_PTR_0434a080;
  uVar6 = local_68 >> 0x20;
  local_68 = uVar6 << 0x20;
  if ((-1 < (long)uVar8) && (local_70 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_70,(uVar6 & 0x3fffffff) << 3);
  }
  iVar1 = local_38;
  lVar7 = local_40;
  if (local_40 == local_50) {
    local_48 = local_48 & 0xffffffff00000000;
  }
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  lVar5 = *(long *)(lVar4 + 8);
  uVar6 = (ulong)(int)(iVar1 * 8 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar5 + 0x10) < uVar6) || (*(long *)(lVar5 + 0x18) != uVar6 + lVar7)) ||
     (*(long *)(lVar5 + 0x28) == lVar7)) {
    if (lVar7 != 0) {
      if (*(ulong *)(lVar5 + 0x10) < uVar6) {
        *(int *)(*(long *)(lVar5 + 8) + 0x20) = *(int *)(*(long *)(lVar5 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar5 + 0x40) + 0x18))(*(long **)(lVar5 + 0x40),lVar7);
      }
      else if (*(long *)(lVar5 + 0x18) == uVar6 + lVar7) {
        *(long *)(lVar5 + 0x18) = lVar7;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar5,lVar7);
      }
    }
  }
  else {
    *(long *)(lVar5 + 0x18) = lVar7;
  }
  uVar6 = local_48;
  uVar8 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (long)uVar6) && (local_50 != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_50,(uVar8 & 0x3fffffff) << 3);
  }
  return;
}


