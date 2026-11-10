/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016bc3e8; name: FUN_016bc3e8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016bc3e8(void)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint *unaff_x21;
  byte *unaff_x22;
  byte *pbVar21;
  byte *pbVar22;
  long *unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  int local_84;
  undefined8 *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  FUN_0165aaf8(local_78);
  puVar19 = local_78[0];
  pbVar21 = PTR_DAT_04380750;
  puVar9 = PTR_DAT_04380748;
  if (local_78[0] != (undefined8 *)0x0) {
    uVar2 = *(uint *)((long)local_78[0] + 0xc);
    pbVar13 = (byte *)(ulong)uVar2;
    if (uVar2 != 0) {
      unaff_x21 = (uint *)((long)local_78[0] + 0xc);
      pbVar22 = (byte *)(ulong)uVar2;
      do {
        unaff_x24 = (long *)puVar19[2];
        if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)pbVar21 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          unaff_x22 = pbVar21;
          pbVar13 = pbVar22;
          if (unaff_x24 == (long *)0x0) goto LAB_016bc9ac;
          if ((byte *)unaff_x24 == pbVar21) break;
          unaff_x24 = (long *)*unaff_x24;
        }
        uVar2 = *unaff_x21;
        pbVar13 = (byte *)(ulong)uVar2;
        if (uVar2 == (uint)pbVar22) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
          if (bVar4) {
            *unaff_x21 = (uint)pbVar22 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar14 = puVar19[3];
            plVar7 = (long *)0x0;
            puVar19 = local_78[0];
            if (lVar14 != 0) {
              plVar7 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x016bc4a8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        pbVar22 = pbVar13;
      } while (uVar2 != 0);
    }
LAB_016bc9ac:
    plVar7 = (long *)0x0;
    pbVar22 = pbVar13;
    pbVar21 = unaff_x22;
    puVar19 = local_78[0];
joined_r0x016bc4a8:
    if (puVar19 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar19 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        puVar19[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar19;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (plVar7 != (long *)0x0) {
      uVar15 = plVar7[0x28];
      if (uVar15 != 0) {
        uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 < 2) {
          uVar17 = (ulong)((uint)uVar15 - 1) & 6;
        }
        else {
          uVar17 = 6;
          if (uVar15 < 7) {
            uVar2 = (uint)uVar15 & 0xff;
            uVar5 = 0;
            if ((uVar15 & 0xff) != 0) {
              uVar5 = 6 / uVar2;
            }
            uVar17 = (ulong)(6 - uVar5 * uVar2);
          }
        }
        plVar18 = *(long **)(plVar7[0x27] + uVar17 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar16 < 2) {
            do {
              if (plVar18[1] == 6) {
                if ((int)plVar18[2] == 6) goto LAB_016bc5c0;
              }
              else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar16 = plVar18[1];
              if (uVar16 == 6) {
                if ((int)plVar18[2] == 6) goto LAB_016bc5c0;
              }
              else {
                if (uVar15 <= uVar16) {
                  uVar6 = 0;
                  if (uVar15 != 0) {
                    uVar6 = uVar16 / uVar15;
                  }
                  uVar16 = uVar16 - uVar6 * uVar15;
                }
                if (uVar16 != uVar17) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
LAB_016bcabc:
      FUN_016c1a70();
LAB_016bcac0:
      if (*(int *)(unaff_x26 + 0xc) == 0) goto LAB_016bc6b0;
      piVar1 = (int *)(unaff_x26 + 0xc);
      local_84 = *(int *)(unaff_x26 + 0xc);
      do {
        local_80 = *(undefined8 **)(unaff_x26 + 0x10);
        if (((*pbVar21 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar21), iVar10 != 0)) {
          if (((*pbVar22 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar22), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar11;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *unaff_x27 = PTR_DAT_043794d8;
            __cxa_guard_release(pbVar22);
          }
          *puVar19 = unaff_x27;
          __cxa_guard_release(pbVar21);
        }
        if (local_80 == (undefined8 *)0x0) goto LAB_016bc6b0;
        while (local_80 != puVar19) {
          plVar18 = (long *)0x0;
          local_80 = (undefined8 *)*local_80;
          if (local_80 == (undefined8 *)0x0) goto LAB_016bc6b4;
        }
        iVar10 = *piVar1;
        if (iVar10 == local_84) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = local_84 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar18 = (long *)0x0;
            if (*(long *)(unaff_x26 + 0x18) != 0) {
              plVar18 = (long *)(*(long *)(unaff_x26 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar18 = (long *)0x0;
        local_84 = iVar10;
      } while (iVar10 != 0);
LAB_016bc6b4:
      do {
        unaff_x26 = FUN_00b660c4(plVar18 + 0x1e,local_78);
        if (plVar18 != (long *)0x0) {
          lVar14 = plVar18[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
        if (unaff_x26 != 0) {
          FUN_01ec885c(unaff_x26);
        }
        lVar14 = unaff_x24[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*unaff_x24 + 0x20))(unaff_x24);
        }
        lVar14 = unaff_x24[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 != 0) goto LAB_016bc728;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*unaff_x24 + 0x20))(unaff_x24);
        unaff_x28 = (long *)*unaff_x28;
        while( true ) {
          if (unaff_x28 == (long *)0x0) goto LAB_016bc730;
LAB_016bc630:
          unaff_x24 = (long *)unaff_x28[3];
          if (unaff_x24 != (long *)0x0) break;
LAB_016bc728:
          unaff_x28 = (long *)*unaff_x28;
        }
        lVar14 = unaff_x24[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_016bcd8c;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar14 = unaff_x24[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_016bcd8c;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        unaff_x26 = unaff_x24[0x35];
        if (unaff_x26 != 0) goto LAB_016bcac0;
LAB_016bc6b0:
        plVar18 = (long *)0x0;
      } while( true );
    }
  }
  return;
LAB_016bc5c0:
  unaff_x21 = (uint *)plVar18[3];
  if (unaff_x21 != (uint *)0x0) {
    puVar19 = *(undefined8 **)(unaff_x21 + 0x16);
    if ((undefined8 *)puVar19[3] == (undefined8 *)0x0) goto LAB_016bcd8c;
    if (puVar19[2] == 0) {
      uVar11 = (*(code *)**(undefined8 **)puVar19[3])();
      puVar19[2] = uVar11;
    }
    piVar1 = (int *)((long)puVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = FUN_016c1bf0(unaff_x21 + 0x14);
  unaff_x28 = *(long **)(lVar14 + 0x98);
  if (unaff_x28 == (long *)0x0) goto LAB_016bc730;
  puVar19 = (undefined8 *)PTR_DAT_043794b8;
  pbVar21 = PTR_DAT_043794b0;
  pbVar22 = PTR_DAT_043794c0;
  unaff_x27 = (undefined8 *)PTR_DAT_043794c8;
  goto LAB_016bc630;
LAB_016bc730:
  if (unaff_x21 != (uint *)0x0) {
    lVar14 = *(long *)(unaff_x21 + 0x16);
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*(long *)unaff_x21 + 0x20))(unaff_x21);
      uVar15 = plVar7[0x28];
      goto joined_r0x016bc94c;
    }
  }
  uVar15 = plVar7[0x28];
joined_r0x016bc94c:
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = (ulong)((uint)uVar15 - 1) & 9;
    }
    else {
      uVar17 = 9;
      if (uVar15 < 10) {
        uVar2 = (uint)uVar15 & 0xff;
        uVar5 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar5 = 9 / uVar2;
        }
        uVar17 = (ulong)(9 - uVar5 * uVar2);
      }
    }
    plVar18 = *(long **)(plVar7[0x27] + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == 9) {
            if ((int)plVar18[2] == 9) goto LAB_016bc80c;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == 9) {
            if ((int)plVar18[2] == 9) goto LAB_016bc80c;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar6 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_016bcabc;
LAB_016bc80c:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    lVar14 = plVar18[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_016bcd8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = (long *)(**(code **)plVar18[10])(plVar18 + 10);
  puVar9 = PTR_DAT_04380728;
  if ((*PTR_DAT_04380720 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04380720);
    puVar8 = PTR_DAT_0437ef00;
    if (iVar10 != 0) {
      if (((*PTR_DAT_0437eef8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437eef8), iVar10 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437eef8);
      }
      *(undefined **)puVar9 = puVar8;
      __cxa_guard_release(PTR_DAT_04380720);
    }
  }
  for (; plVar12 != (long *)puVar9; plVar12 = (long *)*plVar12) {
  }
  plVar12 = (long *)plVar18[0x13];
  do {
    while( true ) {
      if (plVar12 == (long *)0x0) {
        if (plVar18 != (long *)0x0) {
          lVar14 = plVar18[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
        lVar14 = plVar7[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
          return;
        }
        return;
      }
      plVar20 = (long *)plVar12[3];
      if (plVar20 != (long *)0x0) break;
LAB_016bcd68:
      plVar12 = (long *)*plVar12;
    }
    lVar14 = plVar20[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_016bcd8c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar14 = plVar20[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_016bcd8c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01e9c628(plVar20);
    (**(code **)(*plVar20 + 0x128))(plVar20);
    lVar14 = plVar20[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    lVar14 = plVar20[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 != 0) goto LAB_016bcd68;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
    plVar12 = (long *)*plVar12;
  } while( true );
}


