/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cc374; name: FUN_031cc374
 */


void FUN_031cc374(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  undefined4 *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint *local_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  uint local_68 [2];
  
  plVar1 = (long *)(param_1 + 0xd0);
  local_70[0] = param_2;
  lVar7 = FUN_031cf710(plVar1,local_70);
  if (lVar7 == 0) {
    lVar7 = -0x100000000;
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = *(uint *)(lVar7 + 4);
    lVar7 = (lVar7 - *(long *)(param_1 + 0xe0)) * 0x20000000;
  }
  uVar10 = uVar10 | (uint)lVar7;
  lVar2 = *plVar1 + (long)(int)uVar10 * 0x30 + 8;
  local_80 = (uint *)0x0;
  local_78 = -0x8000000000000000;
  FUN_031e389c(lVar2,&local_80);
  puVar6 = PTR_PTR_0434a090;
  puVar5 = PTR_PTR_0434a080;
  if ((int)local_78 != 0) {
    lVar14 = (long)(int)local_78 << 2;
    lVar4 = tpidr_el0;
    puVar15 = local_80;
    do {
      uVar3 = *puVar15;
      local_b0 = (undefined4 *)0x0;
      local_a8 = -0x8000000000000000;
      local_a0 = 0;
      local_98 = -0x8000000000000000;
      local_90 = 0;
      FUN_03178b6c(*(undefined8 *)(param_1 + 0x18),param_2,uVar3,&local_b0);
      local_68[0] = uVar3 & 0x3fffff;
      FUN_031d5a18(*(undefined8 *)(*(long *)(param_1 + 0x20) + ((ulong)(uVar3 >> 0x13) & 0x1ff8)),
                   local_68,&local_b0);
      lVar13 = (long)DAT_0444b53c;
      lVar8 = *(long *)(lVar4 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar4 + 0x38d490) = lVar8;
      }
      if (*(long *)(lVar8 + lVar13 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      lVar8 = local_98;
      uVar3 = local_98._4_4_;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < lVar8) && (local_a0 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_a0,uVar3 << 2);
      }
      lVar8 = local_a8;
      uVar3 = local_a8._4_4_;
      local_a0 = 0;
      local_98 = CONCAT44(0x80000000,(undefined4)local_98);
      local_a8 = (ulong)local_a8._4_4_ << 0x20;
      if ((-1 < lVar8) && (local_b0 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_b0,(uVar3 & 0x3fffffff) << 1);
      }
      puVar15 = puVar15 + 1;
      lVar14 = lVar14 + -4;
    } while (lVar14 != 0);
  }
  local_b0 = (undefined4 *)0x0;
  local_a8 = -0x8000000000000000;
  FUN_031e3d00(lVar2,&local_b0);
  if ((int)local_a8 != 0) {
    puVar12 = local_b0 + (long)(int)local_a8 * 3;
    puVar11 = local_b0;
    do {
      FUN_031b373c(*(undefined8 *)(param_1 + 0x18),*puVar11,puVar11[1],-puVar11[2],0);
      puVar11 = puVar11 + 3;
    } while (puVar11 != puVar12);
  }
  if ((uint)((ulong)lVar7 >> 0x20) <= *(uint *)(param_1 + 0xe8)) {
    lVar7 = *(long *)(param_1 + 0xe0) + (lVar7 >> 0x20) * 8;
    if (*(uint *)(lVar7 + 4) == uVar10) goto LAB_031cc5a8;
  }
  lVar7 = FUN_031cf710(plVar1,*plVar1 + (long)(int)uVar10 * 0x30);
LAB_031cc5a8:
  FUN_031cf794(plVar1,lVar7);
  lVar7 = local_a8;
  puVar5 = PTR_PTR_0434a090;
  uVar9 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_b0 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_b0,(uVar9 & 0x3fffffff) * 0xc);
  }
  lVar7 = local_78;
  uVar10 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_80 != (uint *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_80,uVar10 << 2);
  }
  return;
}


