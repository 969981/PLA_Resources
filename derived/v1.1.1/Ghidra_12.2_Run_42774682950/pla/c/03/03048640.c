/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03048640; name: FUN_03048640
 */


void FUN_03048640(uint *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  ushort uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  uint *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  uint in_w17;
  long lVar27;
  long *plVar28;
  uint *puVar29;
  uint *unaff_x26;
  uint unaff_w28;
  uint uVar30;
  ulong local_b8;
  long lStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  char local_98;
  ulong local_90;
  ulong local_88;
  byte local_80;
  long local_78;
  long local_70;
  uint local_68;
  uint local_64;
  
  puVar6 = PTR_PTR_0434a080;
  iVar1 = *(int *)((long)param_3 + 0xc);
  if (iVar1 == 0) {
    puVar29 = (uint *)0x0;
    puVar25 = (uint *)0x0;
  }
  else {
    unaff_x26 = (uint *)*param_3;
    uVar16 = *(ushort *)((long)param_3 + 10);
    unaff_w28 = (uint)uVar16;
    uVar30 = (uint)uVar16;
    in_w17 = iVar1 - uVar30;
    puVar18 = (uint *)((long)unaff_x26 + (ulong)*(ushort *)(param_3 + 1) + 0x20);
    puVar29 = (uint *)0x0;
    if (uVar30 != 0) {
      puVar29 = puVar18;
    }
    puVar25 = (uint *)0x0;
    if (uVar30 != 0) {
      puVar25 = puVar18;
    }
  }
  if (param_5 != (long *)0x0) {
    uVar30 = *(uint *)(param_5 + 1);
    uVar20 = (ulong)uVar30;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) < (int)(uVar30 + iVar1)) {
      puVar13 = (undefined8 *)*param_5;
      FUN_032bd100(uVar30 + iVar1,0x10,*(uint *)((long)param_5 + 0xc),&local_b8);
      uVar3 = *(uint *)((long)param_5 + 0xc);
      puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_b8,&local_b8);
      if (0 < (int)uVar30) {
        puVar14 = puVar8;
        puVar15 = puVar13;
        do {
          puVar14[1] = puVar15[1];
          uVar20 = uVar20 - 1;
          *puVar14 = *puVar15;
          puVar14 = puVar14 + 2;
          puVar15 = puVar15 + 2;
        } while (uVar20 != 0);
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar13,((ulong)uVar3 & 0x3fffffff) << 4);
      }
      if (local_b8 < 0x3fffffff0) {
        uVar10 = (undefined4)(local_b8 >> 4);
      }
      else {
        uVar10 = 0x3fffffff;
      }
      *(undefined4 *)((long)param_5 + 0xc) = uVar10;
      *param_5 = (long)puVar8;
      puVar25 = puVar29;
    }
  }
  lStack_b0 = *(long *)(param_2 + 0x898);
  local_b8 = *(ulong *)(param_2 + 0x8a8);
  lVar27 = *(long *)(lStack_b0 + 0x48);
  local_a8 = *(undefined8 *)(param_2 + 0x508);
  lStack_a0 = param_2 + 0x530;
  local_80 = 0x24;
  local_98 = '\x01';
  if (puVar25 != (uint *)0x0) {
    plVar11 = *(long **)(param_2 + 0x4b8);
    do {
      uVar20 = (ulong)puVar25[1] & 0xffffff;
      if (((int)uVar20 != 0xffffff) &&
         (uVar17 = (ulong)*puVar25 & 0xffffff, (int)uVar17 != 0xffffff)) {
        lVar23 = *(long *)(param_2 + 0x38);
        uVar9 = lVar23 + uVar20 * 0xc0;
        uVar12 = lVar23 + uVar17 * 0xc0;
        if ((*(char *)(lVar27 + (ulong)*(ushort *)(uVar9 + 0x8a) * 0x50 + 0x18) == '\x01') ||
           (*(char *)(lVar27 + (ulong)*(ushort *)(lVar23 + uVar17 * 0xc0 + 0x8a) * 0x50 + 0x18) ==
            '\x01')) {
          puVar21 = (uint *)(lVar23 + uVar20 * 0xc0 + 0x54);
          uVar30 = *puVar21;
          puVar18 = (uint *)(lVar23 + uVar17 * 0xc0 + 0x54);
          if (((*puVar18 | uVar30) >> 8 & 1) != 0) {
            if (param_5 == (long *)0x0) {
              plVar28 = (long *)0x0;
              if ((uVar30 & 1) == 0) goto LAB_03048800;
LAB_0304882c:
              uVar20 = uVar12;
            }
            else {
              lVar24 = (long)(int)param_5[1];
              lVar23 = lVar24 + 1;
              lVar26 = *param_5;
              plVar28 = (long *)(lVar26 + lVar24 * 0x10);
              *(int *)(param_5 + 1) = (int)lVar23;
              *(undefined4 *)((long)plVar28 + 0xc) = 0;
              if (plVar28 + 2 != (long *)(lVar26 + lVar23 * 0x10)) {
                lVar23 = lVar23 * 0x10 + lVar24 * -0x10 + -0x10;
                puVar19 = (undefined4 *)(lVar26 + lVar24 * 0x10 + 0x1c);
                do {
                  lVar23 = lVar23 + -0x10;
                  *puVar19 = 0;
                  puVar19 = puVar19 + 4;
                } while (lVar23 != 0);
              }
              lVar23 = param_4[3];
              iVar1 = *(int *)((long)param_4 + 0x1c);
              iVar2 = *(int *)(*param_4 + 8);
              *plVar28 = param_4[2];
              *(short *)(plVar28 + 1) = (short)lVar23;
              *(short *)((long)plVar28 + 10) = (short)iVar1;
              *(int *)((long)plVar28 + 0xc) = -(iVar1 + iVar2);
              if ((*puVar21 & 1) != 0) goto LAB_0304882c;
LAB_03048800:
              if (((*(byte *)puVar18 >> 1 & 1) != 0) &&
                 ((*puVar25 & 0xffffff) < (puVar25[1] & 0xffffff))) goto LAB_0304882c;
              uVar20 = uVar9;
              uVar9 = uVar12;
            }
            FUN_03049c98(param_2,uVar20,uVar9);
            if (plVar28 != (long *)0x0) {
              uVar30 = *(uint *)((long)param_4 + 0x1c);
              iVar1 = uVar30 + *(int *)(*param_4 + 8) + *(int *)((long)plVar28 + 0xc);
              if (iVar1 != 0) {
                puVar18 = (uint *)*plVar28;
                puVar25 = (uint *)param_4[2];
                if (puVar18 == puVar25) {
                  uVar16 = *(ushort *)((long)plVar28 + 10);
                }
                else {
                  uVar16 = *(ushort *)((long)plVar28 + 10);
                  if ((uint)uVar16 == (*puVar18 & 0xffff)) {
                    puVar18 = *(uint **)(puVar18 + 2);
                    *(undefined4 *)(plVar28 + 1) = 0;
                    uVar16 = 0;
                    puVar25 = (uint *)param_4[2];
                    uVar7 = 0;
                    if (puVar18 == (uint *)param_4[2]) goto LAB_030489dc;
                  }
                  else {
                    uVar7 = uVar16;
                    if (puVar18 == puVar25) {
LAB_030489dc:
                      puVar18 = puVar25;
                      uVar30 = *(uint *)((long)param_4 + 0x1c);
                      goto LAB_03048888;
                    }
                  }
                  uVar16 = uVar7;
                  uVar30 = *puVar18;
                }
LAB_03048888:
                *(ushort *)((long)plVar28 + 10) = (short)uVar30 - uVar16;
                *plVar28 = (long)puVar18;
              }
              *(int *)((long)plVar28 + 0xc) = iVar1;
            }
          }
        }
        else {
          uVar30 = *(uint *)(lVar23 + uVar20 * 0xc0 + 0x54);
          if ((((uVar30 & 5) == 0) ||
              (uVar3 = *(uint *)(lVar23 + uVar17 * 0xc0 + 0x54), (uVar3 & 5) == 0)) ||
             ((*param_1 & (uVar3 | uVar30)) != 0)) {
            if (param_5 == (long *)0x0) {
              plVar28 = (long *)0x0;
            }
            else {
              lVar24 = (long)(int)param_5[1];
              lVar23 = lVar24 + 1;
              lVar26 = *param_5;
              plVar28 = (long *)(lVar26 + lVar24 * 0x10);
              *(int *)(param_5 + 1) = (int)lVar23;
              *(undefined4 *)((long)plVar28 + 0xc) = 0;
              if (plVar28 + 2 != (long *)(lVar26 + lVar23 * 0x10)) {
                lVar23 = lVar23 * 0x10 + lVar24 * -0x10 + -0x10;
                puVar19 = (undefined4 *)(lVar26 + lVar24 * 0x10 + 0x1c);
                do {
                  lVar23 = lVar23 + -0x10;
                  *puVar19 = 0;
                  puVar19 = puVar19 + 4;
                } while (lVar23 != 0);
              }
              lVar23 = param_4[3];
              iVar1 = *(int *)((long)param_4 + 0x1c);
              iVar2 = *(int *)(*param_4 + 8);
              *plVar28 = param_4[2];
              *(short *)(plVar28 + 1) = (short)lVar23;
              *(short *)((long)plVar28 + 10) = (short)iVar1;
              *(int *)((long)plVar28 + 0xc) = -(iVar1 + iVar2);
            }
            local_90 = uVar9;
            local_88 = uVar12;
            if (plVar11 == (long *)0x0) {
              local_80 = 0x24;
            }
            else {
              local_80 = (**(code **)(*plVar11 + 0x48))(plVar11,uVar9,uVar12);
            }
            uVar20 = local_90;
            local_70 = *(long *)(local_90 + 0x78);
            if (*(char *)(local_70 + 0x18) == '\x15') {
              plVar22 = (long *)(local_70 + ((ulong)(local_80 >> 2) & 0x38) + 0x48);
              local_70 = *plVar22;
              if (local_70 == 0) {
                local_70 = 0;
              }
              else {
                local_70 = local_70 + (long)plVar22;
              }
            }
            lVar23 = *(long *)(local_88 + 0x78);
            if (*(char *)(lVar23 + 0x18) == '\x15') {
              plVar22 = (long *)(lVar23 + ((ulong)(local_80 >> 2) & 7) * 8 + 0x48);
              lVar23 = *plVar22;
              if (lVar23 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = lVar23 + (long)plVar22;
              }
            }
            bVar4 = *(byte *)(local_70 + 0x19);
            bVar5 = *(byte *)(lVar23 + 0x19);
            uVar17 = (ulong)bVar5;
            local_64 = (uint)bVar4;
            if ((local_98 == '\0') ||
               (((*(byte *)(local_90 + 0x54) & 1) == 0 &&
                ((local_90 <= local_88 || ((*(uint *)(local_88 + 0x54) >> 1 & 1) == 0)))))) {
              uVar9 = uVar17;
              uVar17 = (ulong)local_64;
              local_78 = local_70;
              local_70 = lVar23;
              local_68 = (uint)bVar4;
              local_64 = (uint)bVar5;
            }
            else {
              local_80 = local_80 >> 3 & 0xfc | local_80 & 3 | (local_80 >> 2) << 5;
              uVar9 = (ulong)(uint)bVar4;
              local_90 = local_88;
              local_88 = uVar20;
              local_78 = lVar23;
              local_68 = (uint)bVar5;
            }
            (**(code **)(param_1 + uVar17 * 0x1a + uVar9 * 2 + 2))(&local_b8,param_4);
            if (plVar28 != (long *)0x0) {
              uVar30 = *(uint *)((long)param_4 + 0x1c);
              iVar1 = uVar30 + *(int *)(*param_4 + 8) + *(int *)((long)plVar28 + 0xc);
              if (iVar1 == 0) {
                *(undefined4 *)((long)plVar28 + 0xc) = 0;
                *(int *)(param_5 + 1) = (int)param_5[1] + -1;
              }
              else {
                puVar18 = (uint *)*plVar28;
                puVar25 = (uint *)param_4[2];
                if (puVar18 == puVar25) {
                  uVar16 = *(ushort *)((long)plVar28 + 10);
                }
                else {
                  uVar16 = *(ushort *)((long)plVar28 + 10);
                  if ((uint)uVar16 == (*puVar18 & 0xffff)) {
                    puVar18 = *(uint **)(puVar18 + 2);
                    *(undefined4 *)(plVar28 + 1) = 0;
                    uVar16 = 0;
                    puVar25 = (uint *)param_4[2];
                    uVar7 = 0;
                    if (puVar18 == (uint *)param_4[2]) goto LAB_03048cbc;
                  }
                  else {
                    uVar7 = uVar16;
                    if (puVar18 == puVar25) {
LAB_03048cbc:
                      puVar18 = puVar25;
                      uVar30 = *(uint *)((long)param_4 + 0x1c);
                      goto LAB_03048b58;
                    }
                  }
                  uVar16 = uVar7;
                  uVar30 = *puVar18;
                }
LAB_03048b58:
                *(ushort *)((long)plVar28 + 10) = (short)uVar30 - uVar16;
                *plVar28 = (long)puVar18;
                *(int *)((long)plVar28 + 0xc) = iVar1;
              }
            }
          }
        }
      }
      unaff_w28 = unaff_w28 - 1;
      if ((int)unaff_w28 < 1) {
        if (in_w17 == 0) {
          return;
        }
        unaff_x26 = *(uint **)(unaff_x26 + 2);
        if (unaff_x26 == (uint *)0x0) {
          return;
        }
        unaff_w28 = *unaff_x26 & 0xffff;
        if ((int)in_w17 <= (int)(*unaff_x26 & 0xffff)) {
          unaff_w28 = in_w17;
        }
        if ((int)unaff_w28 < 1) {
          return;
        }
        in_w17 = in_w17 - unaff_w28;
        puVar25 = unaff_x26 + 8;
        Hint_Prefetch(*(long *)(unaff_x26 + 2),0,0,0);
        Hint_Prefetch(*(long *)(unaff_x26 + 2) + 0x40,0,0,0);
        Hint_Prefetch(unaff_x26 + 0x20,0,0,0);
        Hint_Prefetch(unaff_x26 + 0x30,0,0,0);
      }
      else {
        puVar25 = puVar29 + 2;
      }
      puVar29 = puVar25;
    } while (puVar25 != (uint *)0x0);
  }
  return;
}


