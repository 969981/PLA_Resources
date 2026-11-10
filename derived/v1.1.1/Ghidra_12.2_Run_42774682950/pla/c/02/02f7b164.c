/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7b164; name: FUN_02f7b164
 */


undefined1  [16]
FUN_02f7b164(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  int local_28;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  fVar8 = (float)((ulong)local_90 >> 0x20);
  fVar10 = (float)((ulong)uStack_80 >> 0x20);
  fVar9 = (float)((ulong)uStack_88 >> 0x20);
  fVar11 = (float)((ulong)uStack_78 >> 0x20);
  local_70 = CONCAT44((fVar8 + fVar10) * 0.5,((float)local_90 + (float)uStack_80) * 0.5);
  uStack_68 = CONCAT44((fVar9 + fVar11) * 0.5,((float)uStack_88 + (float)uStack_78) * 0.5);
  uStack_60 = CONCAT44((fVar10 - fVar8) * 0.5,((float)uStack_80 - (float)local_90) * 0.5);
  uStack_58 = CONCAT44((fVar11 - fVar9) * 0.5,((float)uStack_78 - (float)uStack_88) * 0.5);
  local_50 = *param_4;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0x8000000000000000;
  local_28 = 0x40;
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x38d490);
  local_a0[0] = param_3;
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar5;
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (0x7f < *(ulong *)(lVar5 + 0x10)) {
    local_30 = *(long *)(lVar5 + 0x18);
    if (local_30 + 0x80U <= *(ulong *)(lVar5 + 0x20)) {
      *(ulong *)(lVar5 + 0x18) = local_30 + 0x80U;
      goto LAB_02f7b1f8;
    }
  }
  local_30 = FUN_032ce670(lVar5,0x80);
LAB_02f7b1f8:
  local_38._4_4_ = 0x80000040;
  local_40 = local_30;
  FUN_02f7b958(param_1,&local_40,local_a0);
  iVar2 = local_28;
  lVar5 = local_30;
  if (local_30 == local_40) {
    local_38._0_4_ = 0;
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
  uVar1 = local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < (int)uVar1) && (local_40 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_40,(uVar1 & 0x3fffffff) << 1);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_50;
  return auVar7;
}


