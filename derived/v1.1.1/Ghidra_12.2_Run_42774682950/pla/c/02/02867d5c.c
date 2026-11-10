/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02867d5c; name: FUN_02867d5c
 */


void FUN_02867d5c(long *param_1,long param_2,byte param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  *param_1 = 0;
  if (*(int *)(param_2 + (ulong)param_3 * 0x120 + 0x100) == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(param_2 + (ulong)param_3 * 0x120 + 0x108);
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  plVar14 = plVar13;
  switch(param_3) {
  case 0:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437f410 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437f410), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437f418 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437f410);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02867fa0:
      if (puVar9 != (undefined8 *)PTR_DAT_0437f418) goto LAB_028689e0;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02867fe4;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02867fe4:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_028684b4:
      if (bVar6) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
      goto switchD_02867dfc_default;
    }
    break;
  case 1:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437e5b0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437e5b0), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437e5b8 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437e5b0);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02867ecc:
      if (puVar9 != (undefined8 *)PTR_DAT_0437e5b8) goto LAB_028689d0;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02867f10;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02867f10:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 2:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437f310 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437f310), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437f318 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437f310);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_0286803c:
      if (puVar9 != (undefined8 *)PTR_DAT_0437f318) goto LAB_028689f0;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02868080;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02868080:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 3:
    plVar14 = (long *)FUN_02869340(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 4:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437f530 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437f530), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437f538 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437f530);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02868184:
      if (puVar9 != (undefined8 *)PTR_DAT_0437f538) goto LAB_02868a00;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_028681c8;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_028681c8:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 5:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437e5f0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437e5f0), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437e5f8 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437e5f0);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02868390:
      if (puVar9 != (undefined8 *)PTR_DAT_0437e5f8) goto LAB_02868abc;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_028683d4;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_028683d4:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 6:
  case 0xc:
  case 0x13:
    goto switchD_02867dfc_caseD_6;
  case 7:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437ee98 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437ee98), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437eea0 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437ee98);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02867e30:
      if (puVar9 != (undefined8 *)PTR_DAT_0437eea0) goto LAB_028689c0;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02867e74;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02867e74:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 8:
    plVar14 = (long *)FUN_02869470(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 9:
    plVar14 = (long *)FUN_02869340(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 10:
    plVar14 = (long *)FUN_028695a0(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0xb:
    (**(code **)plVar13[10])();
    uVar10 = FUN_02876318();
    if ((uVar10 & 1) == 0) {
      plVar14 = (long *)0x0;
    }
    else if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0xd:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_0123fc04();
    if (plVar11 != (long *)0x0) {
LAB_028685c8:
      if (plVar11 != plVar12) goto LAB_02868a7c;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_0286860c;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_0286860c:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0xe:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_01267934();
    if (plVar11 != (long *)0x0) {
LAB_02868654:
      if (plVar11 != plVar12) goto LAB_02868a94;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02868698;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02868698:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0xf:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_014cbee4();
    if (plVar11 != (long *)0x0) {
LAB_02868984:
      if (plVar11 != plVar12) goto code_r0x0286898c;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_02868998;
      }
      goto LAB_02868f94;
    }
LAB_02868994:
    plVar14 = (long *)0x0;
LAB_02868998:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x10:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_01294a84();
    if (plVar11 != (long *)0x0) {
LAB_02868838:
      if (plVar11 != plVar12) goto code_r0x02868840;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_0286884c;
      }
      goto LAB_02868f94;
    }
LAB_02868848:
    plVar14 = (long *)0x0;
LAB_0286884c:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x11:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_0122a634();
    if (plVar11 != (long *)0x0) {
LAB_02868928:
      if (plVar11 != plVar12) goto code_r0x02868930;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_0286893c;
      }
      goto LAB_02868f94;
    }
LAB_02868938:
    plVar14 = (long *)0x0;
LAB_0286893c:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x12:
    plVar14 = (long *)FUN_02869340(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x14:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437eab8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437eab8), iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_04379c98 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)PTR_DAT_0437b320 = PTR_DAT_04379c98;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437eac0 = PTR_DAT_0437b320;
      __cxa_guard_release(PTR_DAT_0437eab8);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_02868220:
      if (puVar9 != (undefined8 *)PTR_DAT_0437eac0) goto LAB_02868a10;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02868264;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02868264:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x15:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_0150ca34();
    if (plVar11 != (long *)0x0) {
LAB_028686e0:
      if (plVar11 != plVar12) goto LAB_02868aac;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02868724;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02868724:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x16:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_014d9be4();
    if (plVar11 != (long *)0x0) {
LAB_028687a4:
      if (plVar11 != plVar12) goto code_r0x028687ac;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_028687b8;
      }
      goto LAB_02868f94;
    }
LAB_028687b4:
    plVar14 = (long *)0x0;
LAB_028687b8:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x17:
    puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437f3e0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437f3e0), puVar5 = PTR_DAT_0437b320, iVar7 != 0)) {
      if (((*PTR_DAT_0437b318 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b318), puVar4 = PTR_DAT_04379c98, iVar7 != 0)) {
        if (((*PTR_DAT_04379ca8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
          uVar8 = FUN_009311a8();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(PTR_DAT_04379ca8);
        }
        *(undefined **)puVar5 = puVar4;
        __cxa_guard_release(PTR_DAT_0437b318);
      }
      *(undefined **)PTR_DAT_0437f3e8 = puVar5;
      __cxa_guard_release(PTR_DAT_0437f3e0);
    }
    if (puVar9 != (undefined8 *)0x0) {
LAB_028682bc:
      if (puVar9 != (undefined8 *)PTR_DAT_0437f3e8) goto LAB_02868a20;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar13;
        } while (cVar2 != '\0');
        goto LAB_02868300;
      }
      goto LAB_02868f94;
    }
    plVar14 = (long *)0x0;
LAB_02868300:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x18:
    plVar11 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    plVar12 = (long *)FUN_011c8d34();
    if (plVar11 != (long *)0x0) {
LAB_028688cc:
      if (plVar11 != plVar12) goto code_r0x028688d4;
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_028688e0;
      }
      goto LAB_02868f94;
    }
LAB_028688dc:
    plVar14 = (long *)0x0;
LAB_028688e0:
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x19:
    plVar14 = (long *)FUN_028695a0(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  case 0x1a:
    plVar14 = (long *)FUN_02869470(plVar13 + 10);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02868f94;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar11 = (long *)*param_1;
    *param_1 = (long)plVar14;
    if (plVar11 != (long *)0x0) {
      lVar15 = plVar11[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028684b4;
    }
    break;
  default:
switchD_02867dfc_default:
    plVar14 = (long *)*param_1;
  }
  if (plVar14 != (long *)0x0) {
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0286876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x20))(plVar13);
        return;
      }
    }
    return;
  }
switchD_02867dfc_caseD_6:
LAB_02868f94:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
code_r0x028688d4:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_028688dc;
  goto LAB_028688cc;
LAB_02868a20:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02868300;
  goto LAB_028682bc;
code_r0x028687ac:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_028687b4;
  goto LAB_028687a4;
LAB_02868aac:
  plVar11 = (long *)*plVar11;
  plVar14 = (long *)0x0;
  if (plVar11 == (long *)0x0) goto LAB_02868724;
  goto LAB_028686e0;
LAB_02868a10:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02868264;
  goto LAB_02868220;
code_r0x02868930:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_02868938;
  goto LAB_02868928;
code_r0x02868840:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_02868848;
  goto LAB_02868838;
code_r0x0286898c:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_02868994;
  goto LAB_02868984;
LAB_02868a94:
  plVar11 = (long *)*plVar11;
  plVar14 = (long *)0x0;
  if (plVar11 == (long *)0x0) goto LAB_02868698;
  goto LAB_02868654;
LAB_02868a7c:
  plVar11 = (long *)*plVar11;
  plVar14 = (long *)0x0;
  if (plVar11 == (long *)0x0) goto LAB_0286860c;
  goto LAB_028685c8;
LAB_028689c0:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02867e74;
  goto LAB_02867e30;
LAB_02868abc:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_028683d4;
  goto LAB_02868390;
LAB_02868a00:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_028681c8;
  goto LAB_02868184;
LAB_028689f0:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02868080;
  goto LAB_0286803c;
LAB_028689d0:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02867f10;
  goto LAB_02867ecc;
LAB_028689e0:
  puVar9 = (undefined8 *)*puVar9;
  plVar14 = (long *)0x0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_02867fe4;
  goto LAB_02867fa0;
}


