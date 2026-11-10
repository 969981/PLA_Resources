/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f85aac; name: FUN_01f85aac
 */


void FUN_01f85aac(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *unaff_x21;
  undefined8 local_68;
  
  if (*(ulong *)(param_1 + 0x1f0) == param_2) {
    unaff_x21 = *(undefined8 **)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (unaff_x21 == (undefined8 *)0x0) goto LAB_01f85d1c;
    piVar1 = (int *)(unaff_x21 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01f85d1c;
    unaff_x21[2] = 0;
    if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_01f85ee0;
    goto LAB_01f85cf0;
  }
LAB_01f85ae0:
  if (*(ulong *)(param_1 + 0x210) == param_2) {
    unaff_x21 = *(undefined8 **)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = 0;
    if (unaff_x21 != (undefined8 *)0x0) {
      piVar1 = (int *)(unaff_x21 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        unaff_x21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_68 = *unaff_x21;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  if (*(ulong *)(param_1 + 0x230) == param_2) {
    unaff_x21 = *(undefined8 **)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (unaff_x21 != (undefined8 *)0x0) {
      piVar1 = (int *)(unaff_x21 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        unaff_x21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_68 = *unaff_x21;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
    uVar14 = *(ulong *)(param_1 + 0x348);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x348);
  }
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar19 = uVar14 - 1 & param_2;
    }
    else {
      uVar19 = param_2;
      if (uVar14 <= param_2) {
        uVar19 = 0;
        if (uVar14 != 0) {
          uVar19 = param_2 / uVar14;
        }
        uVar19 = param_2 - uVar19 * uVar14;
      }
    }
    lVar18 = *(long *)(param_1 + 0x340);
    plVar16 = *(long **)(lVar18 + uVar19 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      uVar17 = uVar14 - 1;
      if (uVar15 < 2) {
        do {
          if (plVar16[1] == param_2) {
            if (plVar16[2] == param_2) goto LAB_01f85b78;
          }
          else if ((plVar16[1] & uVar17) != uVar19) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar16[1];
          if (uVar20 == param_2) {
            if (plVar16[2] == param_2) goto LAB_01f85b78;
          }
          else {
            if (uVar14 <= uVar20) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar20 / uVar14;
              }
              uVar20 = uVar20 - uVar4 * uVar14;
            }
            if (uVar20 != uVar19) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01f85bbc;
LAB_01f85b78:
  if (uVar15 < 2) {
    uVar19 = uVar17 & param_2;
LAB_01f85b84:
    plVar16 = *(long **)(lVar18 + uVar19 * 8);
  }
  else {
    uVar19 = param_2;
    if (param_2 < uVar14) goto LAB_01f85b84;
    uVar19 = 0;
    if (uVar14 != 0) {
      uVar19 = param_2 / uVar14;
    }
    uVar19 = param_2 - uVar19 * uVar14;
    plVar16 = *(long **)(lVar18 + uVar19 * 8);
  }
  if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
    if (uVar15 < 2) {
      do {
        if (plVar16[1] == param_2) {
          if (plVar16[2] == param_2) goto LAB_01f85bb4;
        }
        else if ((plVar16[1] & uVar17) != uVar19) break;
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    else {
      do {
        uVar15 = plVar16[1];
        if (uVar15 == param_2) {
          if (plVar16[2] == param_2) goto LAB_01f85bb4;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar17 = 0;
            if (uVar14 != 0) {
              uVar17 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar17 * uVar14;
          }
          if (uVar15 != uVar19) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  goto LAB_01f85edc;
LAB_01f85bb4:
  FUN_01f861fc(plVar16 + 3);
LAB_01f85bbc:
  uVar14 = *(ulong *)(param_1 + 0x3b0);
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar19 = uVar14 - 1 & param_2;
    }
    else {
      uVar19 = param_2;
      if (uVar14 <= param_2) {
        uVar19 = 0;
        if (uVar14 != 0) {
          uVar19 = param_2 / uVar14;
        }
        uVar19 = param_2 - uVar19 * uVar14;
      }
    }
    lVar18 = *(long *)(param_1 + 0x3a8);
    plVar16 = *(long **)(lVar18 + uVar19 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      uVar17 = uVar14 - 1;
      if (1 < uVar15) {
        do {
          uVar20 = plVar16[1];
          if (uVar20 == param_2) {
            if (plVar16[2] == param_2) goto LAB_01f85c3c;
          }
          else {
            if (uVar14 <= uVar20) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar20 / uVar14;
              }
              uVar20 = uVar20 - uVar4 * uVar14;
            }
            if (uVar20 != uVar19) goto LAB_01f85c80;
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_01f85c80;
        } while( true );
      }
      do {
        if (plVar16[1] == param_2) {
          if (plVar16[2] == param_2) goto LAB_01f85c3c;
        }
        else if ((plVar16[1] & uVar17) != uVar19) break;
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) break;
      } while( true );
    }
  }
  goto LAB_01f85c80;
LAB_01f85c3c:
  if (uVar15 < 2) {
    uVar19 = uVar17 & param_2;
LAB_01f85c48:
    plVar16 = *(long **)(lVar18 + uVar19 * 8);
  }
  else {
    uVar19 = param_2;
    if (param_2 < uVar14) goto LAB_01f85c48;
    uVar19 = 0;
    if (uVar14 != 0) {
      uVar19 = param_2 / uVar14;
    }
    uVar19 = param_2 - uVar19 * uVar14;
    plVar16 = *(long **)(lVar18 + uVar19 * 8);
  }
  if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
    if (uVar15 < 2) {
      do {
        if (plVar16[1] == param_2) {
          if (plVar16[2] == param_2) goto LAB_01f85c78;
        }
        else if ((plVar16[1] & uVar17) != uVar19) break;
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    else {
      do {
        uVar15 = plVar16[1];
        if (uVar15 == param_2) {
          if (plVar16[2] == param_2) goto LAB_01f85c78;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar17 = 0;
            if (uVar14 != 0) {
              uVar17 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar17 * uVar14;
          }
          if (uVar15 != uVar19) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_01f85edc:
  FUN_01f87d30();
LAB_01f85ee0:
  iVar11 = __cxa_guard_acquire(PTR_DAT_04379498);
  if (iVar11 != 0) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
LAB_01f85cf0:
  lVar18 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar18;
  local_68 = *unaff_x21;
  FUN_02a44274(lVar18 + 0xd8,&local_68);
LAB_01f85d1c:
  *(undefined8 *)(param_1 + 0x200) = 0;
  goto LAB_01f85ae0;
LAB_01f85c78:
  FUN_01f861fc(plVar16 + 3);
LAB_01f85c80:
  iVar11 = *(int *)(param_1 + 0x328) + -1;
  *(int *)(param_1 + 0x328) = iVar11;
  puVar10 = PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (((iVar11 == 0) && (lVar18 = *(long *)(param_1 + 0x330), lVar18 != 0)) &&
     (*(int *)(lVar18 + 0xc) != 0)) {
    piVar1 = (int *)(lVar18 + 0xc);
    iVar11 = *(int *)(lVar18 + 0xc);
    do {
      plVar16 = *(long **)(lVar18 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) {
          return;
        }
        if (plVar16 == (long *)puVar10) break;
        plVar16 = (long *)*plVar16;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 == 0) {
            return;
          }
          plVar16 = (long *)(lVar18 + -0x50);
          FUN_015916d0(plVar16,1,0x8000,0);
          lVar18 = *(long *)(lVar18 + 8);
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f86190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar16 + 0x20))(plVar16);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
  return;
}


