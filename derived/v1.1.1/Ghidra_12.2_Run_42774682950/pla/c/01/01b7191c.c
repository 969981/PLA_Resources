/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7191c; name: FUN_01b7191c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b7191c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  float extraout_s0;
  float fVar11;
  float extraout_var;
  float fVar12;
  float extraout_var_00;
  float fVar13;
  float extraout_var_01;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  FUN_009c69bc(&local_50);
  iVar7 = *(int *)(param_1 + 0x5f8);
  if (iVar7 == 0) {
    uVar10 = *(uint *)(param_1 + 0x438);
    *(undefined1 *)(local_50 + 0x1c) = 1;
    local_50[0x17] = (ulong)uVar10;
    local_50[0x16] = CONCAT44(uVar10,uVar10);
    if (*(char *)(param_1 + 0x601) != '\0') {
      FUN_01b71f28(param_1);
      if (*(long *)(param_1 + 0x3d0) == 0) {
        local_58 = (long *)0x0;
      }
      else {
        FUN_01a111e4(&local_58);
        if (local_58 != (long *)0x0) {
          FUN_02be88ac(&local_70,local_58,0);
          FUN_00ab5ae0(&local_60,&local_70);
          plVar8 = local_70;
          if (local_70 != (long *)0x0) {
            plVar2 = local_70 + 1;
            do {
              iVar7 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 == 0) {
              local_70[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48 = *plVar8;
              FUN_02a44274(lVar9 + 0xd8,&local_48);
            }
          }
          if (local_60 != (long *)0x0) {
            local_60[0x13] = *(long *)(param_1 + 0x568);
            local_60[0x12] = *(long *)(param_1 + 0x560);
            local_60[0x15] = *(long *)(param_1 + 0x578);
            local_60[0x14] = *(long *)(param_1 + 0x570);
            *(undefined1 *)(local_60 + 0x10) = 1;
            FUN_02bdb238(local_60,param_1 + 0x580,param_1 + 0x590);
            if (local_60 != (long *)0x0) {
              lVar9 = local_60[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*local_60 + 0x20))();
              }
            }
          }
          if (local_58 != (long *)0x0) {
            lVar9 = local_58[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
        }
      }
      fVar13 = (float)*(undefined8 *)(param_1 + 0x588);
      fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x588) >> 0x20);
      fVar11 = (float)*(undefined8 *)(param_1 + 0x580);
      fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x580) >> 0x20);
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      auVar16._4_4_ = fVar12;
      auVar16._0_4_ = fVar11;
      auVar16._8_4_ = fVar13;
      auVar16._12_4_ = fVar14;
      auVar6._4_4_ = fVar12;
      auVar6._0_4_ = fVar11;
      auVar6._8_4_ = fVar13;
      auVar6._12_4_ = fVar14;
      auVar15 = NEON_ext(auVar16,auVar6,8,1);
      *(undefined4 *)(param_1 + 0x618) = 0;
      *(undefined4 *)(param_1 + 0x5fc) = 2;
      bVar4 = false;
      *(float *)(param_1 + 0x61c) =
           *(float *)(param_1 + 0x3fc) / SQRT(auVar15._0_4_ + fVar11 + auVar15._4_4_ + fVar12);
      lVar9 = _DAT_03888fc0;
      local_50[0x17] = _UNK_03888fc8;
      local_50[0x16] = lVar9;
      bVar5 = true;
      *(undefined1 *)(local_50 + 0x1c) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x5f0) + 0x1f5) = 1;
      *(undefined4 *)(param_1 + 0x5f8) = 1;
      goto LAB_01b71980;
    }
  }
  else {
    if (iVar7 == 1) {
      FUN_01b7236c(&local_70,param_1 + 0x2e0);
      plVar8 = local_70;
      if (local_70 == (long *)0x0) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = (float)(**(code **)(*local_70 + 0x30))(local_70);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      fVar12 = *(float *)(param_1 + 0x61c);
      if (1.1920929e-07 < fVar12) {
        fVar13 = 3.4028235e+38;
        fVar14 = *(float *)(param_1 + 0x618);
        if (fVar14 <= 3.4028235e+38 - fVar11 / 30.0) {
          fVar13 = fVar11 / 30.0 + fVar14;
        }
        *(float *)(param_1 + 0x618) = fVar13;
        if (fVar14 / fVar12 <= 1.0) {
          bVar4 = 1.0 < fVar13 / fVar12;
          lVar9 = *(long *)(param_1 + 0x3d0);
          goto joined_r0x01b71c68;
        }
        bVar4 = false;
        if (*(long *)(param_1 + 0x3d0) != 0) goto LAB_01b71b00;
LAB_01b71aa0:
        local_58 = (long *)0x0;
      }
      else {
        fVar12 = 3.4028235e+38;
        if (*(float *)(param_1 + 0x618) <= 3.4028235e+38 - fVar11 / 30.0) {
          fVar12 = fVar11 / 30.0 + *(float *)(param_1 + 0x618);
        }
        bVar4 = false;
        *(float *)(param_1 + 0x618) = fVar12;
        lVar9 = *(long *)(param_1 + 0x3d0);
joined_r0x01b71c68:
        if (lVar9 == 0) goto LAB_01b71aa0;
LAB_01b71b00:
        FUN_01a111e4(&local_58);
        if (local_58 != (long *)0x0) {
          FUN_02be88ac(&local_70,local_58,0);
          FUN_00ab5ae0(&local_60,&local_70);
          plVar8 = local_70;
          if (local_70 != (long *)0x0) {
            plVar2 = local_70 + 1;
            do {
              iVar7 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 == 0) {
              local_70[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48 = *plVar8;
              FUN_02a44274(lVar9 + 0xd8,&local_48);
            }
          }
          if (local_60 != (long *)0x0) {
            fVar13 = *(float *)(param_1 + 0x5a0);
            fVar12 = *(float *)(param_1 + 0x5a4);
            FUN_02bdbce0();
            auVar15._0_4_ = extraout_s0 * extraout_s0;
            auVar15._4_4_ = 0;
            auVar15._8_4_ = extraout_var_00 * extraout_var_00;
            auVar15._12_4_ = extraout_var_01 * extraout_var_01;
            auVar16 = NEON_ext(auVar15,auVar15,8,1);
            fVar12 = fVar12 * SQRT(auVar16._0_4_ + auVar15._0_4_ + auVar16._4_4_ + 0.0);
            fVar13 = 1.0 - fVar11 * fVar13;
            uStack_68 = CONCAT44((extraout_var_01 +
                                 (float)((ulong)DAT_0388a148 >> 0x20) * fVar12 * fVar11) * fVar13,
                                 (extraout_var_00 + (float)DAT_0388a148 * fVar12 * fVar11) * fVar13)
            ;
            local_70 = (long *)CONCAT44((extraout_var +
                                        (float)((ulong)DAT_0388a140 >> 0x20) * fVar12 * fVar11) *
                                        fVar13,(extraout_s0 + (float)DAT_0388a140 * fVar12 * fVar11)
                                               * fVar13);
            FUN_02bdb28c(local_60,&local_70);
            if (local_60 != (long *)0x0) {
              lVar9 = local_60[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*local_60 + 0x20))();
              }
            }
          }
          if (local_58 != (long *)0x0) {
            lVar9 = local_58[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
        }
      }
      bVar5 = false;
      *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) + 1;
      goto LAB_01b71980;
    }
    if (iVar7 == 2) {
      bVar4 = false;
      bVar5 = false;
      *(undefined4 *)(param_1 + 0x5f8) = 3;
      goto LAB_01b71980;
    }
  }
  bVar4 = false;
  bVar5 = false;
LAB_01b71980:
  (**(code **)(**(long **)(param_1 + 0x640) + 0x18))(*(long **)(param_1 + 0x640),param_1,param_2);
  plVar8 = *(long **)(param_1 + 0x660);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8,param_1,param_2);
  }
  if (bVar5) {
    (**(code **)(**(long **)(param_1 + 0x640) + 0x38))(*(long **)(param_1 + 0x640),param_1);
    plVar8 = *(long **)(param_1 + 0x660);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    }
  }
  if ((bVar4) && (plVar8 = *(long **)(param_1 + 0x660), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x50))(plVar8,param_1);
  }
  if (local_50 != (long *)0x0) {
    lVar9 = local_50[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return;
}


