/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59d7c; name: FUN_00d59d7c
 */


void FUN_00d59d7c(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long local_80 [3];
  long *local_68;
  
  uVar12 = (uint)*(byte *)(param_1 + 0x6ef);
  if (*(byte *)(param_1 + 0x6ef) != 0) {
    iVar5 = *(int *)(param_1 + 0x6e8);
    uVar14 = (uint)*(byte *)(param_1 + 0x6ee);
    uVar18 = 0;
    do {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar12 = 0;
        do {
          iVar6 = 0;
          if (*(int *)(param_1 + 0x6e8) != 2) {
            iVar6 = *(int *)(param_1 + 0x6e8);
          }
          uVar4 = *(ushort *)(param_1 + 0x6ec);
          iVar3 = *(int *)(param_1 + (long)iVar5 * 0x60 + 0x640);
          lVar11 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar6 * 0x28);
          lVar16 = **(long **)(lVar11 + 0x838);
          lVar2 = (*(long **)(lVar11 + 0x838))[1];
          if ((lVar16 != lVar2) &&
             (iVar6 = uVar12 + uVar4 + iVar3 * uVar18,
             *(char *)(lVar16 + 0x20) != '\0' || *(int *)(lVar16 + 0x24) != iVar6)) {
            lVar10 = lVar16 + 0x30;
            do {
              lVar15 = lVar10;
              lVar16 = lVar2;
              if (lVar2 == lVar15) break;
              lVar10 = lVar15 + 0x30;
            } while ((*(char *)(lVar15 + 0x20) != '\0') ||
                    (lVar16 = lVar15, *(int *)(lVar15 + 0x24) != iVar6));
          }
          if ((lVar16 != 0) && ((lVar2 != lVar16 && (*(int *)(lVar16 + 0x28) != -1)))) {
            plVar17 = *(long **)(param_1 + 0x2c8);
            if (plVar17 != (long *)0x0) {
              plVar19 = plVar17 + 10;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar8) {
                  *(int *)plVar19 = (int)*plVar19 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            FUN_00d533f0(local_80,lVar11,*(undefined4 *)(param_1 + 0x6e8));
            plVar9 = local_68;
            lVar2 = local_80[0];
            plVar19 = (long *)plVar17[0x29];
            lVar16 = plVar17[0x2a];
            plVar13 = plVar19;
            if (local_68 == (long *)0x0) {
              if (lVar16 == 0) goto joined_r0x00d59fbc;
LAB_00d59eb4:
              if (*plVar19 == lVar2) goto joined_r0x00d59fbc;
              plVar13 = plVar19 + lVar16 * 6;
              lVar16 = lVar16 * 0x30;
              do {
                lVar16 = lVar16 + -0x30;
                if (lVar16 == 0) goto joined_r0x00d59fbc;
                plVar1 = plVar19 + 6;
                plVar19 = plVar19 + 6;
              } while (*plVar1 != lVar2);
              if (plVar9 == (long *)0x0) goto LAB_00d59f50;
LAB_00d59ef0:
              (**(code **)(*plVar9 + 0x20))(plVar9);
              *(byte *)(plVar19[4] + 0x58) = *(byte *)(plVar19[4] + 0x58) & 0xfe;
              (**(code **)(*plVar9 + 0x20))(plVar9);
            }
            else {
              (**(code **)(*local_68 + 0x18))(local_68);
              if (lVar16 != 0) goto LAB_00d59eb4;
joined_r0x00d59fbc:
              plVar19 = plVar13;
              if (plVar9 != (long *)0x0) goto LAB_00d59ef0;
LAB_00d59f50:
              *(byte *)(plVar19[4] + 0x58) = *(byte *)(plVar19[4] + 0x58) & 0xfe;
            }
            if (plVar17 != (long *)0x0) {
              plVar19 = plVar17 + 10;
              do {
                iVar6 = (int)*plVar19 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar8) {
                  *(int *)plVar19 = iVar6;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          uVar14 = (uint)*(byte *)(param_1 + 0x6ee);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar14);
        uVar12 = (uint)*(byte *)(param_1 + 0x6ef);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar12);
  }
  return;
}


