/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59fe4; name: FUN_00d59fe4
 */


void FUN_00d59fe4(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  long local_80 [3];
  long *local_68;
  
  lVar10 = (long)*(int *)(param_1 + 0x6e8);
  uVar12 = (uint)*(byte *)(param_1 + 0x6ef);
  if (*(byte *)(param_1 + 0x6ef) != 0) {
    iVar2 = *(int *)(param_1 + lVar10 * 0x60 + 0x640);
    uVar9 = (uint)*(byte *)(param_1 + 0x6ee);
    uVar17 = 0;
    lVar10 = param_1;
    do {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar12 = 0;
        do {
          uVar16 = (ulong)(uVar12 + uVar9 * uVar17);
          if (*(int *)(param_1 + uVar16 * 0x50 + 0x708) == 1) {
            plVar14 = *(long **)(param_1 + 0x2c8);
            if (plVar14 != (long *)0x0) {
              plVar15 = plVar14 + 10;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar4) {
                  *(int *)plVar15 = (int)*plVar15 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            lVar10 = FUN_00d533f0(local_80,lVar10,2,uVar16);
            plVar7 = local_68;
            lVar6 = local_80[0];
            plVar15 = (long *)plVar14[0x29];
            lVar13 = plVar14[0x2a];
            if (local_68 == (long *)0x0) {
              if (lVar13 == 0) goto LAB_00d5a38c;
LAB_00d5a300:
              if (*plVar15 == lVar6) goto LAB_00d5a38c;
              plVar11 = plVar15 + lVar13 * 6;
              lVar13 = lVar13 * 0x30;
              do {
                lVar13 = lVar13 + -0x30;
                if (lVar13 == 0) {
                  plVar15 = plVar11;
                  break;
                }
                plVar1 = plVar15 + 6;
                plVar15 = plVar15 + 6;
              } while (*plVar1 != lVar6);
              if (plVar7 == (long *)0x0) goto LAB_00d5a394;
LAB_00d5a338:
              (**(code **)(*plVar7 + 0x20))(plVar7);
              *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe;
              lVar10 = (**(code **)(*plVar7 + 0x20))(plVar7);
            }
            else {
              lVar10 = (**(code **)(*local_68 + 0x18))(local_68);
              if (lVar13 != 0) goto LAB_00d5a300;
LAB_00d5a38c:
              if (plVar7 != (long *)0x0) goto LAB_00d5a338;
LAB_00d5a394:
              *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe;
            }
            if (plVar14 != (long *)0x0) {
              plVar15 = plVar14 + 10;
              do {
                iVar5 = (int)*plVar15 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar4) {
                  *(int *)plVar15 = iVar5;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 == 0) {
                lVar10 = *plVar14;
                goto LAB_00d5a2bc;
              }
            }
          }
          else {
            lVar10 = param_1 + 0x6e8 + uVar16 * 0x50;
            FUN_00d53568(param_1,lVar10 + 0x18,uVar16,2);
            FUN_00d53960(param_1,2,uVar16,*(undefined4 *)(lVar10 + 0x60));
            uVar8 = FUN_00d54178(param_1,*(undefined4 *)(param_1 + 0x6e8),
                                 uVar12 + uVar17 * iVar2 + (uint)*(ushort *)(param_1 + 0x6ec),2,
                                 uVar16);
            plVar14 = *(long **)(param_1 + 0x2c8);
            if (plVar14 != (long *)0x0) {
              plVar15 = plVar14 + 10;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar4) {
                  *(int *)plVar15 = (int)*plVar15 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            lVar10 = FUN_00d533f0(local_80,uVar8,2,uVar16);
            plVar7 = local_68;
            lVar6 = local_80[0];
            plVar15 = (long *)plVar14[0x29];
            lVar13 = plVar14[0x2a];
            plVar11 = plVar15;
            if (local_68 == (long *)0x0) {
              if (lVar13 == 0) goto joined_r0x00d5a2ac;
LAB_00d5a0fc:
              if (*plVar15 == lVar6) goto joined_r0x00d5a2ac;
              plVar11 = plVar15 + lVar13 * 6;
              lVar13 = lVar13 * 0x30;
              do {
                lVar13 = lVar13 + -0x30;
                if (lVar13 == 0) goto joined_r0x00d5a2ac;
                plVar1 = plVar15 + 6;
                plVar15 = plVar15 + 6;
              } while (*plVar1 != lVar6);
              if (plVar7 == (long *)0x0) goto LAB_00d5a1bc;
LAB_00d5a138:
              (**(code **)(*plVar7 + 0x20))(plVar7);
              *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
              lVar10 = (**(code **)(*plVar7 + 0x20))(plVar7);
            }
            else {
              lVar10 = (**(code **)(*local_68 + 0x18))(local_68);
              if (lVar13 != 0) goto LAB_00d5a0fc;
joined_r0x00d5a2ac:
              plVar15 = plVar11;
              if (plVar7 != (long *)0x0) goto LAB_00d5a138;
LAB_00d5a1bc:
              *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
            }
            if (plVar14 != (long *)0x0) {
              plVar15 = plVar14 + 10;
              do {
                iVar5 = (int)*plVar15 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar4) {
                  *(int *)plVar15 = iVar5;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 == 0) {
                lVar10 = *plVar14;
LAB_00d5a2bc:
                lVar10 = (**(code **)(lVar10 + 0x10))(plVar14);
              }
            }
          }
          uVar9 = (uint)*(byte *)(param_1 + 0x6ee);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar9);
        uVar12 = (uint)*(byte *)(param_1 + 0x6ef);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar12);
    lVar10 = (long)*(int *)(param_1 + 0x6e8);
  }
  FUN_00d57b60(param_1,2,*(undefined1 *)(param_1 + lVar10 + 0x1642));
  iVar2 = 0;
  if (*(int *)(param_1 + 0x6d8) != 2) {
    iVar2 = *(int *)(param_1 + 0x6d8);
  }
  lVar10 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar2 * 0x28);
  *(int *)(param_1 + 0x1600) = (int)*(float *)(lVar10 + 0x768);
  *(int *)(param_1 + 0x1604) = (int)*(float *)(lVar10 + 0x76c);
  return;
}


