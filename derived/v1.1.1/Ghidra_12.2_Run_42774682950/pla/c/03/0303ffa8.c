/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303ffa8; name: FUN_0303ffa8
 */


void FUN_0303ffa8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong uStack_88;
  long *local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  iVar9 = *(int *)(param_1 + 0x40);
  if (iVar9 + -1 != 0 && 0 < iVar9) {
    FUN_030410e0(*(undefined8 *)(param_1 + 0x38),0,iVar9 + -1);
    iVar9 = *(int *)(param_1 + 0x40);
  }
  if (0 < iVar9) {
    lVar18 = 0;
    lVar6 = tpidr_el0;
    do {
      lVar15 = *(long *)(*(long *)(param_1 + 0x38) + lVar18 * 8);
      uVar3 = *(uint *)(lVar15 + 0x20);
      uVar2 = uVar3 & 0x7fffffff;
      if (uVar2 != 0) {
        lVar10 = *(long *)(lVar6 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar10;
        }
        lVar10 = *(long *)(lVar10 + 8);
        uVar8 = (ulong)(int)(uVar3 * 8 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar10 + 0x10) < uVar8) {
LAB_0304040c:
          lVar7 = FUN_032ce670();
        }
        else {
          lVar7 = *(long *)(lVar10 + 0x18);
          if (*(ulong *)(lVar10 + 0x20) < lVar7 + uVar8) goto LAB_0304040c;
          *(ulong *)(lVar10 + 0x18) = lVar7 + uVar8;
        }
        uVar3 = *(uint *)(lVar15 + 0x18);
        if (0 < (int)uVar3) {
          lVar10 = *(long *)(lVar15 + 0x10);
          uVar14 = 0;
          do {
            if (*(int *)(lVar10 + uVar14 * 4) != -1) break;
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
          if ((int)uVar14 < (int)uVar3) {
            lVar20 = 0;
            uVar14 = uVar14 & 0xffffffff;
            do {
              uVar11 = (ulong)*(uint *)(lVar10 + (-(uVar14 >> 0x1f & 1) & 0xfffffffc00000000 |
                                                 (uVar14 & 0xffffffff) << 2));
              uVar19 = uVar11 & 0xffffff;
              lVar10 = *(long *)(param_2 + 0x38);
              lVar21 = lVar10 + uVar19 * 0xc0;
              *(undefined8 *)(lVar7 + lVar20 * 8) = *(undefined8 *)(lVar21 + 0xb0);
              puVar12 = (undefined8 *)(lVar21 + 0x60);
              local_b0 = *puVar12;
              local_a8 = *(undefined8 *)(lVar21 + 0x68);
              uStack_a0 = *(undefined8 *)(lVar21 + 0x70);
              if ((*(byte *)(lVar15 + 0x28) & 1) != 0) {
                if ((*(byte *)(lVar10 + uVar19 * 0xc0 + 0x54) >> 1 & 1) == 0) {
                  FUN_0302f5b4(param_2,lVar21,0,1,0);
                }
                else {
                  lVar16 = lVar10 + uVar19 * 0xc0;
                  lVar13 = *(long *)(param_2 + 0x150);
                  uVar3 = *(uint *)(lVar16 + 0x80);
                  (**(code **)(DAT_0442d3b0 +
                               (ulong)*(byte *)(*(long *)(lVar16 + 0x78) + 0x18) * 0x200 + 0x18))
                            (*(long *)(lVar16 + 0x78),&DAT_03aae430,&local_80);
                  local_90 = CONCAT44(*(undefined4 *)(lVar21 + 0x1c),*(undefined4 *)(lVar16 + 0xc));
                  uStack_88 = (ulong)*(uint *)(lVar21 + 0x2c);
                  (**(code **)(DAT_0442d3b0 +
                               (ulong)*(byte *)(*(long *)(lVar16 + 0x78) + 0x18) * 0x200 + 0x28))
                            (*(long *)(lVar16 + 0x78),&local_90,&local_98);
                  *(short *)(lVar16 + 0x94) = (short)((ulong)local_98 >> 0x10) + 1;
                  FUN_030e4884(param_2,uVar11,lVar13 + (ulong)uVar3 * 0x80,1);
                }
                lVar13 = lVar10 + uVar19 * 0xc0;
                *(ushort *)(lVar13 + 0x58) = *(ushort *)(lVar13 + 0x58) | 0x100;
              }
              puVar17 = (uint *)(lVar10 + uVar19 * 0xc0 + 0x54);
              if (((*(byte *)puVar17 >> 1 & 1) != 0) && ((*(byte *)(lVar15 + 0x28) >> 3 & 1) != 0))
              {
                FUN_0302df70(param_2,*(undefined4 *)(lVar10 + uVar19 * 0xc0 + 0x80));
              }
              lVar13 = (long)(int)uVar14;
              lVar20 = lVar20 + 1;
              if ((*(byte *)(lVar10 + uVar19 * 0xc0 + 0x88) & 1) != 0) {
                if ((*(byte *)(lVar15 + 0x28) >> 2 & 1) == 0) {
                  if ((*(byte *)(lVar15 + 0x28) >> 1 & 1) == 0) {
                    uVar3 = *puVar17;
                    if ((uVar3 & 9) == 0) {
                      FUN_03030748(param_2,uVar11,0);
                      uVar3 = *puVar17;
                    }
                    if ((uVar3 & 1) != 0) {
                      uStack_68 = *(ulong *)(lVar21 + 0x68);
                      uStack_70 = *puVar12;
                      local_80 = *(long **)(lVar10 + uVar19 * 0xc0 + 0x70);
                      uStack_78 = uStack_68 >> 0x20;
                      FUN_030317f0(param_2,&local_80,uVar11);
                    }
                  }
                  else {
                    FUN_030e8800(param_2,uVar11);
                  }
                }
                else {
                  FUN_03031544(param_2,uVar11,0);
                  FUN_03103fe8(*(undefined8 *)(param_2 + 0x498),lVar21,&local_b0,puVar12);
                }
              }
              lVar10 = uVar14 << 0x20;
              do {
                lVar10 = lVar10 + 0x100000000;
                if ((long)*(int *)(lVar15 + 0x18) + -1 <= lVar13) break;
                lVar21 = lVar13 * 4;
                lVar13 = lVar13 + 1;
              } while (*(int *)(*(long *)(lVar15 + 0x10) + lVar21 + 4) == -1);
              uVar14 = lVar10 >> 0x20;
              if (*(int *)(lVar15 + 0x18) <= (int)((ulong)lVar10 >> 0x20)) break;
              lVar10 = *(long *)(lVar15 + 0x10);
            } while( true );
          }
        }
        local_80 = *(long **)(lVar15 + 8);
        if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
          plVar1 = local_80 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_030404e4(param_2 + 0x758,param_2,&local_80,*(undefined1 *)(lVar15 + 0x28),lVar7,uVar2);
        *(undefined1 *)(lVar15 + 0x28) = 0;
        if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
          plVar1 = local_80 + 2;
          do {
            lVar15 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 + -1 == 0) {
            (**(code **)(*local_80 + 0x18))();
          }
        }
        lVar15 = *(long *)(lVar6 + 0x38d490);
        if (lVar15 == 0) {
          lVar15 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar15;
        }
        lVar15 = *(long *)(lVar15 + 8);
        if (((*(ulong *)(lVar15 + 0x10) < uVar8) || (*(long *)(lVar15 + 0x18) != lVar7 + uVar8)) ||
           (*(long *)(lVar15 + 0x28) == lVar7)) {
          if (lVar7 != 0) {
            if (*(ulong *)(lVar15 + 0x10) < uVar8) {
              *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
              (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))
                        (*(long **)(lVar15 + 0x40),lVar7,uVar8);
            }
            else if (*(long *)(lVar15 + 0x18) == lVar7 + uVar8) {
              *(long *)(lVar15 + 0x18) = lVar7;
              FUN_032ce944();
            }
            else {
              FUN_032ceaf0(lVar15,lVar7,uVar8);
            }
          }
        }
        else {
          *(long *)(lVar15 + 0x18) = lVar7;
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


