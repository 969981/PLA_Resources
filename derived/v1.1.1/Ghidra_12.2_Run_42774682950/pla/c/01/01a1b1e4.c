/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1b1e4; name: FUN_01a1b1e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1b1e4(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *local_78 [2];
  long *local_68;
  
  plVar13 = (long *)(param_1 + 0xef10);
  if ((*plVar13 != 0) && (*(int *)(*plVar13 + 0xc) != 0)) goto LAB_01a1b368;
  FUN_00956dac(local_78,param_1 + 0x1a8);
  lVar10 = FUN_0151c12c(local_78[0] + 0x1e,&local_68);
  if (local_78[0] == (long *)0x0) {
LAB_01a1b278:
    if (lVar10 == 0) goto LAB_01a1b280;
LAB_01a1b438:
    FUN_01a1b970(local_78,lVar10);
    FUN_01a21010(plVar13,local_78);
    if (local_78[0] == (long *)0x0) goto LAB_01a1b368;
    plVar15 = local_78[0] + 1;
    do {
      iVar8 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar14 = local_78[0];
    } while (cVar2 != '\0');
  }
  else {
    lVar12 = local_78[0][0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a1b278;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*local_78[0] + 0x20))();
    if (lVar10 != 0) goto LAB_01a1b438;
LAB_01a1b280:
    FUN_00956dac(param_1 + 0x1a8);
    plVar15 = local_78[0];
    puVar7 = PTR_DAT_04379ff0;
    puVar6 = PTR_DAT_04379fe8;
    lVar10 = *(long *)(param_1 + 0x2f0);
    if (lVar10 == 0) {
      local_68 = (long *)0x0;
    }
    else {
      if (*(int *)(lVar10 + 0xc) != 0) {
        piVar1 = (int *)(lVar10 + 0xc);
        iVar8 = *(int *)(lVar10 + 0xc);
        do {
          plVar14 = *(long **)(lVar10 + 0x10);
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar7 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01a1b5a0;
            if (plVar14 == (long *)puVar7) break;
            plVar14 = (long *)*plVar14;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              local_68 = (long *)0x0;
              if (*(long *)(lVar10 + 0x18) != 0) {
                local_68 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
              }
              goto LAB_01a1b298;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar9;
        } while (iVar9 != 0);
      }
LAB_01a1b5a0:
      local_68 = (long *)0x0;
    }
LAB_01a1b298:
    uVar11 = FUN_01a21310(plVar15,plVar15[1],&local_68);
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (local_78[0] != (long *)0x0) {
      lVar10 = local_78[0][0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_78[0] + 0x20))();
      }
    }
    FUN_01a1b970(local_78,uVar11);
    FUN_01a21010(plVar13,local_78);
    if (local_78[0] == (long *)0x0) goto LAB_01a1b368;
    plVar15 = local_78[0] + 1;
    do {
      iVar8 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar14 = local_78[0];
    } while (cVar2 != '\0');
  }
  if (iVar8 == 0) {
    plVar14[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar10 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar10;
    local_68 = (long *)*plVar14;
    FUN_02a44274(lVar10 + 0xd8,&local_68);
  }
LAB_01a1b368:
  *(undefined4 *)(param_1 + 0xecf0) = *(undefined4 *)(param_1 + 0xecec);
  FUN_01a163a8(param_1,5);
  puVar7 = PTR_DAT_0437f970;
  puVar6 = PTR_DAT_0437f968;
  lVar10 = *plVar13;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      plVar15 = *(long **)(lVar10 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        uVar11 = FUN_0151c598();
        *(undefined8 *)puVar7 = uVar11;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a1b384;
        if (plVar15 == (long *)puVar7) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01a1b654;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          FUN_028b52cc(lVar10 + 0x1b0,param_2);
          lVar12 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 != 0) goto LAB_01a1b390;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
          lVar10 = *plVar13;
          pbVar4 = PTR_DAT_0437f968;
          puVar5 = (undefined8 *)PTR_DAT_0437f970;
          goto joined_r0x01a1b6e4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a1b654:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01a1b384:
  FUN_028b52cc(0x200,param_2);
LAB_01a1b390:
  lVar10 = *plVar13;
  pbVar4 = PTR_DAT_0437f968;
  puVar5 = (undefined8 *)PTR_DAT_0437f970;
joined_r0x01a1b6e4:
  PTR_DAT_0437f968 = pbVar4;
  PTR_DAT_0437f970 = (undefined *)puVar5;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      plVar15 = *(long **)(lVar10 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
        uVar11 = FUN_0151c598();
        *puVar5 = uVar11;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a1b398;
        if (plVar15 == puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01a1b730;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          FUN_028b54c0(lVar10 + 0x1b0);
          lVar12 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 != 0) goto LAB_01a1b3a0;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
          lVar10 = *plVar13;
          pbVar4 = PTR_DAT_0437f968;
          puVar5 = (undefined8 *)PTR_DAT_0437f970;
          goto joined_r0x01a1b7bc;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a1b730:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01a1b398:
  FUN_028b54c0(0x200);
LAB_01a1b3a0:
  lVar10 = *plVar13;
  pbVar4 = PTR_DAT_0437f968;
  puVar5 = (undefined8 *)PTR_DAT_0437f970;
joined_r0x01a1b7bc:
  PTR_DAT_0437f968 = pbVar4;
  PTR_DAT_0437f970 = (undefined *)puVar5;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      plVar15 = *(long **)(lVar10 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
        uVar11 = FUN_0151c598();
        *puVar5 = uVar11;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a1b3a8;
        if (plVar15 == puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01a1b808;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x1c0) != 0) {
            FUN_028b5970(lVar10 + 0x210,*(undefined8 *)(lVar10 + 0x1b0));
          }
          lVar12 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 != 0) goto LAB_01a1b3c4;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
          lVar10 = *plVar13;
          pbVar4 = PTR_DAT_0437f968;
          puVar5 = (undefined8 *)PTR_DAT_0437f970;
          goto joined_r0x01a1b8a0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a1b808:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01a1b3a8:
  if (_DAT_00000210 != 0) {
    FUN_028b5970(0x260,_DAT_00000200);
  }
LAB_01a1b3c4:
  lVar10 = *plVar13;
  pbVar4 = PTR_DAT_0437f968;
  puVar5 = (undefined8 *)PTR_DAT_0437f970;
joined_r0x01a1b8a0:
  PTR_DAT_0437f968 = pbVar4;
  PTR_DAT_0437f970 = (undefined *)puVar5;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01a1b3cc:
    plVar13 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar10 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
        uVar11 = FUN_0151c598();
        *puVar5 = uVar11;
        __cxa_guard_release(pbVar4);
      }
      if (puVar16 == (undefined8 *)0x0) goto LAB_01a1b3cc;
      while (puVar16 != puVar5) {
        puVar16 = (undefined8 *)*puVar16;
        plVar13 = (long *)0x0;
        if (puVar16 == (undefined8 *)0x0) goto LAB_01a1b3d0;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar10 + 0x18) != 0) {
            plVar13 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar13 = (long *)0x0;
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01a1b3d0:
  FUN_028b55bc(plVar13 + 0x40);
  FUN_028bcbec(0);
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


