/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0297eb68; name: FUN_0297eb68
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0297eb68(long param_1,long param_2,long param_3,uint *param_4,undefined1 *param_5,
                 undefined1 *param_6)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  undefined1 auStack_770 [1784];
  uint local_78;
  
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if ((*(byte *)(param_2 + 0x188) & 7) == 0) {
    uVar15 = *(ulong *)(param_2 + 400);
    if ((uVar15 & 7) != 0) {
      uVar10 = (uint)uVar15;
      uVar14 = uVar10 & 7;
      if (uVar14 == 4) {
        uVar14 = uVar10 >> 0xe & 0x3f;
      }
      else if (uVar14 == 3) {
        uVar14 = uVar10 >> 8 & 0x3f;
      }
      else if (uVar14 == 2) {
        uVar14 = (uint)(uVar15 >> 0xe);
      }
      else {
        uVar14 = 0;
      }
      if ((uint)*(byte *)(param_3 + 0x7d) == (uVar14 & 0xff)) {
        return true;
      }
    }
    lVar19 = (&DAT_0428af30)[(ulong)*param_4 * 6];
    if (lVar19 == 0) {
      plVar26 = &DAT_0428af30;
    }
    else {
      plVar26 = &DAT_0428af30;
      if (*(char *)(lVar19 + 0x1e1) != '\0') {
        plVar26 = &DAT_0428af30 + (ulong)*param_4 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar26 + 0x250) + (ulong)**(uint **)(*plVar26 + 0x250));
    if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
        (uVar15 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar15 == 0)) ||
       (*(char *)((long)piVar2 + uVar15) != 'e')) {
      lVar19 = *(long *)(param_1 + 0x10);
      lVar16 = *(long *)(lVar19 + 0x30);
      uVar14 = *(uint *)(lVar16 + 0xc08);
      if (uVar14 < 0x60) {
        do {
          lVar20 = *(long *)(lVar16 + (ulong)uVar14 * 0x20 + 8);
          if (*(short *)(lVar20 + 8) == 0) {
            if (uVar14 < 0x5f) {
              *(undefined2 *)(lVar20 + 8) = 1;
              *(int *)(lVar16 + 0xc08) = *(int *)(lVar16 + 0xc08) + 1;
            }
            break;
          }
          uVar14 = uVar14 + 1;
          *(uint *)(lVar16 + 0xc08) = uVar14;
        } while (uVar14 != 0x60);
      }
      lVar16 = *(long *)(lVar19 + 0x50);
      uVar14 = *(uint *)(lVar16 + 0x408);
      if (uVar14 < 0x1f) {
        *(uint *)(lVar16 + 0x408) = uVar14 + 1;
        lVar16 = *(long *)(lVar19 + 0x50);
        uVar14 = *(uint *)(lVar16 + 0x408);
      }
      *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar16 + (ulong)uVar14 * 0x20 + 8);
      lVar16 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar16 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar19 + 0xc08);
      bVar6 = *(byte *)(param_2 + 0x7d);
      uVar15 = uVar17 << 5 | 8;
      uVar21 = uVar17;
      do {
        uVar22 = uVar21;
        if (0x5f < uVar22) goto LAB_0297eda8;
        sVar7 = *(short *)(*(long *)(lVar19 + uVar15) + 8);
        if (sVar7 == 0) goto LAB_0297ed6c;
        uVar15 = uVar15 + 0x20;
        uVar21 = uVar22 + 1;
      } while (sVar7 != 3);
      if ((int)(uVar22 + 1) - 1U < 0x60) {
LAB_0297ed6c:
        lVar20 = *(long *)(lVar19 + (uVar22 & 0xffffffff) * 0x20 + 8);
        if (lVar20 != 0) {
          *(undefined2 *)(lVar20 + 8) = 3;
          *(uint *)(lVar20 + 0xc) = (uint)bVar6;
          *(undefined1 *)(lVar20 + 10) = 4;
          *(undefined8 *)(lVar20 + 0x10) = 0;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          *(long *)(*(long *)(lVar16 + 0x70) + 0x20) = lVar20;
          lVar16 = *(long *)(param_1 + 0x10);
          lVar19 = *(long *)(lVar16 + 0x30);
          uVar17 = (ulong)*(uint *)(lVar19 + 0xc08);
        }
      }
LAB_0297eda8:
      bVar6 = *(byte *)(param_3 + 0x7d);
      uVar15 = uVar17 << 5 | 8;
      lVar20 = 0;
      do {
        lVar23 = lVar20;
        if (0x5f < uVar17 + lVar23) goto LAB_0297ee2c;
        sVar7 = *(short *)(*(long *)(lVar19 + uVar15) + 8);
        if (sVar7 == 0) goto LAB_0297edf4;
        uVar15 = uVar15 + 0x20;
        lVar20 = lVar23 + 1;
      } while (sVar7 != 4);
      if (((int)uVar17 + (int)(lVar23 + 1)) - 1U < 0x60) {
LAB_0297edf4:
        lVar20 = *(long *)(lVar19 + (ulong)(uint)((int)uVar17 + (int)lVar23) * 0x20 + 8);
        if (lVar20 != 0) {
          *(undefined2 *)(lVar20 + 8) = 4;
          *(uint *)(lVar20 + 0xc) = (uint)bVar6;
          *(undefined1 *)(lVar20 + 10) = 4;
          *(undefined8 *)(lVar20 + 0x10) = 0;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          *(long *)(*(long *)(lVar16 + 0x70) + 0x28) = lVar20;
          lVar16 = *(long *)(param_1 + 0x10);
          lVar19 = *(long *)(lVar16 + 0x30);
          uVar17 = (ulong)*(uint *)(lVar19 + 0xc08);
        }
      }
LAB_0297ee2c:
      plVar26 = (long *)(lVar19 + uVar17 * 0x20 + 8);
      do {
        uVar15 = uVar17;
        if (0x5f < uVar15) goto LAB_0297eea0;
        lVar20 = *plVar26;
        if (*(short *)(lVar20 + 8) == 0) goto LAB_0297ee68;
        plVar26 = plVar26 + 4;
        uVar17 = uVar15 + 1;
      } while (*(short *)(lVar20 + 8) != 0x59);
      if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0297ee68:
        lVar19 = *(long *)(lVar19 + (uVar15 & 0xffffffff) * 0x20 + 8);
        if (lVar19 != 0) {
          *(undefined2 *)(lVar19 + 8) = 0x59;
          *(undefined8 *)(lVar19 + 0xc) = 0;
          *(undefined8 *)(lVar19 + 0x14) = 0;
          *(undefined4 *)(lVar19 + 0x1c) = 0;
          *(undefined1 *)(lVar19 + 10) = 1;
          *(long *)(*(long *)(lVar16 + 0x70) + 0x2d0) = lVar19;
          lVar16 = *(long *)(param_1 + 0x10);
        }
      }
LAB_0297eea0:
      iVar18 = *(int *)(lVar16 + 0x78) + 1;
      *(int *)(lVar16 + 0x78) = iVar18;
      lVar19 = *(long *)(*(long *)(*(long *)(lVar16 + 8) + 0x88) + 0x14c8);
      if (lVar19 != 0) {
        do {
          lVar20 = FUN_02999e6c(lVar16,0x40,8,1,lVar19);
          if (lVar20 == 0) break;
          if ((*(byte *)(lVar20 + 0x3f) >> 5 & 1) == 0) {
            lVar20 = *(long *)(lVar19 + 0x18);
          }
          lVar19 = lVar20;
        } while (lVar20 != 0);
        iVar18 = *(int *)(lVar16 + 0x78);
      }
      *(int *)(lVar16 + 0x78) = iVar18 + -1;
      if (iVar18 + -1 == 0) {
        for (lVar19 = *(long *)(*(long *)(*(long *)(lVar16 + 8) + 0x88) + 0x14c8); lVar19 != 0;
            lVar19 = *(long *)(lVar19 + 0x18)) {
          *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
        }
      }
      lVar16 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(*(long *)(lVar16 + 0x70) + 0x2d0);
      if (lVar19 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)(lVar19 + 0xc) != 0;
      }
      lVar19 = *(long *)(lVar16 + 0x50);
      if (*(uint *)(lVar19 + 0x408) == 0) {
        uVar15 = 0;
      }
      else {
        memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410
              );
        *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
        lVar19 = *(long *)(lVar16 + 0x50);
        uVar15 = (ulong)*(uint *)(lVar19 + 0x408);
      }
      *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)(lVar19 + uVar15 * 0x20 + 8);
      lVar19 = *(long *)(lVar16 + 0x30);
      uVar14 = *(uint *)(lVar19 + 0xc08);
      if (uVar14 != 0) {
        if ((uVar14 & 0xffff) < 0x60) {
          uVar15 = (ulong)uVar14 & 0xffff;
          plVar26 = (long *)(lVar19 + uVar15 * 0x20 + 8);
          do {
            uVar15 = uVar15 + 1;
            if (*(short *)(*plVar26 + 8) == 0) break;
            *(undefined2 *)(*plVar26 + 8) = 0;
            plVar26 = plVar26 + 4;
          } while (((uint)uVar15 & 0xffff) != 0x60);
          uVar14 = *(uint *)(lVar19 + 0xc08);
        }
        *(uint *)(lVar19 + 0xc08) = uVar14 - 1;
        *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar14 - 1) * 0x20 + 8) + 8) = 0;
        uVar15 = (ulong)*(uint *)(lVar19 + 0xc08);
        do {
          if (uVar15 == 0) goto LAB_0297f02c;
          uVar15 = uVar15 - 1;
          *(int *)(lVar19 + 0xc08) = (int)uVar15;
        } while (*(short *)(*(long *)(lVar19 + (uVar15 & 0xffffffff) * 0x20 + 8) + 8) != 1);
        *(int *)(lVar19 + 0xc08) = (int)uVar15 + 1;
      }
LAB_0297f02c:
      if ((!bVar9) && ((*(byte *)(param_3 + 0x1a8) & 7) == 0)) {
        if ((*(byte *)(param_3 + 0x218) & 7) != 0) {
          plVar26 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
          if (plVar26 != (long *)0x0) {
            plVar1 = plVar26 + 10;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          FUN_009463f0(auStack_770,plVar26 + 0xc);
          FUN_00945e04(auStack_770);
          if (plVar26 != (long *)0x0) {
            plVar1 = plVar26 + 10;
            do {
              iVar18 = (int)*plVar1 + -1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *(int *)plVar1 = iVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar18 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
          lVar19 = DAT_043ecde0;
          uVar15 = *(ulong *)(DAT_043ecde0 + 8);
          uVar17 = *(ulong *)(DAT_043ecde0 + 0x10);
          do {
            uVar21 = uVar15 ^ uVar17;
            iVar18 = (int)uVar17;
            uVar17 = uVar21 >> 0x1b | uVar21 << 0x25;
            uVar14 = (int)uVar15 + iVar18 & 0x7f;
            uVar15 = uVar21 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar21 << 0x10;
          } while (99 < uVar14);
          *(ulong *)(DAT_043ecde0 + 8) = uVar15;
          *(ulong *)(lVar19 + 0x10) = uVar17;
          if (uVar14 < local_78) {
            if (param_6 == (undefined1 *)0x0) {
              return false;
            }
            *param_6 = 1;
            return false;
          }
        }
        uVar10 = FUN_02972934(param_1,0x42,param_2,param_3,param_4);
        lVar19 = *(long *)(param_1 + 0x10);
        lVar16 = *(long *)(lVar19 + 0x30);
        uVar14 = *(uint *)(lVar16 + 0xc08);
        if (uVar14 < 0x60) {
          do {
            lVar20 = *(long *)(lVar16 + (ulong)uVar14 * 0x20 + 8);
            if (*(short *)(lVar20 + 8) == 0) {
              if (uVar14 < 0x5f) {
                *(undefined2 *)(lVar20 + 8) = 1;
                *(int *)(lVar16 + 0xc08) = *(int *)(lVar16 + 0xc08) + 1;
              }
              break;
            }
            uVar14 = uVar14 + 1;
            *(uint *)(lVar16 + 0xc08) = uVar14;
          } while (uVar14 != 0x60);
        }
        lVar16 = *(long *)(lVar19 + 0x50);
        uVar14 = *(uint *)(lVar16 + 0x408);
        if (uVar14 < 0x1f) {
          *(uint *)(lVar16 + 0x408) = uVar14 + 1;
          lVar16 = *(long *)(lVar19 + 0x50);
          uVar14 = *(uint *)(lVar16 + 0x408);
        }
        *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar16 + (ulong)uVar14 * 0x20 + 8);
        lVar16 = *(long *)(param_1 + 0x10);
        lVar19 = *(long *)(lVar16 + 0x30);
        uVar17 = (ulong)*(uint *)(lVar19 + 0xc08);
        bVar6 = *(byte *)(param_2 + 0x7d);
        uVar15 = uVar17 << 5 | 8;
        uVar21 = uVar17;
        do {
          uVar22 = uVar21;
          if (0x5f < uVar22) goto LAB_0297f218;
          sVar7 = *(short *)(*(long *)(lVar19 + uVar15) + 8);
          if (sVar7 == 0) goto LAB_0297f1dc;
          uVar15 = uVar15 + 0x20;
          uVar21 = uVar22 + 1;
        } while (sVar7 != 3);
        if ((int)(uVar22 + 1) - 1U < 0x60) {
LAB_0297f1dc:
          lVar20 = *(long *)(lVar19 + (uVar22 & 0xffffffff) * 0x20 + 8);
          if (lVar20 != 0) {
            *(undefined2 *)(lVar20 + 8) = 3;
            *(uint *)(lVar20 + 0xc) = (uint)bVar6;
            *(undefined1 *)(lVar20 + 10) = 4;
            *(undefined8 *)(lVar20 + 0x10) = 0;
            *(undefined8 *)(lVar20 + 0x18) = 0;
            *(long *)(*(long *)(lVar16 + 0x70) + 0x20) = lVar20;
            lVar16 = *(long *)(param_1 + 0x10);
            lVar19 = *(long *)(lVar16 + 0x30);
            uVar17 = (ulong)*(uint *)(lVar19 + 0xc08);
          }
        }
LAB_0297f218:
        bVar6 = *(byte *)(param_3 + 0x7d);
        uVar15 = uVar17 << 5 | 8;
        lVar20 = 0;
        do {
          lVar23 = lVar20;
          if (0x5f < uVar17 + lVar23) goto LAB_0297f29c;
          sVar7 = *(short *)(*(long *)(lVar19 + uVar15) + 8);
          if (sVar7 == 0) goto LAB_0297f264;
          uVar15 = uVar15 + 0x20;
          lVar20 = lVar23 + 1;
        } while (sVar7 != 4);
        if (((int)uVar17 + (int)(lVar23 + 1)) - 1U < 0x60) {
LAB_0297f264:
          lVar20 = *(long *)(lVar19 + (ulong)(uint)((int)uVar17 + (int)lVar23) * 0x20 + 8);
          if (lVar20 != 0) {
            *(undefined2 *)(lVar20 + 8) = 4;
            *(uint *)(lVar20 + 0xc) = (uint)bVar6;
            *(undefined1 *)(lVar20 + 10) = 4;
            *(undefined8 *)(lVar20 + 0x10) = 0;
            *(undefined8 *)(lVar20 + 0x18) = 0;
            *(long *)(*(long *)(lVar16 + 0x70) + 0x28) = lVar20;
            lVar16 = *(long *)(param_1 + 0x10);
            lVar19 = *(long *)(lVar16 + 0x30);
            uVar17 = (ulong)*(uint *)(lVar19 + 0xc08);
          }
        }
LAB_0297f29c:
        plVar26 = (long *)(lVar19 + uVar17 * 0x20 + 8);
        do {
          uVar15 = uVar17;
          if (0x5f < uVar15) goto LAB_0297f310;
          lVar20 = *plVar26;
          if (*(short *)(lVar20 + 8) == 0) goto LAB_0297f2d8;
          plVar26 = plVar26 + 4;
          uVar17 = uVar15 + 1;
        } while (*(short *)(lVar20 + 8) != 0x52);
        if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0297f2d8:
          lVar19 = *(long *)(lVar19 + (uVar15 & 0xffffffff) * 0x20 + 8);
          if (lVar19 != 0) {
            *(undefined2 *)(lVar19 + 8) = 0x52;
            *(undefined8 *)(lVar19 + 0xc) = 0;
            *(undefined8 *)(lVar19 + 0x14) = 0;
            *(undefined4 *)(lVar19 + 0x1c) = 0;
            *(undefined1 *)(lVar19 + 10) = 1;
            *(long *)(*(long *)(lVar16 + 0x70) + 0x298) = lVar19;
            lVar16 = *(long *)(param_1 + 0x10);
          }
        }
LAB_0297f310:
        uVar11 = FUN_029506a8(param_2,5);
        lVar19 = *(long *)(lVar16 + 0x30);
        plVar26 = (long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0xc08) * 0x20 + 8);
        uVar15 = (ulong)*(uint *)(lVar19 + 0xc08);
        do {
          uVar17 = uVar15;
          if (0x5f < uVar17) goto LAB_0297f38c;
          lVar20 = *plVar26;
          if (*(short *)(lVar20 + 8) == 0) goto LAB_0297f360;
          plVar26 = plVar26 + 4;
          uVar15 = uVar17 + 1;
        } while (*(short *)(lVar20 + 8) != 0x2a);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0297f360:
          lVar19 = *(long *)(lVar19 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar19 != 0) {
            *(undefined2 *)(lVar19 + 8) = 0x2a;
            *(undefined4 *)(lVar19 + 0xc) = uVar11;
            *(undefined1 *)(lVar19 + 10) = 0;
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            *(long *)(*(long *)(lVar16 + 0x70) + 0x158) = lVar19;
          }
        }
LAB_0297f38c:
        lVar16 = *(long *)(param_1 + 0x10);
        uVar11 = FUN_029506a8(param_3,5);
        lVar19 = *(long *)(lVar16 + 0x30);
        plVar26 = (long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0xc08) * 0x20 + 8);
        uVar15 = (ulong)*(uint *)(lVar19 + 0xc08);
        do {
          uVar17 = uVar15;
          if (0x5f < uVar17) goto LAB_0297f40c;
          lVar20 = *plVar26;
          if (*(short *)(lVar20 + 8) == 0) goto LAB_0297f3e0;
          plVar26 = plVar26 + 4;
          uVar15 = uVar17 + 1;
        } while (*(short *)(lVar20 + 8) != 0x2b);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0297f3e0:
          lVar19 = *(long *)(lVar19 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar19 != 0) {
            *(undefined2 *)(lVar19 + 8) = 0x2b;
            *(undefined4 *)(lVar19 + 0xc) = uVar11;
            *(undefined1 *)(lVar19 + 10) = 0;
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            *(long *)(*(long *)(lVar16 + 0x70) + 0x160) = lVar19;
          }
        }
LAB_0297f40c:
        lVar16 = *(long *)(param_1 + 0x10);
        lVar19 = *(long *)(lVar16 + 0x30);
        plVar26 = (long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0xc08) * 0x20 + 8);
        uVar15 = (ulong)*(uint *)(lVar19 + 0xc08);
        do {
          uVar17 = uVar15;
          if (0x5f < uVar17) goto LAB_0297f498;
          lVar20 = *plVar26;
          if (*(short *)(lVar20 + 8) == 0) goto LAB_0297f454;
          plVar26 = plVar26 + 4;
          uVar15 = uVar17 + 1;
        } while (*(short *)(lVar20 + 8) != 0x38);
        if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0297f454:
          lVar19 = *(long *)(lVar19 + (uVar17 & 0xffffffff) * 0x20 + 8);
          if (lVar19 != 0) {
            *(undefined2 *)(lVar19 + 8) = 0x38;
            *(undefined8 *)(lVar19 + 0xc) = 0x2900001000;
            *(undefined4 *)(lVar19 + 0x14) = 0x20000;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            *(undefined1 *)(lVar19 + 10) = 3;
            *(long *)(*(long *)(lVar16 + 0x70) + 0x1c8) = lVar19;
            lVar16 = *(long *)(param_1 + 0x10);
          }
        }
LAB_0297f498:
        iVar18 = *(int *)(lVar16 + 0x78) + 1;
        *(int *)(lVar16 + 0x78) = iVar18;
        lVar19 = *(long *)(*(long *)(*(long *)(lVar16 + 8) + 0x88) + 0x14c8);
        if (lVar19 != 0) {
          do {
            lVar20 = FUN_02999e6c(lVar16,0x41,8,1,lVar19);
            if (lVar20 == 0) break;
            if ((*(byte *)(lVar20 + 0x3f) >> 5 & 1) == 0) {
              lVar20 = *(long *)(lVar19 + 0x18);
            }
            lVar19 = lVar20;
          } while (lVar20 != 0);
          iVar18 = *(int *)(lVar16 + 0x78);
        }
        *(int *)(lVar16 + 0x78) = iVar18 + -1;
        if (iVar18 + -1 == 0) {
          for (lVar19 = *(long *)(*(long *)(*(long *)(lVar16 + 8) + 0x88) + 0x14c8); lVar19 != 0;
              lVar19 = *(long *)(lVar19 + 0x18)) {
            *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
          }
        }
        lVar16 = *(long *)(param_1 + 0x10);
        lVar19 = *(long *)(lVar16 + 0x70);
        if (*(long *)(lVar19 + 0x158) == 0) {
          iVar18 = 1;
          lVar20 = *(long *)(lVar19 + 0x160);
        }
        else {
          iVar18 = *(char *)(*(long *)(lVar19 + 0x158) + 0xc) + 1;
          lVar20 = *(long *)(lVar19 + 0x160);
        }
        if (lVar20 == 0) {
          iVar25 = 0;
          lVar20 = *(long *)(lVar19 + 0x298);
        }
        else {
          iVar25 = *(int *)(lVar20 + 0xc) << 0x18;
          lVar20 = *(long *)(lVar19 + 0x298);
        }
        if (lVar20 == 0) {
          bVar9 = true;
        }
        else {
          bVar9 = *(char *)(lVar20 + 0xc) == '\0';
        }
        bVar6 = *(byte *)(param_3 + 0x128);
        if ((((*(byte *)(param_2 + 0x385) >> 6 & 1) != 0) &&
            (lVar20 = *(long *)(lVar19 + 0x1c8), lVar20 != 0)) && (*(char *)(lVar20 + 10) == '\x03')
           ) {
          iVar4 = *(int *)(lVar20 + 0x10);
          iVar5 = *(int *)(lVar20 + 0x14);
          iVar12 = (int)((long)*(int *)(lVar20 + 0xc) * 0x1333 + 0x800U >> 0xc);
          iVar24 = iVar4;
          if (iVar4 <= iVar12) {
            iVar24 = iVar12;
          }
          iVar3 = iVar5;
          if (iVar24 <= iVar5) {
            iVar3 = iVar24;
          }
          if (iVar5 != 0 || iVar4 != 0) {
            iVar12 = iVar3;
          }
          *(int *)(lVar20 + 0xc) = iVar12;
          lVar16 = *(long *)(param_1 + 0x10);
          lVar19 = *(long *)(lVar16 + 0x70);
        }
        if (*(long *)(lVar19 + 0x1c8) == 0) {
          iVar24 = 0;
        }
        else {
          iVar24 = *(int *)(*(long *)(lVar19 + 0x1c8) + 0xc);
        }
        lVar19 = *(long *)(lVar16 + 0x50);
        if (*(uint *)(lVar19 + 0x408) == 0) {
          uVar15 = 0;
        }
        else {
          memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,
                 0x410);
          *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
          lVar19 = *(long *)(lVar16 + 0x50);
          uVar15 = (ulong)*(uint *)(lVar19 + 0x408);
        }
        *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)(lVar19 + uVar15 * 0x20 + 8);
        lVar19 = *(long *)(lVar16 + 0x30);
        uVar14 = *(uint *)(lVar19 + 0xc08);
        if (uVar14 != 0) {
          if ((uVar14 & 0xffff) < 0x60) {
            uVar15 = (ulong)uVar14 & 0xffff;
            plVar26 = (long *)(lVar19 + uVar15 * 0x20 + 8);
            do {
              uVar15 = uVar15 + 1;
              if (*(short *)(*plVar26 + 8) == 0) break;
              *(undefined2 *)(*plVar26 + 8) = 0;
              plVar26 = plVar26 + 4;
            } while (((uint)uVar15 & 0xffff) != 0x60);
            uVar14 = *(uint *)(lVar19 + 0xc08);
          }
          *(uint *)(lVar19 + 0xc08) = uVar14 - 1;
          *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar14 - 1) * 0x20 + 8) + 8) = 0;
          uVar15 = (ulong)*(uint *)(lVar19 + 0xc08);
          do {
            if (uVar15 == 0) goto LAB_0297f6f8;
            uVar15 = uVar15 - 1;
            *(int *)(lVar19 + 0xc08) = (int)uVar15;
          } while (*(short *)(*(long *)(lVar19 + (uVar15 & 0xffffffff) * 0x20 + 8) + 8) != 1);
          *(int *)(lVar19 + 0xc08) = (int)uVar15 + 1;
        }
LAB_0297f6f8:
        lVar19 = DAT_043ecde0;
        iVar12 = -1;
        if ((bool)(bVar9 & (iVar25 < 0x1000001 || (bVar6 & 7) == 0))) {
          iVar12 = -(iVar25 >> 0x18);
        }
        uVar14 = iVar12 + iVar18 & (iVar12 + iVar18 >> 0x1f ^ 0xffffffffU);
        if (1 < (int)uVar14) {
          uVar14 = 2;
        }
        uVar13 = 0;
        if ((byte)(&DAT_03a7ead9)[(ulong)uVar14 * 2] != 0) {
          uVar13 = ((uVar10 & 0xff) * (uint)(byte)(&DAT_03a7ead8)[(ulong)uVar14 * 2]) /
                   (uint)(byte)(&DAT_03a7ead9)[(ulong)uVar14 * 2];
        }
        if (99 < uVar13) {
          uVar13 = 100;
        }
        uVar10 = (uVar13 & 0xff) * iVar24;
        uVar14 = uVar10 >> 0xc;
        if (0x800 < (uVar10 & 0xfff)) {
          uVar14 = uVar14 + 1;
        }
        uVar15 = *(ulong *)(DAT_043ecde0 + 8);
        uVar17 = *(ulong *)(DAT_043ecde0 + 0x10);
        do {
          uVar21 = uVar15 ^ uVar17;
          iVar18 = (int)uVar17;
          uVar17 = uVar21 >> 0x1b | uVar21 << 0x25;
          uVar10 = (int)uVar15 + iVar18 & 0x7f;
          uVar15 = uVar21 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar21 << 0x10;
        } while (99 < uVar10);
        if (99 < uVar14) {
          uVar14 = 100;
        }
        *(ulong *)(DAT_043ecde0 + 8) = uVar15;
        *(ulong *)(lVar19 + 0x10) = uVar17;
        return uVar10 < (uVar14 & 0xff);
      }
    }
  }
  return true;
}


