/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177f988; name: FUN_0177f988
 */


void FUN_0177f988(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 in_q3 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  float local_e0;
  float fStack_d8;
  float fStack_d4;
  char local_c8 [8];
  float local_c0;
  float local_bc;
  float fStack_b8;
  long local_b0;
  long local_a0;
  long *plStack_98;
  long *local_78;
  long *local_70;
  long *local_68;
  
  uVar24 = in_q3._8_8_;
  uVar14 = in_q3._0_8_;
  if (((*(char *)(param_1 + 0x170) != '\0') && (*(long *)(param_1 + 0x58) != 0)) &&
     (FUN_0177ffd8(local_c8,param_1), local_c8[0] != '\0')) {
    bVar11 = FUN_0178038c(param_1);
    fVar20 = *(float *)(param_1 + 400);
    uVar17 = *(undefined8 *)(param_1 + 0x58);
    FUN_00be5694(&local_70,param_1 + 0x70);
    lVar16 = param_1 + 0xa0;
    FUN_00be5694(&local_78,lVar16);
    if ((local_70 == (long *)0x0) || (local_78 == (long *)0x0)) {
      bVar18 = false;
      uVar25 = uVar24;
    }
    else {
      FUN_009c69bc(&local_68);
      (**(code **)(*local_68 + 0x40))();
      uVar13 = uVar14;
      uVar25 = uVar24;
      if (local_68 != (long *)0x0) {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      FUN_009c69bc(&local_68,local_78);
      (**(code **)(*local_68 + 0x40))();
      if (local_68 != (long *)0x0) {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      local_e0 = (float)uVar14;
      fStack_d8 = (float)uVar24;
      fStack_d4 = (float)((ulong)uVar24 >> 0x20);
      uVar14 = uVar13 & 0xffffffff;
      local_e0 = local_e0 - (float)uVar13;
      fStack_d8 = fStack_d8 - (float)uVar25;
      fStack_d4 = fStack_d4 - (float)((ulong)uVar25 >> 0x20);
      local_e0 = local_e0 * local_e0;
      fStack_d8 = fStack_d8 * fStack_d8;
      fStack_d4 = fStack_d4 * fStack_d4;
      auVar23._4_4_ = 0;
      auVar23._0_4_ = local_e0;
      auVar23._8_4_ = fStack_d8;
      auVar23._12_4_ = fStack_d4;
      auVar5._4_4_ = 0;
      auVar5._0_4_ = local_e0;
      auVar5._8_4_ = fStack_d8;
      auVar5._12_4_ = fStack_d4;
      auVar23 = NEON_ext(auVar23,auVar5,8,1);
      bVar18 = fStack_b8 * fStack_b8 < auVar23._0_4_ + local_e0 + auVar23._4_4_ + 0.0;
    }
    if (local_78 != (long *)0x0) {
      lVar15 = local_78[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      lVar15 = local_70[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    uVar12 = FUN_01780680(param_1);
    FUN_00be5694(&local_70,param_1 + 0x70);
    FUN_00be5694(&local_78,lVar16);
    if ((local_70 == (long *)0x0) || (local_78 == (long *)0x0)) {
      bVar19 = false;
    }
    else {
      FUN_009c69bc(&local_68);
      (**(code **)(*local_68 + 0x40))();
      uVar13 = uVar14;
      uVar24 = uVar25;
      if (local_68 != (long *)0x0) {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      FUN_009c69bc(&local_68,local_78);
      (**(code **)(*local_68 + 0x40))();
      if (local_68 != (long *)0x0) {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar19) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      local_e0 = (float)uVar14;
      fStack_d8 = (float)uVar25;
      fStack_d4 = (float)((ulong)uVar25 >> 0x20);
      uVar14 = uVar13 & 0xffffffff;
      local_e0 = local_e0 - (float)uVar13;
      fStack_d8 = fStack_d8 - (float)uVar24;
      fStack_d4 = fStack_d4 - (float)((ulong)uVar24 >> 0x20);
      local_e0 = local_e0 * local_e0;
      fStack_d8 = fStack_d8 * fStack_d8;
      fStack_d4 = fStack_d4 * fStack_d4;
      auVar6._4_4_ = 0;
      auVar6._0_4_ = local_e0;
      auVar6._8_4_ = fStack_d8;
      auVar6._12_4_ = fStack_d4;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = local_e0;
      auVar7._8_4_ = fStack_d8;
      auVar7._12_4_ = fStack_d4;
      auVar23 = NEON_ext(auVar6,auVar7,8,1);
      bVar19 = local_c0 * local_c0 < auVar23._0_4_ + local_e0 + auVar23._4_4_ + 0.0;
      uVar25 = uVar24;
    }
    if (local_78 != (long *)0x0) {
      lVar15 = local_78[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      lVar15 = local_70[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    FUN_0178790c(uVar17,bVar11 & local_bc <= fVar20,bVar18,uVar12 & 1,bVar19);
    uVar13 = FUN_0178038c(param_1);
    if ((uVar13 & 1) == 0) {
      local_bc = 0.0;
    }
    else {
      fVar20 = *(float *)(param_1 + 400) + 0.033333335;
      *(float *)(param_1 + 400) = fVar20;
      if (fVar20 <= local_bc) {
        local_bc = fVar20;
      }
    }
    *(float *)(param_1 + 400) = local_bc;
    FUN_00be5694(&local_70,lVar16);
    lVar16 = local_b0;
    plVar10 = plStack_98;
    if (local_70 != (long *)0x0) {
      FUN_009c69bc(&local_68);
      (**(code **)(*local_68 + 0x40))();
      if (local_68 != (long *)0x0) {
        lVar16 = local_68[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      uVar13 = uVar14 & 0xffffffff;
      fVar20 = (float)uVar14 - *(float *)(param_1 + 0x1b0);
      fVar21 = (float)uVar25 - *(float *)(param_1 + 0x1b8);
      fVar22 = (float)((ulong)uVar25 >> 0x20) - *(float *)(param_1 + 0x1bc);
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = fVar20;
      auVar8._8_4_ = fVar21;
      auVar8._12_4_ = fVar22;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = fVar20;
      auVar9._8_4_ = fVar21;
      auVar9._12_4_ = fVar22;
      auVar23 = NEON_ext(auVar8,auVar9,8,1);
      if (4.0 <= auVar23._0_4_ + fVar20 + auVar23._4_4_ + 0.0) {
        FUN_009c69bc(&local_68,local_70);
        (**(code **)(*local_68 + 0x40))();
        if (local_68 != (long *)0x0) {
          lVar16 = local_68[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar18) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        *(undefined8 *)(param_1 + 0x1b8) = uVar25;
        *(ulong *)(param_1 + 0x1b0) = uVar13;
      }
      lVar16 = local_b0;
      plVar10 = plStack_98;
      if (local_70 != (long *)0x0) {
        lVar15 = local_70[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar18) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
          lVar16 = local_b0;
          plVar10 = plStack_98;
        }
      }
    }
    if (lVar16 != 0) {
      uVar14 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar14 & 1) != 0) {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar16,local_a0 - lVar16,0x10);
          return;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar16,local_a0 - lVar16,0x10);
    }
  }
  return;
}


