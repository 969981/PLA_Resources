/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e2604; name: FUN_030e2604
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e2604(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined2 uVar28;
  int *piVar29;
  int *piVar30;
  undefined8 *puVar31;
  long lVar32;
  uint *puVar33;
  undefined8 *puVar34;
  uint *puVar35;
  short sVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *local_808;
  undefined8 *local_7e0;
  undefined8 uStack_7d8;
  uint *local_7d0;
  undefined8 local_7c8;
  long *local_7c0;
  undefined1 *puStack_7b8;
  undefined8 local_7b0;
  undefined1 auStack_7a8 [8];
  undefined8 local_7a0 [2];
  undefined4 local_78c;
  undefined4 local_6f0;
  undefined4 local_5ec;
  undefined4 local_4e8;
  undefined4 local_498;
  undefined4 local_444;
  undefined4 local_424;
  undefined4 local_300;
  undefined4 local_2b0;
  undefined4 local_244;
  undefined4 local_120;
  undefined4 local_d0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 *local_90;
  undefined8 *local_88;
  uint *local_80;
  uint local_78;
  uint local_74;
  
  lVar39 = tpidr_el0;
  lVar16 = *(long *)(lVar39 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar16;
  }
  puVar31 = *(undefined8 **)(lVar16 + 0x10);
  puVar35 = (uint *)(param_2 + 0x22);
  uVar37 = *(uint *)(param_2 + 0x22);
  uVar17 = (ulong)uVar37 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar23 = *puVar35;
  if (uVar23 != uVar37) {
    ClearExclusiveLocal();
LAB_030e26bc:
    do {
      uVar17 = (ulong)(uVar23 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar37 = *puVar35;
      if (uVar37 == uVar23) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar8) {
          *puVar35 = uVar23 + 0x200 & 0xfffffe00 | *(uint *)((long)param_2 + uVar17 * 4 + 0x114);
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto code_r0x030e26c0;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar23 = uVar37;
    } while( true );
  }
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar35,0x10);
  if (bVar8) {
    *puVar35 = uVar37 + 0x200 & 0xfffffe00 | puVar35[uVar17 + 1];
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_030e26bc;
  puVar35 = puVar35 + uVar17 + 1;
LAB_030e26fc:
  *puVar35 = 0x1ff;
  DataMemoryBarrier(2,3);
  piVar29 = *(int **)(*param_2 + uVar17 * 8);
  lVar40 = *(long *)(piVar29 + 2);
  lVar38 = *(long *)(*(long *)(param_1 + 0x10) + 0x100);
  lVar16 = *(long *)(lVar40 + 0x698);
  lVar32 = (long)*piVar29;
  FUN_0303a508(lVar40,piVar29);
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "LtPreSolve";
      puVar34[2] = "StSetupDeactivation";
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  if (lVar16 == 0) {
    local_808 = (long *)0x0;
  }
  else {
    iVar24 = *(int *)(lVar40 + 0x188);
    lVar18 = *(long *)(lVar39 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar39 + 0x38d490) = lVar18;
    }
    plVar9 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
    local_808 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x140,0);
    FUN_0305a7ec(local_808,iVar24,1);
    FUN_02ff1f1c(local_808[4],0,iVar24 + 7U & 0xfffffffc,0);
    *(long *)(piVar29 + 0x12e) = local_808[4];
  }
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "StSetupConstraints";
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  puVar19 = (undefined8 *)(lVar38 + lVar32 * 0x500);
  puVar34 = local_7e0;
  if (*(int *)(*(long *)(lVar40 + 0x488) + 0x28) == 0) goto joined_r0x030e2a54;
  lVar18 = lVar38 + lVar32 * 0x500;
  uStack_7d8 = *(undefined8 **)(piVar29 + 0x138);
  puVar35 = *(uint **)(*(long *)(lVar18 + 0x310) + (long)*(int *)(lVar18 + 0x318) * 8 + -8);
  local_7e0 = (undefined8 *)(lVar18 + 0x300);
  local_7c8 = CONCAT44(*puVar35,*puVar35 >> 0x10) & 0xffffffffffff;
  *(uint *)(lVar18 + 0x308) = *(int *)(lVar18 + 0x308) - (*puVar35 & 0xffff);
  local_90 = (undefined8 *)0x0;
  if (lVar16 != 0) {
    lVar38 = lVar38 + lVar32 * 0x500;
    local_88 = *(undefined8 **)(piVar29 + 0x138);
    local_80 = *(uint **)(*(long *)(lVar38 + 0x10) + (long)*(int *)(lVar38 + 0x18) * 8 + -8);
    local_78 = *local_80 >> 0x10;
    local_74 = *local_80 & 0xffff;
    *(uint *)(lVar38 + 8) = *(int *)(lVar38 + 8) - local_74;
    local_90 = puVar19;
  }
  uVar28 = (undefined2)local_7c8;
  uVar37 = local_7c8._4_4_;
  iVar24 = *(int *)(lVar18 + 0x308);
  puStack_7b8 = (undefined1 *)((ulong)puStack_7b8 & 0xffffffff00000000);
  if (lVar16 == 0) {
    ppuVar11 = (undefined8 **)0x0;
  }
  else {
    ppuVar11 = &local_90;
  }
  lVar38 = *(long *)(piVar29 + 2);
  uVar23 = *(uint *)(*(long *)(lVar38 + 0x488) + 0x2c);
  iVar12 = uVar23 + 1;
  if (0xfffffffe < uVar23) {
    iVar12 = -0x80000000;
  }
  local_7d0 = puVar35;
  FUN_03099650(piVar29,lVar38,lVar38 + 0x530,*(undefined8 *)(*(long *)(lVar38 + 0x488) + 8),iVar12,
               *(undefined8 *)(*(long *)(lVar38 + 0x488) + 0x38),&local_7e0,ppuVar11);
  iVar24 = (*(int *)(local_7e0 + 1) - (iVar24 + uVar37)) + local_7c8._4_4_;
  if (iVar24 != 0) {
    uVar7 = uVar28;
    if (puVar35 == local_7d0) {
LAB_030e2924:
      uVar28 = uVar7;
      sVar36 = (short)uVar37;
      puVar35 = local_7d0;
      uVar37 = local_7c8._4_4_;
    }
    else {
      if (uVar37 == (*puVar35 & 0xffff)) {
        puVar35 = *(uint **)(puVar35 + 2);
        uVar28 = 0;
        uVar37 = 0;
        uVar7 = 0;
        if (puVar35 == local_7d0) goto LAB_030e2924;
      }
      else if (puVar35 == local_7d0) goto LAB_030e2924;
      sVar36 = (short)uVar37;
      uVar37 = *puVar35;
    }
    sVar36 = (short)uVar37 - sVar36;
    lVar38 = *(long *)(param_1 + 0x10);
    puVar34 = (undefined8 *)**(undefined8 **)(lVar38 + 0xc0);
    iVar5 = (int)puStack_7b8;
    iVar12 = *(int *)((long)puVar34 + 0x1c) + (int)puStack_7b8;
    if (*(int *)((long)puVar34 + 0xc) == 0) {
      *puVar34 = puVar35;
      *(undefined2 *)(puVar34 + 1) = uVar28;
      *(short *)((long)puVar34 + 10) = sVar36;
      *(int *)((long)puVar34 + 0xc) = iVar24;
      puVar34[2] = 0;
      *(undefined1 *)(puVar34 + 3) = 1;
      *(undefined1 *)((long)puVar34 + 0x1b) = local_96;
      *(undefined2 *)((long)puVar34 + 0x19) = local_98;
      *(int *)((long)puVar34 + 0x1c) = (int)puStack_7b8;
    }
    else {
      if ((int)local_7c8 < 0xec1) {
        puVar10 = (undefined8 *)((long)local_7d0 + (long)(int)local_7c8 + 0x20);
      }
      else {
        puVar10 = (undefined8 *)FUN_032bf82c(&local_7e0);
      }
      *puVar10 = puVar35;
      *(undefined2 *)(puVar10 + 1) = uVar28;
      *(short *)((long)puVar10 + 10) = sVar36;
      *(int *)((long)puVar10 + 0xc) = iVar24;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 1;
      *(undefined1 *)((long)puVar10 + 0x1b) = local_96;
      *(undefined2 *)((long)puVar10 + 0x19) = local_98;
      *(int *)((long)puVar10 + 0x1c) = iVar5;
      if (*(int *)((long)puVar34 + 0xc) == 0) {
        uVar22 = puVar10[3];
        puVar34[1] = puVar10[1];
        puVar34[3] = uVar22;
        uVar22 = *puVar10;
        puVar34[2] = puVar10[2];
        *puVar34 = uVar22;
      }
      else {
        puVar10[2] = puVar34[2];
        puVar34[2] = puVar10;
      }
      local_7c8 = CONCAT44(local_7c8._4_4_ + 1,(int)local_7c8 + 0x20);
      **(undefined8 **)(lVar38 + 0xc0) = puVar10;
    }
    *(int *)(**(long **)(lVar38 + 0xc0) + 0x1c) = iVar12;
  }
  puVar34 = local_88;
  if (lVar16 != 0) {
    if (local_74 == 0) {
      piVar30 = (int *)(local_90 + 3);
      iVar24 = *piVar30;
      if (iVar24 < 2) goto LAB_030e29b8;
      iVar12 = *(int *)(local_88 + 0xb);
      lVar32 = *(long *)(local_90[2] + (long)(iVar24 + -2) * 8);
      lVar38 = local_88[1];
      *(undefined8 *)(lVar38 + (long)iVar12 * 8) =
           *(undefined8 *)(local_90[2] + (long)(iVar24 + -1) * 8);
      *(int *)(local_88 + 0xb) = iVar12 + 1;
      if (*(int *)((long)local_88 + 0x5c) <= iVar12 + 1) {
        (**(code **)(*(long *)*local_88 + 0x28))
                  ((long *)*local_88,lVar38 + (long)(iVar12 + -5) * 8,6);
        *(int *)(puVar34 + 0xb) = iVar12 + -5;
      }
      *(undefined8 *)(lVar32 + 8) = 0;
      uVar37 = 0xffffffff;
    }
    else {
LAB_030e29b8:
      piVar30 = (int *)(local_90 + 1);
      local_80[2] = 0;
      local_80[3] = 0;
      *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
      *local_80 = *local_80 & 0xffff | local_78 << 0x10;
      uVar37 = local_74;
    }
    *piVar30 = *piVar30 + uVar37;
    local_80 = (uint *)0x0;
    local_90 = (undefined8 *)0x0;
  }
  puVar34 = uStack_7d8;
  if (local_7c8._4_4_ == 0) {
    piVar30 = (int *)(local_7e0 + 3);
    iVar24 = *piVar30;
    if (iVar24 < 2) goto LAB_030e2a10;
    iVar12 = *(int *)(uStack_7d8 + 0xb);
    lVar32 = *(long *)(local_7e0[2] + (long)(iVar24 + -2) * 8);
    lVar38 = uStack_7d8[1];
    *(undefined8 *)(lVar38 + (long)iVar12 * 8) =
         *(undefined8 *)(local_7e0[2] + (long)(iVar24 + -1) * 8);
    *(int *)(uStack_7d8 + 0xb) = iVar12 + 1;
    if (*(int *)((long)uStack_7d8 + 0x5c) <= iVar12 + 1) {
      (**(code **)(*(long *)*uStack_7d8 + 0x28))
                ((long *)*uStack_7d8,lVar38 + (long)(iVar12 + -5) * 8,6);
      *(int *)(puVar34 + 0xb) = iVar12 + -5;
    }
    *(undefined8 *)(lVar32 + 8) = 0;
    uVar37 = 0xffffffff;
  }
  else {
LAB_030e2a10:
    piVar30 = (int *)(local_7e0 + 1);
    local_7d0[2] = 0;
    local_7d0[3] = 0;
    *local_7d0 = *local_7d0 & 0xffff0000 | local_7c8._4_4_ & 0xffff;
    *local_7d0 = *local_7d0 & 0xffff | (int)local_7c8 << 0x10;
    uVar37 = local_7c8._4_4_;
  }
  puVar10 = local_88;
  *piVar30 = *piVar30 + uVar37;
  local_7d0 = (uint *)0x0;
  local_7e0 = (undefined8 *)0x0;
  puVar34 = local_7e0;
  if (local_90 == (undefined8 *)0x0) goto joined_r0x030e2a54;
  if (local_74 == 0) {
    piVar30 = (int *)(local_90 + 3);
    iVar24 = *piVar30;
    if (iVar24 < 2) goto LAB_030e3bf0;
    iVar12 = *(int *)(local_88 + 0xb);
    lVar32 = *(long *)(local_90[2] + (long)(iVar24 + -2) * 8);
    lVar38 = local_88[1];
    *(undefined8 *)(lVar38 + (long)iVar12 * 8) =
         *(undefined8 *)(local_90[2] + (long)(iVar24 + -1) * 8);
    *(int *)(local_88 + 0xb) = iVar12 + 1;
    if (*(int *)((long)local_88 + 0x5c) <= iVar12 + 1) {
      (**(code **)(*(long *)*local_88 + 0x28))((long *)*local_88,lVar38 + (long)(iVar12 + -5) * 8,6)
      ;
      *(int *)(puVar10 + 0xb) = iVar12 + -5;
    }
    *(undefined8 *)(lVar32 + 8) = 0;
    uVar37 = 0xffffffff;
  }
  else {
LAB_030e3bf0:
    piVar30 = (int *)(local_90 + 1);
    local_80[2] = 0;
    local_80[3] = 0;
    *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
    *local_80 = *local_80 & 0xffff | local_78 << 0x10;
    uVar37 = local_74;
  }
  puVar10 = uStack_7d8;
  *piVar30 = *piVar30 + uVar37;
  puVar34 = (undefined8 *)0x0;
  if (local_7e0 == (undefined8 *)0x0) goto joined_r0x030e2a54;
  if (local_7c8._4_4_ == 0) {
    piVar30 = (int *)(local_7e0 + 3);
    iVar24 = *piVar30;
    if (iVar24 < 2) goto LAB_030e3c50;
    iVar12 = *(int *)(uStack_7d8 + 0xb);
    lVar32 = *(long *)(local_7e0[2] + (long)(iVar24 + -2) * 8);
    lVar38 = uStack_7d8[1];
    *(undefined8 *)(lVar38 + (long)iVar12 * 8) =
         *(undefined8 *)(local_7e0[2] + (long)(iVar24 + -1) * 8);
    *(int *)(uStack_7d8 + 0xb) = iVar12 + 1;
    if (*(int *)((long)uStack_7d8 + 0x5c) <= iVar12 + 1) {
      (**(code **)(*(long *)*uStack_7d8 + 0x28))
                ((long *)*uStack_7d8,lVar38 + (long)(iVar12 + -5) * 8,6);
      *(int *)(puVar10 + 0xb) = iVar12 + -5;
    }
    *(undefined8 *)(lVar32 + 8) = 0;
    uVar37 = 0xffffffff;
  }
  else {
LAB_030e3c50:
    piVar30 = (int *)(local_7e0 + 1);
    local_7d0[2] = 0;
    local_7d0[3] = 0;
    *local_7d0 = *local_7d0 & 0xffff0000 | local_7c8._4_4_ & 0xffff;
    *local_7d0 = *local_7d0 & 0xffff | (int)local_7c8 << 0x10;
    uVar37 = local_7c8._4_4_;
  }
  *piVar30 = *piVar30 + uVar37;
  local_7d0 = (uint *)0x0;
  local_7e0 = (undefined8 *)0x0;
  puVar34 = local_7e0;
joined_r0x030e2a54:
  local_7e0 = puVar34;
  if (puVar31 == (undefined8 *)0x0) {
    bVar8 = false;
  }
  else {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = &DAT_03922da5;
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
    bVar8 = true;
  }
  lVar38 = *(long *)(param_1 + 0x10);
  iVar24 = *(int *)(lVar38 + 0xb8);
  if (0 < iVar24) {
    lVar32 = 0;
    iVar12 = 0;
    lVar18 = 0x1c;
    do {
      uVar37 = *(int *)(*(long *)(*(long *)(lVar38 + 0xc0) + lVar32 * 8) + 0x1c) + 0x3fU &
               0xffffffc0;
      if (uVar37 != 0) {
        *(int *)(*(long *)(lVar38 + 0xb0) + lVar18) = iVar12;
        *(uint *)(*(long *)(lVar38 + 0xe0) + lVar32 * 4) = uVar37;
        iVar24 = *(int *)(lVar38 + 0xb8);
        iVar12 = uVar37 + iVar12;
      }
      lVar32 = lVar32 + 1;
      lVar18 = lVar18 + 0x20;
    } while (lVar32 < iVar24);
    if (0 < iVar12) {
      *(int *)(lVar38 + 0xf8) = iVar12 + 0x30;
      uVar22 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                         (PTR_PTR_0434a080,(long)(iVar12 + 0x30),0);
      *(undefined8 *)(lVar38 + 0xf0) = uVar22;
    }
  }
  lVar38 = *(long *)(param_1 + 0x10);
  iVar24 = *(int *)(lVar38 + 0x18);
  if (0 < iVar24) {
    lVar32 = 0;
    iVar12 = 0;
    lVar18 = 0x1c;
    do {
      uVar37 = *(int *)(*(long *)(*(long *)(lVar38 + 0x20) + lVar32 * 8) + 0x1c) + 0x3fU &
               0xffffffc0;
      if (uVar37 != 0) {
        *(int *)(*(long *)(lVar38 + 0x10) + lVar18) = iVar12;
        *(uint *)(*(long *)(lVar38 + 0x40) + lVar32 * 4) = uVar37;
        iVar24 = *(int *)(lVar38 + 0x18);
        iVar12 = uVar37 + iVar12;
      }
      lVar32 = lVar32 + 1;
      lVar18 = lVar18 + 0x20;
    } while (lVar32 < iVar24);
    if (0 < iVar12) {
      *(int *)(lVar38 + 0x58) = iVar12 + 0x30;
      uVar22 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                         (PTR_PTR_0434a080,(long)(iVar12 + 0x30),0);
      *(undefined8 *)(lVar38 + 0x50) = uVar22;
    }
  }
  lVar38 = *(long *)(param_1 + 0x10);
  iVar24 = *(int *)(lVar38 + 0x68);
  if (0 < iVar24) {
    lVar32 = 0;
    iVar12 = 0;
    lVar18 = 0x1c;
    do {
      uVar37 = *(int *)(*(long *)(*(long *)(lVar38 + 0x70) + lVar32 * 8) + 0x1c) + 0x3fU &
               0xffffffc0;
      if (uVar37 != 0) {
        *(int *)(*(long *)(lVar38 + 0x60) + lVar18) = iVar12;
        *(uint *)(*(long *)(lVar38 + 0x90) + lVar32 * 4) = uVar37;
        iVar24 = *(int *)(lVar38 + 0x68);
        iVar12 = uVar37 + iVar12;
      }
      lVar32 = lVar32 + 1;
      lVar18 = lVar18 + 0x20;
    } while (lVar32 < iVar24);
    if (0 < iVar12) {
      *(int *)(lVar38 + 0xa8) = iVar12 + 0x30;
      uVar22 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                         (PTR_PTR_0434a080,(long)(iVar12 + 0x30),0);
      *(undefined8 *)(lVar38 + 0xa0) = uVar22;
    }
  }
  puVar20 = *(undefined4 **)(*(long *)(piVar29 + 0x14c) + (long)piVar29[0x14e] * 8 + -8);
  uVar13 = *puVar20;
  uVar2 = *puVar20;
  *(undefined4 **)(piVar29 + 0x1cc) = puVar20;
  *(short *)(piVar29 + 0x1ce) = (short)((uint)uVar13 >> 0x10);
  *(short *)((long)piVar29 + 0x73a) = (short)uVar2;
  piVar29[0x1cf] = -piVar29[0x14a];
  if (bVar8) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "LtPreSolve";
      puVar34[2] = "StPrepareMotions";
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  FUN_03018a4c(piVar29,lVar40);
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = &DAT_03922da5;
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  lVar38 = *(long *)(param_1 + 0x10);
  local_7e0 = (undefined8 *)(lVar38 + 0xb0);
  uStack_7d8 = (undefined8 *)(lVar38 + 0x10);
  local_7d0 = (uint *)(lVar38 + 0x60);
  FUN_03025870(param_2,piVar29,&local_7e0,*(long *)(lVar40 + 0x628) + 0x3fU & 0xffffffffffffffc0,
               *(long *)(lVar40 + 0x638) + 0x3fU & 0xffffffffffffffc0,
               *(undefined4 *)(lVar40 + 0x640));
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "LtPostSolve";
      puVar34[2] = "StUpdateBodies";
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  local_7e0 = *(undefined8 **)(lVar40 + 0x80);
  uStack_7d8 = local_7e0 + (long)*(int *)(lVar40 + 0x88) * 3;
  lVar18 = *(long *)(lVar40 + 0x38);
  uVar17 = (ulong)*(uint *)(lVar40 + 0x40);
  local_7c8 = lVar18 + uVar17 * 0xc0;
  local_7c0 = *(long **)(lVar40 + 0x4c0);
  puStack_7b8 = auStack_7a8;
  local_7b0._0_4_ = 0;
  local_7b0._4_4_ = 0x80000100;
  lVar38 = *(long *)(lVar40 + 0x130);
  lVar32 = *(long *)(lVar40 + 0x138);
  uVar37 = *(uint *)(lVar32 + 4);
  local_7d0 = (uint *)lVar18;
  if ((lVar38 == lVar32) && (uVar37 == 0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    uVar26 = 0;
    uVar14 = 0;
    while( true ) {
      puVar6 = puStack_7b8;
      uVar21 = (ulong)*(uint *)(lVar38 + ((long)((ulong)uVar14 << 0x20) >> 0x1e) + 0x10) & 0xffffff;
      if (((uint)uVar21 < (uint)uVar17) && ((*(byte *)(lVar18 + uVar21 * 0xc0 + 0x54) & 1) != 0)) {
        uVar13 = *(undefined4 *)(lVar18 + uVar21 * 0xc0 + 0x50);
        uVar23 = uVar26 + 1;
        if ((int)uVar26 < (int)(local_7b0._4_4_ & 0x3fffffff)) {
          local_7b0._0_4_ = uVar26;
        }
        else {
          if (0x3ffffffe < (int)uVar26) {
            FUN_032bd0a8(uVar23);
          }
          uVar15 = (local_7b0._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar15) {
            uVar15 = 0x3fffffff;
          }
          uVar1 = uVar23;
          if ((int)uVar23 <= (int)uVar15) {
            uVar1 = uVar15;
          }
          puStack_7b8 = (undefined1 *)
                        FUN_032bd1d4(PTR_PTR_0434a080,uVar1,4,puVar6,uVar26,(long)&local_7b0 + 4);
        }
        *(undefined4 *)(puStack_7b8 + (long)(int)(uint)local_7b0 * 4) = uVar13;
        local_7b0._0_4_ = uVar23;
        if (uVar23 == (local_7b0._4_4_ & 0x3fffffff)) {
          if (-1 < (int)uVar26) {
            uVar17 = (ulong)(int)uVar23;
            do {
              uVar17 = uVar17 - 1;
              uVar23 = *(uint *)(puStack_7b8 + uVar17 * 4);
              lVar25 = (long)local_7d0 + ((ulong)uVar23 & 0xffffff) * 0xc0;
              *(undefined8 *)(lVar25 + 0x58) = 0;
              puVar34 = local_7e0 + ((ulong)uVar23 & 0xffffff) * 3;
              uVar22 = *(undefined8 *)(lVar25 + 0x60);
              uVar27 = *(undefined8 *)(lVar25 + 0x70);
              puVar34[1] = *(undefined8 *)(lVar25 + 0x68);
              puVar34[2] = uVar27;
              *puVar34 = uVar22;
              if ((*(byte *)(lVar25 + 0x88) >> 2 & 1) == 0) {
                uVar21 = (long)(int)(uint)local_7b0 - 1;
                local_7b0._0_4_ = (uint)uVar21;
                if (uVar17 != (uVar21 & 0xffffffff)) {
                  *(undefined4 *)(puStack_7b8 + uVar17 * 4) =
                       *(undefined4 *)(puStack_7b8 + uVar21 * 4);
                }
              }
            } while (0 < (long)uVar17);
          }
          (**(code **)(*local_7c0 + 0x40))(local_7c0,puStack_7b8,(uint)local_7b0,4);
          if (((int)(uint)local_7b0 < 0) || ((uint)local_7b0 != 0)) {
            local_7b0._0_4_ = 0;
          }
          uVar26 = 0;
          uVar23 = 0;
        }
        else {
          uVar26 = uVar23;
        }
      }
      uVar15 = uVar14 + 1;
      if ((0xfe < (int)uVar14) || (uVar14 = uVar15, *(int *)(lVar38 + 4) <= (int)uVar15)) {
        uVar14 = uVar15;
        if (*(long *)(lVar38 + 8) != 0) {
          uVar14 = 0;
          lVar38 = *(long *)(lVar38 + 8);
        }
      }
      if ((lVar38 == lVar32) && (uVar37 == uVar14)) break;
      uVar17 = (ulong)*(uint *)(lVar40 + 0x40);
    }
  }
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = &DAT_03922da5;
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
    uVar23 = (uint)local_7b0;
  }
  if (uVar23 != 0) {
    if (0 < (int)uVar23) {
      uVar17 = (ulong)(int)uVar23;
      do {
        uVar17 = uVar17 - 1;
        uVar37 = *(uint *)(puStack_7b8 + uVar17 * 4);
        lVar38 = (long)local_7d0 + ((ulong)uVar37 & 0xffffff) * 0xc0;
        *(undefined8 *)(lVar38 + 0x58) = 0;
        puVar34 = local_7e0 + ((ulong)uVar37 & 0xffffff) * 3;
        uVar22 = *(undefined8 *)(lVar38 + 0x60);
        uVar27 = *(undefined8 *)(lVar38 + 0x70);
        puVar34[1] = *(undefined8 *)(lVar38 + 0x68);
        puVar34[2] = uVar27;
        *puVar34 = uVar22;
        if ((*(byte *)(lVar38 + 0x88) >> 2 & 1) == 0) {
          uVar21 = (long)(int)(uint)local_7b0 - 1;
          local_7b0._0_4_ = (uint)uVar21;
          if (uVar17 != (uVar21 & 0xffffffff)) {
            *(undefined4 *)(puStack_7b8 + uVar17 * 4) = *(undefined4 *)(puStack_7b8 + uVar21 * 4);
          }
        }
      } while (0 < (long)uVar17);
      uVar23 = (uint)local_7b0;
    }
    (**(code **)(*local_7c0 + 0x40))(local_7c0,puStack_7b8,uVar23,4);
    if (((int)(uint)local_7b0 < 0) || ((uint)local_7b0 != 0)) {
    }
  }
  uVar37 = local_7b0._4_4_;
  puVar4 = PTR_PTR_0434a080;
  local_7b0 = (ulong)local_7b0._4_4_ << 0x20;
  if ((-1 < (int)uVar37) && (puStack_7b8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,puStack_7b8,uVar37 << 2);
  }
  if (lVar16 != 0) {
    if (puVar31 != (undefined8 *)0x0) {
      puVar34 = (undefined8 *)puVar31[1];
      uVar17 = (long)puVar34 + 0x1fU & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = "LtPostSolve";
        puVar34[2] = "StUnionFind";
        uVar22 = nn::os::GetSystemTick();
        puVar34[1] = uVar22;
      }
    }
    local_7e0 = (undefined8 *)0x0;
    uStack_7d8 = (undefined8 *)0x8000000000000000;
    local_7d0 = (uint *)0x0;
    local_7c8 = 0x8000000000000000;
    local_90 = (undefined8 *)0x8;
    local_7e0 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,8,&local_90);
    if (local_90 < (undefined8 *)0x1fffffff8) {
      uVar13 = (undefined4)((ulong)local_90 >> 3);
    }
    else {
      uVar13 = 0x3fffffff;
    }
    uStack_7d8 = (undefined8 *)CONCAT44(uVar13,(int)uStack_7d8);
    if ((int)uStack_7d8 != 1) {
      uStack_7d8 = (undefined8 *)CONCAT44(uVar13,1);
    }
    if ((local_7c8 & 0x3fffffff00000000) == 0) {
      uVar37 = (local_7c8._4_4_ & 0x3fffffff) * 2;
      if (uVar37 < 0x3fffffff) {
        if (uVar37 < 2) {
          uVar37 = 1;
        }
      }
      else {
        uVar37 = 0x3fffffff;
      }
      local_7d0 = (uint *)FUN_032bd1d4(puVar4,uVar37,8,local_7d0,local_7c8 & 0xffffffff,
                                       (long)&local_7c8 + 4);
    }
    if ((int)local_7c8 != 1) {
      local_7c8 = CONCAT44(local_7c8._4_4_,1);
    }
    if (0 < (int)uStack_7d8) {
      *local_7e0 = 0xffffffff;
      *(undefined8 **)local_7d0 = local_7e0;
      if (1 < (int)uStack_7d8) {
        local_7e0[1] = 0xffffffff;
        *(undefined8 **)((long)local_7d0 + 8) = local_7e0 + 1;
        if (2 < (int)uStack_7d8) {
          local_7e0[2] = 0xffffffff;
          *(undefined8 **)((long)local_7d0 + 0x10) = local_7e0 + 2;
          if (3 < (int)uStack_7d8) {
            local_7e0[3] = 0xffffffff;
            *(undefined8 **)((long)local_7d0 + 0x18) = local_7e0 + 3;
            if (4 < (int)uStack_7d8) {
              local_7e0[4] = 0xffffffff;
              *(undefined8 **)((long)local_7d0 + 0x20) = local_7e0 + 4;
              if (5 < (int)uStack_7d8) {
                local_7e0[5] = 0xffffffff;
                *(undefined8 **)((long)local_7d0 + 0x28) = local_7e0 + 5;
                if (6 < (int)uStack_7d8) {
                  lVar16 = 6;
                  lVar38 = 0;
                  do {
                    *(undefined8 *)((long)local_7e0 + lVar38 + 0x30) = 0xffffffff;
                    *(long *)((long)local_7d0 + lVar16 * 8) = (long)local_7e0 + lVar38 + 0x30;
                    lVar16 = lVar16 + 1;
                    lVar38 = lVar38 + 8;
                  } while (lVar16 < (int)uStack_7d8);
                }
              }
            }
          }
        }
      }
    }
    *local_7e0 = 0;
    *(undefined4 *)(*local_808 + 0x14) = 0;
    FUN_0305ad80(local_808,puVar19,&local_7e0,lVar40 + 0x140);
    *(undefined1 *)((long)local_808 + 0x134) = 0;
    FUN_0304b100(*(undefined8 *)(lVar40 + 0x698),piVar29,local_808,*(undefined8 *)(piVar29 + 0x12e),
                 &local_7e0,lVar40 + 0x180,puVar31);
    FUN_0305ab5c(local_808);
    if (local_808 != (long *)0x0) {
      lVar16 = *(long *)(lVar39 + 0x38d490);
      if (lVar16 == 0) {
        lVar16 = FUN_0333d16c(0,1);
        *(long *)(lVar39 + 0x38d490) = lVar16;
      }
      plVar9 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
      (**(code **)(*plVar9 + 0x18))(plVar9,local_808,0x140);
    }
    if (puVar31 != (undefined8 *)0x0) {
      puVar34 = (undefined8 *)puVar31[1];
      uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_03922da5;
        uVar22 = nn::os::GetSystemTick();
        puVar34[1] = uVar22;
      }
    }
    uVar17 = local_7c8;
    uVar21 = (ulong)local_7c8._4_4_;
    local_7c8 = (ulong)local_7c8._4_4_ << 0x20;
    if ((-1 < (long)uVar17) && (local_7d0 != (uint *)0x0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_7d0,(uVar21 & 0x3fffffff) << 3);
    }
    lVar39 = (long)uStack_7d8;
    local_7c8 = CONCAT44(0x80000000,(int)local_7c8);
    uVar17 = (ulong)uStack_7d8._4_4_;
    local_7d0 = (uint *)0x0;
    uStack_7d8 = (undefined8 *)((ulong)uStack_7d8._4_4_ << 0x20);
    if ((-1 < lVar39) && (local_7e0 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_7e0,(uVar17 & 0x3fffffff) << 3);
    }
  }
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "TtFinalizeSolve";
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  *(undefined4 *)(lVar40 + 0x808) = 0x40;
  local_7e0 = puVar31;
  FUN_0301c400(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x110),piVar29,
               *(undefined8 *)(lVar40 + 0x7e8));
  if (puVar31 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)puVar31[1];
    uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = &DAT_0390f40e;
      uVar22 = nn::os::GetSystemTick();
      puVar34[1] = uVar22;
    }
  }
  uVar37 = piVar29[0x144];
  if (0 < (int)uVar37) {
    if (puVar31 == (undefined8 *)0x0) {
      local_90 = (undefined8 *)0x0;
      bVar8 = _DAT_00000018 <= _DAT_00000008;
    }
    else {
      puVar34 = (undefined8 *)puVar31[1];
      uVar17 = (ulong)((long)puVar34 + 0x17) & 0xfffffffffffffff8;
      if (uVar17 <= (ulong)puVar31[2]) {
        puVar31[1] = uVar17;
        if (puVar34 == (undefined8 *)0x0) {
          puVar34 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar34 = "TtFullCast";
          uVar22 = nn::os::GetSystemTick();
          puVar34[1] = uVar22;
          puVar34 = (undefined8 *)puVar31[1];
        }
      }
      bVar8 = (undefined8 *)puVar31[3] <= puVar34;
      local_90 = puVar31;
    }
    local_98 = CONCAT11(local_98._1_1_,!bVar8);
    if (bVar8) {
      lVar39 = 0;
      do {
        *(undefined8 *)(auStack_7a8 + lVar39 + -0x30) = 0x100000001;
        *(undefined8 *)(auStack_7a8 + lVar39 + -0x38) = 0x100000001;
        lVar39 = lVar39 + 0x10;
      } while (lVar39 != 0x40);
      puVar34 = local_7a0;
      do {
        puVar34[1] = 0x100000001;
        *puVar34 = 0x100000001;
        puVar34[3] = 0x100000001;
        puVar34[2] = 0x100000001;
        puVar34[5] = 0x100000001;
        puVar34[4] = 0x100000001;
        puVar34[7] = 0x100000001;
        puVar34[6] = 0x100000001;
        puVar34[9] = 0x100000001;
        puVar34[8] = 0x100000001;
        puVar34[0xb] = 0x100000001;
        puVar34[10] = 0x100000001;
        puVar34[0xd] = 0x100000001;
        puVar34[0xc] = 0x100000001;
        puVar34[0xf] = 0x100000001;
        puVar34[0xe] = 0x100000001;
        puVar34 = puVar34 + 0x10;
      } while (puVar34 < &uStack_a0);
      local_78c = 0;
    }
    else {
      memset(&local_7e0,0,0x740);
      local_78c = 1;
    }
    local_6f0 = local_78c;
    local_5ec = local_78c;
    local_4e8 = local_78c;
    local_498 = local_78c;
    local_444 = local_78c;
    local_424 = local_78c;
    local_300 = local_78c;
    local_2b0 = local_78c;
    local_244 = local_78c;
    local_120 = local_78c;
    local_d0 = local_78c;
    local_ac = local_78c;
    local_a8 = local_78c;
    if (1 < (int)uVar37) {
      FUN_030e3e90(*(undefined8 *)(piVar29 + 0x142),0,uVar37 - 1);
    }
    uVar17 = 0;
    iVar24 = 0x7fffffff;
    do {
      iVar12 = *(int *)(*(long *)(piVar29 + 0x142) + uVar17 * 4);
      if (iVar12 != iVar24) {
        FUN_030caf10(piVar29,iVar12,&local_7e0);
        iVar24 = iVar12;
      }
      uVar17 = uVar17 + 1;
    } while (uVar37 != uVar17);
    FUN_0306e23c(&local_7e0,puVar31);
    piVar29[0x144] = 0;
    if (puVar31 != (undefined8 *)0x0) {
      puVar34 = (undefined8 *)puVar31[1];
      uVar17 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)puVar31[2]) && (puVar31[1] = uVar17, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_0390f40e;
        uVar22 = nn::os::GetSystemTick();
        puVar34[1] = uVar22;
      }
    }
  }
  if (piVar29[0x1cf] + piVar29[0x14a] == 0) {
    piVar29[0x1cf] = 0;
  }
  else {
    puVar35 = *(uint **)(piVar29 + 0x1cc);
    if ((puVar35 != *(uint **)(*(long *)(piVar29 + 0x14c) + (long)piVar29[0x14e] * 8 + -8)) &&
       ((uint)*(ushort *)((long)piVar29 + 0x73a) == (*puVar35 & 0xffff))) {
      puVar35 = *(uint **)(puVar35 + 2);
      piVar29[0x1ce] = 0;
    }
    uVar37 = *puVar35;
    *(uint **)(piVar29 + 0x1cc) = puVar35;
    piVar29[0x1cf] = piVar29[0x1cf] + piVar29[0x14a];
    lVar39 = *(long *)(piVar29 + 0x1c8);
    *(short *)((long)piVar29 + 0x73a) = (short)uVar37 - *(short *)((long)piVar29 + 0x73a);
    puVar31 = (undefined8 *)**(undefined8 **)(lVar39 + 0x10);
    if (*(int *)((long)puVar31 + 0xc) == 0) {
      puVar31[1] = *(undefined8 *)(piVar29 + 0x1ce);
      uVar22 = *(undefined8 *)(piVar29 + 0x1cc);
      puVar31[2] = *(undefined8 *)(piVar29 + 0x1d0);
      *puVar31 = uVar22;
    }
    else {
      puVar35 = *(uint **)(*(long *)(piVar29 + 0x14c) + (long)piVar29[0x14e] * 8 + -8);
      puVar34 = *(undefined8 **)(piVar29 + 0x138);
      uVar37 = *puVar35;
      if (0x3a < uVar37 >> 0x16) {
        puVar33 = puVar35;
        do {
          iVar24 = *(int *)(puVar34 + 0xb) + -1;
          if (*(int *)(puVar34 + 0xb) < 1) {
            lVar16 = puVar34[1];
            (**(code **)(*(long *)*puVar34 + 0x20))((long *)*puVar34,lVar16,6);
            *(undefined4 *)(puVar34 + 0xb) = 5;
            puVar19 = (undefined8 *)(lVar16 + 0x28);
          }
          else {
            *(int *)(puVar34 + 0xb) = iVar24;
            puVar19 = (undefined8 *)(puVar34[1] + (long)iVar24 * 8);
          }
          puVar35 = (uint *)*puVar19;
          puVar35[4] = 0;
          puVar35[5] = 0;
          puVar35[6] = 0;
          puVar35[7] = 0;
          puVar35[0] = 0;
          puVar35[1] = 0;
          puVar35[2] = 0;
          puVar35[3] = 0;
          puVar35[1] = piVar29[0x14e];
          iVar24 = piVar29[0x14e];
          uVar37 = iVar24 + 1;
          uVar23 = piVar29[0x14f];
          if (iVar24 < (int)(uVar23 & 0x3fffffff)) {
            lVar16 = *(long *)(piVar29 + 0x14c);
          }
          else {
            uVar22 = *(undefined8 *)(piVar29 + 0x14c);
            if (0x3ffffffe < iVar24) {
              FUN_032bd0a8(uVar37);
              uVar23 = piVar29[0x14f];
            }
            uVar23 = (uVar23 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar14 = uVar37;
            if ((int)uVar37 <= (int)uVar23) {
              uVar14 = uVar23;
            }
            lVar16 = FUN_032bd1d4(puVar4,uVar14,8,uVar22,iVar24,piVar29 + 0x14f);
            *(long *)(piVar29 + 0x14c) = lVar16;
            iVar24 = piVar29[0x14e];
          }
          *(uint **)(lVar16 + (long)iVar24 * 8) = puVar35;
          piVar29[0x14e] = uVar37;
          *(uint **)(puVar33 + 2) = puVar35;
          uVar37 = *puVar35;
          puVar33 = puVar35;
        } while (0x3a < uVar37 >> 0x16);
      }
      uVar37 = uVar37 >> 0x10;
      do {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar8) {
          *puVar35 = *puVar35 + 0x200001;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      piVar29[0x14a] = piVar29[0x14a] + 1;
      uVar22 = *(undefined8 *)(piVar29 + 0x1ce);
      uVar27 = *(undefined8 *)(piVar29 + 0x1d0);
      puVar34 = (undefined8 *)((long)puVar35 + (ulong)uVar37 + 0x20);
      *puVar34 = *(undefined8 *)(piVar29 + 0x1cc);
      *(undefined8 *)((long)puVar35 + (ulong)uVar37 + 0x28) = uVar22;
      *(undefined8 *)((long)puVar35 + (ulong)uVar37 + 0x30) = uVar27;
      if (*(int *)((long)puVar31 + 0xc) == 0) {
        puVar31[1] = *(undefined8 *)((long)puVar35 + (ulong)uVar37 + 0x28);
        uVar22 = *puVar34;
        puVar31[2] = *(undefined8 *)((long)puVar35 + (ulong)uVar37 + 0x30);
        *puVar31 = uVar22;
      }
      else {
        *(undefined8 *)((long)puVar35 + (ulong)uVar37 + 0x30) = puVar31[2];
        puVar31[2] = puVar34;
      }
      **(long **)(lVar39 + 0x10) = (long)puVar34;
    }
  }
  puVar20 = *(undefined4 **)(*(long *)(piVar29 + 0x14c) + (long)piVar29[0x14e] * 8 + -8);
  uVar13 = *puVar20;
  uVar2 = *puVar20;
  *(undefined4 **)(piVar29 + 0x1cc) = puVar20;
  *(short *)(piVar29 + 0x1ce) = (short)((uint)uVar13 >> 0x10);
  *(short *)((long)piVar29 + 0x73a) = (short)uVar2;
  piVar29[0x1cf] = -piVar29[0x14a];
  FUN_0303aa70(lVar40,piVar29);
  return;
code_r0x030e26c0:
  puVar35 = (uint *)((long)param_2 + uVar17 * 4 + 0x114);
  goto LAB_030e26fc;
}


