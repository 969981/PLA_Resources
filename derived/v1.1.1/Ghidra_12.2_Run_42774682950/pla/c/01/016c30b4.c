/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016c30b4; name: FUN_016c30b4
 */


void FUN_016c30b4(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 *puVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined4 uVar24;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  puVar6 = PTR_DAT_04379660;
  plVar21 = *(long **)(param_1 + 0x98);
joined_r0x016c30d8:
  if (plVar21 == (long *)0x0) {
    return;
  }
  plVar22 = (long *)plVar21[3];
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
LAB_016c35dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar23 = plVar22[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_016c35dc;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((*(byte *)(plVar22 + 0xe2) >> 1 & 1) == 0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00b63974(&local_80,plVar22 + 0xbc);
    FUN_016c24d0(&local_70,&local_80);
    puVar9 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_68 = *puVar9;
        FUN_02a44274(lVar23 + 0xd8,&local_68);
      }
    }
    plVar10 = local_70;
    if (local_70 == (long *)0x0) goto LAB_016c342c;
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar6);
    }
    lVar23 = *(long *)puVar7;
    *(long *)puVar8 = lVar23;
    puVar15 = *(undefined1 **)(lVar23 + 0x60);
    if (puVar15 == (undefined1 *)0x0) goto LAB_016c35cc;
    uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar15 + -1) & 0xd0be290d7b218e69);
    }
    else {
      puVar14 = &DAT_d0be290d7b218e69;
      if (puVar15 < (undefined1 *)0xd0be290d7b218e6a) {
        uVar16 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar16 = 0xd0be290d7b218e69 / (ulong)puVar15;
        }
        puVar14 = &DAT_d0be290d7b218e69 + -(uVar16 * (long)puVar15);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar14 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_016c35cc;
    if (1 < uVar13) {
      do {
        puVar19 = (undefined1 *)plVar18[1];
        if (puVar19 == &DAT_d0be290d7b218e69) {
          if ((undefined1 *)plVar18[2] == &DAT_d0be290d7b218e69) goto LAB_016c32b0;
        }
        else {
          if (puVar15 <= puVar19) {
            uVar13 = 0;
            if (puVar15 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar19 / (ulong)puVar15;
            }
            puVar19 = puVar19 + -(uVar13 * (long)puVar15);
          }
          if (puVar19 != puVar14) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_016c35cc;
    }
    do {
      if ((undefined1 *)plVar18[1] == &DAT_d0be290d7b218e69) {
        if ((undefined1 *)plVar18[2] == &DAT_d0be290d7b218e69) goto LAB_016c32b0;
      }
      else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar15 + -1)) != puVar14)
      goto LAB_016c35cc;
      plVar18 = (long *)*plVar18;
      uVar24 = 0;
    } while (plVar18 != (long *)0x0);
    goto LAB_016c33f4;
  }
  goto LAB_016c342c;
LAB_016c32b0:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) {
LAB_016c35cc:
    uVar24 = 0;
    goto LAB_016c33f4;
  }
  plVar2 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar18[0x14];
  if (uVar13 == 0) {
    uVar24 = 0;
  }
  else {
    uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar13 - 1 & 0xcfe3ca7cfbbb0a17;
    }
    else {
      uVar17 = 0xcfe3ca7cfbbb0a17;
      if (uVar13 < 0xcfe3ca7cfbbb0a18) {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = 0xcfe3ca7cfbbb0a17 / uVar13;
        }
        uVar17 = 0xcfe3ca7cfbbb0a17 - uVar17 * uVar13;
      }
    }
    plVar20 = *(long **)(plVar18[0x13] + uVar17 * 8);
    if (plVar20 == (long *)0x0) {
      uVar24 = 0;
    }
    else {
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        uVar24 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar20[1] == 0xcfe3ca7cfbbb0a17) {
            if (plVar20[2] == -0x301c35830444f5e9) goto LAB_016c3470;
          }
          else if ((plVar20[1] & uVar13 - 1) != uVar17) {
            uVar24 = 0;
            break;
          }
          plVar20 = (long *)*plVar20;
          uVar24 = 0;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar20[1];
          if (uVar16 == 0xcfe3ca7cfbbb0a17) {
            if (plVar20[2] == -0x301c35830444f5e9) goto LAB_016c3470;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar5 * uVar13;
            }
            if (uVar16 != uVar17) {
              uVar24 = 0;
              goto LAB_016c33e0;
            }
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        uVar24 = 0;
      }
    }
  }
  goto LAB_016c33e0;
LAB_016c3470:
  uVar24 = (undefined4)plVar20[6];
LAB_016c33e0:
  do {
    iVar11 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_016c33f4:
  FUN_015916d0(plVar10,0,0x100,uVar24);
  if (local_70 != (long *)0x0) {
    lVar23 = local_70[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
LAB_016c342c:
  lVar23 = plVar22[0xb];
  piVar1 = (int *)(lVar23 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  lVar23 = plVar22[0xb];
  piVar1 = (int *)(lVar23 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    plVar21 = (long *)*plVar21;
  }
  else {
    plVar21 = (long *)*plVar21;
  }
  goto joined_r0x016c30d8;
}


