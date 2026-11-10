/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f51b84; name: FUN_02f51b84
 */


void FUN_02f51b84(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ushort *puVar24;
  long *plVar25;
  long *plVar26;
  undefined4 local_68;
  uint local_64;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  uVar8 = FUN_02f4f580(*(undefined8 *)(param_1 + 0x10));
  lVar19 = *(long *)(param_2 + 0x10);
  lVar23 = *(long *)(lVar19 + 0x110);
  bVar2 = *(byte *)(lVar23 + 0x20) & 0x1f;
  if (bVar2 == 8) {
    return;
  }
  if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x70);
    while (puVar13 != (undefined8 *)0x0) {
      if (puVar13[1] == 0) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = puVar13[1];
      }
      (**(code **)*puVar13)(puVar13);
      (*DAT_0442d150)(0,puVar13);
      puVar13 = *(undefined8 **)(param_1 + 0x70);
    }
    FUN_02f5131c(param_1);
    return;
  }
  auVar6 = SEXT816((long)((ulong)DAT_042ab258 * (long)*(int *)(lVar23 + 0x28))) *
           SEXT816(0x20c49ba5e353f7cf);
  iVar3 = *(int *)(lVar23 + 0x3c);
  iVar12 = *(int *)(lVar23 + 0x30) - ((int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f));
  local_64 = uVar8 - iVar12;
  if ((int)local_64 < (int)uVar8) {
    local_64 = uVar8;
  }
  uVar8 = uVar8 - iVar3;
  if ((int)local_64 <= (int)uVar8) {
    local_64 = uVar8;
  }
  local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU);
  local_68 = *(undefined4 *)(lVar23 + 0x24);
  iVar9 = FUN_02f426f4(*(undefined8 *)(param_1 + 0x78),local_64,bVar2,&local_68,0,&local_64);
  if (iVar9 != 1) {
    return;
  }
  while( true ) {
    uVar7 = local_64;
    lVar20 = *(long *)(param_1 + 0x78);
    lVar22 = *(long *)(lVar20 + 0x100);
    iVar9 = *(int *)(lVar22 + 4);
    iVar10 = FUN_02f4aab0(lVar19,iVar9 + local_64);
    uVar1 = iVar10 + uVar8;
    if ((int)uVar1 <= (int)uVar7) break;
    local_68 = *(undefined4 *)(lVar23 + 0x24);
    local_64 = uVar1;
    iVar9 = FUN_02f426f4(lVar20,uVar1,*(byte *)(lVar23 + 0x20) & 0x1f,&local_68,0,&local_64);
    if (iVar9 != 1) {
      return;
    }
  }
  if (*(int *)(lVar22 + (ulong)*(uint *)(lVar20 + 0x108) * 0x10 + -0xc) - iVar9 <= (int)uVar7) {
    return;
  }
  iVar3 = uVar7 + iVar3;
  iVar12 = uVar7 + iVar12;
  iVar10 = iVar3 - iVar10;
  iVar9 = iVar12;
  if (iVar10 <= iVar12) {
    iVar9 = iVar10;
  }
  plVar15 = (long *)(param_1 + 0x70);
  plVar21 = (long *)*plVar15;
  if (plVar21 != (long *)0x0) {
    plVar25 = (long *)0x0;
    do {
      iVar11 = (**(code **)(*plVar21 + 0x10))(plVar21);
      if (iVar11 == 1) {
        if (((iVar9 <= (int)plVar21[2]) &&
            (*(long *)(plVar21[3] + 0x80) == *(long *)(param_2 + 0x10))) &&
           (*(uint *)(param_2 + 0x20) != 0)) {
          lVar20 = (ulong)*(uint *)(param_2 + 0x20) << 1;
          puVar24 = *(ushort **)(param_2 + 0x18);
          do {
            if ((uint)*puVar24 == (*(uint *)(plVar21[3] + 0x88) & 0xffff)) goto LAB_02f51dbc;
            lVar20 = lVar20 + -2;
            puVar24 = puVar24 + 1;
          } while (lVar20 != 0);
        }
LAB_02f51d60:
        plVar25 = plVar21;
        plVar21 = (long *)plVar21[1];
      }
      else {
        if (((iVar11 != 0) || ((int)plVar21[2] < iVar9)) ||
           (plVar21[3] != *(long *)(param_2 + 0x10))) goto LAB_02f51d60;
        if (*(uint *)(param_2 + 0x20) != 0) {
          lVar20 = (ulong)*(uint *)(param_2 + 0x20) << 1;
          puVar24 = *(ushort **)(param_2 + 0x18);
          do {
            if ((uint)*puVar24 == (*(uint *)(plVar21 + 4) & 0xffff)) goto LAB_02f51d60;
            lVar20 = lVar20 + -2;
            puVar24 = puVar24 + 1;
          } while (lVar20 != 0);
        }
LAB_02f51dbc:
        plVar26 = (long *)plVar21[1];
        plVar17 = plVar15;
        if (*(long **)(param_1 + 0x70) != plVar21) {
          plVar17 = plVar25 + 1;
        }
        *plVar17 = (long)plVar26;
        if (*(long **)(param_1 + 0x68) == plVar21) {
          *(long **)(param_1 + 0x68) = plVar25;
        }
        (**(code **)*plVar21)(plVar21);
        (*DAT_0442d150)(0,plVar21);
        plVar21 = plVar26;
      }
    } while (plVar21 != (long *)0x0);
  }
  lVar20 = *(long *)(param_1 + 0x30);
joined_r0x02f51e14:
  do {
    do {
      do {
        lVar22 = lVar20;
        if (lVar22 == 0) {
          if (*(int *)(param_2 + 0x20) != 0) {
            puVar24 = *(ushort **)(param_2 + 0x18);
            do {
              uVar5 = *puVar24;
              if ((long *)*plVar15 != (long *)0x0) {
                plVar21 = (long *)*plVar15;
                plVar25 = (long *)0x0;
                do {
                  while (((plVar17 = plVar21, iVar12 = (**(code **)(*plVar17 + 0x10))(plVar17),
                          iVar12 != 0 || (plVar17[3] != *(long *)(param_2 + 0x10))) ||
                         (*(uint *)(plVar17 + 4) != (uint)uVar5))) {
                    plVar21 = (long *)plVar17[1];
                    plVar25 = plVar17;
                    if ((long *)plVar17[1] == (long *)0x0) goto LAB_02f520c8;
                  }
                  if ((int)plVar17[2] <= iVar10) goto LAB_02f52154;
                  plVar21 = (long *)plVar17[1];
                  plVar26 = plVar15;
                  if (*(long **)(param_1 + 0x70) != plVar17) {
                    plVar26 = plVar25 + 1;
                  }
                  *plVar26 = (long)plVar21;
                  if (*(long **)(param_1 + 0x68) == plVar17) {
                    *(long **)(param_1 + 0x68) = plVar25;
                  }
                  (**(code **)*plVar17)(plVar17);
                  (*DAT_0442d150)(0,plVar17);
                } while (plVar21 != (long *)0x0);
              }
LAB_02f520c8:
              plVar21 = *(long **)(param_2 + 0x10);
              lVar20 = *(long *)(param_1 + 0x30);
              if (lVar20 != 0) {
                do {
                  if ((((*(long **)(lVar20 + 0x80) == plVar21) &&
                       (*(uint *)(lVar20 + 0x88) == (uint)uVar5)) &&
                      ((*(byte *)(lVar20 + 0x5a) & 0xe) == 0)) &&
                     (uVar14 = FUN_02f3c408(lVar20), (uVar14 & 1) == 0)) goto LAB_02f52154;
                  lVar20 = *(long *)(lVar20 + 8);
                } while (lVar20 != 0);
                plVar21 = *(long **)(param_2 + 0x10);
              }
              puVar13 = (undefined8 *)(*DAT_0442d138)(0,0x38);
              if (puVar13 != (undefined8 *)0x0) {
                *(int *)(puVar13 + 2) = iVar10;
                *puVar13 = &PTR_LAB_042af378;
                puVar13[3] = plVar21;
                *(uint *)(puVar13 + 4) = (uint)uVar5;
                uVar4 = *(undefined4 *)(lVar23 + 0x3c);
                *(undefined8 *)((long)puVar13 + 0x24) = *(undefined8 *)(lVar23 + 0x34);
                *(undefined4 *)((long)puVar13 + 0x2c) = uVar4;
                *(int *)(puVar13 + 6) = iVar3;
                (**(code **)(*plVar21 + 0x10))(plVar21);
                lVar20 = *plVar15;
                if (lVar20 == 0) {
LAB_02f5213c:
                  puVar13[1] = 0;
                  plVar21 = plVar15;
                  if (*(long *)(param_1 + 0x70) != 0) {
                    plVar21 = (long *)(*(long *)(param_1 + 0x68) + 8);
                  }
                  *plVar21 = (long)puVar13;
                  *(undefined8 **)(param_1 + 0x68) = puVar13;
                }
                else if (*(int *)(puVar13 + 2) < *(int *)(lVar20 + 0x10)) {
                  puVar13[1] = lVar20;
                  *plVar15 = (long)puVar13;
                }
                else {
                  do {
                    lVar22 = lVar20;
                    lVar20 = *(long *)(lVar22 + 8);
                    if (lVar20 == 0) goto LAB_02f5213c;
                  } while (*(int *)(lVar20 + 0x10) <= *(int *)(puVar13 + 2));
                  puVar13[1] = lVar20;
                  if (lVar22 == 0) {
                    *plVar15 = (long)puVar13;
                  }
                  else {
                    *(undefined8 **)(lVar22 + 8) = puVar13;
                  }
                }
              }
LAB_02f52154:
              puVar24 = puVar24 + 1;
            } while (puVar24 !=
                     (ushort *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2));
          }
          FUN_02f518a0(param_1,uVar7,lVar19);
          return;
        }
        lVar20 = *(long *)(lVar22 + 8);
      } while (((*(byte *)(lVar22 + 0x5a) & 0xe) != 0) ||
              (*(long *)(lVar22 + 0x80) != *(long *)(param_2 + 0x10)));
      if (*(uint *)(param_2 + 0x20) != 0) {
        lVar18 = (ulong)*(uint *)(param_2 + 0x20) << 1;
        puVar24 = *(ushort **)(param_2 + 0x18);
        do {
          if ((uint)*puVar24 == (*(uint *)(lVar22 + 0x88) & 0xffff)) goto joined_r0x02f51e14;
          lVar18 = lVar18 + -2;
          puVar24 = puVar24 + 1;
        } while (lVar18 != 0);
      }
      if ((long *)*plVar15 != (long *)0x0) {
        plVar21 = (long *)0x0;
        plVar25 = (long *)*plVar15;
        do {
          while ((iVar9 = (**(code **)(*plVar25 + 0x10))(plVar25), iVar9 == 1 &&
                 (plVar25[3] == lVar22))) {
            if ((int)plVar25[2] <= iVar12) goto joined_r0x02f51e14;
            plVar26 = (long *)plVar25[1];
            plVar17 = plVar15;
            if (*(long **)(param_1 + 0x70) != plVar25) {
              plVar17 = plVar21 + 1;
            }
            *plVar17 = (long)plVar26;
            if (*(long **)(param_1 + 0x68) == plVar25) {
              *(long **)(param_1 + 0x68) = plVar21;
            }
            (**(code **)*plVar25)(plVar25);
            (*DAT_0442d150)(0,plVar25);
            plVar25 = plVar26;
            if (plVar26 == (long *)0x0) goto LAB_02f51e88;
          }
          plVar17 = plVar25 + 1;
          plVar21 = plVar25;
          plVar25 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
LAB_02f51e88:
      puVar13 = (undefined8 *)(*DAT_0442d138)(0,0x30);
    } while (puVar13 == (undefined8 *)0x0);
    *(int *)(puVar13 + 2) = iVar12;
    *puVar13 = &PTR_LAB_042af3a0;
    puVar13[3] = lVar22;
    uVar16 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar23 + 0x30);
    puVar13[4] = uVar16;
    lVar22 = *plVar15;
    if (lVar22 != 0) {
      if (iVar12 < *(int *)(lVar22 + 0x10)) {
        puVar13[1] = lVar22;
      }
      else {
        do {
          lVar18 = lVar22;
          lVar22 = *(long *)(lVar18 + 8);
          if (lVar22 == 0) goto LAB_02f51ed4;
        } while (*(int *)(lVar22 + 0x10) <= iVar12);
        puVar13[1] = lVar22;
        if (lVar18 != 0) {
          *(undefined8 **)(lVar18 + 8) = puVar13;
          goto joined_r0x02f51e14;
        }
      }
      *plVar15 = (long)puVar13;
      goto joined_r0x02f51e14;
    }
LAB_02f51ed4:
    puVar13[1] = 0;
    plVar21 = plVar15;
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar21 = (long *)(*(long *)(param_1 + 0x68) + 8);
    }
    *plVar21 = (long)puVar13;
    *(undefined8 **)(param_1 + 0x68) = puVar13;
  } while( true );
}


