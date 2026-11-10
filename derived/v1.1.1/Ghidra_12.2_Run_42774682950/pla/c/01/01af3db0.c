/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af3db0; name: FUN_01af3db0
 */


uint FUN_01af3db0(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  float fVar19;
  undefined8 in_d3;
  float fVar20;
  float fVar21;
  long *local_58;
  long *local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  fVar20 = (float)((ulong)in_d3 >> 0x20);
  if (*(char *)(param_1 + 0x8f4) == '\0') {
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_00cf9db0(&local_50,param_1 + 0x788);
    if (local_50 == (long *)0x0) {
      local_40 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_40);
      plVar14 = local_50;
      if (local_50 != (long *)0x0) {
        plVar2 = local_50 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_38 = *plVar14;
          FUN_02a44274(lVar10 + 0xd8,&local_38);
        }
      }
    }
    if (local_40 != (long *)0x0) {
      uVar7 = (**(code **)(*local_40 + 0x168))(local_40,param_2);
      if (local_40 != (long *)0x0) {
        lVar10 = local_40[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_40 + 0x20))();
        }
      }
      goto LAB_01af3dd4;
    }
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_01b00924(&local_50,param_1 + 0x688);
    if (local_50 != (long *)0x0) {
      FUN_0095dafc(&local_40);
      plVar14 = local_50;
      if (local_50 == (long *)0x0) goto LAB_01af3ef4;
      plVar2 = local_50 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != 0) goto LAB_01af3ef4;
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *plVar14;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
      if (local_40 != (long *)0x0) goto LAB_01af3efc;
      goto LAB_01af4450;
    }
    local_40 = (long *)0x0;
LAB_01af3ef4:
    if (local_40 == (long *)0x0) goto LAB_01af4450;
LAB_01af3efc:
    if ((((*(int *)((long)local_40 + 0xc5c) != 1) &&
         (uVar9 = (**(code **)(*local_40 + 0x250))(), (uVar9 & 1) == 0)) &&
        (uVar9 = (**(code **)(*local_40 + 0x1a8))(), (uVar9 & 1) == 0)) &&
       ((uVar9 = (**(code **)(*local_40 + 0x228))(), (uVar9 & 1) == 0 &&
        (uVar9 = FUN_01aee5b8(param_1), (uVar9 & 1) == 0)))) {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      FUN_01affa74(&local_50,param_1 + 0x608);
      FUN_01af45bc(&local_58,&local_50);
      plVar14 = local_50;
      if (local_50 != (long *)0x0) {
        plVar2 = local_50 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_38 = *plVar14;
          FUN_02a44274(lVar10 + 0xd8,&local_38);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar11 = local_58[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        lVar10 = local_58[0x4a];
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
        if (0 < (int)lVar10) goto LAB_01af4424;
      }
      if (((6 < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x74U) == 0)) ||
         ((uVar9 = (**(code **)(*local_40 + 0x218))(), (uVar9 & 1) == 0 &&
          (uVar9 = (**(code **)(*local_40 + 0x1b0))(), (uVar9 & 1) == 0)))) {
        fVar21 = *(float *)(local_40 + 0x138);
        FUN_009c69bc(&local_50);
        (**(code **)(*local_50 + 0x40))();
        if (local_50 != (long *)0x0) {
          lVar10 = local_50[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_50 + 0x20))();
          }
        }
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        fVar19 = 0.0;
        *(long *)PTR_DAT_04379670 = lVar10;
        puVar12 = *(undefined1 **)(lVar10 + 0x60);
        if (puVar12 != (undefined1 *)0x0) {
          uVar9 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
          uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
          uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar9 < 2) {
            puVar13 = (undefined1 *)((ulong)(puVar12 + -1) & 0x7c08eae870e235e0);
          }
          else if (&DAT_7c08eae870e235e0 < puVar12) {
            puVar13 = &DAT_7c08eae870e235e0;
          }
          else {
            uVar15 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar15 = 0x7c08eae870e235e0 / (ulong)puVar12;
            }
            puVar13 = &DAT_7c08eae870e235e0 + -(uVar15 * (long)puVar12);
          }
          plVar14 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar13 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if (uVar9 < 2) {
              do {
                if ((undefined1 *)plVar14[1] == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01af42e4;
                }
                else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar13)
                break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                puVar17 = (undefined1 *)plVar14[1];
                if (puVar17 == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01af42e4;
                }
                else {
                  if (puVar12 <= puVar17) {
                    uVar9 = 0;
                    if (puVar12 != (undefined1 *)0x0) {
                      uVar9 = (ulong)puVar17 / (ulong)puVar12;
                    }
                    puVar17 = puVar17 + -(uVar9 * (long)puVar12);
                  }
                  if (puVar17 != puVar13) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
        goto LAB_01af441c;
      }
    }
    goto LAB_01af4424;
  }
  goto LAB_01af3dd0;
LAB_01af4404:
  fVar19 = *(float *)(plVar18 + 6);
LAB_01af4408:
  do {
    iVar8 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 != 0) goto LAB_01af441c;
  (**(code **)(*plVar14 + 0x10))();
  if (fVar19 < fVar21 - fVar20) goto LAB_01af4424;
LAB_01af4450:
  bVar6 = false;
  if (local_40 == (long *)0x0) goto LAB_01af4478;
LAB_01af445c:
  lVar10 = local_40[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 != 0) goto LAB_01af4478;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  (**(code **)(*local_40 + 0x20))();
  if (bVar6) goto LAB_01af3dd0;
LAB_01af447c:
  if ((*(long *)(param_1 + 0x618) != 0) && (FUN_0095dd00(&local_50), local_50 != (long *)0x0)) {
    uVar9 = local_50[0x3f];
    if ((uVar9 & 0xff) == 0) {
      bVar6 = true;
    }
    else {
      bVar6 = (local_50[0x3e] & 1L << (uVar9 >> 0x20 & 0x3f)) == 0;
    }
    lVar10 = local_50[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
    if ((bool)((uVar9 & 0xffffffff00000000) == 0x800000000 & (bVar6 ^ 1U))) goto LAB_01af3dd0;
  }
  uVar7 = 1;
  goto LAB_01af3dd4;
LAB_01af42e4:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar9 = plVar14[0x21];
    fVar19 = 0.0;
    if (uVar9 != 0) {
      uVar15 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar9 - 1 & 0x362826f40c530894;
      }
      else if (uVar9 < 0x362826f40c530895) {
        uVar16 = 0;
        if (uVar9 != 0) {
          uVar16 = 0x362826f40c530894 / uVar9;
        }
        uVar16 = 0x362826f40c530894 - uVar16 * uVar9;
      }
      else {
        uVar16 = 0x362826f40c530894;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0x362826f40c530894) {
              if (plVar18[2] == 0x362826f40c530894) goto LAB_01af4404;
            }
            else if ((plVar18[1] & uVar9 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0x362826f40c530894) {
              if (plVar18[2] == 0x362826f40c530894) goto LAB_01af4404;
            }
            else {
              if (uVar9 <= uVar15) {
                uVar5 = 0;
                if (uVar9 != 0) {
                  uVar5 = uVar15 / uVar9;
                }
                uVar15 = uVar15 - uVar5 * uVar9;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01af4408;
  }
LAB_01af441c:
  if (fVar21 - fVar20 <= fVar19) goto LAB_01af4450;
LAB_01af4424:
  bVar6 = true;
  if (local_40 != (long *)0x0) goto LAB_01af445c;
LAB_01af4478:
  if (!bVar6) goto LAB_01af447c;
LAB_01af3dd0:
  uVar7 = 0;
LAB_01af3dd4:
  return uVar7 & 1;
}


