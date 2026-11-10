/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f4218; name: FUN_032f4218
 */


void FUN_032f4218(long param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  iVar6 = *(int *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) <= iVar6) {
    lVar5 = FUN_032f71a4(PTR_PTR_0434a080,iVar1);
    iVar6 = *(int *)(param_1 + 0x28);
    *(long *)(param_1 + 0x20) = lVar5;
  }
  *(ulong **)(lVar5 + (long)iVar6 * 8) = param_2;
  *(int *)(param_1 + 0x28) = iVar1;
  if (param_2 == (ulong *)0x0) {
    FUN_032f47a0(param_1);
  }
  else {
    puVar12 = param_2;
    do {
      FUN_032f44a0(puVar12[1]);
      puVar12 = (ulong *)(*puVar12 & 0xfffffffffffffffc);
    } while (puVar12 != (ulong *)0x0);
    FUN_032f47a0(param_1);
    puVar4 = PTR_PTR_0434a090;
    puVar12 = param_2;
    do {
      uVar13 = puVar12[1];
      local_a0 = 0;
      local_98 = -0x8000000000000000;
      FUN_032dcf40(uVar13,&local_a0);
      lVar5 = local_98;
      uVar7 = (ulong)local_98._4_4_;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < lVar5) && (local_a0 != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_a0,(uVar7 & 0x3fffffff) << 3);
      }
      FUN_032dd4b8(uVar13);
      puVar12 = (ulong *)(*puVar12 & 0xfffffffffffffffc);
    } while (puVar12 != (ulong *)0x0);
  }
  puVar4 = PTR_PTR_0434a080;
  local_70 = 0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0x80000000;
  if (param_2 == (ulong *)0x0) {
    lVar5 = 0;
    lVar16 = 0;
    uVar14 = 0;
    lVar8 = 0;
  }
  else {
    lVar5 = 0;
    lVar16 = 0;
    lVar8 = 0;
    lVar15 = 0;
    lVar9 = 0;
    uVar7 = *param_2;
    uVar10 = (uint)uVar7;
    uVar3 = 0;
    uVar11 = (uint)local_68;
    uVar2 = local_68._4_4_;
    while( true ) {
      uVar14 = uVar3;
      local_68._0_4_ = uVar11;
      local_68._4_4_ = uVar2;
      if ((uVar10 >> 1 & 1) == 0) {
        uVar7 = param_2[1];
        uVar14 = uVar3 + 1;
        local_68._0_4_ = uVar3;
        if ((int)(uVar2 & 0x3fffffff) <= (int)uVar3) {
          local_68._0_4_ = uVar11;
          if (0x3ffffffe < (int)uVar3) {
            FUN_032bd0a8(uVar14);
          }
          uVar11 = (uVar2 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar2 = uVar14;
          if ((int)uVar14 <= (int)uVar11) {
            uVar2 = uVar11;
          }
          lVar8 = FUN_032bd1d4(puVar4,uVar2,8,lVar15,uVar3,(long)&local_68 + 4);
          lVar9 = lVar8;
          lVar5 = lVar8;
          lVar15 = lVar8;
          lVar16 = lVar8;
          local_70 = lVar8;
        }
        *(ulong *)(lVar9 + (long)(int)(uint)local_68 * 8) = uVar7;
        uVar7 = *param_2;
        local_68._0_4_ = uVar14;
      }
      param_2 = (ulong *)(uVar7 & 0xfffffffffffffffc);
      if (param_2 == (ulong *)0x0) break;
      uVar7 = *param_2;
      uVar10 = (uint)uVar7;
      uVar3 = uVar14;
      uVar11 = (uint)local_68;
      uVar2 = local_68._4_4_;
    }
  }
  uVar3 = local_68._4_4_;
  local_98 = lVar8 + (long)(int)uVar14 * 8;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = lVar8;
  FUN_032f29ec(param_1,&local_a0);
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (lVar16 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar5,(ulong)(uVar3 & 0x3fffffff) << 3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}


