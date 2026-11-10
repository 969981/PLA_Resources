/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256c544; name: FUN_0256c544
 */


void FUN_0256c544(long param_1,byte param_2)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined *local_88;
  long *plStack_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 local_48;
  
  if (*(byte *)(param_1 + 0x464) != (param_2 & 1)) {
    plVar12 = *(long **)(param_1 + 0x2d0);
    *(byte *)(param_1 + 0x464) = param_2 & 1;
    if (plVar12 != (long *)0x0) {
      puVar2 = PTR_DAT_04387990 + 0x10;
      do {
        plStack_80 = (long *)plVar12[4];
        local_88 = puVar2;
        if (plStack_80 != (long *)0x0) {
          (**(code **)(*plStack_80 + 0x18))();
        }
        local_78 = plVar12[5];
        if (local_78 != 0) {
          lVar13 = *(long *)(local_78 + 0x58);
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0256c7b8;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar7;
          }
          piVar3 = (int *)(lVar13 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_70 = plVar12[6];
        if (local_70 != 0) {
          lVar13 = *(long *)(local_70 + 0x58);
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0256c7b8;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar7;
          }
          piVar3 = (int *)(lVar13 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_68 = plVar12[7];
        if (local_68 != 0) {
          lVar13 = *(long *)(local_68 + 0x58);
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0256c7b8;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar7;
          }
          piVar3 = (int *)(lVar13 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_60 = plVar12[8];
        if (local_60 != 0) {
          lVar13 = *(long *)(local_60 + 0x58);
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_0256c7b8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar7;
          }
          piVar3 = (int *)(lVar13 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_58 = plVar12[9];
        if (local_58 != 0) {
          piVar3 = (int *)(local_58 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_50 = plVar12[10];
        local_48 = (undefined1)plVar12[0xb];
        plVar8 = *(long **)(local_70 + 0x208);
        plVar10 = *(long **)(local_70 + 0x210);
        if (plVar8 != plVar10) {
          uVar4 = *(undefined1 *)(param_1 + 0x464);
          uVar11 = (long)plVar10 + (-8 - (long)plVar8);
          uVar1 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 7) != 0) {
            lVar13 = -((ulong)uVar1 & 7);
            plVar9 = plVar8;
            do {
              plVar8 = plVar9 + 1;
              bVar6 = lVar13 != -1;
              lVar13 = lVar13 + 1;
              *(undefined1 *)(*plVar9 + 0x3e0) = uVar4;
              plVar9 = plVar8;
            } while (bVar6);
          }
          if (0x37 < uVar11) {
            do {
              *(undefined1 *)(*plVar8 + 0x3e0) = uVar4;
              *(undefined1 *)(plVar8[1] + 0x3e0) = uVar4;
              *(undefined1 *)(plVar8[2] + 0x3e0) = uVar4;
              *(undefined1 *)(plVar8[3] + 0x3e0) = uVar4;
              *(undefined1 *)(plVar8[4] + 0x3e0) = uVar4;
              *(undefined1 *)(plVar8[5] + 0x3e0) = uVar4;
              *(undefined1 *)(plVar8[6] + 0x3e0) = uVar4;
              plVar9 = plVar8 + 7;
              plVar8 = plVar8 + 8;
              *(undefined1 *)(*plVar9 + 0x3e0) = uVar4;
            } while (plVar8 != plVar10);
          }
        }
        FUN_0256719c(&local_88);
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  return;
}


