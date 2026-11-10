/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289ad50; name: FUN_0289ad50
 */


void FUN_0289ad50(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined8 *param_6,undefined8 *param_7,
                 long *param_8)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 extraout_s0;
  float fVar13;
  undefined4 extraout_var;
  float fVar14;
  undefined4 extraout_var_00;
  float fVar15;
  undefined4 extraout_var_01;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_80 [2];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  fVar23 = param_4._12_4_;
  fVar22 = param_4._8_4_;
  fVar21 = param_4._4_4_;
  fVar20 = param_4._0_4_;
  uVar19 = param_3._8_8_;
  uVar18 = param_3._0_8_;
  iVar8 = *(int *)(param_5 + 0x68);
  if (iVar8 == 1) {
    plVar11 = (long *)*param_6;
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar12 = plVar11 + 2;
      do {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = (long *)*param_7;
    local_70 = plVar12;
    local_68 = plVar11;
    if (plVar12 == (long *)0x0) {
      FUN_0289b220(param_5,&local_68,&local_70,param_8);
    }
    else {
      if (plVar12[1] != 0) {
        plVar2 = plVar12 + 2;
        do {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_0289b220(param_5,&local_68,&local_70,param_8);
      if (plVar12[1] != 0) {
        plVar2 = plVar12 + 2;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
    }
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar12 = plVar11 + 2;
      do {
        lVar10 = *plVar12;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    iVar8 = *(int *)(param_5 + 0x68);
  }
  if (iVar8 == 3) {
    plVar11 = (long *)*param_6;
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar12 = plVar11 + 2;
      do {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = (long *)*param_7;
    local_78 = plVar12;
    if (plVar12 == (long *)0x0) {
      FUN_0289ba28(param_5,&local_78);
    }
    else {
      if (plVar12[1] != 0) {
        plVar2 = plVar12 + 2;
        do {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_0289ba28(param_5,&local_78);
      if (plVar12[1] != 0) {
        plVar2 = plVar12 + 2;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
    }
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar12 = plVar11 + 2;
      do {
        lVar10 = *plVar12;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
  if ((*(int *)(param_5 + 0x68) == 2) && (*(char *)(param_5 + 0x3ed) != '\0')) {
    *(undefined1 *)(param_5 + 0x3ed) = 0;
    if (*(char *)(param_5 + 0x3ec) != '\0') {
      if (*(long *)(*(long *)(param_5 + 0x170) + 0x100) == 0) {
        FUN_0327ec28(*param_7);
      }
      bVar7 = *(int *)(*(long *)(param_5 + 0x70) + 0x40) == 0;
      cVar3 = *(char *)(param_5 + 0x3ec);
      goto joined_r0x0289afb0;
    }
    FUN_031a785c(*(undefined8 *)(param_5 + 0x70));
    lVar10 = *(long *)(*(long *)(param_5 + 0x170) + 0x100);
    if (*(int *)(param_5 + 1000) == 0) {
      if (lVar10 != 0) {
        FUN_0327edf0(*param_7);
      }
    }
    else if (lVar10 == 0) {
      FUN_0327ec28(*param_7);
    }
  }
  bVar7 = false;
  cVar3 = *(char *)(param_5 + 0x3ec);
joined_r0x0289afb0:
  if ((cVar3 != '\0') && (*(int *)(param_5 + 0x68) == 2)) {
    if (*(char *)(param_5 + 0x3f0) != '\0') {
      lVar10 = *(long *)(param_5 + 0x70);
      iVar8 = *(int *)(param_5 + 0x3f4);
      if (*(int *)(lVar10 + 0xa0) != iVar8) {
        local_60._6_2_ = (undefined2)((ulong)local_60 >> 0x30);
        local_60 = CONCAT26(local_60._6_2_,0x3408000010);
        uStack_58 = CONCAT44(iVar8,*(undefined4 *)(lVar10 + 0x23c));
        FUN_031aa380(*(long *)(lVar10 + 0x180) + 0x28,*(long *)(lVar10 + 0x180),&local_60);
        *(undefined1 *)(lVar10 + 0x199) = 1;
        *(int *)(lVar10 + 0xa0) = iVar8;
        if ((*(int *)(lVar10 + 0x40) == 1) && (*(int *)(lVar10 + 0x28) != 0)) {
          FUN_031a7148(lVar10);
        }
      }
      *(int *)(*(long *)(param_5 + 0x1a8) + 0x20) = iVar8;
      puVar9 = (undefined8 *)(*param_8 + (long)iVar8 * 0xc);
      FUN_031a6b70(*(undefined8 *)(param_5 + 0x70),*puVar9,*(undefined4 *)(puVar9 + 1));
      *(undefined1 *)(param_5 + 0x3f0) = 0;
    }
    if (*(char *)(param_5 + 0x3e0) == '\0') {
      fVar22 = (float)*(undefined8 *)(param_5 + 0x158);
      fVar23 = (float)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_5 + 0x150);
      fVar21 = (float)((ulong)*(undefined8 *)(param_5 + 0x150) >> 0x20);
    }
    else {
      local_60 = param_5;
      (**(code **)(param_5 + 0xa0))(param_5 + 0xc0,&local_60);
      *(ulong *)(param_5 + 0x128) = CONCAT44(extraout_var_01,extraout_var_00);
      *(ulong *)(param_5 + 0x120) = CONCAT44(extraout_var,extraout_s0);
      *(long *)(param_5 + 0x138) = param_2._8_8_;
      *(long *)(param_5 + 0x130) = param_2._0_8_;
      *(undefined8 *)(param_5 + 0x148) = uVar19;
      *(undefined8 *)(param_5 + 0x140) = uVar18;
      *(ulong *)(param_5 + 0x158) = CONCAT44(fVar23,fVar22);
      *(ulong *)(param_5 + 0x150) = CONCAT44(fVar21,fVar20);
    }
    fVar13 = (float)*(undefined8 *)(param_5 + 0x160) - fVar20;
    fVar14 = (float)((ulong)*(undefined8 *)(param_5 + 0x160) >> 0x20) - fVar21;
    fVar15 = (float)*(undefined8 *)(param_5 + 0x168) - fVar22;
    fVar16 = (float)((ulong)*(undefined8 *)(param_5 + 0x168) >> 0x20) - fVar23;
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    fVar15 = fVar15 * fVar15;
    fVar16 = fVar16 * fVar16;
    auVar17._4_4_ = fVar14;
    auVar17._0_4_ = fVar13;
    auVar17._8_4_ = fVar15;
    auVar17._12_4_ = fVar16;
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar13;
    auVar4._8_4_ = fVar15;
    auVar4._12_4_ = fVar16;
    auVar17 = NEON_ext(auVar17,auVar4,8,1);
    if (!(bool)(SQRT(auVar17._0_4_ + fVar13 + auVar17._4_4_ + fVar14) <= 0.0001 & (bVar7 ^ 1U))) {
      auVar5._4_4_ = fVar21;
      auVar5._0_4_ = fVar20;
      auVar5._8_4_ = fVar22;
      auVar5._12_4_ = fVar23;
      auVar6._4_4_ = fVar21;
      auVar6._0_4_ = fVar20;
      auVar6._8_4_ = fVar22;
      auVar6._12_4_ = fVar23;
      auVar17 = NEON_ext(auVar5,auVar6,8,1);
      local_80[0] = 0xffffffff;
      uStack_58 = (ulong)auVar17._0_4_;
      local_60 = CONCAT44(fVar21,fVar20);
      FUN_031a6df4(*(undefined8 *)(param_5 + 0x70),&local_60,local_80);
      *(undefined8 *)(param_5 + 0x168) = *(undefined8 *)(param_5 + 0x158);
      *(undefined8 *)(param_5 + 0x160) = *(undefined8 *)(param_5 + 0x150);
    }
    pauVar1 = (undefined1 (*) [16])(param_5 + 0x140);
    uVar18 = *(undefined8 *)*pauVar1;
    lVar10 = *(long *)(param_5 + 0x70);
    auVar17 = NEON_ext(*pauVar1,*pauVar1,8,1);
    local_60 = CONCAT26(local_60._6_2_,0x4708000020);
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(lVar10 + 0x23c));
    local_50 = uVar18;
    uStack_48 = (ulong)auVar17._0_4_;
    FUN_031aa380(*(long *)(lVar10 + 0x180) + 0x28,*(long *)(lVar10 + 0x180),&local_60);
    iVar8 = *(int *)(lVar10 + 0x40);
    *(undefined4 *)(lVar10 + 0x40) = 1;
    *(ulong *)(lVar10 + 0x38) = (ulong)auVar17._0_4_;
    *(undefined8 *)(lVar10 + 0x30) = uVar18;
    if ((iVar8 != 1) &&
       (((*(long *)(lVar10 + 0x220) == 0 || (*(char *)(lVar10 + 0x198) != '\0')) &&
        (*(int *)(lVar10 + 0x28) != 0)))) {
      FUN_031a7148(lVar10);
    }
    if (bVar7) {
      lVar10 = *(long *)(param_5 + 0x70);
      local_60._6_2_ = (undefined2)((ulong)local_60 >> 0x30);
      local_60 = CONCAT26(local_60._6_2_,0x4908000010);
      uStack_58._4_4_ = (undefined4)(uStack_58 >> 0x20);
      uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(lVar10 + 0x23c));
      FUN_031aa380(*(long *)(lVar10 + 0x180) + 0x28,*(long *)(lVar10 + 0x180),&local_60);
      FUN_031a7148(lVar10);
    }
  }
  return;
}


