/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ac25c; name: FUN_031ac25c
 */


/* WARNING: Removing unreachable block (ram,0x031ac380) */

void FUN_031ac25c(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined1 auStack_260 [16];
  long *local_250 [64];
  
  bVar11 = *(byte *)(param_1 + 100);
  pbVar1 = (byte *)(param_1 + 100);
  if (bVar11 == 0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      plVar7 = *(long **)(param_1 + 0x68);
      puVar10 = (undefined8 *)0x0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar8 = plVar7 + 2;
          do {
            lVar9 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 1) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        puVar10 = (undefined8 *)0x0;
      }
    }
    else {
      FUN_031ac590(local_250,param_1);
      uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x240);
      uVar6 = FUN_032cf5b0(0x58);
      FUN_031a8f74(uVar6,*(undefined8 *)(param_1 + 0x18),local_250[0],uVar2,0);
      plVar7 = *(long **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar9 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      if ((local_250[0] != (long *)0x0) && (local_250[0][1] != 0)) {
        plVar7 = local_250[0] + 2;
        do {
          lVar9 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*local_250[0] + 0x18))(local_250[0]);
        }
      }
      plVar7 = param_2 + 4;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar10 = (undefined8 *)(*param_2 + ((lVar9 << 0x20) >> 0x1c));
      *puVar10 = 0;
      plVar7 = puVar10 + 1;
      *plVar7 = 0;
      *(undefined4 *)puVar10 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x23c);
      lVar9 = *(long *)(param_1 + 0x68);
      if (lVar9 != 0) {
        if ((lVar9 == 0) || (*(long *)(lVar9 + 8) == 0)) {
          *plVar7 = lVar9;
        }
        else {
          plVar8 = (long *)(lVar9 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar8 = (long *)*plVar7;
          *plVar7 = *(long *)(param_1 + 0x68);
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar7 = plVar8 + 2;
            do {
              lVar9 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
        }
      }
    }
    do {
      bVar11 = *pbVar1;
      if (bVar11 != 0) {
        ClearExclusiveLocal();
        if (*(long *)(param_1 + 0x68) != 0) {
          FUN_031c215c(*(long *)(param_1 + 0x68),1);
          plVar7 = *(long **)(param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x68) = 0;
          if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
            plVar8 = plVar7 + 2;
            do {
              lVar9 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          plVar7 = (long *)puVar10[1];
          puVar10[1] = 0;
          if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
            plVar8 = plVar7 + 2;
            do {
              lVar9 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
        }
        goto LAB_031ac288;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
LAB_031ac288:
    if (bVar11 != 4) {
      if (bVar11 == 2) {
        do {
          if (*pbVar1 != 2) {
            ClearExclusiveLocal();
            if (*pbVar1 - 3 < 2) {
              return;
            }
            goto LAB_031ac418;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = 3;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
LAB_031ac418:
        FUN_0331fefc(auStack_260,local_250,0x200);
        FUN_0332448c(auStack_260,"Invalid state.");
        iVar5 = FUN_03320b30(0x7c46ad5a,local_250,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Navigator/hkaiNavigatorStaleness.cpp"
                             ,0xb2);
        if (iVar5 != 0) {
          CallSupervisor(0x26);
        }
        FUN_0331ff7c(auStack_260);
      }
    }
  }
  return;
}


