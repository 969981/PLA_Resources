/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cda488; name: FUN_00cda488
 */


undefined1  [16]
FUN_00cda488(float param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar15 [16];
  undefined8 uVar18;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar18 = *param_2;
  fVar13 = (float)uVar18 + (float)*param_3 * param_1;
  fVar16 = (float)((ulong)uVar18 >> 0x20) + (float)((ulong)*param_3 >> 0x20) * param_1;
  uVar17 = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                    (float)((ulong)param_3[1] >> 0x20) * param_1,
                    (float)param_2[1] + (float)param_3[1] * param_1);
  fVar14 = (float)FUN_00cd52dc();
  local_b0 = CONCAT44(fVar16 + fVar14,fVar13);
  local_50 = CONCAT44(fVar16 + (float)uVar18,fVar13);
  uStack_a8 = uVar17;
  uStack_48 = uVar17;
  uVar7 = FUN_01f56878(&local_b0,&local_50,param_4,local_90);
  if ((uVar7 & 1) != 0) {
    uStack_98 = param_3[1];
    local_a0 = *param_3;
    goto LAB_00cda508;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x1073f2d92331daf9;
    }
    else if (uVar7 < 0x1073f2d92331dafa) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x1073f2d92331daf9 / uVar7;
      }
      uVar9 = 0x1073f2d92331daf9 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x1073f2d92331daf9;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x1073f2d92331daf9) {
            if (plVar11[2] == 0x1073f2d92331daf9) goto LAB_00cda5dc;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x1073f2d92331daf9) {
            if (plVar11[2] == 0x1073f2d92331daf9) goto LAB_00cda5dc;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  goto LAB_00cda7b8;
LAB_00cda5dc:
  plVar11 = (long *)plVar11[3];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = plVar11[0x14];
    if (uVar7 == 0) {
      iVar6 = 0;
    }
    else {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x497ea6ffe99d65b9;
      }
      else if (uVar7 < 0x497ea6ffe99d65ba) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x497ea6ffe99d65b9 / uVar7;
        }
        uVar9 = 0x497ea6ffe99d65b9 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x497ea6ffe99d65b9;
      }
      plVar12 = *(long **)(plVar11[0x13] + uVar9 * 8);
      if (plVar12 == (long *)0x0) {
        iVar6 = 0;
      }
      else {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          iVar6 = 0;
        }
        else if (uVar8 < 2) {
          do {
            if (plVar12[1] == 0x497ea6ffe99d65b9) {
              if (plVar12[2] == 0x497ea6ffe99d65b9) goto LAB_00cda724;
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar9) {
              iVar6 = 0;
              break;
            }
            plVar12 = (long *)*plVar12;
            iVar6 = 0;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar12[1];
            if (uVar8 == 0x497ea6ffe99d65b9) {
              if (plVar12[2] == 0x497ea6ffe99d65b9) goto LAB_00cda724;
            }
            else {
              if (uVar7 <= uVar8) {
                uVar4 = 0;
                if (uVar7 != 0) {
                  uVar4 = uVar8 / uVar7;
                }
                uVar8 = uVar8 - uVar4 * uVar7;
              }
              if (uVar8 != uVar9) {
                iVar6 = 0;
                goto LAB_00cda728;
              }
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
          iVar6 = 0;
        }
      }
    }
    goto LAB_00cda728;
  }
  goto LAB_00cda7b8;
LAB_00cda724:
  iVar6 = (int)plVar12[6];
LAB_00cda728:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  if (0 < iVar6) {
    iVar5 = FUN_00cd8790(1);
    local_78 = param_2[1];
    local_80 = *param_2;
    local_68 = param_3[1];
    local_70 = *param_3;
    local_90[0] = iVar6;
    local_60 = param_1;
    local_5c = param_4;
    FUN_00cda89c(&local_b0,local_90,iVar5 == 0);
    if ((char)local_b0 != '\0') goto LAB_00cda508;
    FUN_00cda89c(&local_b0,local_90,iVar5 != 0);
    if ((char)local_b0 != '\0') goto LAB_00cda508;
  }
LAB_00cda7b8:
  local_a0 = CONCAT44(-(float)((ulong)*param_3 >> 0x20),-(float)*param_3);
  uStack_98 = CONCAT44(-(float)((ulong)param_3[1] >> 0x20),-(float)param_3[1]);
LAB_00cda508:
  auVar15._8_8_ = uStack_98;
  auVar15._0_8_ = local_a0;
  return auVar15;
}


