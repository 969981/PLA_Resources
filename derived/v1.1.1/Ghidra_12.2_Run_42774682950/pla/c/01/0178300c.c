/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0178300c; name: FUN_0178300c
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0178300c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 in_q3 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  float fStack_c8;
  float fStack_c4;
  long *local_b8 [2];
  float local_a8;
  long local_a0;
  long local_90;
  long *plStack_88;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  uVar17 = in_q3._8_8_;
  fVar14 = in_q3._0_4_;
  FUN_00be5694(&local_60,param_1 + 0x70);
  if (*(long *)(param_1 + 0x80) == 0) {
    local_b8[0] = (long *)0x0;
  }
  else {
    FUN_00ac64cc(local_b8);
  }
  plVar9 = local_b8[0];
  FUN_00be5694(&local_68,param_1 + 0xa0);
  uVar12 = 0;
  uVar10 = 0;
  if ((plVar9 != (long *)0x0) && (local_60 != (long *)0x0)) {
    if (local_68 == (long *)0x0) {
      uVar12 = 0;
      goto joined_r0x01783480;
    }
    FUN_0177ffd8(local_b8,param_1);
    if ((char)local_b8[0] == '\0') {
      uVar12 = 0;
    }
    else {
      FUN_00be5694(&local_50,param_1 + 0x70);
      FUN_00be5694(&local_58,param_1 + 0xa0);
      if ((local_50 == (long *)0x0) || (local_58 == (long *)0x0)) {
        bVar4 = false;
        if (local_58 != (long *)0x0) goto LAB_0178316c;
LAB_01783188:
        if (local_50 == (long *)0x0) goto LAB_017831ac;
LAB_01783190:
        lVar13 = local_50[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) goto LAB_017831ac;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
        if (!bVar4) goto LAB_017832a4;
LAB_017831b0:
        FUN_009c69bc(&local_48,local_68);
        (**(code **)(*local_48 + 0x40))();
        if (local_48 != (long *)0x0) {
          lVar13 = local_48[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        FUN_0181d458(plVar9,1);
        FUN_0181bb88(plVar9,param_1 + 0x1b0);
      }
      else {
        FUN_009c69bc(&local_48);
        (**(code **)(*local_48 + 0x40))();
        uVar18 = uVar17;
        fVar16 = fVar14;
        if (local_48 != (long *)0x0) {
          lVar13 = local_48[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        FUN_009c69bc(&local_48,local_58);
        (**(code **)(*local_48 + 0x40))();
        if (local_48 != (long *)0x0) {
          lVar13 = local_48[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        fStack_c8 = (float)uVar17;
        fStack_c4 = (float)((ulong)uVar17 >> 0x20);
        fStack_c8 = fStack_c8 - (float)uVar18;
        fStack_c4 = fStack_c4 - (float)((ulong)uVar18 >> 0x20);
        fVar14 = (fVar14 - fVar16) * (fVar14 - fVar16);
        fStack_c8 = fStack_c8 * fStack_c8;
        fStack_c4 = fStack_c4 * fStack_c4;
        auVar15._4_4_ = 0;
        auVar15._0_4_ = fVar14;
        auVar15._8_4_ = fStack_c8;
        auVar15._12_4_ = fStack_c4;
        auVar7._4_4_ = 0;
        auVar7._0_4_ = fVar14;
        auVar7._8_4_ = fStack_c8;
        auVar7._12_4_ = fStack_c4;
        auVar15 = NEON_ext(auVar15,auVar7,8,1);
        bVar4 = local_a8 * local_a8 < auVar15._0_4_ + fVar14 + auVar15._4_4_ + 0.0;
        if (local_58 == (long *)0x0) goto LAB_01783188;
LAB_0178316c:
        lVar13 = local_58[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) goto LAB_01783188;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
        if (local_50 != (long *)0x0) goto LAB_01783190;
LAB_017831ac:
        if (bVar4) goto LAB_017831b0;
LAB_017832a4:
        fVar14 = *(float *)(param_1 + 0x1a0);
        if (2.0 <= fVar14) {
          FUN_0181b198(plVar9);
          fVar14 = *(float *)(param_1 + 0x1a0);
        }
        *(float *)(param_1 + 0x1a0) = fVar14 + 0.033333335;
      }
      if (6.0 <= *(float *)(param_1 + 0x198)) {
        FUN_01783528(param_1);
        lVar13 = local_a0;
        plVar8 = plStack_88;
        if (*(int *)(param_1 + 0x194) == 4) {
          uVar10 = 0;
          *(undefined4 *)(param_1 + 0x198) = 0;
        }
        else {
          uVar10 = 1;
        }
      }
      else {
        *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x198) + 0.033333335;
        uVar10 = FUN_0181ae88(plVar9);
        lVar13 = local_a0;
        plVar8 = plStack_88;
      }
      if (lVar13 != 0) {
        uVar11 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar11 & 1) != 0) {
          lVar6 = tpidr_el0;
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar8,lVar13,local_90 - lVar13,0x10);
            goto LAB_0178338c;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar13,local_90 - lVar13,0x10);
      }
LAB_0178338c:
      uVar12 = 1;
      local_b8[0] = (long *)((ulong)local_b8[0] & 0xffffffffffffff00);
    }
    uVar12 = uVar10 & uVar12;
  }
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
joined_r0x01783480:
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_60 != (long *)0x0) {
    lVar13 = local_60[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return uVar12;
}


