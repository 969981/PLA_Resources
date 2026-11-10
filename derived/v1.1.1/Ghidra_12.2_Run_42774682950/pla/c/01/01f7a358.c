/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f7a358; name: FUN_01f7a358
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f7a358(int *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  ushort *puVar20;
  ushort *puVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  undefined4 extraout_s0;
  float fVar27;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar28;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8 [2];
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  
  puVar11 = PTR_DAT_0437a0f0;
  puVar10 = PTR_DAT_0437a0e8;
  puVar9 = PTR_DAT_043794d0;
  lVar23 = *param_2;
  if (lVar23 == 0) {
    return;
  }
  if (*(int *)(lVar23 + 0xc) == 0) {
    return;
  }
  piVar16 = (int *)(lVar23 + 0xc);
  iVar13 = *(int *)(lVar23 + 0xc);
  do {
    plVar26 = *(long **)(lVar23 + 0x10);
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
        uVar24 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar24;
        __cxa_guard_release(puVar9);
      }
      *(undefined **)puVar11 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar10);
    }
    while( true ) {
      if (plVar26 == (long *)0x0) {
        return;
      }
      if (plVar26 == (long *)puVar11) break;
      plVar26 = (long *)*plVar26;
    }
    iVar14 = *piVar16;
    if (iVar14 == iVar13) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar23 = *(long *)(lVar23 + 0x18);
        if (lVar23 == 0) {
          return;
        }
        plVar26 = (long *)(lVar23 + -0x50);
        FUN_01847290(&local_70,plVar26);
        local_78 = *(undefined8 *)(param_3 + 0x28);
        uVar24 = *(undefined8 *)(param_3 + 8);
        uVar3 = *(uint *)(param_3 + 0x50);
        local_80 = *(undefined8 *)(param_3 + 0x20);
        FUN_009a7ff4((int)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20),
                     *(undefined8 *)(param_3 + 0x30),(int)*(undefined8 *)(param_3 + 0x38));
        local_90 = CONCAT44(extraout_var,extraout_s0);
        uStack_88 = extraout_var_00;
        FUN_01f819bc(&local_98,local_70,uVar24);
        if (local_98 == (long *)0x0) goto joined_r0x01f7a898;
        uVar12 = FUN_01ad8880();
        if (uVar3 == uVar12) goto joined_r0x01f7a488;
        puVar1 = (uint *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + (0xc - (long)*param_1))
                         );
        puVar2 = (uint *)((long)puVar1 + (ulong)uVar3 * 4 + (ulong)*puVar1 + 4);
        puVar1 = (uint *)((long)puVar1 + (ulong)uVar12 * 4 + (ulong)*puVar1 + 4);
        piVar16 = (int *)((long)puVar2 + (ulong)*puVar2);
        piVar17 = (int *)((long)puVar1 + (ulong)*puVar1);
        puVar20 = (ushort *)((long)piVar16 - (long)*piVar16);
        uVar4 = *puVar20;
        if (uVar4 < 0x13) {
          piVar18 = (int *)0x0;
        }
        else {
          piVar18 = (int *)0x0;
          if ((ulong)puVar20[9] != 0) {
            puVar1 = (uint *)((long)piVar16 + (ulong)puVar20[9]);
            piVar18 = (int *)((long)puVar1 + (ulong)*puVar1);
          }
        }
        puVar21 = (ushort *)((long)piVar17 - (long)*piVar17);
        uVar5 = *puVar21;
        if (uVar5 < 0x13) {
          piVar19 = (int *)0x0;
          if (0x14 < uVar4) goto LAB_01f7a590;
LAB_01f7a8b4:
          piVar16 = (int *)0x0;
          if (uVar5 < 0x15) goto LAB_01f7a8c0;
LAB_01f7a5ac:
          if ((ulong)puVar21[10] == 0) goto LAB_01f7a8c0;
          puVar1 = (uint *)((long)piVar17 + (ulong)puVar21[10]);
          piVar17 = (int *)((long)puVar1 + (ulong)*puVar1);
        }
        else {
          piVar19 = (int *)0x0;
          if ((ulong)puVar21[9] != 0) {
            puVar1 = (uint *)((long)piVar17 + (ulong)puVar21[9]);
            piVar19 = (int *)((long)puVar1 + (ulong)*puVar1);
          }
          if (uVar4 < 0x15) goto LAB_01f7a8b4;
LAB_01f7a590:
          if ((ulong)puVar20[10] == 0) goto LAB_01f7a8b4;
          puVar1 = (uint *)((long)piVar16 + (ulong)puVar20[10]);
          piVar16 = (int *)((long)puVar1 + (ulong)*puVar1);
          if (0x14 < uVar5) goto LAB_01f7a5ac;
LAB_01f7a8c0:
          piVar17 = (int *)0x0;
        }
        puVar20 = (ushort *)((long)piVar18 - (long)*piVar18);
        fVar27 = 0.0;
        fVar28 = 0.0;
        uVar4 = *puVar20;
        if (4 < uVar4) {
          fVar28 = 0.0;
          if ((ulong)puVar20[2] != 0) {
            fVar28 = *(float *)((long)piVar18 + (ulong)puVar20[2]);
          }
        }
        puVar21 = (ushort *)((long)piVar19 - (long)*piVar19);
        uVar5 = *puVar21;
        if ((4 < uVar5) && ((ulong)puVar21[2] != 0)) {
          fVar27 = *(float *)((long)piVar19 + (ulong)puVar21[2]);
        }
        if (ABS(fVar28 - fVar27) <= 1.1920929e-07) {
          fVar27 = 0.0;
          fVar28 = 0.0;
          if (6 < uVar4) {
            fVar28 = 0.0;
            if ((ulong)puVar20[3] != 0) {
              fVar28 = *(float *)((long)piVar18 + (ulong)puVar20[3]);
            }
          }
          if ((6 < uVar5) && ((ulong)puVar21[3] != 0)) {
            fVar27 = *(float *)((long)piVar19 + (ulong)puVar21[3]);
          }
          if (ABS(fVar28 - fVar27) <= 1.1920929e-07) {
            fVar27 = 0.0;
            fVar28 = 0.0;
            if (8 < uVar4) {
              fVar28 = 0.0;
              if ((ulong)puVar20[4] != 0) {
                fVar28 = *(float *)((long)piVar18 + (ulong)puVar20[4]);
              }
            }
            if ((8 < uVar5) && ((ulong)puVar21[4] != 0)) {
              fVar27 = *(float *)((long)piVar19 + (ulong)puVar21[4]);
            }
            if (ABS(fVar28 - fVar27) <= 1.1920929e-07) {
              puVar20 = (ushort *)((long)piVar16 - (long)*piVar16);
              fVar27 = 0.0;
              fVar28 = 0.0;
              uVar4 = *puVar20;
              if (4 < uVar4) {
                fVar28 = 0.0;
                if ((ulong)puVar20[2] != 0) {
                  fVar28 = *(float *)((long)piVar16 + (ulong)puVar20[2]);
                }
              }
              puVar21 = (ushort *)((long)piVar17 - (long)*piVar17);
              uVar5 = *puVar21;
              if ((4 < uVar5) && ((ulong)puVar21[2] != 0)) {
                fVar27 = *(float *)((long)piVar17 + (ulong)puVar21[2]);
              }
              if (ABS(fVar28 - fVar27) <= 1.1920929e-07) {
                fVar27 = 0.0;
                fVar28 = 0.0;
                if (6 < uVar4) {
                  fVar28 = 0.0;
                  if ((ulong)puVar20[3] != 0) {
                    fVar28 = *(float *)((long)piVar16 + (ulong)puVar20[3]);
                  }
                }
                if ((6 < uVar5) && ((ulong)puVar21[3] != 0)) {
                  fVar27 = *(float *)((long)piVar17 + (ulong)puVar21[3]);
                }
                if (ABS(fVar28 - fVar27) <= 1.1920929e-07) {
                  fVar27 = 0.0;
                  fVar28 = 0.0;
                  if (8 < uVar4) {
                    fVar28 = 0.0;
                    if ((ulong)puVar20[4] != 0) {
                      fVar28 = *(float *)((long)piVar16 + (ulong)puVar20[4]);
                    }
                  }
                  if ((8 < uVar5) && ((ulong)puVar21[4] != 0)) {
                    fVar27 = *(float *)((long)piVar17 + (ulong)puVar21[4]);
                  }
                  if (ABS(fVar28 - fVar27) <= 1.1920929e-07) {
                    FUN_01ad8994(local_98,param_1,uVar3);
                    goto LAB_01f7a644;
                  }
                }
              }
            }
          }
        }
        FUN_01ad8994(local_98,param_1,(ulong)uVar3);
        FUN_01a73640(local_a8,local_98);
        puVar8 = local_a8[0];
        puVar11 = PTR_DAT_04379e90;
        puVar10 = PTR_DAT_04379e88;
        if (local_a8[0] == (undefined8 *)0x0) goto LAB_01f7a644;
        if (*(int *)((long)local_a8[0] + 0xc) == 0) goto LAB_01f7aa7c;
        piVar16 = (int *)((long)local_a8[0] + 0xc);
        iVar13 = *(int *)((long)local_a8[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar14;
    if (iVar14 == 0) {
      return;
    }
  } while( true );
  do {
    plVar22 = (long *)puVar8[2];
    if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
        if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
          uVar24 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar24;
          __cxa_guard_release(puVar9);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar11 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar10);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) goto LAB_01f7aa7c;
      if (plVar22 == (long *)puVar11) break;
      plVar22 = (long *)*plVar22;
    }
    iVar14 = *piVar16;
    if (iVar14 == iVar13) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar15 = puVar8[3];
        plVar22 = (long *)0x0;
        puVar8 = local_a8[0];
        if (lVar15 != 0) {
          plVar22 = (long *)(lVar15 + -0x50);
        }
        goto joined_r0x01f7a9e4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar14;
  } while (iVar14 != 0);
LAB_01f7aa7c:
  plVar22 = (long *)0x0;
  puVar8 = local_a8[0];
joined_r0x01f7a9e4:
  local_a8[0] = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    piVar16 = (int *)(puVar8 + 1);
    do {
      iVar13 = *piVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar8;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (plVar22 != (long *)0x0) {
    if ((*(byte *)(local_98 + 0xde) & 1) == 0) {
      (**(code **)(*local_98 + 0xf0))(local_98,0);
      FUN_01a89bd4(0x40a00000,plVar22,&local_80,&local_90);
    }
    else {
      (**(code **)(*local_98 + 0xf0))(local_98,1);
      FUN_01a83770(plVar22,&local_80,&local_90);
    }
    FUN_01ad83c4(local_a8,local_98);
    puVar8 = local_a8[0];
    puVar10 = PTR_DAT_0437a258;
    if (local_a8[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_a8[0] + 0xc) != 0) {
        piVar16 = (int *)((long)local_a8[0] + 0xc);
        iVar13 = *(int *)((long)local_a8[0] + 0xc);
        do {
          plVar25 = (long *)puVar8[2];
          if (((*PTR_DAT_0437a250 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a250), iVar14 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                uVar24 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437a250);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_01f7acb4;
            if (plVar25 == (long *)puVar10) break;
            plVar25 = (long *)*plVar25;
          }
          iVar14 = *piVar16;
          if (iVar14 == iVar13) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar7) {
              *piVar16 = iVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              lVar15 = puVar8[3];
              plVar25 = (long *)0x0;
              puVar8 = local_a8[0];
              if (lVar15 != 0) {
                plVar25 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x01f7acd8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar14;
        } while (iVar14 != 0);
      }
LAB_01f7acb4:
      plVar25 = (long *)0x0;
      puVar8 = local_a8[0];
joined_r0x01f7acd8:
      local_a8[0] = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        piVar16 = (int *)(puVar8 + 1);
        do {
          iVar13 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 + -1 == 0) {
          puVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_68 = *puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      if (plVar25 != (long *)0x0) {
        FUN_0183d4c8(plVar25);
        lVar15 = plVar25[0xb];
        piVar16 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar25 + 0x20))(plVar25);
        }
      }
    }
    lVar15 = plVar22[0xb];
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
LAB_01f7a644:
  plVar22 = local_98;
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_00b645bc(&local_b8,param_2);
  FUN_01ad9378(plVar22,&local_b8);
  plVar22 = local_b8;
  if (local_b8 != (long *)0x0) {
    plVar25 = local_b8 + 1;
    do {
      iVar13 = (int)*plVar25 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *(int *)plVar25 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_a8[0] = (undefined8 *)*plVar22;
      FUN_02a44274(lVar15 + 0xd8,local_a8);
    }
  }
  FUN_01ad9760(local_98,1);
joined_r0x01f7a488:
  if (local_98 != (long *)0x0) {
    lVar15 = local_98[0xb];
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
joined_r0x01f7a898:
  if (local_70 != (long *)0x0) {
    lVar15 = local_70[0xb];
    piVar16 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  lVar23 = *(long *)(lVar23 + 8);
  piVar16 = (int *)(lVar23 + 0xc);
  do {
    iVar13 = *piVar16;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar7) {
      *piVar16 = iVar13 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  return;
}


