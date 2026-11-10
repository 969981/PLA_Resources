/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303b120; name: FUN_0303b120
 */


void FUN_0303b120(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  undefined8 local_540;
  undefined **local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined1 *local_520;
  undefined8 local_518;
  undefined1 auStack_510 [768];
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 auStack_200 [128];
  long *local_180;
  undefined8 local_178;
  long alStack_170 [32];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  
  lVar14 = tpidr_el0;
  if (*(long *)(lVar14 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar15;
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar14 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    puVar13 = *(undefined8 **)(lVar15 + 8);
    uVar10 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar10, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtPhysics";
      uVar9 = nn::os::GetSystemTick();
      puVar13[1] = uVar9;
    }
  }
  local_530 = 0xffffffff;
  uStack_528 = 1;
  local_520 = auStack_510;
  local_518 = -0x7fffffe000000000;
  local_210 = auStack_200;
  local_180 = alStack_170;
  local_538 = &PTR_LAB_042b1fc0;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffffffffffffffff;
  local_58 = 0xffff;
  local_208 = -0x7fffffe000000000;
  local_178 = -0x7fffffe000000000;
  local_540 = CONCAT26(local_540._6_2_,0x2b02000010);
  plVar7 = *(long **)(param_1 + 0x7f0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_540);
  }
  if (*(long *)(lVar14 + 0x38d490) == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar17;
    lVar17 = *(long *)(lVar17 + 0x10);
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar14 + 0x38d490) + 0x10);
  }
  if (lVar17 != 0) {
    puVar13 = *(undefined8 **)(lVar17 + 8);
    uVar10 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar17 + 0x10)) &&
       (*(ulong *)(lVar17 + 8) = uVar10, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtBuildSolveTasks";
      uVar9 = nn::os::GetSystemTick();
      puVar13[1] = uVar9;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x4a8) + 0x18))
            (*(long **)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x908),&local_538,0);
  if (lVar17 != 0) {
    puVar13 = *(undefined8 **)(lVar17 + 8);
    uVar10 = (ulong)((long)puVar13 + 0x17) & 0xfffffffffffffff8;
    if (uVar10 <= *(ulong *)(lVar17 + 0x10)) {
      *(ulong *)(lVar17 + 8) = uVar10;
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar13 = "EtBuildSolveTasks";
        uVar9 = nn::os::GetSystemTick();
        puVar13[1] = uVar9;
        puVar13 = *(undefined8 **)(lVar17 + 8);
      }
    }
    if (puVar13 < *(undefined8 **)(lVar17 + 0x18)) {
      uVar10 = (ulong)((long)puVar13 + 0xf) & 0xfffffffffffffff8;
      if ((uVar10 <= *(ulong *)(lVar17 + 0x10)) &&
         (*(ulong *)(lVar17 + 8) = uVar10, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = "PdStatistics";
      }
      (**(code **)(**(long **)(param_1 + 0x4a8) + 0x20))(*(long **)(param_1 + 0x4a8),param_1);
      puVar13 = *(undefined8 **)(lVar17 + 8);
      puVar12 = *(undefined8 **)(lVar17 + 0x10);
      puVar11 = (undefined8 *)((long)puVar13 + 0xfU & 0xfffffffffffffff8);
      if (puVar12 < puVar11) {
        puVar11 = puVar13;
      }
      else {
        *(undefined8 **)(lVar17 + 8) = puVar11;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = "PdMemory";
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((long)puVar11 + 0xfU & 0xfffffffffffffff8);
      if ((puVar13 <= puVar12) &&
         (*(undefined8 **)(lVar17 + 8) = puVar13, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = "PdBlock stream allocator";
      }
      FUN_032be1a4(*(undefined8 *)(param_1 + 0x4a0));
      puVar13 = *(undefined8 **)(lVar17 + 8);
      puVar12 = *(undefined8 **)(lVar17 + 0x10);
      puVar11 = (undefined8 *)((ulong)((long)puVar13 + 0xf) & 0xfffffffffffffff8);
      if (puVar12 < puVar11) {
        puVar11 = puVar13;
      }
      else {
        *(undefined8 **)(lVar17 + 8) = puVar11;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &DAT_038bd3fb;
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((ulong)((long)puVar11 + 0xf) & 0xfffffffffffffff8);
      if (puVar12 < puVar13) {
        puVar13 = puVar11;
      }
      else {
        *(undefined8 **)(lVar17 + 8) = puVar13;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &DAT_038bd3fb;
          puVar13 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar11 = (undefined8 *)((ulong)((long)puVar13 + 0xf) & 0xfffffffffffffff8);
      if (puVar12 < puVar11) {
        puVar11 = puVar13;
      }
      else {
        *(undefined8 **)(lVar17 + 8) = puVar11;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = "PdSolver settings";
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((ulong)((long)puVar11 + 0x17) & 0xfffffffffffffff8);
      if (puVar13 <= puVar12) {
        uVar9 = *(undefined8 *)(param_1 + 0x540);
        *(undefined8 **)(lVar17 + 8) = puVar13;
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar11 = "MfTimestep";
          *(int *)(puVar11 + 1) = (int)uVar9;
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((ulong)((long)puVar11 + 0x17) & 0xfffffffffffffff8);
      if (puVar13 <= puVar12) {
        uVar2 = *(undefined4 *)(param_1 + 0x530);
        *(undefined8 **)(lVar17 + 8) = puVar13;
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar11 = "MfTau";
          *(undefined4 *)(puVar11 + 1) = uVar2;
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((ulong)((long)puVar11 + 0x17) & 0xfffffffffffffff8);
      if (puVar13 <= puVar12) {
        uVar9 = *(undefined8 *)(param_1 + 0x538);
        *(undefined8 **)(lVar17 + 8) = puVar13;
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar11 = "MfDamping";
          *(int *)(puVar11 + 1) = (int)uVar9;
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((ulong)((long)puVar11 + 0x17) & 0xfffffffffffffff8);
      if (puVar13 <= puVar12) {
        iVar18 = *(int *)(param_1 + 0x5a0);
        *(undefined8 **)(lVar17 + 8) = puVar13;
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar11 = "MiNum substeps";
          *(float *)(puVar11 + 1) = (float)iVar18;
          puVar11 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar13 = (undefined8 *)((ulong)((long)puVar11 + 0xf) & 0xfffffffffffffff8);
      if (puVar12 < puVar13) {
        puVar13 = puVar11;
      }
      else {
        *(undefined8 **)(lVar17 + 8) = puVar13;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &DAT_038bd3fb;
          puVar13 = *(undefined8 **)(lVar17 + 8);
          puVar12 = *(undefined8 **)(lVar17 + 0x10);
        }
      }
      puVar11 = (undefined8 *)((ulong)((long)puVar13 + 0xf) & 0xfffffffffffffff8);
      if ((puVar11 <= puVar12) &&
         (*(undefined8 **)(lVar17 + 8) = puVar11, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_038bd3fb;
      }
    }
  }
  if ((int)local_518 != 0 || (int)local_208 != 0) {
    if (*(long *)(lVar14 + 0x38d490) == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar17;
      lVar14 = *(long *)(lVar17 + 0x10);
    }
    else {
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38d490) + 0x10);
    }
    if (lVar14 != 0) {
      puVar13 = *(undefined8 **)(lVar14 + 8);
      uVar10 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= *(ulong *)(lVar14 + 0x10)) &&
         (*(ulong *)(lVar14 + 8) = uVar10, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = "TtSolve";
        uVar9 = nn::os::GetSystemTick();
        puVar13[1] = uVar9;
      }
    }
    local_540 = lVar14;
    (**(code **)(*param_2 + 0xb0))(param_2,&local_538,0);
    if (lVar14 != 0) {
      puVar13 = *(undefined8 **)(lVar14 + 8);
      uVar10 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= *(ulong *)(lVar14 + 0x10)) &&
         (*(ulong *)(lVar14 + 8) = uVar10, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_0390f40e;
        uVar9 = nn::os::GetSystemTick();
        puVar13[1] = uVar9;
      }
    }
  }
  plVar7 = local_180;
  puVar5 = PTR_PTR_0434a080;
  local_538 = &PTR_LAB_04350ee8;
  if ((int)local_178 == 0) {
LAB_0303b744:
    lVar14 = local_178;
    uVar10 = (ulong)local_178._4_4_;
    local_178 = (ulong)local_178._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_180 != (long *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_180,(uVar10 & 0x3fffffff) << 3);
    }
    lVar14 = local_208;
    uVar6 = local_208._4_4_;
    local_180 = (long *)0x0;
    local_178 = CONCAT44(0x80000000,(int)local_178);
    local_208 = (ulong)local_208._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_210 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_210,uVar6 << 2);
    }
    lVar14 = local_518;
    uVar10 = (ulong)local_518._4_4_;
    local_210 = (undefined1 *)0x0;
    local_208 = CONCAT44(0x80000000,(int)local_208);
    local_518 = (ulong)local_518._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_520 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_520,(uVar10 & 0x3fffffff) * 0x18);
    }
    if (lVar15 != 0) {
      puVar13 = *(undefined8 **)(lVar15 + 8);
      uVar10 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
         (*(ulong *)(lVar15 + 8) = uVar10, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_0390f40e;
        uVar9 = nn::os::GetSystemTick();
        puVar13[1] = uVar9;
      }
    }
    return;
  }
  plVar16 = local_180 + (long)(int)local_178 + -1;
  plVar8 = (long *)*plVar16;
  if (plVar8 == (long *)0x0) goto LAB_0303b710;
  if (plVar8[1] == 0) goto LAB_0303b710;
  plVar1 = plVar8 + 2;
  do {
    lVar14 = *plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (lVar14 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
LAB_0303b710:
    do {
      if (plVar16 == plVar7) goto LAB_0303b744;
      plVar16 = plVar16 + -1;
      plVar8 = (long *)*plVar16;
    } while ((plVar8 == (long *)0x0) || (plVar8[1] == 0));
    plVar1 = plVar8 + 2;
    do {
      lVar14 = *plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  } while( true );
}


