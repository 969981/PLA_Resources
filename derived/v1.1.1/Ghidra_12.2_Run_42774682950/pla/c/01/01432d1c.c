/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01432d1c; name: FUN_01432d1c
 */


void FUN_01432d1c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  plVar15 = *(long **)(*(long *)(param_1 + 0x10) + 0x148);
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(long *)(param_1 + 0x4c8) == 0) {
    local_90 = (long *)0x0;
  }
  else {
    param_4 = param_4 & 0xffffffff;
    FUN_00b907c8(&local_90,*(long *)(param_1 + 0x4c8));
  }
  plVar2 = local_90;
  if (*(int *)((long)local_90 + 0x62c) != 1) goto LAB_01432d88;
  lVar16 = *(long *)(param_1 + 0x4d8);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar3 = (int *)(lVar16 + 0xc);
    iVar17 = *(int *)(lVar16 + 0xc);
    do {
      plVar18 = *(long **)(lVar16 + 0x10);
      param_4 = param_4 & 0xffffffff;
      lVar9 = FUN_00b65f6c();
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01432d84;
        if (plVar18 == (long *)lVar9) break;
        plVar18 = (long *)*plVar18;
      }
      iVar4 = *piVar3;
      if (iVar4 == iVar17) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            uVar20 = *(undefined4 *)(lVar16 + 0x7b0);
            bVar8 = FUN_01441aa8(uVar20,*(undefined8 *)(param_1 + 0x348),
                                 *(undefined4 *)(lVar16 + 0x7c8),param_3,param_4);
            FUN_01442628(uVar20,*(undefined8 *)(param_1 + 0x348));
            *(byte *)(lVar16 + 0x7cc) = bVar8 & 1;
            lVar9 = *(long *)(*(long *)(param_1 + 0x348) + 0x168);
            if (lVar9 != 0) {
              *(byte *)(lVar9 + 0x58) =
                   (*(byte *)(lVar9 + 0x58) & 0xfe | *(byte *)(lVar16 + 0x7cd)) ^ 1;
            }
            if ((**(char **)(param_1 + 0x3b0) == '\0') ||
               (uVar10 = FUN_01a73b70(plVar2), (uVar10 & 1) == 0)) goto LAB_014330a0;
            lVar9 = *(long *)(param_1 + 0x4c0);
            if (lVar9 == -0x224018e1d268f681) {
              plVar18 = (long *)&DAT_dd91a0edd6764c0b;
              local_80 = 0xd;
              pcStack_88 = "EffOverHead01";
            }
            else {
              plVar18 = (long *)&DAT_cbf29ce484222645;
              local_80 = 1;
              pcStack_88 = "";
              if (lVar9 < 0x60866d12e7d91b01) {
                if ((lVar9 != -0x3806ebeab04927e7) && (lVar9 != 0x4e9fd5f8e749f8e3)) {
LAB_014331c0:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
              }
              else if ((lVar9 != 0x60866d12e7d91b01) && (lVar9 != 0x6b8f1aecf51ff115))
              goto LAB_014331c0;
            }
            local_78 = (long *)0x0;
            local_90 = plVar18;
            uVar11 = FUN_01b396b4(plVar2,&local_90);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            *(undefined8 *)(param_1 + 0x398) = uVar11;
            *(float *)(param_1 + 0x3a0) = (float)uVar11 + -960.0;
            *(float *)(param_1 + 0x3a4) = 540.0 - (float)((ulong)uVar11 >> 0x20);
            plVar18 = (long *)plVar15[0x29];
            lVar9 = plVar15[0x2a];
            lVar19 = *(long *)(param_1 + 0x3a8);
            plVar12 = *(long **)(param_1 + 0x3c0);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))();
            }
            plVar7 = plVar18;
            if ((lVar9 == 0) || (*plVar18 == lVar19)) goto joined_r0x014330fc;
            lVar14 = lVar9 * 0x30;
            plVar13 = plVar18 + lVar9 * 6;
            goto LAB_01433048;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar17 = iVar4;
    } while (iVar4 != 0);
  }
  goto LAB_01432d84;
  while (plVar1 = plVar18 + 6, plVar18 = plVar18 + 6, plVar7 = plVar18, *plVar1 != lVar19) {
LAB_01433048:
    lVar14 = lVar14 + -0x30;
    plVar7 = plVar13;
    if (lVar14 == 0) break;
  }
joined_r0x014330fc:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  lVar9 = plVar7[4];
  uVar20 = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(lVar9 + 0x34) = uVar20;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
LAB_014330a0:
  lVar9 = *(long *)(lVar16 + 8);
  piVar3 = (int *)(lVar9 + 0xc);
  do {
    iVar17 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar17 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar17 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))
              ((long *)(lVar16 + -0x50),param_2,param_3,param_4);
  }
LAB_01432d84:
  FUN_014326b8(param_1,param_2,param_3,param_4);
LAB_01432d88:
  if (plVar2 != (long *)0x0) {
    lVar16 = plVar2[0xb];
    piVar3 = (int *)(lVar16 + 0xc);
    do {
      iVar17 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      iVar17 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  return;
}


