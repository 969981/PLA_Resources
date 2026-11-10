/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eebb6c; name: FUN_02eebb6c
 */


uint FUN_02eebb6c(long param_1,long param_2,undefined1 *param_3,short *param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  ushort *puVar15;
  ushort *puVar14;
  long *plVar16;
  short sVar17;
  uint uVar18;
  ulong uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  
  *param_3 = 1;
  plVar16 = *(long **)(param_1 + 0xe0);
  if (*(short *)(param_2 + 0x12) == 0) {
    plVar7 = plVar16;
    if (param_4 != (short *)0x0) {
      if ((*(byte *)(param_4 + 1) & 1) == 0) {
LAB_02eec01c:
        *param_3 = 0;
        return 0;
      }
      if ((*(byte *)(param_4 + 1) >> 1 & 1) == 0) {
        sVar17 = *param_4;
        *param_4 = sVar17 + -1;
        if ((short)(sVar17 + -1) == 0) goto LAB_02eec01c;
        plVar7 = *(long **)(param_1 + 0xe0);
      }
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))();
    *(undefined2 *)(param_2 + 0x12) = uVar4;
    uVar19 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
    sVar17 = (short)uVar19;
    memset(*(void **)(param_2 + 0x28),0,(uVar19 & 0xffffffff) + 7 >> 3);
    *(short *)(param_2 + 0x10) = sVar17;
    if ((*(byte *)(param_1 + 0x114) & 0x30) == 0x10) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
      uVar18 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        puVar20 = *(undefined2 **)(param_2 + 0x18);
        do {
          puVar21 = puVar20 + 1;
          iVar5 = (**(code **)(*plVar16 + 0x58))(plVar16,*puVar20);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar5;
          uVar18 = *(uint *)(param_2 + 0x20);
          puVar20 = puVar21;
        } while (puVar21 != (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)uVar18 * 2));
        sVar17 = *(short *)(param_2 + 0x10);
      }
    }
    else {
      uVar18 = *(uint *)(param_2 + 0x20);
    }
    *(short *)(param_2 + 0x10) = sVar17 - (short)uVar18;
    if ((*(byte *)(param_1 + 0x115) >> 3 & 1) != 0) goto LAB_02eebd60;
LAB_02eebbac:
    DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
    uVar3 = *(ushort *)(param_2 + 0x10);
    uVar18 = 0;
    uVar8 = (uint)((ulong)DAT_0440a190 >> 0x21);
    if (uVar3 != 0) {
      uVar18 = uVar8 / uVar3;
    }
    iVar5 = uVar8 - uVar18 * uVar3;
    bVar2 = *(byte *)(param_1 + 0x114);
    if ((bVar2 & 0x30) == 0) {
      if (*(short *)(param_1 + 0x112) != 0) goto LAB_02eebbf4;
LAB_02eebc00:
      iVar12 = 0;
      if (0 < iVar5) goto LAB_02eebc0c;
    }
    else {
      if ((**(byte **)(param_2 + 0x28) & 1) == 0) {
LAB_02eebbf4:
        if ((**(byte **)(param_2 + 0x30) & 1) == 0) goto LAB_02eebc00;
      }
      iVar12 = -1;
      if (-1 < iVar5) {
LAB_02eebc0c:
        if ((bVar2 & 0x30) == 0) {
          if (*(short *)(param_1 + 0x112) != 0) goto LAB_02eebc18;
LAB_02eebc24:
          iVar12 = iVar12 + 1;
        }
        else if ((**(byte **)(param_2 + 0x28) >> 1 & 1) == 0) {
LAB_02eebc18:
          if ((**(byte **)(param_2 + 0x30) >> 1 & 1) == 0) goto LAB_02eebc24;
        }
        uVar19 = 2;
        uVar18 = 2;
        while (iVar12 < iVar5) {
          uVar18 = (uint)uVar19;
          if ((bVar2 & 0x30) == 0) {
            if (*(short *)(param_1 + 0x112) != 0) {
              uVar8 = 1 << (ulong)(uVar18 & 7) &
                      (uint)*(byte *)(*(long *)(param_2 + 0x30) + (uVar19 >> 3 & 0x1fff));
              goto joined_r0x02eebdb0;
            }
LAB_02eebcd4:
            iVar12 = iVar12 + 1;
          }
          else {
            uVar19 = uVar19 >> 3 & 0x1fff;
            uVar8 = 1 << (ulong)(uVar18 & 7);
            if ((uVar8 & *(byte *)(*(long *)(param_2 + 0x28) + uVar19)) == 0) {
              uVar8 = uVar8 & *(byte *)(*(long *)(param_2 + 0x30) + uVar19);
joined_r0x02eebdb0:
              if (uVar8 == 0) goto LAB_02eebcd4;
            }
          }
          uVar18 = uVar18 + 1;
          uVar19 = (ulong)uVar18;
        }
        goto LAB_02eebc34;
      }
    }
    uVar18 = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x115) >> 3 & 1) == 0) goto LAB_02eebbac;
LAB_02eebd60:
    iVar5 = FUN_02eeec30(param_2);
    if (iVar5 < 0) {
      uVar18 = 0;
    }
    else {
      uVar19 = 0;
      iVar12 = -1;
      do {
        uVar18 = (uint)uVar19;
        if ((*(byte *)(param_1 + 0x114) & 0x30) == 0) {
          if (*(short *)(param_1 + 0x112) != 0) {
            uVar8 = 1 << (ulong)(uVar18 & 7) &
                    (uint)*(byte *)(*(long *)(param_2 + 0x30) + (uVar19 >> 3 & 0x1fff));
            goto joined_r0x02eec0c8;
          }
LAB_02eec048:
          iVar6 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar19);
          iVar12 = iVar6 + iVar12;
        }
        else {
          uVar10 = uVar19 >> 3 & 0x1fff;
          uVar8 = 1 << (ulong)(uVar18 & 7);
          if ((uVar8 & *(byte *)(*(long *)(param_2 + 0x28) + uVar10)) == 0) {
            uVar8 = uVar8 & *(byte *)(*(long *)(param_2 + 0x30) + uVar10);
joined_r0x02eec0c8:
            if (uVar8 == 0) goto LAB_02eec048;
          }
        }
        uVar18 = uVar18 + 1;
        uVar19 = (ulong)uVar18;
      } while (iVar12 < iVar5);
    }
  }
LAB_02eebc34:
  uVar18 = uVar18 - 1;
  if ((*(byte *)(param_1 + 0x114) & 0x30) == 0) {
    uVar19 = (ulong)(uVar18 >> 3) & 0x1fff;
    bVar2 = *(byte *)(*(long *)(param_2 + 0x28) + uVar19);
    uVar8 = 1 << (ulong)(uVar18 & 7);
    if ((uVar8 & bVar2) == 0) {
      *(byte *)(*(long *)(param_2 + 0x28) + uVar19) = bVar2 | (byte)uVar8;
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    }
    FUN_02eeb990(param_1,param_2,uVar18);
    return uVar18;
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x112);
  if (*(ushort *)(param_1 + 0x112) == 0) {
    uVar8 = 1;
  }
  iVar5 = (**(code **)(*plVar16 + 0x58))(plVar16,uVar18);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar5;
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
  uVar19 = (ulong)(uVar18 >> 3) & 0x1fff;
  bVar2 = (byte)(1 << (ulong)(uVar18 & 7));
  *(byte *)(*(long *)(param_2 + 0x28) + uVar19) =
       *(byte *)(*(long *)(param_2 + 0x28) + uVar19) | bVar2;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar9 = *(uint *)(param_2 + 0x24);
  if (uVar9 <= uVar1) {
    iVar5 = uVar9 + (uVar9 >> 1);
    if (uVar9 == 0) {
      iVar5 = 1;
    }
    uVar9 = iVar5 + uVar9;
    lVar13 = (*DAT_0442d148)(0,*(undefined8 *)(param_2 + 0x18),(ulong)uVar9 << 1);
    if (lVar13 == 0) goto LAB_02eec014;
    *(long *)(param_2 + 0x18) = lVar13;
    *(uint *)(param_2 + 0x24) = uVar9;
  }
  if (uVar1 < uVar9) {
    puVar20 = (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
    if (puVar20 != (undefined2 *)0x0) {
      *puVar20 = (short)uVar18;
      *(byte *)(*(long *)(param_2 + 0x30) + uVar19) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar19) | bVar2;
      iVar5 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
      uVar9 = *(uint *)(param_2 + 0x20);
      if ((iVar5 - 1U & 0xffff) <= uVar8) {
        uVar8 = iVar5 - 1U & 0xffff;
      }
      if (uVar9 <= uVar8) {
        return uVar18;
      }
      puVar11 = *(ushort **)(param_2 + 0x18);
      lVar13 = (ulong)uVar9 - 1;
      uVar3 = *puVar11;
      if (0 < lVar13) {
        *puVar11 = puVar11[1];
        if (1 < lVar13) {
          puVar14 = puVar11 + 1;
          do {
            puVar15 = puVar14 + 1;
            *puVar14 = *puVar15;
            puVar14 = puVar15;
          } while (puVar15 < puVar11 + lVar13);
        }
        uVar9 = *(uint *)(param_2 + 0x20);
      }
      *(uint *)(param_2 + 0x20) = uVar9 - 1;
      uVar8 = 1 << (ulong)(uVar3 & 7);
      uVar19 = (ulong)(uVar3 >> 3);
      *(byte *)(*(long *)(param_2 + 0x30) + uVar19) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar19) & ((byte)uVar8 ^ 0xff);
      if ((uVar8 & *(byte *)(*(long *)(param_2 + 0x28) + uVar19)) == 0) {
        iVar5 = (**(code **)(*plVar16 + 0x58))(plVar16);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar5;
        *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
        return uVar18;
      }
      return uVar18;
    }
  }
LAB_02eec014:
  *(undefined2 *)(param_2 + 0x12) = 0;
  return uVar18;
}


