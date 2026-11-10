/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016bf038; name: FUN_016bf038
 */


void FUN_016bf038(void)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int *unaff_x23;
  undefined8 *unaff_x25;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *local_80 [2];
  long *local_70;
  undefined8 local_68;
  
  FUN_0165aaf8(local_80);
  if (local_80[0] == (undefined8 *)0x0) {
    return;
  }
  iVar10 = *(int *)((long)local_80[0] + 0xc);
  if (iVar10 == 0) goto LAB_016bf2c0;
  unaff_x23 = (int *)((long)local_80[0] + 0xc);
  pbVar17 = PTR_DAT_04380748;
  pbVar18 = PTR_DAT_043794d0;
  puVar19 = local_80[0];
  puVar20 = (undefined8 *)PTR_DAT_043794d8;
  unaff_x25 = (undefined8 *)PTR_DAT_04380750;
LAB_016bf0c4:
  plVar22 = (long *)puVar19[2];
  iVar9 = iVar10;
  if (((*pbVar17 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar17), iVar8 != 0)) {
    if ((*pbVar18 & 1) == 0) goto LAB_016bf340;
    goto LAB_016bf2a4;
  }
joined_r0x016bf0d0:
  do {
    iVar10 = iVar9;
    if (plVar22 == (long *)0x0) {
LAB_016bf2c0:
      pbVar17 = (byte *)0x0;
    }
    else {
      if (plVar22 != unaff_x25) {
        plVar22 = (long *)*plVar22;
        goto joined_r0x016bf0d0;
      }
      iVar10 = *unaff_x23;
      if (iVar10 != iVar9) {
        ClearExclusiveLocal();
LAB_016bf0bc:
        if (iVar10 == 0) goto LAB_016bf2c0;
        goto LAB_016bf0c4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
      if (bVar4) {
        *unaff_x23 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_016bf0bc;
      pbVar17 = (byte *)0x0;
      if (puVar19[3] != 0) {
        pbVar17 = (byte *)(puVar19[3] + -0x50);
      }
      iVar10 = iVar9;
    }
    puVar20 = local_80[0];
    plVar22 = (long *)PTR_DAT_043794a8;
    puVar19 = (undefined8 *)PTR_DAT_043794a0;
    pbVar18 = PTR_DAT_04379498;
    if (local_80[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80[0] + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_80[0][2] = 0;
        if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *puVar19;
        *plVar22 = lVar12;
        local_68 = *puVar20;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if (pbVar17 == (byte *)0x0) {
      return;
    }
    uVar13 = *(ulong *)(pbVar17 + 0x140);
    if (uVar13 != 0) {
      uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = (ulong)((uint)uVar13 - 1) & 0x28;
      }
      else {
        uVar15 = 0x28;
        if (uVar13 < 0x29) {
          uVar2 = (uint)uVar13 & 0xff;
          uVar5 = 0;
          if ((uVar13 & 0xff) != 0) {
            uVar5 = 0x28 / uVar2;
          }
          uVar15 = (ulong)(0x28 - uVar5 * uVar2);
        }
      }
      plVar16 = *(long **)(*(long *)(pbVar17 + 0x138) + uVar15 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar16[1] == 0x28) {
              if ((int)plVar16[2] == 0x28) goto LAB_016bf224;
            }
            else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar16[1];
            if (uVar14 == 0x28) {
              if ((int)plVar16[2] == 0x28) goto LAB_016bf224;
            }
            else {
              if (uVar13 <= uVar14) {
                uVar6 = 0;
                if (uVar13 != 0) {
                  uVar6 = uVar14 / uVar13;
                }
                uVar14 = uVar14 - uVar6 * uVar13;
              }
              if (uVar14 != uVar15) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    FUN_016c1a70();
LAB_016bf340:
    iVar9 = __cxa_guard_acquire(pbVar18);
    if (iVar9 != 0) {
      uVar11 = FUN_0087f8f0();
      *puVar20 = uVar11;
      __cxa_guard_release(pbVar18);
    }
LAB_016bf2a4:
    *unaff_x25 = puVar20;
    __cxa_guard_release(pbVar17);
    iVar9 = iVar10;
  } while( true );
LAB_016bf224:
  plVar16 = (long *)plVar16[3];
  if (plVar16 == (long *)0x0) goto LAB_016bf264;
  lVar12 = plVar16[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_016bf5a4;
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
    *(undefined8 *)(lVar12 + 0x10) = uVar11;
  }
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_016bf264:
  lVar12 = FUN_016c35f4(plVar16 + 10);
  puVar7 = PTR_LAB_04379590;
  plVar23 = *(long **)(lVar12 + 0x98);
  if (plVar23 == (long *)0x0) {
LAB_016bf4e4:
    if (plVar16 != (long *)0x0) {
      lVar12 = plVar16[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    lVar12 = *(long *)(pbVar17 + 0x58);
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*(long *)pbVar17 + 0x20))(pbVar17);
    }
    return;
  }
  plVar21 = (long *)plVar23[3];
  do {
    if (plVar21 != (long *)0x0) {
      lVar12 = plVar21[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_016bf5a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar12 = plVar21[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_016bf5a4;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_01f86f20(local_80,plVar21);
    FUN_016c24d0(&local_70,local_80);
    puVar20 = local_80[0];
    if (local_80[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80[0] + 1);
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
        local_80[0][2] = 0;
        if (((*pbVar18 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar18), iVar10 != 0)) {
          FUN_00100250(puVar7,puVar19,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar18);
        }
        lVar12 = *puVar19;
        *plVar22 = lVar12;
        local_68 = *puVar20;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if ((local_70 != (long *)0x0) && (FUN_015916d0(local_70,1,0x100,0), local_70 != (long *)0x0)) {
      lVar12 = local_70[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    FUN_01f86388(plVar21,1);
    FUN_01f86f30(plVar21);
    if (plVar21 != (long *)0x0) {
      lVar12 = plVar21[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      lVar12 = plVar21[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    plVar23 = (long *)*plVar23;
    if (plVar23 == (long *)0x0) goto LAB_016bf4e4;
    plVar21 = (long *)plVar23[3];
  } while( true );
}


