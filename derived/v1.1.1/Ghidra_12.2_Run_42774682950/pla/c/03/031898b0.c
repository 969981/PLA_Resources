/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031898b0; name: FUN_031898b0
 */


uint FUN_031898b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_70;
  undefined8 local_68;
  long local_60;
  uint local_58;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar8;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar8 != 0) {
    FUN_032d5af0(lVar8,"TtcalcBary",10);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + (param_3 >> 0x16 & 0x3ff) * 0xf0);
  uVar2 = (uint)param_3 & 0x3fffff;
  lVar6 = *(long *)(lVar9 + 0x20);
  uVar3 = uVar2 - *(int *)(lVar6 + 0x20);
  if ((int)uVar2 < *(int *)(lVar6 + 0x20)) {
    if (*(int *)(lVar6 + 0x98) == 0) {
      uVar3 = uVar2;
LAB_03189958:
      lVar6 = *(long *)(lVar6 + 0xb0);
      goto LAB_03189964;
    }
    uVar3 = *(uint *)(*(long *)(lVar6 + 0x90) + (ulong)uVar2 * 4);
    if (uVar3 != 0xffffffff) goto LAB_03189958;
    lVar6 = *(long *)(lVar6 + 0x18) + (ulong)uVar2 * 0x10;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0xd0);
LAB_03189964:
    lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
  }
  uVar2 = (int)*(short *)(lVar6 + 8) + 1;
  local_70 = 0;
  local_68 = 0x8000000000000000;
  local_58 = uVar2;
  if ((uint)(int)*(short *)(lVar6 + 8) < 0xffffffff) {
    lVar7 = *(long *)(lVar4 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar7;
    }
    lVar7 = *(long *)(lVar7 + 8);
    uVar5 = (ulong)(int)(uVar2 * 0x10 + 0x7f & 0xffffff80);
    if (uVar5 <= *(ulong *)(lVar7 + 0x10)) {
      local_60 = *(long *)(lVar7 + 0x18);
      uVar5 = local_60 + uVar5;
      if (uVar5 <= *(ulong *)(lVar7 + 0x20)) {
        *(ulong *)(lVar7 + 0x18) = uVar5;
        goto LAB_031899cc;
      }
    }
    local_60 = FUN_032ce670(lVar7);
  }
  else {
    local_60 = 0;
  }
LAB_031899cc:
  local_68._4_4_ = uVar2 | 0x80000000;
  iVar1 = *(short *)(lVar6 + 8) + 1;
  if ((-1 < *(short *)(lVar6 + 8)) || (iVar1 < 0)) {
    local_68._0_4_ = iVar1;
  }
  local_70 = local_60;
  thunk_FUN_031932b0(lVar9,lVar6,&local_70);
  uVar3 = FUN_03189640(local_70,local_70 + (long)(int)local_68 * 0x10,param_2,param_4);
  uVar2 = local_58;
  lVar6 = local_60;
  if (local_60 == local_70) {
    local_68._0_4_ = 0;
  }
  lVar9 = *(long *)(lVar4 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar9;
  }
  lVar4 = *(long *)(lVar9 + 8);
  uVar5 = (ulong)(int)(uVar2 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar4 + 0x10) < uVar5) || (*(long *)(lVar4 + 0x18) != uVar5 + lVar6)) ||
     (*(long *)(lVar4 + 0x28) == lVar6)) {
    FUN_032cedf0(lVar4,lVar6);
  }
  else {
    *(long *)(lVar4 + 0x18) = lVar6;
  }
  uVar2 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (int)uVar2) && (local_70 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_70,0x10,uVar2 & 0x3fffffff);
  }
  if (lVar8 != 0) {
    FUN_032d5b34(lVar8,&DAT_0390f40e);
  }
  return uVar3 & 1;
}


