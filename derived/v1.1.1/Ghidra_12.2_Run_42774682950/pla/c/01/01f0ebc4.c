/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0ebc4; name: FUN_01f0ebc4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f0ebc4(uint param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *local_78 [2];
  long local_68;
  
  lVar20 = DAT_043d4720;
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (DAT_043d4720 == 0) {
    return;
  }
  if (*(int *)(DAT_043d4720 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(DAT_043d4720 + 0xc);
  iVar12 = *(int *)(DAT_043d4720 + 0xc);
  do {
    plVar22 = *(long **)(lVar20 + 0x10);
    if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar13;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar10 = puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == (long *)puVar10) break;
      plVar22 = (long *)*plVar22;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 == 0) {
          return;
        }
        plVar18 = (long *)(lVar20 + -0x50);
        FUN_0199c220(local_78,plVar18);
        plVar22 = local_78[0];
        puVar9 = PTR_DAT_0437a0e8;
        if (local_78[0] == (long *)0x0) goto LAB_01f0eca4;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01f0f148;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar12 = *(int *)((long)local_78[0] + 0xc);
        goto LAB_01f0ed50;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
LAB_01f0eecc:
  plVar23 = (long *)plVar23[3];
  if (plVar23 != (long *)0x0) {
    lVar14 = plVar23[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01f0f0dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
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
  lVar14 = FUN_01f0f23c(plVar23 + 10);
  for (plVar21 = *(long **)(lVar14 + 0x98); plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
    while (plVar19 = (long *)plVar21[3], plVar19 != (long *)0x0) {
      lVar14 = plVar19[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01f0f0dc;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
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
      lVar14 = plVar19[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01f0f0dc;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
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
      FUN_01abfc54(plVar19,param_1 & 1);
      lVar14 = plVar19[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      lVar14 = plVar19[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
        plVar21 = (long *)*plVar21;
      }
      else {
        plVar21 = (long *)*plVar21;
      }
      if (plVar21 == (long *)0x0) goto LAB_01f0efe0;
    }
    FUN_01abfc54(0,param_1 & 1);
  }
LAB_01f0efe0:
  if (plVar23 != (long *)0x0) {
    lVar14 = plVar23[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (local_78[0] != (long *)0x0) {
    lVar14 = local_78[0][0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
  }
  goto LAB_01f0f024;
LAB_01f0ed50:
  do {
    plVar23 = (long *)plVar22[2];
    if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar13;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)PTR_DAT_0437a0f0 = puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar23 == (long *)0x0) goto LAB_01f0f148;
      if (plVar23 == (long *)PTR_DAT_0437a0f0) break;
      plVar23 = (long *)*plVar23;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar14 = plVar22[3];
        plVar22 = (long *)0x0;
        plVar23 = local_78[0];
        if (lVar14 != 0) {
          plVar22 = (long *)(lVar14 + -0x50);
        }
        goto joined_r0x01f0ed9c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar11;
  } while (iVar11 != 0);
LAB_01f0f148:
  plVar22 = (long *)0x0;
  plVar23 = local_78[0];
joined_r0x01f0ed9c:
  local_78[0] = plVar23;
  if (plVar23 != (long *)0x0) {
    plVar21 = plVar23 + 1;
    do {
      iVar12 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *(int *)plVar21 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      plVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *plVar23;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (plVar22 == (long *)0x0) goto LAB_01f0eca4;
  FUN_01847290(local_78,plVar22);
  if (local_78[0] != (long *)0x0) {
    uVar15 = local_78[0][0x28];
    if (uVar15 != 0) {
      uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = (ulong)((uint)uVar15 - 1) & 0xb;
      }
      else {
        uVar17 = 0xb;
        if (uVar15 < 0xc) {
          uVar2 = (uint)uVar15 & 0xff;
          uVar5 = 0;
          if ((uVar15 & 0xff) != 0) {
            uVar5 = 0xb / uVar2;
          }
          uVar17 = (ulong)(0xb - uVar5 * uVar2);
        }
      }
      plVar23 = *(long **)(local_78[0][0x27] + uVar17 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar23[1] == 0xb) {
              if ((int)plVar23[2] == 0xb) goto LAB_01f0eecc;
            }
            else if ((plVar23[1] & uVar15 - 1) != uVar17) break;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar23[1];
            if (uVar16 == 0xb) {
              if ((int)plVar23[2] == 0xb) goto LAB_01f0eecc;
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
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    FUN_01f0f4e0();
    puVar9 = PTR_DAT_04379518;
    puVar8 = PTR_DAT_04379510;
    puVar7 = PTR_DAT_04379508;
    if ((*PTR_DAT_04379508 & 1) == 0) {
      uVar15 = (ulong)DAT_0444ac08 & 0xfffffffffffffffc;
      *(undefined8 *)(PTR_DAT_04379510 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      DAT_0444ac08 = puVar8;
      *(ulong *)puVar8 = uVar15;
      *(undefined **)(puVar8 + 8) = puVar9;
      *(undefined8 *)puVar7 = 1;
    }
    return;
  }
LAB_01f0f024:
  lVar14 = plVar22[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
LAB_01f0eca4:
  lVar20 = *(long *)(lVar20 + 8);
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  return;
}


