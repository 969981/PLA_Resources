/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dd9e4; name: FUN_029dd9e4
 */


void FUN_029dd9e4(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  int iVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  ushort uVar21;
  long lVar22;
  undefined8 local_90;
  char local_88;
  char local_87;
  undefined1 local_86;
  ulong *local_80;
  ulong local_78;
  undefined4 local_70;
  undefined1 auStack_68 [8];
  
  plVar10 = (long *)param_3[3];
  if ((*(char *)((long)plVar10 + 0x5a) != '\0') && (lVar19 = *plVar10, lVar19 != 0)) {
    uVar20 = 1;
    do {
      if (*(short *)(lVar19 + 0x74) != 0) {
        if ((ulong)*(byte *)(lVar19 + 0x7d) < 0x1e) {
          iVar18 = *(int *)(*param_3 + (ulong)*(byte *)(lVar19 + 0x7d) * 8);
          if (*(short *)(lVar19 + 0x496) != 0) goto LAB_029dda60;
LAB_029dda78:
          iVar16 = 0;
        }
        else {
          iVar18 = 7;
          if (*(short *)(lVar19 + 0x496) == 0) goto LAB_029dda78;
LAB_029dda60:
          uVar8 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),param_3[2],lVar19,
                               *(undefined4 *)param_3[1]);
          if ((uVar8 & 1) != 0) goto LAB_029dda78;
          iVar16 = 1;
        }
        lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x1c8) * 0x40 + 0x21) = 1;
        lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x1c8) * 0x40 + 0x26) = 1;
        puVar3 = (uint *)param_3[1];
        lVar11 = param_3[2];
        plVar10 = (long *)param_3[3];
        plVar12 = (long *)param_3[4];
        if (iVar18 < 8) {
          uVar9 = 0;
          if (iVar18 != 0) {
            uVar9 = 3;
          }
          if (iVar18 == 7) {
            uVar9 = 1;
          }
          if (iVar16 == 0) goto LAB_029ddacc;
LAB_029ddb3c:
          uVar17 = *(undefined1 *)(lVar19 + 0x7d);
          uVar21 = *(ushort *)(lVar19 + 0x496);
          FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x70,uVar17,uVar9,
                       (short)*puVar3);
          FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x72,uVar17);
          local_88 = 1;
          local_90 = lVar19;
          FUN_029ec758(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x14c0),&local_78,&local_90);
          uVar8 = (ulong)*(byte *)((long)plVar10 + 0x5a);
          if (uVar8 < 6) {
            plVar12 = plVar10;
            uVar14 = uVar8;
            if (*(byte *)((long)plVar10 + 0x5a) != 0) {
              do {
                if (*plVar12 == lVar19) goto LAB_029ddcec;
                uVar14 = uVar14 - 1;
                plVar12 = plVar12 + 1;
              } while (uVar14 != 0);
            }
            plVar10[uVar8] = lVar19;
            *(undefined1 *)((long)plVar10 + (ulong)*(byte *)((long)plVar10 + 0x5a) + 0x48) = 0;
            *(undefined2 *)((long)plVar10 + (ulong)*(byte *)((long)plVar10 + 0x5a) * 2 + 0x30) = 0;
            *(undefined2 *)((long)plVar10 + (ulong)*(byte *)((long)plVar10 + 0x5a) * 2 + 0x3c) = 0;
            uVar1 = *(byte *)((long)plVar10 + 0x5a) + 1;
            uVar8 = (ulong)uVar1;
            *(char *)((long)plVar10 + 0x5a) = (char)uVar1;
            if ((uint)*(byte *)((long)plVar10 + 0x5b) < (uVar1 & 0xff)) {
              *(char *)((long)plVar10 + 0x5b) = (char)uVar1;
            }
            else {
LAB_029ddcec:
              if ((uVar8 & 0xff) == 0) goto LAB_029ddff4;
            }
          }
          uVar14 = 0;
          do {
            if (plVar10[uVar14] == lVar19) {
              *(ushort *)((long)plVar10 + uVar14 * 2 + 0x3c) =
                   *(short *)((long)plVar10 + uVar14 * 2 + 0x3c) + uVar21;
              *(undefined1 *)((long)plVar10 + uVar14 + 0x48) = 2;
              uVar8 = (ulong)*(byte *)((long)plVar10 + 0x5a);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < (uVar8 & 0xff));
        }
        else {
          uVar9 = 2;
          if (iVar16 != 0) goto LAB_029ddb3c;
LAB_029ddacc:
          uVar6 = FUN_029506a8(lVar19,0xd);
          local_78 = CONCAT62(local_78._2_6_,uVar6);
          uVar8 = FUN_02972fbc(*(undefined8 *)(param_1 + 0x38),lVar11,lVar19,puVar3);
          if ((uVar8 & 1) == 0) {
            cVar5 = FUN_02981a0c(*(undefined8 *)(param_1 + 0x38),lVar11,lVar19,1,&local_78);
            if (cVar5 == '\0') {
              uVar17 = *(undefined1 *)(lVar19 + 0x7d);
              lVar13 = *(long *)(param_1 + 0x20);
              uVar7 = FUN_029506a8(lVar19,0xd);
              lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0x10) + 8) +
                                 (ulong)*(byte *)(lVar19 + 0x7d) * 8 + 0x120);
              uVar1 = (uint)*(ushort *)(lVar22 + 0x74) * 0x10000;
              uVar4 = *(undefined1 *)(lVar11 + 0x7d);
              iVar2 = 0;
              if (uVar7 * 0x10000 <= uVar1) {
                iVar2 = uVar1 + uVar7 * -0x10000;
              }
              *(short *)(lVar22 + 0x74) = (short)((uint)iVar2 >> 0x10);
              if (iVar2 == 0) {
                *(undefined1 *)(lVar22 + 0x2b0) = 5;
                *(undefined1 *)(lVar22 + 0x2b1) = uVar4;
              }
              FUN_02a3e6b8(*(undefined8 *)(lVar13 + 0x18),2,*(undefined1 *)(lVar19 + 0x7d),uVar4,
                           uVar7 & 0xffff,5);
              FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x70,uVar17,uVar9,
                           (short)*puVar3);
              FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x72,uVar17);
              FUN_02973404(*(undefined8 *)(param_1 + 0x38),lVar11,lVar19);
              uVar21 = (ushort)local_78;
            }
            else {
              lVar22 = *(long *)(param_1 + 0x20);
              uVar21 = (ushort)local_78;
              uVar17 = *(undefined1 *)(lVar11 + 0x7d);
              lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0x10) + 8) +
                                 (ulong)*(byte *)(lVar19 + 0x7d) * 8 + 0x120);
              uVar1 = (uint)*(ushort *)(lVar13 + 0x74) * 0x10000;
              uVar7 = (uint)(ushort)local_78;
              iVar2 = 0;
              if (uVar7 * 0x10000 <= uVar1) {
                iVar2 = uVar1 + uVar7 * -0x10000;
              }
              *(short *)(lVar13 + 0x74) = (short)((uint)iVar2 >> 0x10);
              if (iVar2 == 0) {
                *(undefined1 *)(lVar13 + 0x2b0) = 5;
                *(undefined1 *)(lVar13 + 0x2b1) = uVar17;
              }
              FUN_02a3e6b8(*(undefined8 *)(lVar22 + 0x18),2,*(undefined1 *)(lVar19 + 0x7d),uVar17,
                           uVar7,5);
              FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x70,
                           *(undefined1 *)(lVar19 + 0x7d),uVar9,(short)*puVar3);
              local_90 = lVar19;
              local_88 = cVar5;
              FUN_029ea874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1380),auStack_68,&local_90)
              ;
            }
          }
          else {
            local_78 = local_78 & 0xffffffffffff0000;
            FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x70,
                         *(undefined1 *)(lVar19 + 0x7d),uVar9,(short)*puVar3);
            uVar21 = 0;
          }
          uVar8 = (ulong)*(byte *)((long)plVar12 + 0x5a);
          if (uVar8 < 6) {
            plVar10 = plVar12;
            uVar14 = uVar8;
            if (*(byte *)((long)plVar12 + 0x5a) != 0) {
              do {
                if (*plVar10 == lVar19) goto LAB_029dde6c;
                uVar14 = uVar14 - 1;
                plVar10 = plVar10 + 1;
              } while (uVar14 != 0);
            }
            plVar12[uVar8] = lVar19;
            *(undefined1 *)((long)plVar12 + (ulong)*(byte *)((long)plVar12 + 0x5a) + 0x48) = 0;
            *(undefined2 *)((long)plVar12 + (ulong)*(byte *)((long)plVar12 + 0x5a) * 2 + 0x30) = 0;
            *(undefined2 *)((long)plVar12 + (ulong)*(byte *)((long)plVar12 + 0x5a) * 2 + 0x3c) = 0;
            uVar1 = *(byte *)((long)plVar12 + 0x5a) + 1;
            uVar8 = (ulong)uVar1;
            *(char *)((long)plVar12 + 0x5a) = (char)uVar1;
            if ((uint)*(byte *)((long)plVar12 + 0x5b) < (uVar1 & 0xff)) {
              *(char *)((long)plVar12 + 0x5b) = (char)uVar1;
              goto LAB_029dde74;
            }
LAB_029dde6c:
            if ((uVar8 & 0xff) != 0) goto LAB_029dde74;
          }
          else {
LAB_029dde74:
            uVar14 = 0;
            do {
              if (plVar12[uVar14] == lVar19) {
                *(ushort *)((long)plVar12 + uVar14 * 2 + 0x30) =
                     *(short *)((long)plVar12 + uVar14 * 2 + 0x30) + uVar21;
                *(undefined1 *)((long)plVar12 + uVar14 + 0x48) = 1;
                uVar8 = (ulong)*(byte *)((long)plVar12 + 0x5a);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < (uVar8 & 0xff));
          }
          pcVar15 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
          local_87 = *(char *)(lVar11 + 0x7d);
          if ((*pcVar15 == '\0') || (pcVar15[2] != local_87)) {
            if ((pcVar15[3] == '\0') || (pcVar15[5] != local_87)) {
              if ((pcVar15[6] == '\0') || (pcVar15[8] != local_87)) {
                if ((pcVar15[9] == '\0') || (pcVar15[0xb] != local_87)) {
                  if ((pcVar15[0xc] == '\0') || (pcVar15[0xe] != local_87)) {
                    if ((pcVar15[0xf] == '\0') || (uVar17 = 5, pcVar15[0x11] != local_87)) {
                      uVar17 = 6;
                    }
                  }
                  else {
                    uVar17 = 4;
                  }
                }
                else {
                  uVar17 = 3;
                }
              }
              else {
                uVar17 = 2;
              }
            }
            else {
              uVar17 = 1;
            }
          }
          else {
            uVar17 = 0;
          }
          uVar4 = *(undefined1 *)((long)puVar3 + 10);
          uVar1 = puVar3[3];
          lVar22 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x40) + 0x20);
          uVar7 = *puVar3;
          local_90 = CONCAT44(uVar1,CONCAT22(uVar21,(short)uVar7));
          local_88 = uVar4;
          local_86 = uVar17;
          FUN_02952ce8(*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(lVar22 + 0x20) + 0x10) + 8) +
                         (ulong)*(byte *)(lVar19 + 0x7d) * 8 + 0x120),&local_90);
          FUN_02a3e6b8(*(undefined8 *)(lVar22 + 0x18),0x3f,*(undefined1 *)(lVar19 + 0x7d),
                       *(undefined1 *)(lVar11 + 0x7d),uVar17,uVar4,uVar1,uVar7 & 0xffff,uVar21);
        }
LAB_029ddff4:
        FUN_02989b48(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1a60) + 0x38),
                     param_3[2],lVar19,param_3[1],iVar18,uVar21,0,iVar16);
        local_78 = param_3[2];
        local_70 = *(undefined4 *)(param_3[1] + 4);
        local_88 = 1;
        local_80 = &local_78;
        local_90 = lVar19;
        FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_68,&local_90);
        plVar10 = (long *)param_3[3];
      }
      if (*(byte *)((long)plVar10 + 0x5a) <= uVar20) {
        return;
      }
      lVar19 = plVar10[uVar20];
      uVar20 = uVar20 + 1;
    } while (lVar19 != 0);
  }
  return;
}


