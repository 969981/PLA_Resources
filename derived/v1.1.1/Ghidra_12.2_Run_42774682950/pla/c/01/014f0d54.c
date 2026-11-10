/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f0d54; name: FUN_014f0d54
 */


void FUN_014f0d54(long param_1,uint param_2,long param_3,byte param_4,byte param_5)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  
  if (param_2 != 0) {
    plVar14 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_010c5d94(plVar14,0,(ulong)param_2);
    lVar15 = *(long *)(param_1 + 0x10);
    plVar17 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar17 == (long *)0x0) {
      lVar12 = *(long *)(lVar15 + 0xb0);
      if (lVar12 != 0) {
        plVar17 = *(long **)(lVar12 + 0x270);
        if (plVar17 != *(long **)(lVar12 + 0x278)) {
          iVar7 = 0;
          do {
            plVar16 = (long *)PTR_DAT_04379c88;
            if (*plVar17 != 0) {
              plVar16 = (long *)(*plVar17 + 0x58);
            }
            if (*plVar16 == -0x2718bb51414832ee) goto LAB_014f13f4;
            plVar17 = plVar17 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar12 + 0x278) != plVar17);
        }
      }
      iVar7 = 0;
LAB_014f13f4:
      FUN_02c2e33c(lVar15,iVar7,0);
    }
    else {
      plVar16 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar12 = *(long *)(lVar15 + 0xb0);
      if (lVar12 != 0) {
        plVar10 = *(long **)(lVar12 + 0x270);
        if (plVar10 != *(long **)(lVar12 + 0x278)) {
          iVar7 = 0;
          do {
            plVar11 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar11 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar11 == -0x2718bb51414832ee) goto LAB_014f0e68;
            plVar10 = plVar10 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar12 + 0x278) != plVar10);
        }
      }
      iVar7 = 0;
LAB_014f0e68:
      FUN_02c2e33c(lVar15,iVar7,plVar17);
      do {
        iVar7 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    lVar12 = *(long *)(param_1 + 8);
    uVar8 = *(undefined8 *)(lVar12 + 0x1c0);
    lVar15 = *(long *)(lVar12 + 0x1c8);
    lVar18 = *(long *)(lVar12 + 0x1b8);
    *(undefined4 *)(lVar18 + 0x124) = 0;
    *(undefined2 *)(lVar18 + 0x128) = 0;
    *(undefined4 *)(lVar18 + 300) = 0;
    *(undefined4 *)(lVar18 + 0x134) = 0;
    FUN_02c33414(lVar18,uVar8);
    if (*(char *)(lVar15 + 0x7c) != '\0') {
      **(undefined2 **)(lVar15 + 0x58) = 0;
      *(undefined2 *)(lVar15 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar18,lVar15,uVar8,0,0);
    FUN_0283ce7c(lVar12,param_3,*(undefined8 *)(lVar12 + 0x1c8),10);
    puVar5 = PTR_DAT_0437a0d0;
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar6 = PTR_DAT_0437a0d8;
    if (*(long *)(param_3 + 0x20) != *(long *)PTR_DAT_0437a0d8) {
      lVar15 = *(long *)(param_1 + 0x10);
      plVar17 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
      if (plVar17 == (long *)0x0) {
        lVar12 = *(long *)(lVar15 + 0xb0);
        if (lVar12 != 0) {
          plVar17 = *(long **)(lVar12 + 0x270);
          if (plVar17 != *(long **)(lVar12 + 0x278)) {
            iVar7 = 0;
            do {
              plVar16 = (long *)PTR_DAT_04379c88;
              if (*plVar17 != 0) {
                plVar16 = (long *)(*plVar17 + 0x58);
              }
              if (*plVar16 == -0x2718bb51414832ee) goto LAB_014f146c;
              plVar17 = plVar17 + 1;
              iVar7 = iVar7 + 1;
            } while (*(long **)(lVar12 + 0x278) != plVar17);
          }
        }
        iVar7 = 0;
LAB_014f146c:
        FUN_02c2e33c(lVar15,iVar7,0);
      }
      else {
        plVar16 = plVar17 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar12 = *(long *)(lVar15 + 0xb0);
        if (lVar12 != 0) {
          plVar10 = *(long **)(lVar12 + 0x270);
          if (plVar10 != *(long **)(lVar12 + 0x278)) {
            iVar7 = 0;
            do {
              plVar11 = (long *)PTR_DAT_04379c88;
              if (*plVar10 != 0) {
                plVar11 = (long *)(*plVar10 + 0x58);
              }
              if (*plVar11 == -0x2718bb51414832ee) goto LAB_014f0fa0;
              plVar10 = plVar10 + 1;
              iVar7 = iVar7 + 1;
            } while (*(long **)(lVar12 + 0x278) != plVar10);
          }
        }
        iVar7 = 0;
LAB_014f0fa0:
        FUN_02c2e33c(lVar15,iVar7,plVar17);
        do {
          iVar7 = (int)*plVar16 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      lVar18 = *(long *)(param_1 + 8);
      uVar8 = *(undefined8 *)(lVar18 + 0x1c0);
      lVar15 = *(long *)(lVar18 + 0x1c8);
      lVar12 = *(long *)(lVar18 + 0x1b8);
      *(undefined4 *)(lVar12 + 0x124) = 0;
      *(undefined2 *)(lVar12 + 0x128) = 0;
      *(undefined4 *)(lVar12 + 300) = 0;
      *(undefined4 *)(lVar12 + 0x134) = 0;
      FUN_02c33414(lVar12,uVar8);
      if (*(char *)(lVar15 + 0x7c) != '\0') {
        **(undefined2 **)(lVar15 + 0x58) = 0;
        *(undefined2 *)(lVar15 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar12,lVar15,uVar8,0,0);
      FUN_0283ce7c(lVar18,(long *)(param_3 + 0x20),*(undefined8 *)(lVar18 + 0x1c8),10);
    }
    lVar15 = FUN_00d63240(*(undefined8 *)(param_1 + 8),param_3 + 0x40);
    if (lVar15 != 0) {
      lVar12 = (&DAT_0428af30)[(ulong)param_2 * 6];
      if (lVar12 == 0) {
        plVar17 = &DAT_0428af30;
      }
      else {
        plVar17 = &DAT_0428af30;
        if (*(char *)(lVar12 + 0x1e1) != '\0') {
          plVar17 = &DAT_0428af30 + (ulong)param_2 * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar17 + 0x250) + (ulong)**(uint **)(*plVar17 + 0x250));
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar13 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined1 *)((long)piVar2 + uVar13);
      }
      FUN_0284fbb0(*(undefined8 *)(param_1 + 0x18),uVar9,1,lVar15,0,0);
    }
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    lVar15 = *(long *)(param_3 + 0x60);
    if (lVar15 != *(long *)puVar6) {
      plVar17 = *(long **)(*(long *)(param_1 + 8) + 0x148);
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x150);
      plVar16 = *(long **)(param_3 + 0x78);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
      plVar10 = plVar17;
      if ((lVar12 != 0) && (*plVar17 != lVar15)) {
        lVar18 = lVar12 * 0x30;
        plVar11 = plVar17 + lVar12 * 6;
        do {
          lVar18 = lVar18 + -0x30;
          plVar10 = plVar11;
          if (lVar18 == 0) break;
          plVar1 = plVar17 + 6;
          plVar17 = plVar17 + 6;
          plVar10 = plVar17;
        } while (*plVar1 != lVar15);
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) & 0xfe | param_5 & 1;
    }
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    lVar15 = *(long *)(param_3 + 0x80);
    if (lVar15 != *(long *)puVar6) {
      plVar17 = *(long **)(*(long *)(param_1 + 8) + 0x148);
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x150);
      plVar16 = *(long **)(param_3 + 0x98);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
      plVar10 = plVar17;
      if ((lVar12 != 0) && (*plVar17 != lVar15)) {
        lVar18 = lVar12 * 0x30;
        plVar11 = plVar17 + lVar12 * 6;
        do {
          lVar18 = lVar18 + -0x30;
          plVar10 = plVar11;
          if (lVar18 == 0) break;
          plVar1 = plVar17 + 6;
          plVar17 = plVar17 + 6;
          plVar10 = plVar17;
        } while (*plVar1 != lVar15);
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) & 0xfe | param_4 & 1;
    }
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x014f12d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return;
      }
    }
  }
  return;
}


