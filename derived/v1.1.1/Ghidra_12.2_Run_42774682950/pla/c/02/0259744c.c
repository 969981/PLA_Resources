/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259744c; name: FUN_0259744c
 */


void FUN_0259744c(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  byte bVar33;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar12 = PTR_DAT_04379d88;
  puVar11 = PTR_DAT_04379d80;
  puVar10 = PTR_DAT_043794d0;
  local_6c = 0;
  local_68 = 0;
  lVar32 = *(long *)(param_1 + 0x78);
  if ((lVar32 != 0) && (*(int *)(lVar32 + 0xc) != 0)) {
    piVar2 = (int *)(lVar32 + 0xc);
    iVar17 = *(int *)(lVar32 + 0xc);
    do {
      plVar30 = *(long **)(lVar32 + 0x10);
      if (((*puVar11 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar11), iVar18 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar10), iVar18 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar19;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar12 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar11);
      }
      while( true ) {
        if (plVar30 == (long *)0x0) goto LAB_02597488;
        if (plVar30 == (long *)puVar12) break;
        plVar30 = (long *)*plVar30;
      }
      iVar18 = *piVar2;
      if (iVar18 == iVar17) {
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = iVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar32 = *(long *)(lVar32 + 0x18);
          plVar30 = (long *)(lVar32 + -0x50);
          if (lVar32 != 0) {
            FUN_025acc5c(plVar30,(long)&local_68 + 4,&local_68,&local_6c);
            lVar32 = *(long *)(lVar32 + 8);
            piVar2 = (int *)(lVar32 + 0xc);
            do {
              iVar17 = *piVar2;
              cVar7 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar15) {
                *piVar2 = iVar17 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar17 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*plVar30 + 0x20))(plVar30);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar17 = iVar18;
    } while (iVar18 != 0);
  }
LAB_02597488:
  param_2[0xb] = local_68._4_4_;
  param_2[0xd] = 0;
  puVar10 = PTR_DAT_04379678;
  iVar17 = *param_2;
  iVar18 = param_2[1] - iVar17;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379678), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar12 = PTR_DAT_04379688;
  puVar11 = PTR_DAT_04379680;
  lVar32 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar32;
  if (iVar18 == 0) {
    uVar23 = 0;
  }
  else {
    puVar20 = *(ulong **)(lVar32 + 0xd8);
    uVar1 = iVar18 + 1;
    if (uVar1 == 0) {
      uVar24 = *puVar20;
      uVar23 = (int)puVar20[1] + (int)uVar24;
      uVar22 = puVar20[1] ^ uVar24;
      *puVar20 = uVar22 ^ (uVar24 >> 0x28 | uVar24 << 0x18) ^ uVar22 << 0x10;
      puVar20[1] = uVar22 >> 0x1b | uVar22 << 0x25;
    }
    else {
      lVar32 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
        lVar32 = 0x20;
      }
      uVar22 = lVar32 - LZCOUNT(uVar1);
      uVar24 = uVar22 >> 6;
      if ((uVar22 & 0x3f) != 0) {
        uVar24 = uVar24 + 1;
      }
      if (uVar22 < uVar24) {
        uVar21 = 0;
      }
      else {
        uVar27 = 0;
        if (uVar24 != 0) {
          uVar27 = uVar22 / uVar24;
        }
        uVar21 = (uint)(0xffffffffffffffff >> (-uVar27 & 0x3f));
      }
      uVar24 = *puVar20;
      uVar22 = puVar20[1];
      do {
        uVar27 = uVar24 ^ uVar22;
        iVar18 = (int)uVar22;
        uVar22 = uVar27 >> 0x1b | uVar27 << 0x25;
        uVar23 = (int)uVar24 + iVar18 & uVar21;
        uVar24 = uVar27 ^ (uVar24 >> 0x28 | uVar24 << 0x18) ^ uVar27 << 0x10;
      } while (uVar1 <= uVar23);
      *puVar20 = uVar24;
      puVar20[1] = uVar22;
    }
  }
  param_2[0xc] = uVar23 + iVar17;
  if (param_3 != 0) goto LAB_02597be8;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_04379558), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar32 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar32;
  plVar30 = *(long **)(lVar32 + 0x228);
  if (plVar30 != (long *)0x0) {
    lVar32 = plVar30[0xb];
    if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
      *(undefined8 *)(lVar32 + 0x10) = uVar19;
    }
    piVar2 = (int *)(lVar32 + 0xc);
    do {
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar15) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar32 = *(long *)(param_1 + 0x78);
  if ((lVar32 == 0) || (*(int *)(lVar32 + 0xc) == 0)) {
LAB_025975b8:
    bVar15 = true;
  }
  else {
    piVar2 = (int *)(lVar32 + 0xc);
    iVar17 = *(int *)(lVar32 + 0xc);
    do {
      puVar31 = *(undefined8 **)(lVar32 + 0x10);
      if (((*PTR_DAT_04379d80 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04379d80), iVar18 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar18 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar19;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_04379d88 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_04379d80);
      }
      if (puVar31 == (undefined8 *)0x0) goto LAB_025975b8;
      while (puVar31 != (undefined8 *)PTR_DAT_04379d88) {
        puVar31 = (undefined8 *)*puVar31;
        bVar15 = true;
        if (puVar31 == (undefined8 *)0x0) goto LAB_025975bc;
      }
      iVar18 = *piVar2;
      if (iVar18 == iVar17) {
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = iVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_02597ff4;
        lVar32 = *(long *)(lVar32 + 0x18);
        plVar25 = (long *)(lVar32 + -0x50);
        if (lVar32 != 0) {
          iVar17 = FUN_025acbdc(plVar25);
          lVar32 = *(long *)(lVar32 + 8);
          bVar15 = iVar17 != 3;
          piVar2 = (int *)(lVar32 + 0xc);
          do {
            iVar17 = *piVar2;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = iVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar17 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
          break;
        }
        goto LAB_025975b8;
      }
      ClearExclusiveLocal();
LAB_02597ff4:
      bVar15 = true;
      iVar17 = iVar18;
    } while (iVar18 != 0);
  }
LAB_025975bc:
  uVar24 = ((long *)plVar30[0x37])[1];
  if (uVar24 != 0) {
    uVar22 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar27 = 0;
    if (uVar24 != 0) {
      uVar27 = 0xc316b485c4218b7 / uVar24;
    }
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar28 = uVar24 - 1 & 0xc316b485c4218b7;
    }
    else {
      uVar28 = 0xc316b485c4218b7;
      if (uVar24 < 0xc316b485c4218b8) {
        uVar28 = 0xc316b485c4218b7 - uVar27 * uVar24;
      }
    }
    lVar32 = *(long *)plVar30[0x37];
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
    if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0)) {
LAB_02597680:
      bVar13 = false;
    }
    else {
      uVar26 = uVar24 - 1;
      if (1 < uVar22) {
        do {
          uVar29 = plVar25[1];
          if (uVar29 == 0xc316b485c4218b7) {
            if (plVar25[2] == 0xc316b485c4218b7) goto LAB_025976e0;
          }
          else {
            if (uVar24 <= uVar29) {
              uVar9 = 0;
              if (uVar24 != 0) {
                uVar9 = uVar29 / uVar24;
              }
              uVar29 = uVar29 - uVar9 * uVar24;
            }
            if (uVar29 != uVar28) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
        goto LAB_02597680;
      }
      do {
        if (plVar25[1] == 0xc316b485c4218b7) {
          if (plVar25[2] == 0xc316b485c4218b7) goto LAB_025976e0;
        }
        else if ((plVar25[1] & uVar26) != uVar28) goto LAB_02597680;
        plVar25 = (long *)*plVar25;
        bVar13 = false;
      } while (plVar25 != (long *)0x0);
    }
    goto LAB_025977a4;
  }
  bVar14 = false;
  bVar13 = false;
  goto joined_r0x0259769c;
LAB_025976e0:
  if (uVar22 < 2) {
    uVar28 = uVar26 & 0xc316b485c4218b7;
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  else {
    uVar28 = 0xc316b485c4218b7;
    if (uVar24 < 0xc316b485c4218b8) {
      uVar28 = 0xc316b485c4218b7 - uVar27 * uVar24;
    }
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
    if (uVar22 < 2) {
      do {
        if (plVar25[1] == 0xc316b485c4218b7) {
          if (plVar25[2] == 0xc316b485c4218b7) goto LAB_02597794;
        }
        else if ((plVar25[1] & uVar26) != uVar28) goto LAB_0259774c;
        plVar25 = (long *)*plVar25;
        bVar13 = false;
      } while (plVar25 != (long *)0x0);
      goto LAB_025977a0;
    }
    do {
      uVar27 = plVar25[1];
      if (uVar27 == 0xc316b485c4218b7) {
        if (plVar25[2] == 0xc316b485c4218b7) goto LAB_02597794;
      }
      else {
        if (uVar24 <= uVar27) {
          uVar26 = 0;
          if (uVar24 != 0) {
            uVar26 = uVar27 / uVar24;
          }
          uVar27 = uVar27 - uVar26 * uVar24;
        }
        if (uVar27 != uVar28) break;
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
LAB_0259774c:
  bVar13 = false;
LAB_025977a0:
  bVar13 = (bool)(bVar13 ^ 1);
LAB_025977a4:
  uVar27 = 0;
  if (uVar24 != 0) {
    uVar27 = 0x8d2a8766e546f5c4 / uVar24;
  }
  if (uVar22 < 2) {
    uVar28 = uVar24 - 1 & 0x8d2a8766e546f5c4;
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
    if (plVar25 != (long *)0x0) goto LAB_025977d8;
LAB_02597828:
    bVar14 = false;
  }
  else {
    uVar28 = 0x8d2a8766e546f5c4;
    if (uVar24 < 0x8d2a8766e546f5c5) {
      uVar28 = 0x8d2a8766e546f5c4 - uVar27 * uVar24;
    }
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
    if (plVar25 == (long *)0x0) goto LAB_02597828;
LAB_025977d8:
    plVar25 = (long *)*plVar25;
    if (plVar25 == (long *)0x0) goto LAB_02597828;
    uVar26 = uVar24 - 1;
    if (1 < uVar22) {
      do {
        uVar29 = plVar25[1];
        if (uVar29 == 0x8d2a8766e546f5c4) {
          if (plVar25[2] == -0x72d578991ab90a3c) goto LAB_02597874;
        }
        else {
          if (uVar24 <= uVar29) {
            uVar9 = 0;
            if (uVar24 != 0) {
              uVar9 = uVar29 / uVar24;
            }
            uVar29 = uVar29 - uVar9 * uVar24;
          }
          if (uVar29 != uVar28) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
      goto LAB_02597828;
    }
    do {
      if (plVar25[1] == 0x8d2a8766e546f5c4) {
        if (plVar25[2] == -0x72d578991ab90a3c) goto LAB_02597874;
      }
      else if ((plVar25[1] & uVar26) != uVar28) goto LAB_02597828;
      plVar25 = (long *)*plVar25;
      bVar14 = false;
    } while (plVar25 != (long *)0x0);
  }
  goto LAB_02597938;
LAB_02597794:
  bVar13 = (char)plVar25[3] != '\0';
  goto LAB_025977a0;
LAB_02597874:
  if (uVar22 < 2) {
    uVar28 = uVar26 & 0x8d2a8766e546f5c4;
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  else {
    uVar28 = 0x8d2a8766e546f5c4;
    if (uVar24 < 0x8d2a8766e546f5c5) {
      uVar28 = 0x8d2a8766e546f5c4 - uVar27 * uVar24;
    }
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
    if (uVar22 < 2) {
      do {
        if (plVar25[1] == 0x8d2a8766e546f5c4) {
          if (plVar25[2] == -0x72d578991ab90a3c) goto LAB_02597928;
        }
        else if ((plVar25[1] & uVar26) != uVar28) goto LAB_025978e0;
        plVar25 = (long *)*plVar25;
        bVar14 = false;
      } while (plVar25 != (long *)0x0);
      goto LAB_02597934;
    }
    do {
      uVar27 = plVar25[1];
      if (uVar27 == 0x8d2a8766e546f5c4) {
        if (plVar25[2] == -0x72d578991ab90a3c) goto LAB_02597928;
      }
      else {
        if (uVar24 <= uVar27) {
          uVar26 = 0;
          if (uVar24 != 0) {
            uVar26 = uVar27 / uVar24;
          }
          uVar27 = uVar27 - uVar26 * uVar24;
        }
        if (uVar27 != uVar28) break;
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
LAB_025978e0:
  bVar14 = false;
LAB_02597934:
  bVar14 = (bool)(bVar14 ^ 1);
LAB_02597938:
  uVar27 = 0;
  if (uVar24 != 0) {
    uVar27 = 0x9610fba4a63aece4 / uVar24;
  }
  if (uVar22 < 2) {
    uVar28 = uVar24 - 1 & 0x9610fba4a63aece4;
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  else {
    uVar28 = 0x9610fba4a63aece4;
    if (uVar24 < 0x9610fba4a63aece5) {
      uVar28 = 0x9610fba4a63aece4 - uVar27 * uVar24;
    }
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
    uVar26 = uVar24 - 1;
    if (uVar22 < 2) {
      do {
        if (plVar25[1] == 0x9610fba4a63aece4) {
          if (plVar25[2] == -0x69ef045b59c5131c) goto LAB_02597a08;
        }
        else if ((plVar25[1] & uVar26) != uVar28) break;
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
    else {
      do {
        uVar29 = plVar25[1];
        if (uVar29 == 0x9610fba4a63aece4) {
          if (plVar25[2] == -0x69ef045b59c5131c) goto LAB_02597a08;
        }
        else {
          if (uVar24 <= uVar29) {
            uVar9 = 0;
            if (uVar24 != 0) {
              uVar9 = uVar29 / uVar24;
            }
            uVar29 = uVar29 - uVar9 * uVar24;
          }
          if (uVar29 != uVar28) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
  }
joined_r0x0259769c:
  bVar33 = 0;
  goto joined_r0x02597a78;
LAB_02597928:
  bVar14 = (char)plVar25[3] != '\0';
  goto LAB_02597934;
LAB_02597ac8:
  bVar33 = *(byte *)(plVar25 + 3) ^ 1;
  goto joined_r0x02597a78;
LAB_02597a08:
  if (uVar22 < 2) {
    uVar28 = uVar26 & 0x9610fba4a63aece4;
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  else {
    uVar28 = 0x9610fba4a63aece4;
    if (uVar24 < 0x9610fba4a63aece5) {
      uVar28 = 0x9610fba4a63aece4 - uVar27 * uVar24;
    }
    plVar25 = *(long **)(lVar32 + uVar28 * 8);
  }
  if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
    if (uVar22 < 2) {
      bVar33 = 1;
      do {
        if (plVar25[1] == 0x9610fba4a63aece4) {
          if (plVar25[2] == -0x69ef045b59c5131c) goto LAB_02597ac8;
        }
        else if ((plVar25[1] & uVar26) != uVar28) goto LAB_02597a74;
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
      goto joined_r0x02597a78;
    }
    do {
      uVar22 = plVar25[1];
      if (uVar22 == 0x9610fba4a63aece4) {
        if (plVar25[2] == -0x69ef045b59c5131c) goto LAB_02597ac8;
      }
      else {
        if (uVar24 <= uVar22) {
          uVar27 = 0;
          if (uVar24 != 0) {
            uVar27 = uVar22 / uVar24;
          }
          uVar22 = uVar22 - uVar27 * uVar24;
        }
        if (uVar22 != uVar28) break;
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
LAB_02597a74:
  bVar33 = 1;
joined_r0x02597a78:
  if (plVar30 != (long *)0x0) {
    lVar32 = plVar30[0xb];
    piVar2 = (int *)(lVar32 + 0xc);
    do {
      iVar17 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar32 + 0x18) = 0;
      (**(code **)(*plVar30 + 0x20))(plVar30);
    }
  }
  iVar17 = 0;
  if (bVar15) {
    iVar17 = param_2[6];
  }
  iVar18 = 0;
  if (bVar14) {
    iVar18 = param_2[8];
  }
  iVar16 = 0;
  if (bVar14) {
    iVar16 = param_2[4];
  }
  iVar4 = 0;
  if (bVar13) {
    iVar4 = param_2[7];
  }
  iVar5 = 0;
  if (bVar13) {
    iVar5 = param_2[3];
  }
  iVar6 = 0;
  if (bVar33 != 0) {
    iVar6 = param_2[5];
  }
  iVar3 = 0;
  if (bVar33 != 0) {
    iVar3 = param_2[9];
  }
  iVar3 = iVar4 + iVar18 + iVar17 + iVar6 + iVar16 + param_2[2] + iVar5 + iVar3;
  if (((*puVar10 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379678), iVar17 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar32 = *(long *)puVar11;
  *(long *)puVar12 = lVar32;
  if (iVar3 == 0) {
    uVar23 = 0;
  }
  else {
    puVar20 = *(ulong **)(lVar32 + 0xd8);
    uVar1 = iVar3 + 1;
    if (uVar1 == 0) {
      uVar24 = *puVar20;
      uVar23 = (int)puVar20[1] + (int)uVar24;
      uVar22 = puVar20[1] ^ uVar24;
      *puVar20 = uVar22 ^ (uVar24 >> 0x28 | uVar24 << 0x18) ^ uVar22 << 0x10;
      puVar20[1] = uVar22 >> 0x1b | uVar22 << 0x25;
    }
    else {
      lVar32 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
        lVar32 = 0x20;
      }
      uVar22 = lVar32 - LZCOUNT(uVar1);
      uVar24 = uVar22 >> 6;
      if ((uVar22 & 0x3f) != 0) {
        uVar24 = uVar24 + 1;
      }
      if (uVar22 < uVar24) {
        uVar21 = 0;
      }
      else {
        uVar27 = 0;
        if (uVar24 != 0) {
          uVar27 = uVar22 / uVar24;
        }
        uVar21 = (uint)(0xffffffffffffffff >> (-uVar27 & 0x3f));
      }
      uVar24 = *puVar20;
      uVar22 = puVar20[1];
      do {
        uVar27 = uVar24 ^ uVar22;
        iVar17 = (int)uVar22;
        uVar22 = uVar27 >> 0x1b | uVar27 << 0x25;
        uVar23 = (int)uVar24 + iVar17 & uVar21;
        uVar24 = uVar27 ^ (uVar24 >> 0x28 | uVar24 << 0x18) ^ uVar27 << 0x10;
      } while (uVar1 <= uVar23);
      *puVar20 = uVar24;
      puVar20[1] = uVar22;
    }
  }
  iVar17 = param_2[2];
  if (iVar17 < 1) {
    iVar17 = 0;
  }
  else if ((int)uVar23 <= iVar17) {
    param_3 = 1;
    goto LAB_02597be8;
  }
  if (((!bVar13) || (param_2[3] < 1)) || (iVar17 = param_2[3] + iVar17, iVar17 < (int)uVar23)) {
    if (((!bVar14) || (param_2[4] < 1)) || (iVar17 = param_2[4] + iVar17, iVar17 < (int)uVar23)) {
      if (((bVar33 == 0) || (param_2[5] < 1)) ||
         (iVar17 = param_2[5] + iVar17, iVar17 < (int)uVar23)) {
        if (((!bVar15) || (param_2[6] < 1)) || (iVar17 = param_2[6] + iVar17, iVar17 < (int)uVar23))
        {
          if (((!bVar13) || (param_2[7] < 1)) ||
             (iVar17 = param_2[7] + iVar17, iVar17 < (int)uVar23)) {
            if (((!bVar14) || (param_2[8] < 1)) ||
               (iVar17 = param_2[8] + iVar17, iVar17 < (int)uVar23)) {
              param_3 = 8;
              if ((param_2[9] + iVar17 < (int)uVar23 || param_2[9] < 1) || bVar33 == 0) {
                param_3 = 1;
              }
            }
            else {
              param_3 = 7;
            }
          }
          else {
            param_3 = 6;
          }
        }
        else {
          param_3 = 5;
        }
      }
      else {
        param_3 = 4;
      }
    }
    else {
      param_3 = 3;
    }
  }
  else {
    param_3 = 2;
  }
LAB_02597be8:
  param_2[10] = param_3;
  if (((((*(char *)(param_1 + 200) != '\0') && ((char)param_2[0xe] != '\0')) &&
       (*(int *)(param_1 + 0xb4) != param_3)) &&
      ((*(char *)(param_1 + 0x168) == '\0' &&
       (*(int *)(param_1 + 0xb4) = param_3, *(int *)(param_1 + 0xb8) == 0)))) &&
     ((*(int *)(param_1 + 0xbc) == 0 && (*(int *)(param_1 + 0xc0) == 0)))) {
    *(undefined4 *)(param_1 + 0x16c) = 1;
    FUN_025985e0(param_1);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_01b976e4(*(long *)(param_1 + 0x88),param_3);
    }
  }
  return;
}


