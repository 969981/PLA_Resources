/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b79bc0; name: FUN_00b79bc0
 */


void FUN_00b79bc0(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong local_70 [3];
  long *local_58;
  undefined8 local_50;
  ulong uStack_48;
  long *local_38;
  
  FUN_00cdfc0c(local_70,param_2);
  piVar9 = (int *)*param_2;
  if (piVar9 == (int *)0x0) {
    lVar10 = 0;
    bVar6 = false;
  }
  else {
    lVar10 = -(long)*piVar9;
    puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
    if ((*puVar12 < 0xb) || (uVar13 = (ulong)puVar12[5], uVar13 == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)((long)piVar9 + uVar13) != '\0';
    }
  }
  puVar12 = (ushort *)((long)piVar9 + lVar10);
  uVar2 = *puVar12;
  if ((6 < uVar2) && ((ulong)puVar12[3] != 0)) {
    switch(*(undefined1 *)((long)piVar9 + (ulong)puVar12[3])) {
    case 1:
      if ((uVar2 < 9) || ((ulong)puVar12[4] == 0)) {
LAB_00b79e98:
        uVar19 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar9 + (ulong)puVar12[4]);
        piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar13 == 0))
        goto LAB_00b79e98;
        uVar19 = *(undefined4 *)((long)piVar9 + uVar13);
      }
      local_50 = CONCAT44(local_50._4_4_,uVar19);
      uVar13 = FUN_00b7b3e4(*(undefined8 *)(param_1 + 0x140),local_70);
      if ((uVar13 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x140);
        if (bVar6) {
          lVar8 = nn::os::GetCurrentThread();
          plVar15 = (long *)(lVar10 + 0xa0);
          do {
            if (*plVar15 != 0 || *(long *)(lVar10 + 0xa8) != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
                while (*plVar15 == 0 && *(long *)(lVar10 + 0xa8) == 0) {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar6) {
                    *plVar15 = lVar8;
                    *(undefined8 *)(lVar10 + 0xa8) = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00b7abe0;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar8;
              *(undefined8 *)(lVar10 + 0xa8) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00b7abe0:
          FUN_00b7b738(*(long *)(lVar10 + 0x70) + 0x58,local_70,&local_50);
          do {
            lVar8 = *plVar15;
            lVar11 = *(long *)(lVar10 + 0xa8);
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar8;
              *(long *)(lVar10 + 0xa8) = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            if (*plVar15 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) {
              ClearExclusiveLocal();
              lVar8 = *plVar15;
              lVar11 = *(long *)(lVar10 + 0xa8);
              goto LAB_00b7af58;
            }
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = 0;
              *(long *)(lVar10 + 0xa4) = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_00b7af9c;
        }
        FUN_00b7b738(*(long *)(lVar10 + 0x68) + 0x58,local_70,&local_50);
      }
      break;
    case 2:
      uVar19 = 0;
      if ((8 < uVar2) && ((ulong)puVar12[4] != 0)) {
        puVar1 = (uint *)((long)piVar9 + (ulong)puVar12[4]);
        piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((4 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
           (uVar13 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar13 != 0)) {
          uVar19 = *(undefined4 *)((long)piVar9 + uVar13);
        }
      }
      local_50 = CONCAT44(local_50._4_4_,uVar19);
      lVar10 = *(long *)(param_1 + 0x140);
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x68) + 200);
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar16 = uVar13 - 1 & local_70[0];
        }
        else if (local_70[0] < uVar13) {
          uVar16 = local_70[0];
        }
        else {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = local_70[0] / uVar13;
          }
          uVar16 = local_70[0] - uVar16 * uVar13;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x68) + 0xc0) + uVar16 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar14 < 2) {
            do {
              if (plVar15[1] == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else if ((plVar15[1] & uVar13 - 1) != uVar16) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar14 = plVar15[1];
              if (uVar14 == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else {
                if (uVar13 <= uVar14) {
                  uVar5 = 0;
                  if (uVar13 != 0) {
                    uVar5 = uVar14 / uVar13;
                  }
                  uVar14 = uVar14 - uVar5 * uVar13;
                }
                if (uVar14 != uVar16) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      lVar8 = nn::os::GetCurrentThread();
      plVar15 = (long *)(lVar10 + 0xa0);
      do {
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar11;
          *(long *)(lVar10 + 0xa8) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar11 != 0 && (lVar8 != lVar11))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
          do {
            lVar11 = *plVar15;
            lVar3 = *(long *)(lVar10 + 0xa8);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = lVar11;
              *(long *)(lVar10 + 0xa8) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        while( true ) {
          if (*plVar15 != lVar11 || *(long *)(lVar10 + 0xa8) != lVar3) break;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar11;
            *(long *)(lVar10 + 0xa4) = lVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar13 = *(ulong *)(*(long *)(lVar10 + 0x70) + 200);
            if (uVar13 == 0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a4d8;
            }
            uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              uVar16 = uVar13 - 1 & local_70[0];
            }
            else if (local_70[0] < uVar13) {
              uVar16 = local_70[0];
            }
            else {
              uVar16 = 0;
              if (uVar13 != 0) {
                uVar16 = local_70[0] / uVar13;
              }
              uVar16 = local_70[0] - uVar16 * uVar13;
            }
            plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0x70) + 0xc0) + uVar16 * 8);
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a4d8;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a4d8;
            }
            if (1 < uVar14) goto LAB_00b7a3dc;
            goto LAB_00b7a7c4;
          }
        }
        ClearExclusiveLocal();
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
      } while( true );
    case 3:
      if ((8 < uVar2) && ((ulong)puVar12[4] != 0)) {
        puVar1 = (uint *)((long)piVar9 + (ulong)puVar12[4]);
        piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((4 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
           (uVar13 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar13 != 0)) {
          bVar7 = *(char *)((long)piVar9 + uVar13) != '\0';
          goto LAB_00b79da4;
        }
      }
      bVar7 = false;
LAB_00b79da4:
      local_50 = CONCAT71(local_50._1_7_,bVar7);
      lVar10 = *(long *)(param_1 + 0x140);
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x68) + 0x130);
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar16 = uVar13 - 1 & local_70[0];
        }
        else if (local_70[0] < uVar13) {
          uVar16 = local_70[0];
        }
        else {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = local_70[0] / uVar13;
          }
          uVar16 = local_70[0] - uVar16 * uVar13;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x68) + 0x128) + uVar16 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar14 < 2) {
            do {
              if (plVar15[1] == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else if ((plVar15[1] & uVar13 - 1) != uVar16) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar14 = plVar15[1];
              if (uVar14 == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else {
                if (uVar13 <= uVar14) {
                  uVar5 = 0;
                  if (uVar13 != 0) {
                    uVar5 = uVar14 / uVar13;
                  }
                  uVar14 = uVar14 - uVar5 * uVar13;
                }
                if (uVar14 != uVar16) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      lVar8 = nn::os::GetCurrentThread();
      plVar15 = (long *)(lVar10 + 0xa0);
      do {
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar11;
          *(long *)(lVar10 + 0xa8) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar11 != 0 && (lVar8 != lVar11))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
          do {
            lVar11 = *plVar15;
            lVar3 = *(long *)(lVar10 + 0xa8);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = lVar11;
              *(long *)(lVar10 + 0xa8) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        while( true ) {
          if (*plVar15 != lVar11 || *(long *)(lVar10 + 0xa8) != lVar3) break;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar11;
            *(long *)(lVar10 + 0xa4) = lVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar13 = *(ulong *)(*(long *)(lVar10 + 0x70) + 0x130);
            if (uVar13 == 0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a424;
            }
            uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              uVar16 = uVar13 - 1 & local_70[0];
            }
            else if (local_70[0] < uVar13) {
              uVar16 = local_70[0];
            }
            else {
              uVar16 = 0;
              if (uVar13 != 0) {
                uVar16 = local_70[0] / uVar13;
              }
              uVar16 = local_70[0] - uVar16 * uVar13;
            }
            plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0x70) + 0x128) + uVar16 * 8);
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a424;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a424;
            }
            if (1 < uVar14) goto LAB_00b7a2cc;
            goto LAB_00b7a738;
          }
        }
        ClearExclusiveLocal();
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
      } while( true );
    case 4:
      local_50 = 0;
      uStack_48 = 0;
      if ((8 < uVar2) && ((ulong)puVar12[4] != 0)) {
        puVar1 = (uint *)((long)piVar9 + (ulong)puVar12[4]);
        piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
        puVar12 = (ushort *)((long)piVar9 - (long)*piVar9);
        uVar2 = *puVar12;
        if (uVar2 < 5) {
          uVar19 = 0;
          uVar20 = 0;
          uStack_48 = 0;
        }
        else {
          uVar19 = 0;
          uVar20 = 0;
          if ((ulong)puVar12[2] != 0) {
            uVar20 = *(undefined4 *)((long)piVar9 + (ulong)puVar12[2]);
          }
          if (uVar2 < 7) {
            uStack_48 = 0;
          }
          else {
            uStack_48 = 0;
            uVar19 = 0;
            if ((ulong)puVar12[3] != 0) {
              uVar19 = *(undefined4 *)((long)piVar9 + (ulong)puVar12[3]);
            }
            if ((8 < uVar2) && ((ulong)puVar12[4] != 0)) {
              uStack_48 = (ulong)*(uint *)((long)piVar9 + (ulong)puVar12[4]);
            }
          }
        }
        local_50 = CONCAT44(uVar19,uVar20);
      }
      lVar10 = *(long *)(param_1 + 0x140);
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x68) + 0x198);
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar16 = uVar13 - 1 & local_70[0];
        }
        else if (local_70[0] < uVar13) {
          uVar16 = local_70[0];
        }
        else {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = local_70[0] / uVar13;
          }
          uVar16 = local_70[0] - uVar16 * uVar13;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x68) + 400) + uVar16 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar14 < 2) {
            do {
              if (plVar15[1] == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else if ((plVar15[1] & uVar13 - 1) != uVar16) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar14 = plVar15[1];
              if (uVar14 == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else {
                if (uVar13 <= uVar14) {
                  uVar5 = 0;
                  if (uVar13 != 0) {
                    uVar5 = uVar14 / uVar13;
                  }
                  uVar14 = uVar14 - uVar5 * uVar13;
                }
                if (uVar14 != uVar16) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      lVar8 = nn::os::GetCurrentThread();
      plVar15 = (long *)(lVar10 + 0xa0);
      do {
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar11;
          *(long *)(lVar10 + 0xa8) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar11 != 0 && (lVar8 != lVar11))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
          do {
            lVar11 = *plVar15;
            lVar3 = *(long *)(lVar10 + 0xa8);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = lVar11;
              *(long *)(lVar10 + 0xa8) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        while( true ) {
          if (*plVar15 != lVar11 || *(long *)(lVar10 + 0xa8) != lVar3) break;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar11;
            *(long *)(lVar10 + 0xa4) = lVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar13 = *(ulong *)(*(long *)(lVar10 + 0x70) + 0x198);
            if (uVar13 == 0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a6c0;
            }
            uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              uVar16 = uVar13 - 1 & local_70[0];
            }
            else if (local_70[0] < uVar13) {
              uVar16 = local_70[0];
            }
            else {
              uVar16 = 0;
              if (uVar13 != 0) {
                uVar16 = local_70[0] / uVar13;
              }
              uVar16 = local_70[0] - uVar16 * uVar13;
            }
            plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0x70) + 400) + uVar16 * 8);
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a6c0;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7a6c0;
            }
            if (1 < uVar14) goto LAB_00b7a6a4;
            goto LAB_00b7a86c;
          }
        }
        ClearExclusiveLocal();
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
      } while( true );
    case 5:
      FUN_00cdfd34(&local_50,param_2);
      lVar10 = *(long *)(param_1 + 0x140);
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x68) + 0x200);
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar16 = uVar13 - 1 & local_70[0];
        }
        else if (local_70[0] < uVar13) {
          uVar16 = local_70[0];
        }
        else {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = local_70[0] / uVar13;
          }
          uVar16 = local_70[0] - uVar16 * uVar13;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x68) + 0x1f8) + uVar16 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar14 < 2) {
            do {
              if (plVar15[1] == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto LAB_00b7ae58;
              }
              else if ((plVar15[1] & uVar13 - 1) != uVar16) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar14 = plVar15[1];
              if (uVar14 == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto LAB_00b7ae58;
              }
              else {
                if (uVar13 <= uVar14) {
                  uVar5 = 0;
                  if (uVar13 != 0) {
                    uVar5 = uVar14 / uVar13;
                  }
                  uVar14 = uVar14 - uVar5 * uVar13;
                }
                if (uVar14 != uVar16) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      lVar8 = nn::os::GetCurrentThread();
      plVar15 = (long *)(lVar10 + 0xa0);
      do {
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar11;
          *(long *)(lVar10 + 0xa8) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar11 != 0 && (lVar8 != lVar11))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
          do {
            lVar11 = *plVar15;
            lVar3 = *(long *)(lVar10 + 0xa8);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = lVar11;
              *(long *)(lVar10 + 0xa8) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        while( true ) {
          if (*plVar15 != lVar11 || *(long *)(lVar10 + 0xa8) != lVar3) break;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar11;
            *(long *)(lVar10 + 0xa4) = lVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar13 = *(ulong *)(*(long *)(lVar10 + 0x70) + 0x200);
            if (uVar13 == 0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7aaa4;
            }
            uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              uVar16 = uVar13 - 1 & local_70[0];
            }
            else if (local_70[0] < uVar13) {
              uVar16 = local_70[0];
            }
            else {
              uVar16 = 0;
              if (uVar13 != 0) {
                uVar16 = local_70[0] / uVar13;
              }
              uVar16 = local_70[0] - uVar16 * uVar13;
            }
            plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0x70) + 0x1f8) + uVar16 * 8);
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7aaa4;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7aaa4;
            }
            if (1 < uVar14) goto LAB_00b7aef8;
            goto LAB_00b7b0e0;
          }
        }
        ClearExclusiveLocal();
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
      } while( true );
    case 6:
      FUN_00cdfe9c(&local_50,param_2);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      lVar10 = *(long *)(param_1 + 0x140);
      uVar13 = *(ulong *)(*(long *)(lVar10 + 0x68) + 0x268);
      if (uVar13 != 0) {
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar16 = uVar13 - 1 & local_70[0];
        }
        else if (local_70[0] < uVar13) {
          uVar16 = local_70[0];
        }
        else {
          uVar16 = 0;
          if (uVar13 != 0) {
            uVar16 = local_70[0] / uVar13;
          }
          uVar16 = local_70[0] - uVar16 * uVar13;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x68) + 0x260) + uVar16 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar14 < 2) {
            do {
              if (plVar15[1] == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else if ((plVar15[1] & uVar13 - 1) != uVar16) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar14 = plVar15[1];
              if (uVar14 == local_70[0]) {
                if (plVar15[2] == local_70[0]) goto switchD_00b79c58_default;
              }
              else {
                if (uVar13 <= uVar14) {
                  uVar5 = 0;
                  if (uVar13 != 0) {
                    uVar5 = uVar14 / uVar13;
                  }
                  uVar14 = uVar14 - uVar5 * uVar13;
                }
                if (uVar14 != uVar16) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      lVar8 = nn::os::GetCurrentThread();
      plVar15 = (long *)(lVar10 + 0xa0);
      do {
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar11;
          *(long *)(lVar10 + 0xa8) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        while ((lVar11 != 0 && (lVar8 != lVar11))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
          do {
            lVar11 = *plVar15;
            lVar3 = *(long *)(lVar10 + 0xa8);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar7) {
              *plVar15 = lVar11;
              *(long *)(lVar10 + 0xa8) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        while( true ) {
          if (*plVar15 != lVar11 || *(long *)(lVar10 + 0xa8) != lVar3) break;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar11;
            *(long *)(lVar10 + 0xa4) = lVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uVar13 = *(ulong *)(*(long *)(lVar10 + 0x70) + 0x268);
            if (uVar13 == 0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7aa20;
            }
            uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              uVar16 = uVar13 - 1 & local_70[0];
            }
            else if (local_70[0] < uVar13) {
              uVar16 = local_70[0];
            }
            else {
              uVar16 = 0;
              if (uVar13 != 0) {
                uVar16 = local_70[0] / uVar13;
              }
              uVar16 = local_70[0] - uVar16 * uVar13;
            }
            plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0x70) + 0x260) + uVar16 * 8);
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7aa20;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_00b7aa20;
            }
            if (1 < uVar14) goto LAB_00b7aa04;
            goto LAB_00b7af28;
          }
        }
        ClearExclusiveLocal();
        lVar11 = *plVar15;
        lVar3 = *(long *)(lVar10 + 0xa8);
      } while( true );
    }
  }
switchD_00b79c58_default:
joined_r0x00b7a4cc:
  if (local_58 == (long *)0x0) {
    return;
  }
  goto LAB_00b79ed4;
LAB_00b7aa04:
  do {
    uVar14 = plVar17[1];
    if (uVar14 == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else {
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar5 * uVar13;
      }
      if (uVar14 != uVar16) {
        plVar18 = (long *)0x0;
        break;
      }
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
  goto LAB_00b7aa20;
LAB_00b7af28:
  do {
    if (plVar17[1] == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else if ((plVar17[1] & uVar13 - 1) != uVar16) {
      plVar18 = (long *)0x0;
      break;
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
LAB_00b7aa20:
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7aa30:
  if (*plVar15 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) goto code_r0x00b7aa44;
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
  do {
    do {
      lVar3 = *plVar15;
      if (lVar3 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00b7aa84;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar8;
        *(long *)(lVar10 + 0xa4) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00b7aa84:
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar7);
LAB_00b7acd0:
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x94));
  if (plVar18 != (long *)0x0) goto switchD_00b79c58_default;
  lVar10 = *(long *)(param_1 + 0x140);
  if (!bVar6) {
    FUN_00b7e414(*(long *)(lVar10 + 0x68) + 0x260,local_70,&local_50);
    goto joined_r0x00b7a4cc;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(lVar10 + 0xa0);
  do {
    if (*plVar15 != 0 || *(long *)(lVar10 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
        while (*plVar15 == 0 && *(long *)(lVar10 + 0xa8) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            *(undefined8 *)(lVar10 + 0xa8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b7b154;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7b154:
  FUN_00b7e414(*(long *)(lVar10 + 0x70) + 0x260,local_70,&local_50);
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar15 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) break;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = 0;
      *(long *)(lVar10 + 0xa4) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00b7af9c;
  }
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
LAB_00b7b1bc:
  do {
    lVar3 = *plVar15;
    if (lVar3 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = 0;
        *(long *)(lVar10 + 0xa4) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00b7b1bc;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar6);
  goto LAB_00b7af9c;
code_r0x00b7aa44:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar8;
    *(long *)(lVar10 + 0xa4) = lVar11 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00b7acd0;
  goto LAB_00b7aa30;
LAB_00b7aef8:
  do {
    uVar14 = plVar17[1];
    if (uVar14 == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else {
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar5 * uVar13;
      }
      if (uVar14 != uVar16) {
        plVar18 = (long *)0x0;
        break;
      }
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
  goto LAB_00b7aaa4;
LAB_00b7b0e0:
  do {
    if (plVar17[1] == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else if ((plVar17[1] & uVar13 - 1) != uVar16) {
      plVar18 = (long *)0x0;
      break;
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
LAB_00b7aaa4:
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7aab4:
  if (*plVar15 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) goto code_r0x00b7aac8;
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
  do {
    do {
      lVar3 = *plVar15;
      if (lVar3 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00b7ab08;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar8;
        *(long *)(lVar10 + 0xa4) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00b7ab08:
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar7);
LAB_00b7ae34:
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x94));
  if (plVar18 == (long *)0x0) {
    if (!bVar6) {
      FUN_00b7dc50(*(long *)(*(long *)(param_1 + 0x140) + 0x68) + 0x1f8,local_70,&local_50);
      goto LAB_00b7ae58;
    }
    FUN_00b7db40(*(long *)(param_1 + 0x140),local_70,&local_50);
    if (local_38 != (long *)0x0) goto LAB_00b7ae60;
    goto switchD_00b79c58_default;
  }
LAB_00b7ae58:
  if (local_38 == (long *)0x0) goto switchD_00b79c58_default;
LAB_00b7ae60:
  (**(code **)(*local_38 + 0x20))();
  goto joined_r0x00b7a4cc;
code_r0x00b7aac8:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar8;
    *(long *)(lVar10 + 0xa4) = lVar11 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00b7ae34;
  goto LAB_00b7aab4;
LAB_00b7a6a4:
  do {
    uVar14 = plVar17[1];
    if (uVar14 == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else {
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar5 * uVar13;
      }
      if (uVar14 != uVar16) {
        plVar18 = (long *)0x0;
        break;
      }
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
  goto LAB_00b7a6c0;
LAB_00b7a86c:
  do {
    if (plVar17[1] == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else if ((plVar17[1] & uVar13 - 1) != uVar16) {
      plVar18 = (long *)0x0;
      break;
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
LAB_00b7a6c0:
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7a6d0:
  if (*plVar15 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) goto code_r0x00b7a6e4;
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
  do {
    do {
      lVar3 = *plVar15;
      if (lVar3 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00b7a724;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar8;
        *(long *)(lVar10 + 0xa4) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00b7a724:
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar7);
LAB_00b7a784:
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x94));
  if (plVar18 != (long *)0x0) goto switchD_00b79c58_default;
  lVar10 = *(long *)(param_1 + 0x140);
  if (!bVar6) {
    FUN_00b7d230(*(long *)(lVar10 + 0x68) + 400,local_70,&local_50);
    goto joined_r0x00b7a4cc;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(lVar10 + 0xa0);
  do {
    if (*plVar15 != 0 || *(long *)(lVar10 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
        while (*plVar15 == 0 && *(long *)(lVar10 + 0xa8) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            *(undefined8 *)(lVar10 + 0xa8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b7add8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7add8:
  FUN_00b7d230(*(long *)(lVar10 + 0x70) + 400,local_70,&local_50);
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar15 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) break;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = 0;
      *(long *)(lVar10 + 0xa4) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00b7af9c;
  }
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
LAB_00b7b050:
  do {
    lVar3 = *plVar15;
    if (lVar3 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = 0;
        *(long *)(lVar10 + 0xa4) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00b7b050;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar6);
  goto LAB_00b7af9c;
code_r0x00b7a6e4:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar8;
    *(long *)(lVar10 + 0xa4) = lVar11 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00b7a784;
  goto LAB_00b7a6d0;
LAB_00b7a2cc:
  do {
    uVar14 = plVar17[1];
    if (uVar14 == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        goto LAB_00b7a424;
      }
    }
    else {
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar5 * uVar13;
      }
      if (uVar14 != uVar16) {
        plVar18 = (long *)0x0;
        goto LAB_00b7a424;
      }
    }
    plVar17 = (long *)*plVar17;
  } while (plVar17 != (long *)0x0);
  plVar18 = (long *)0x0;
  goto LAB_00b7a424;
LAB_00b7a738:
  do {
    if (plVar17[1] == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else if ((plVar17[1] & uVar13 - 1) != uVar16) {
      plVar18 = (long *)0x0;
      break;
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
LAB_00b7a424:
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7a434:
  if (*plVar15 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) goto code_r0x00b7a448;
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
  do {
    do {
      lVar3 = *plVar15;
      if (lVar3 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00b7a488;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar8;
        *(long *)(lVar10 + 0xa4) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00b7a488:
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar7);
LAB_00b7a4a4:
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x94));
  if (plVar18 != (long *)0x0) goto switchD_00b79c58_default;
  lVar10 = *(long *)(param_1 + 0x140);
  if (!bVar6) {
    FUN_00b7c934(*(long *)(lVar10 + 0x68) + 0x128,local_70,&local_50);
    goto joined_r0x00b7a4cc;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(lVar10 + 0xa0);
  do {
    if (*plVar15 != 0 || *(long *)(lVar10 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
        while (*plVar15 == 0 && *(long *)(lVar10 + 0xa8) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            *(undefined8 *)(lVar10 + 0xa8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b7ad44;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7ad44:
  FUN_00b7c934(*(long *)(lVar10 + 0x70) + 0x128,local_70,&local_50);
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar15 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) break;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = 0;
      *(long *)(lVar10 + 0xa4) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00b7af9c;
  }
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
LAB_00b7b00c:
  do {
    lVar3 = *plVar15;
    if (lVar3 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = 0;
        *(long *)(lVar10 + 0xa4) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00b7b00c;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar6);
  goto LAB_00b7af9c;
code_r0x00b7a448:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar8;
    *(long *)(lVar10 + 0xa4) = lVar11 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00b7a4a4;
  goto LAB_00b7a434;
LAB_00b7a3dc:
  do {
    uVar14 = plVar17[1];
    if (uVar14 == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else {
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar5 * uVar13;
      }
      if (uVar14 != uVar16) {
        plVar18 = (long *)0x0;
        break;
      }
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
  goto LAB_00b7a4d8;
code_r0x00b7a4fc:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar8;
    *(long *)(lVar10 + 0xa4) = lVar11 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00b7a558;
  goto LAB_00b7a4e8;
LAB_00b7af58:
  do {
    lVar3 = *plVar15;
    if (lVar3 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = 0;
        *(long *)(lVar10 + 0xa4) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00b7af58;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar6);
  goto LAB_00b7af9c;
LAB_00b7a7c4:
  do {
    if (plVar17[1] == local_70[0]) {
      if (plVar17[2] == local_70[0]) {
        plVar18 = plVar17;
        break;
      }
    }
    else if ((plVar17[1] & uVar13 - 1) != uVar16) {
      plVar18 = (long *)0x0;
      break;
    }
    plVar17 = (long *)*plVar17;
    plVar18 = (long *)0x0;
  } while (plVar17 != (long *)0x0);
LAB_00b7a4d8:
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7a4e8:
  if (*plVar15 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) goto code_r0x00b7a4fc;
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
  do {
    do {
      lVar3 = *plVar15;
      if (lVar3 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00b7a53c;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar8;
        *(long *)(lVar10 + 0xa4) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00b7a53c:
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar7);
LAB_00b7a558:
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x94));
  if (plVar18 != (long *)0x0) goto switchD_00b79c58_default;
  lVar10 = *(long *)(param_1 + 0x140);
  if (!bVar6) {
    FUN_00b7c034(*(long *)(lVar10 + 0x68) + 0xc0,local_70,&local_50);
    goto joined_r0x00b7a4cc;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(lVar10 + 0xa0);
  do {
    if (*plVar15 != 0 || *(long *)(lVar10 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x94));
        while (*plVar15 == 0 && *(long *)(lVar10 + 0xa8) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            *(undefined8 *)(lVar10 + 0xa8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b7ac74;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b7ac74:
  FUN_00b7c034(*(long *)(lVar10 + 0x70) + 0xc0,local_70,&local_50);
  do {
    lVar8 = *plVar15;
    lVar11 = *(long *)(lVar10 + 0xa8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      *(long *)(lVar10 + 0xa8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar15 != lVar8 || *(long *)(lVar10 + 0xa8) != lVar11) break;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = 0;
      *(long *)(lVar10 + 0xa4) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00b7af9c;
  }
  ClearExclusiveLocal();
  lVar8 = *plVar15;
  lVar11 = *(long *)(lVar10 + 0xa8);
LAB_00b7b350:
  do {
    lVar3 = *plVar15;
    if (lVar3 == lVar8 && *(long *)(lVar10 + 0xa8) == lVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = 0;
        *(long *)(lVar10 + 0xa4) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00b7b350;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar11 = *(long *)(lVar10 + 0xa8);
  } while (!bVar6);
LAB_00b7af9c:
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x94));
  if (local_58 != (long *)0x0) {
LAB_00b79ed4:
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


