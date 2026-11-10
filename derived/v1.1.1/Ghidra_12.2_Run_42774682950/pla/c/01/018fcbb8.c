/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fcbb8; name: FUN_018fcbb8
 */


void FUN_018fcbb8(long param_1,ulong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  long local_58;
  
  puVar12 = PTR_LAB_04379590;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  for (plVar20 = *(long **)(param_1 + 0x1b0); plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
    if (*(char *)(plVar20 + 7) != '\0') {
      puVar2 = plVar20 + 8;
      FUN_00cf6d78(&local_78,puVar2);
      if (local_78 == (long *)0x0) {
LAB_018fce9c:
        bVar6 = false;
      }
      else {
        FUN_00956dac(&local_80,local_78 + 0x35);
        if (local_80 == (long *)0x0) {
LAB_018fce70:
          bVar6 = false;
        }
        else {
          (**(code **)(*local_80 + 0x10))(local_70);
          local_90 = (ulong *)0x0;
          uStack_88 = 0;
          FUN_0087f944(&local_90,local_70);
          plVar13 = local_70[0];
          if (local_70[0] == (long *)0x0) {
LAB_018fce14:
            if (local_90 == (ulong *)0x0) goto LAB_018fcf10;
LAB_018fce1c:
            if (*local_90 == param_2) goto LAB_018fcf1c;
LAB_018fcf78:
            bVar6 = false;
          }
          else {
            plVar3 = local_70[0] + 1;
            do {
              iVar14 = (int)*plVar3 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 != 0) goto LAB_018fce14;
            local_70[0][2] = 0;
            if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
              FUN_00100250(puVar12,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar16 = *(long *)puVar10;
            *(long *)puVar11 = lVar16;
            local_58 = *plVar13;
            FUN_02a44274(lVar16 + 0xd8,&local_58);
            if (local_90 != (ulong *)0x0) goto LAB_018fce1c;
LAB_018fcf10:
            if (param_2 != 0) goto LAB_018fcf78;
LAB_018fcf1c:
            FUN_0183d380(local_78,0x20000);
            puVar17 = (ulong *)*puVar2;
            *puVar2 = 0;
            if (puVar17 != (ulong *)0x0) {
              puVar4 = puVar17 + 1;
              do {
                iVar14 = (int)*puVar4 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar6) {
                  *(int *)puVar4 = iVar14;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 == 0) {
                puVar17[2] = 0;
                if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                  FUN_00100250(puVar12,puVar10,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar9);
                }
                lVar16 = *(long *)puVar10;
                *(long *)puVar11 = lVar16;
                local_70[0] = (long *)*puVar17;
                FUN_02a44274(lVar16 + 0xd8,local_70);
              }
            }
            plVar20[9] = 0;
            *(undefined1 *)(plVar20 + 7) = 0;
            bVar6 = true;
          }
          puVar17 = local_90;
          if (local_90 != (ulong *)0x0) {
            puVar4 = local_90 + 1;
            do {
              iVar14 = (int)*puVar4 + -1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar7) {
                *(int *)puVar4 = iVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 == 0) {
              local_90[2] = 0;
              if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                FUN_00100250(puVar12,puVar10,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar9);
              }
              lVar16 = *(long *)puVar10;
              *(long *)puVar11 = lVar16;
              local_70[0] = (long *)*puVar17;
              FUN_02a44274(lVar16 + 0xd8,local_70);
            }
          }
          if (!bVar6) goto LAB_018fce70;
        }
        if (local_80 != (long *)0x0) {
          lVar16 = local_80[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
        if (!bVar6) goto LAB_018fce9c;
      }
      if (local_78 != (long *)0x0) {
        lVar16 = local_78[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
          if (!bVar6) goto LAB_018fcec8;
          break;
        }
      }
      if (bVar6) break;
    }
LAB_018fcec8:
  }
  uVar15 = *(ulong *)(param_1 + 0x188);
  if (uVar15 == 0) {
    return;
  }
  uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar18 < 2) {
    uVar19 = uVar15 - 1 & param_2;
  }
  else {
    uVar19 = param_2;
    if (uVar15 <= param_2) {
      uVar19 = 0;
      if (uVar15 != 0) {
        uVar19 = param_2 / uVar15;
      }
      uVar19 = param_2 - uVar19 * uVar15;
    }
  }
  plVar20 = *(long **)(*(long *)(param_1 + 0x180) + uVar19 * 8);
  if (plVar20 == (long *)0x0) {
    return;
  }
  plVar20 = (long *)*plVar20;
  if (plVar20 == (long *)0x0) {
    return;
  }
  if (uVar18 < 2) {
    do {
      if (plVar20[1] == param_2) {
        if (plVar20[2] == param_2) goto LAB_018fcc74;
      }
      else if ((plVar20[1] & uVar15 - 1) != uVar19) {
        return;
      }
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar18 = plVar20[1];
    if (uVar18 == param_2) {
      if (plVar20[2] == param_2) break;
    }
    else {
      if (uVar15 <= uVar18) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar18 / uVar15;
        }
        uVar18 = uVar18 - uVar8 * uVar15;
      }
      if (uVar18 != uVar19) {
        return;
      }
    }
    plVar20 = (long *)*plVar20;
    if (plVar20 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_018fcc74:
  FUN_00cf6d78(local_70,plVar20 + 3);
  if ((local_70[0] != (long *)0x0) &&
     (FUN_0183d380(local_70[0],0x20000), local_70[0] != (long *)0x0)) {
    lVar16 = local_70[0][0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
      cVar5 = (char)plVar20[7];
      goto joined_r0x018fccb8;
    }
  }
  cVar5 = (char)plVar20[7];
joined_r0x018fccb8:
  if (((cVar5 != '\0') && (FUN_00cf6d78(local_70,plVar20 + 8), local_70[0] != (long *)0x0)) &&
     (FUN_0183d380(local_70[0],0x20000), local_70[0] != (long *)0x0)) {
    lVar16 = local_70[0][0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  FUN_0190214c((long *)(param_1 + 0x180),plVar20);
  return;
}


