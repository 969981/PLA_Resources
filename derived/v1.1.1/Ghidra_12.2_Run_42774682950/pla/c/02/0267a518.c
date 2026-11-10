/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0267a518; name: FUN_0267a518
 */


void FUN_0267a518(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined1 *local_38;
  
  fVar13 = *param_2;
  fVar14 = param_2[1];
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  fVar15 = 0.0;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x6c43119d71eecde9;
    }
    else if (uVar7 < 0x6c43119d71eecdea) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x6c43119d71eecde9 / uVar7;
      }
      uVar9 = 0x6c43119d71eecde9 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x6c43119d71eecde9;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x6c43119d71eecde9) {
            if (plVar11[2] == 0x6c43119d71eecde9) goto LAB_0267a5fc;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x6c43119d71eecde9) {
            if (plVar11[2] == 0x6c43119d71eecde9) goto LAB_0267a5fc;
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
LAB_0267a758:
  if (fVar15 <= fVar13 - fVar14) {
LAB_0267a760:
    fVar13 = param_2[2];
    if (((*PTR_DAT_043796b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar10 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar10;
    puVar6 = (undefined8 *)
             ((ulong)(fVar13 != 0.0) * 0x78 + 0x4266748 + (ulong)(uint)param_2[3] * 0x18);
    local_58 = *puVar6;
    uStack_50 = puVar6[1];
    local_48 = puVar6[2];
    local_40 = (long *)0x0;
    local_38 = (undefined1 *)FUN_00ea3260(param_1 + 0x9f8,&local_58);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))(local_40);
    }
    if (local_38 != &DAT_cbf29ce484222645) {
      FUN_00da3604(lVar10 + 0x3c0,&local_38,0);
    }
  }
  return;
LAB_0267a5fc:
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
    uVar7 = plVar11[0x21];
    fVar15 = 0.0;
    if (uVar7 != 0) {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x591e154d0fdafd00;
      }
      else if (uVar7 < 0x591e154d0fdafd01) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x591e154d0fdafd00 / uVar7;
        }
        uVar9 = 0x591e154d0fdafd00 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x591e154d0fdafd00;
      }
      plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if (plVar12[1] == 0x591e154d0fdafd00) {
              if (plVar12[2] == 0x591e154d0fdafd00) goto LAB_0267a740;
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar12[1];
            if (uVar8 == 0x591e154d0fdafd00) {
              if (plVar12[2] == 0x591e154d0fdafd00) goto LAB_0267a740;
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
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_0267a744;
  }
  goto LAB_0267a758;
LAB_0267a740:
  fVar15 = *(float *)(plVar12 + 6);
LAB_0267a744:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 != 0) goto LAB_0267a758;
  (**(code **)(*plVar11 + 0x10))();
  if (fVar13 - fVar14 < fVar15) {
    return;
  }
  goto LAB_0267a760;
}


