/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d682f0; name: FUN_01d682f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01d682f0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined1 *local_320;
  code *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  long alStack_300 [13];
  long *local_298;
  undefined8 *local_290;
  undefined8 uStack_288;
  undefined8 local_280 [62];
  long *local_90;
  long *local_88;
  undefined8 *local_80 [2];
  undefined8 local_70 [2];
  
  puVar11 = PTR_DAT_0437a0f0;
  puVar10 = PTR_DAT_0437a0e8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar20 = *(long *)(param_1 + 0x80);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar14 = *(int *)(lVar20 + 0xc);
    do {
      plVar21 = *(long **)(lVar20 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar15;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar11 = puVar7;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01d68430;
        if (plVar21 == (long *)puVar11) break;
        plVar21 = (long *)*plVar21;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar14) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar9 = PTR_DAT_043796e8;
        puVar8 = PTR_DAT_043796e0;
        if (cVar2 == '\0') {
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 != 0) {
            lVar18 = *(long *)(param_1 + 0x90);
            if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) goto LAB_01d68394;
            piVar1 = (int *)(lVar18 + 0xc);
            iVar14 = *(int *)(lVar18 + 0xc);
            goto LAB_01d684a4;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01d68430:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01d684a4:
  plVar21 = *(long **)(lVar18 + 0x10);
  if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
    if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
      uVar15 = FUN_0087f8f0();
      *(undefined8 *)puVar7 = uVar15;
      __cxa_guard_release(puVar6);
    }
    *(undefined **)puVar9 = puVar7;
    __cxa_guard_release(puVar8);
  }
  while( true ) {
    if (plVar21 == (long *)0x0) goto LAB_01d68394;
    if (plVar21 == (long *)puVar9) break;
    plVar21 = (long *)*plVar21;
  }
  iVar13 = *piVar1;
  if (iVar13 == iVar14) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar14 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar18 = *(long *)(lVar18 + 0x18);
      plVar21 = (long *)(lVar18 + -0x50);
      if (lVar18 != 0) {
        FUN_0199c304(local_80,plVar21);
        if (local_80[0] == (undefined8 *)0x0) goto LAB_01d6850c;
        FUN_009acf14(&local_88);
        puVar4 = local_80[0];
        if (local_88 == (long *)0x0) goto joined_r0x01d68898;
        if (((*PTR_DAT_04379558 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        lVar17 = *(long *)PTR_DAT_04379560;
        *(long *)PTR_DAT_04379568 = lVar17;
        plVar19 = *(long **)(lVar17 + 0x268);
        if (plVar19 == (long *)0x0) goto LAB_01d68600;
        lVar17 = plVar19[0xb];
        if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d68430;
        if (*(long *)(lVar17 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          *(undefined8 *)(lVar17 + 0x10) = uVar15;
        }
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_01d68600:
        local_90 = (long *)0x0;
        FUN_0135eb8c(local_280,*(undefined8 *)(param_1 + 8),*(undefined1 *)((long)plVar19 + 0x7d));
        local_290 = *(undefined8 **)(lVar20 + 0x40);
        uStack_288 = *(undefined8 *)(lVar20 + 0x48);
        plVar16 = (long *)FUN_0152b4a4(local_70,*(undefined8 *)(param_1 + 8),&local_290,local_280);
        if (plVar16 != (long *)0x0) {
          lVar17 = plVar16[0xb];
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d68430;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar15;
          }
          plVar12 = local_90;
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_90 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            lVar17 = plVar12[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))();
            }
          }
        }
        local_90 = plVar16;
        if (((*PTR_DAT_0437a780 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a780);
        }
        *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
        FUN_01e65a40(&local_290);
        FUN_0135ad58(local_90 + 0x4d,&local_290);
        puVar4 = local_290;
        if (local_290 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_290 + 1);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            local_290[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_70[0] = *puVar4;
            FUN_02a44274(lVar17 + 0xd8,local_70);
          }
        }
        plVar16 = (long *)local_88[0x10];
        if (plVar16 != (long *)0x0) {
          lVar17 = plVar16[0xb];
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d68430;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar15;
          }
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_320 = &LAB_01d862fc;
        local_318 = FUN_01d86dfc;
        local_310 = &LAB_01d86e00;
        local_308 = &LAB_01d86e0c;
        alStack_300[0] = param_1;
        FUN_01352900(&local_298,plVar16,0,&local_90,&local_320,0);
        pcVar5 = local_318;
        if (local_298 != (long *)0x0) {
          lVar17 = local_298[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_298 + 0x20))();
            pcVar5 = local_318;
            local_318 = (code *)0x0;
          }
        }
        if (pcVar5 != (code *)0x0) {
          local_310 = (undefined1 *)0x0;
          local_308 = (undefined1 *)0x0;
          local_320 = (undefined1 *)0x0;
          local_318 = (code *)0x0;
          (*pcVar5)(alStack_300);
        }
        if (plVar16 != (long *)0x0) {
          lVar17 = plVar16[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
        }
        *(undefined1 *)(param_1 + 0x8d4) = 0;
        FUN_00b17558(local_280);
        if (local_90 != (long *)0x0) {
          lVar17 = local_90[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
        lVar17 = plVar19[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        puVar4 = local_80[0];
        if (local_88 != (long *)0x0) {
          lVar17 = local_88[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
            puVar4 = local_80[0];
          }
        }
joined_r0x01d68898:
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_280[0] = *puVar4;
            FUN_02a44274(lVar17 + 0xd8,local_280);
          }
        }
LAB_01d6850c:
        lVar18 = *(long *)(lVar18 + 8);
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21);
        }
      }
      goto LAB_01d68394;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar14 = iVar13;
  if (iVar13 == 0) {
LAB_01d68394:
    lVar18 = *(long *)(lVar20 + 8);
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
    }
    return;
  }
  goto LAB_01d684a4;
}


