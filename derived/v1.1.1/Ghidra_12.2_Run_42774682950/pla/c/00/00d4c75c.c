/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4c75c; name: FUN_00d4c75c
 */


undefined8 FUN_00d4c75c(long *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ushort uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  bool bVar20;
  long lVar21;
  float fVar22;
  undefined4 local_a0;
  int local_9c;
  undefined2 local_98;
  short local_96;
  ushort local_94;
  ushort local_92;
  long local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  if (*(int *)((long)param_1 + 0x163c) == 1) {
    uVar14 = (uint)*(byte *)((long)param_1 + 0x6ef);
    if (*(byte *)((long)param_1 + 0x6ef) != 0) {
      uVar10 = (uint)*(byte *)((long)param_1 + 0x6ee);
      uVar19 = 0;
      do {
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else {
          uVar14 = 0;
          do {
            FUN_00d5c364(&local_90,uVar14 + uVar10 * uVar19);
            plVar18 = local_78;
            lVar8 = local_90;
            lVar21 = param_1[0x59];
            if (lVar21 == 0) {
              bVar20 = true;
              goto joined_r0x00d4cc10;
            }
            plVar12 = *(long **)(lVar21 + 0x1a0);
            lVar16 = *(long *)(lVar21 + 0x1a8);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x18))(local_78);
            }
            plVar5 = plVar12;
            if ((lVar16 != 0) && (*plVar12 != lVar8)) {
              lVar15 = lVar16 * 0x30;
              plVar17 = plVar12 + lVar16 * 6;
              do {
                lVar15 = lVar15 + -0x30;
                plVar5 = plVar17;
                if (lVar15 == 0) break;
                plVar6 = plVar12 + 6;
                plVar12 = plVar12 + 6;
                plVar5 = plVar12;
              } while (*plVar6 != lVar8);
            }
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            plVar12 = (long *)(*(long *)(lVar21 + 0x1a0) + *(long *)(lVar21 + 0x1a8) * 0x30);
            if (plVar5 == plVar12) {
              plVar17 = (long *)0x0;
              if (plVar5 != plVar12) goto LAB_00d4c900;
LAB_00d4c954:
              bVar20 = true;
            }
            else {
              plVar17 = plVar5 + 4;
              if (plVar5 == plVar12) goto LAB_00d4c954;
LAB_00d4c900:
              uVar13 = (ulong)*(uint *)(plVar17 + 1);
              if (((*(uint *)(*plVar17 + 0x278) <= *(uint *)(plVar17 + 1)) ||
                  (lVar8 = *(long *)(*plVar17 + 600), *(char *)(lVar8 + uVar13 * 0x48 + 8) == '\0'))
                 || (*(char *)(lVar8 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_00d4c954;
              plVar12 = (long *)(lVar8 + uVar13 * 0x48 + 0x10);
              lVar21 = *plVar12;
              if ((lVar21 == 0) || (*(char *)(lVar8 + uVar13 * 0x48 + 9) != '\0')) {
                bVar20 = false;
              }
              else {
                fVar22 = *(float *)(lVar21 + 0x20);
                uVar7 = FUN_00227728();
                uVar13 = FUN_00227744(*plVar12);
                bVar20 = false;
                if (((float)uVar7 <= fVar22) && ((uVar13 & 1) == 0)) goto LAB_00d4c954;
              }
            }
joined_r0x00d4cc10:
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            if (!bVar20) goto LAB_00d4c824;
            uVar10 = (uint)*(byte *)((long)param_1 + 0x6ee);
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar10);
          uVar14 = (uint)*(byte *)((long)param_1 + 0x6ef);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar14);
    }
    local_a0 = (undefined4)param_1[0xdd];
    local_98 = *(undefined2 *)((long)param_1 + 0x6ec);
    local_9c = (int)param_1[0xdb];
    iVar4 = 0;
    if (local_9c != 2) {
      iVar4 = local_9c;
    }
    lVar8 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    lVar8 = *(long *)(lVar8 + 0x8b0);
    puVar2 = (undefined4 *)(lVar8 + 0x20);
    if (*(int *)(lVar8 + 0x28) != 0) {
      puVar2 = (undefined4 *)(lVar8 + 0x24);
    }
    local_96 = (short)*(undefined4 *)(lVar8 + 0x14) +
               (short)*puVar2 * (short)*(undefined4 *)(lVar8 + 0x10);
    local_94 = (ushort)*(byte *)((long)param_1 + 0x6ee);
    local_92 = (ushort)*(byte *)((long)param_1 + 0x6ef);
    uVar9 = (**(code **)(*param_1 + 0x200))(param_1,&local_a0);
    uVar14 = (uint)*(byte *)((long)param_1 + 0x6ef);
    if (*(byte *)((long)param_1 + 0x6ef) != 0) {
      uVar10 = (uint)*(byte *)((long)param_1 + 0x6ee);
      uVar19 = 0;
      if (*(byte *)((long)param_1 + 0x6ee) != 0) goto LAB_00d4ca8c;
LAB_00d4cbcc:
      uVar11 = 0;
LAB_00d4ca78:
      uVar19 = uVar19 + 1;
      if (uVar14 <= uVar19) goto LAB_00d4cbd4;
      if (uVar11 != 0) {
LAB_00d4ca8c:
        uVar14 = 0;
        plVar18 = (long *)param_1[0x59];
        uVar11 = uVar10;
        do {
          if (plVar18 != (long *)0x0) {
            plVar12 = plVar18 + 10;
            do {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar20) {
                *(int *)plVar12 = (int)*plVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar11 = (uint)*(byte *)((long)param_1 + 0x6ee);
          }
          uVar9 = FUN_00d533f0(&local_90,uVar9,2,uVar14 + uVar19 * uVar11);
          plVar5 = local_78;
          lVar21 = local_90;
          plVar12 = (long *)plVar18[0x29];
          lVar8 = plVar18[0x2a];
          if (local_78 == (long *)0x0) {
            if (lVar8 == 0) goto LAB_00d4cbc0;
LAB_00d4caf4:
            if (*plVar12 == lVar21) goto LAB_00d4cbc0;
            lVar16 = lVar8 * 0x30;
            plVar17 = plVar12 + lVar8 * 6;
            do {
              lVar16 = lVar16 + -0x30;
              plVar6 = plVar17;
              if (lVar16 == 0) break;
              plVar1 = plVar12 + 6;
              plVar12 = plVar12 + 6;
              plVar6 = plVar12;
            } while (*plVar1 != lVar21);
            plVar12 = plVar6;
            if (plVar5 == (long *)0x0) goto LAB_00d4cb94;
LAB_00d4cb2c:
            (**(code **)(*plVar5 + 0x20))(plVar5);
            *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
            uVar9 = (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          else {
            uVar9 = (**(code **)(*local_78 + 0x18))(local_78);
            if (lVar8 != 0) goto LAB_00d4caf4;
LAB_00d4cbc0:
            if (plVar5 != (long *)0x0) goto LAB_00d4cb2c;
LAB_00d4cb94:
            *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
          }
          if (plVar18 != (long *)0x0) {
            plVar12 = plVar18 + 10;
            do {
              iVar4 = (int)*plVar12 + -1;
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar20) {
                *(int *)plVar12 = iVar4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar4 == 0) {
              uVar9 = (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
          uVar11 = (uint)*(byte *)((long)param_1 + 0x6ee);
          uVar14 = uVar14 + 1;
          if (uVar11 <= uVar14) goto LAB_00d4ca70;
          plVar18 = (long *)param_1[0x59];
        } while( true );
      }
      goto LAB_00d4cbcc;
    }
LAB_00d4cbd4:
    uVar9 = 0;
    *(undefined4 *)((long)param_1 + 0x163c) = 0;
  }
  else {
    if (*(int *)((long)param_1 + 0x163c) == 0) {
      FUN_00d5ad24(param_1,1);
      *(undefined1 *)(param_1 + 0xdf) = 0;
      FUN_00d59564(param_1,0);
      local_90 = 0x16445a137decbd35;
      pcStack_88 = "anime_L_inventory_parts_00_L_cursor_inventory_00_catch";
      local_80 = 0x36;
      local_78 = (long *)0x0;
      lVar8 = 0;
      if (param_1[0x59] != 0) {
        FUN_0283b430(param_1[0x59],&local_90);
        lVar8 = param_1[0x59];
      }
      local_90 = -0x4ce4c16abc8da8bd;
      pcStack_88 = "anime_L_inventory_parts_00_L_cursor_inventory_00_release";
      local_80 = 0x38;
      local_78 = (long *)0x0;
      if (lVar8 != 0) {
        FUN_0283b1e8(lVar8,&local_90);
      }
      *(int *)((long)param_1 + 0x163c) = *(int *)((long)param_1 + 0x163c) + 1;
    }
LAB_00d4c824:
    uVar9 = 1;
  }
  return uVar9;
LAB_00d4ca70:
  uVar14 = (uint)*(byte *)((long)param_1 + 0x6ef);
  uVar10 = uVar11;
  goto LAB_00d4ca78;
}


