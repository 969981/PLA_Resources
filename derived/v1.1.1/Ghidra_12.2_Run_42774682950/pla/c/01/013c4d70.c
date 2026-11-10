/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c4d70; name: FUN_013c4d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013c4d70(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
    uVar5 = *(uint *)(lVar12 + 400);
    if (uVar5 != 0) {
      uVar14 = 0;
      piVar13 = (int *)(lVar12 + 0x20);
LAB_013c4dd0:
      plVar16 = (long *)PTR_DAT_04379c88;
      if (*(long *)(piVar13 + -4) != 0) {
        plVar16 = (long *)(*(long *)(piVar13 + -4) + 0x58);
      }
      if ((*plVar16 != *param_2) || (*piVar13 != 10)) goto LAB_013c4f80;
      if (0xf < (uint)uVar14) {
        plVar16 = (long *)0x0;
        goto LAB_013c4e04;
      }
      plVar16 = *(long **)(piVar13 + -2);
      if (plVar16 == (long *)0x0) goto LAB_013c4e04;
      lVar12 = plVar16[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar9;
        }
        piVar13 = (int *)(lVar12 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar7) {
            *piVar13 = *piVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_013c4e04:
        plVar8 = (long *)plVar16[0xd];
        goto joined_r0x013c4e08;
      }
      goto LAB_013c500c;
    }
LAB_013c4f90:
    plVar16 = (long *)0x0;
    plVar8 = _DAT_00000068;
joined_r0x013c4e08:
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plVar16 != (long *)0x0) {
      lVar12 = plVar16[0xb];
      piVar13 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar7) {
          *piVar13 = iVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
        if (plVar8 == (long *)0x0) goto LAB_013c500c;
        goto LAB_013c4e44;
      }
    }
    if (plVar8 != (long *)0x0) {
LAB_013c4e44:
      plVar16 = (long *)plVar15[0x38];
      if (plVar16 == (long *)0x0) {
        lVar12 = plVar8[0x16];
        if (lVar12 != 0) {
          plVar16 = *(long **)(lVar12 + 0x270);
          if (plVar16 != *(long **)(lVar12 + 0x278)) {
            iVar10 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar16 != 0) {
                plVar3 = (long *)(*plVar16 + 0x58);
              }
              if (*plVar3 == *param_3) goto LAB_013c50b8;
              plVar16 = plVar16 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar12 + 0x278) != plVar16);
          }
        }
        iVar10 = 0;
LAB_013c50b8:
        FUN_02c2e33c(plVar8,iVar10,0);
      }
      else {
        plVar3 = plVar16 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar12 = plVar8[0x16];
        if (lVar12 != 0) {
          plVar11 = *(long **)(lVar12 + 0x270);
          if (plVar11 != *(long **)(lVar12 + 0x278)) {
            iVar10 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar2 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar2 == *param_3) goto LAB_013c4eb8;
              plVar11 = plVar11 + 1;
              iVar10 = iVar10 + 1;
            } while (*(long **)(lVar12 + 0x278) != plVar11);
          }
        }
        iVar10 = 0;
LAB_013c4eb8:
        FUN_02c2e33c(plVar8,iVar10,plVar16);
        do {
          iVar10 = (int)*plVar3 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      lVar12 = plVar15[0x38];
      lVar4 = plVar15[0x39];
      lVar17 = plVar15[0x37];
      *(undefined4 *)(lVar17 + 0x124) = 0;
      *(undefined2 *)(lVar17 + 0x128) = 0;
      *(undefined4 *)(lVar17 + 300) = 0;
      *(undefined4 *)(lVar17 + 0x134) = 0;
      FUN_02c33414(lVar17,lVar12);
      if (*(char *)(lVar4 + 0x7c) != '\0') {
        **(undefined2 **)(lVar4 + 0x58) = 0;
        *(undefined2 *)(lVar4 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar17,lVar4,lVar12,0,0);
      FUN_0283ce7c(plVar15,param_4,plVar15[0x39],10);
      plVar16 = plVar8 + 10;
      do {
        iVar10 = (int)*plVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x013c4fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar15 + 0x10))(plVar15);
        return;
      }
      return;
    }
  }
LAB_013c500c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_013c4f80:
  uVar14 = uVar14 + 1;
  piVar13 = piVar13 + 6;
  if (uVar5 == uVar14) goto LAB_013c4f90;
  goto LAB_013c4dd0;
}


