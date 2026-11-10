/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da4a88; name: FUN_02da4a88
 */


void FUN_02da4a88(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long *local_80;
  undefined8 uStack_78;
  int local_6c;
  long local_68;
  
  puVar12 = PTR_DAT_043794a8;
  puVar11 = PTR_DAT_043794a0;
  puVar10 = PTR_DAT_04379498;
  lVar18 = *(long *)(param_1 + 0xd0);
  if (lVar18 != 0) {
    plVar20 = *(long **)(param_1 + 200);
    plVar15 = plVar20;
    do {
      plVar1 = plVar15 + 2;
      lVar21 = *plVar15;
      if (lVar21 != 0) goto LAB_02da4b28;
      do {
        do {
          if (plVar1 != plVar20 + lVar18 * 2) {
            plVar22 = plVar15;
            do {
              FUN_02da7254(plVar22,plVar22 + 2);
              plVar2 = plVar22 + 4;
              plVar22 = plVar22 + 2;
            } while (plVar2 != plVar20 + lVar18 * 2);
            plVar20 = *(long **)(param_1 + 200);
            lVar18 = *(long *)(param_1 + 0xd0);
          }
          puVar23 = (undefined8 *)plVar20[lVar18 * 2 + -2];
          if (puVar23 != (undefined8 *)0x0) {
            piVar3 = (int *)(puVar23 + 1);
            do {
              iVar13 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = iVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 + -1 == 0) {
              puVar23[2] = 0;
              if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar11,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar10);
              }
              lVar18 = *(long *)puVar11;
              *(long *)puVar12 = lVar18;
              local_80 = (long *)*puVar23;
              FUN_02a44274(lVar18 + 0xd8,&local_80);
            }
            plVar20 = *(long **)(param_1 + 200);
            lVar18 = *(long *)(param_1 + 0xd0);
          }
          lVar18 = lVar18 + -1;
          *(long *)(param_1 + 0xd0) = lVar18;
          if (plVar20 + lVar18 * 2 == plVar15) goto LAB_02da4bd8;
          lVar21 = *plVar15;
        } while (lVar21 == 0);
LAB_02da4b28:
        plVar20 = *(long **)(param_1 + 200);
        lVar18 = *(long *)(param_1 + 0xd0);
      } while (*(int *)(lVar21 + 0xc) == 0);
      plVar15 = plVar1;
    } while (plVar20 + lVar18 * 2 != plVar1);
  }
LAB_02da4bd8:
  if ((((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0xc) != 0)) &&
      (*(long **)(param_1 + 0x80) != (long *)0x0)) &&
     ((lVar18 = (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(),
      plVar20 = (long *)PTR_DAT_04377550, lVar18 != 0 && (*(long *)PTR_DAT_04377550 != 0)))) {
    iVar13 = FUN_0082ad44();
    if ((iVar13 == 1) &&
       ((*(long *)PTR_DAT_043773c0 != 0 &&
        (lVar18 = FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,DAT_04408a90,0x68), lVar18 != 0))))
    {
      local_68 = 0;
      local_6c = 0;
      FUN_00858bf4(&local_80,lVar18,&local_68,param_1 + 0x148,&local_6c,0x10000);
      if ((int)local_80 == 0) {
        lVar21 = local_68;
        do {
          local_68 = lVar21;
          if ((lVar21 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
            iVar7 = local_6c + -8;
            iVar13 = *(int *)(param_1 + 0x148);
            iVar4 = *(int *)(param_1 + 0x14c);
            plVar20 = *(long **)(param_1 + 200);
            lVar24 = *(long *)(param_1 + 0xd0) << 4;
            lVar19 = *plVar20;
            if (lVar19 != 0) goto LAB_02da4cf0;
            do {
              do {
                plVar20 = plVar20 + 2;
                lVar24 = lVar24 + -0x10;
                if (lVar24 == 0) goto LAB_02da4c88;
                lVar19 = *plVar20;
              } while (lVar19 == 0);
LAB_02da4cf0:
              lVar19 = *(long *)(lVar19 + 0x18);
            } while ((((lVar19 == 0) || (uVar14 = FUN_02da7d44(lVar19), (uVar14 & 1) == 0)) ||
                     (*(int *)(lVar19 + 0x1c) != iVar13)) || (*(int *)(lVar19 + 0x20) != iVar4));
            if (((*(long *)(lVar19 + 0x28) != 0) && (*(int *)(*(long *)(lVar19 + 0x28) + 0xc) != 0))
               && (puVar23 = *(undefined8 **)(lVar19 + 0x38), puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)(puVar23,param_1 + 0x150,iVar7,lVar21,lVar19 + -0x50);
            }
          }
LAB_02da4c88:
          FUN_00858bf4(&local_80,lVar18,&local_68,param_1 + 0x148,&local_6c,0x10000);
          lVar21 = local_68;
        } while ((int)local_80 == 0);
      }
      plVar20 = (long *)PTR_DAT_04377550;
    }
    if (*plVar20 != 0) {
      iVar13 = FUN_0082ad44();
      if (((iVar13 == 1) && (*(long *)PTR_DAT_043773c0 != 0)) &&
         (plVar15 = (long *)FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,DAT_04408a80,0x7c),
         plVar15 != (long *)0x0)) {
        local_68 = 0;
        local_6c = 0;
        (**(code **)(*plVar15 + 0x68))
                  (&local_80,plVar15,&local_68,param_1 + 0x148,&local_6c,0x10000);
        if ((int)local_80 == 0) {
          lVar18 = local_68;
          do {
            local_68 = lVar18;
            if ((lVar18 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
              iVar7 = local_6c + -8;
              iVar13 = *(int *)(param_1 + 0x148);
              iVar4 = *(int *)(param_1 + 0x14c);
              plVar20 = *(long **)(param_1 + 200);
              lVar21 = *(long *)(param_1 + 0xd0) << 4;
              lVar24 = *plVar20;
              if (lVar24 != 0) goto LAB_02da4e54;
              do {
                do {
                  plVar20 = plVar20 + 2;
                  lVar21 = lVar21 + -0x10;
                  if (lVar21 == 0) goto LAB_02da4de4;
                  lVar24 = *plVar20;
                } while (lVar24 == 0);
LAB_02da4e54:
                lVar24 = *(long *)(lVar24 + 0x18);
              } while ((((lVar24 == 0) || (uVar14 = FUN_02da7d44(lVar24), (uVar14 & 1) == 0)) ||
                       (*(int *)(lVar24 + 0x1c) != iVar13)) || (*(int *)(lVar24 + 0x20) != iVar4));
              if (((*(long *)(lVar24 + 0x28) != 0) &&
                  (*(int *)(*(long *)(lVar24 + 0x28) + 0xc) != 0)) &&
                 (puVar23 = *(undefined8 **)(lVar24 + 0x38), puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)(puVar23,param_1 + 0x150,iVar7,lVar18,lVar24 + -0x50);
              }
            }
LAB_02da4de4:
            (**(code **)(*plVar15 + 0x68))
                      (&local_80,plVar15,&local_68,param_1 + 0x148,&local_6c,0x10000);
            lVar18 = local_68;
          } while ((int)local_80 == 0);
        }
        plVar20 = (long *)PTR_DAT_04377550;
      }
      if (((*plVar20 != 0) && (iVar13 = FUN_0082ad44(), iVar13 == 1)) &&
         ((*(long *)PTR_DAT_043773c0 != 0 &&
          (plVar20 = (long *)FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,DAT_04408a88,0x80),
          plVar20 != (long *)0x0)))) {
        local_68 = 0;
        local_6c = 0;
        (**(code **)(*plVar20 + 0x68))
                  (&local_80,plVar20,&local_68,param_1 + 0x148,&local_6c,0x10000);
        if ((int)local_80 == 0) {
          lVar18 = local_68;
          do {
            local_68 = lVar18;
            if ((lVar18 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
              iVar7 = local_6c + -8;
              iVar13 = *(int *)(param_1 + 0x148);
              iVar4 = *(int *)(param_1 + 0x14c);
              plVar15 = *(long **)(param_1 + 200);
              lVar21 = *(long *)(param_1 + 0xd0) << 4;
              lVar24 = *plVar15;
              if (lVar24 != 0) goto LAB_02da4fb8;
              do {
                do {
                  plVar15 = plVar15 + 2;
                  lVar21 = lVar21 + -0x10;
                  if (lVar21 == 0) goto LAB_02da4f48;
                  lVar24 = *plVar15;
                } while (lVar24 == 0);
LAB_02da4fb8:
                lVar24 = *(long *)(lVar24 + 0x18);
              } while ((((lVar24 == 0) || (uVar14 = FUN_02da7d44(lVar24), (uVar14 & 1) == 0)) ||
                       (*(int *)(lVar24 + 0x1c) != iVar13)) || (*(int *)(lVar24 + 0x20) != iVar4));
              if (((*(long *)(lVar24 + 0x28) != 0) &&
                  (*(int *)(*(long *)(lVar24 + 0x28) + 0xc) != 0)) &&
                 (puVar23 = *(undefined8 **)(lVar24 + 0x38), puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)(puVar23,param_1 + 0x150,iVar7,lVar18,lVar24 + -0x50);
              }
            }
LAB_02da4f48:
            (**(code **)(*plVar20 + 0x68))
                      (&local_80,plVar20,&local_68,param_1 + 0x148,&local_6c,0x10000);
            lVar18 = local_68;
          } while ((int)local_80 == 0);
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x20148) != 0) {
    FUN_02da82d0();
  }
  if ((*(long *)(param_1 + 0x138) != 0) &&
     (puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x138) + 0x18), puVar23 != (undefined8 *)0x0))
  {
    plVar20 = (long *)(**(code **)*puVar23)(puVar23);
    lVar18 = FUN_027c61c0();
    for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
      if (plVar20 == (long *)lVar18) {
        (**(code **)(puVar23[-10] + 0x40))(puVar23 + -10);
        lVar18 = *(long *)(param_1 + 0x128);
        pbVar8 = PTR_DAT_04379498;
        plVar20 = (long *)PTR_DAT_043794a0;
        plVar15 = (long *)PTR_DAT_043794a8;
        pbVar9 = PTR_DAT_04388558;
        puVar23 = (undefined8 *)PTR_DAT_04388560;
        goto joined_r0x02da5240;
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x128);
  pbVar8 = PTR_DAT_04379498;
  plVar20 = (long *)PTR_DAT_043794a0;
  plVar15 = (long *)PTR_DAT_043794a8;
  pbVar9 = PTR_DAT_04388558;
  puVar23 = (undefined8 *)PTR_DAT_04388560;
joined_r0x02da5240:
  PTR_DAT_04379498 = pbVar8;
  PTR_DAT_043794a0 = (undefined *)plVar20;
  PTR_DAT_043794a8 = (undefined *)plVar15;
  PTR_DAT_04388558 = pbVar9;
  PTR_DAT_04388560 = (undefined *)puVar23;
  if (lVar18 != 0) {
    lVar21 = *(long *)(param_1 + 0x120);
    lVar18 = lVar21 + lVar18 * 0x10;
    do {
      local_80 = (long *)0x0;
      uStack_78 = 0;
      FUN_02da7948(&local_80,lVar21);
      if (local_80 != (long *)0x0) {
        puVar25 = (undefined8 *)local_80[3];
        if (puVar25 != (undefined8 *)0x0) {
          puVar16 = (undefined8 *)(**(code **)*puVar25)(puVar25);
          if (((*pbVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar9), iVar13 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
              uVar17 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar17;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *puVar23 = PTR_DAT_043794d8;
            __cxa_guard_release(pbVar9);
          }
          if (puVar16 != (undefined8 *)0x0) {
            do {
              if (puVar16 == puVar23) {
                if (puVar25[0x2015] != 0) {
                  lVar24 = puVar25[0x2015] << 3;
                  puVar25 = (undefined8 *)puVar25[0x2014];
                  do {
                    (**(code **)(*(long *)*puVar25 + 0x40))();
                    lVar24 = lVar24 + -8;
                    puVar25 = puVar25 + 1;
                  } while (lVar24 != 0);
                }
                break;
              }
              puVar16 = (undefined8 *)*puVar16;
            } while (puVar16 != (undefined8 *)0x0);
          }
        }
        plVar1 = local_80;
        if (local_80 != (long *)0x0) {
          plVar22 = local_80 + 1;
          do {
            iVar13 = (int)*plVar22 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar6) {
              *(int *)plVar22 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 == 0) {
            local_80[2] = 0;
            if (((*pbVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar8), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar20,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar8);
            }
            lVar24 = *plVar20;
            *plVar15 = lVar24;
            local_68 = *plVar1;
            FUN_02a44274(lVar24 + 0xd8,&local_68);
          }
        }
      }
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != lVar18);
  }
  return;
}


