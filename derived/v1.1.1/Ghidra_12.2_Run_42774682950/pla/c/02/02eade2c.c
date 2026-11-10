/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eade2c; name: FUN_02eade2c
 */


int FUN_02eade2c(long param_1,long param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  undefined4 local_70;
  int local_6c;
  ushort *local_68;
  
  iVar10 = *(int *)(param_2 + 4);
  uVar23 = *(uint *)(param_2 + 8);
  puVar14 = (ushort *)(param_2 + 0xc);
  if (iVar10 != -1) {
    if ((DAT_0440a430 == 0) || (*DAT_0440a428 == iVar10)) {
      piVar21 = DAT_0440a428;
    }
    else {
      lVar20 = (ulong)DAT_0440a430 * 0x20;
      piVar22 = DAT_0440a428;
      do {
        lVar20 = lVar20 + -0x20;
        if (lVar20 == 0) goto LAB_02eae284;
        piVar1 = piVar22 + 8;
        piVar21 = piVar22 + 8;
        piVar22 = piVar22 + 8;
      } while (*piVar1 != iVar10);
    }
    if ((piVar21 != DAT_0440a428 + (ulong)DAT_0440a430 * 8) &&
       (*(code **)(piVar21 + 4) != (code *)0x0)) {
      local_6c = param_3;
      local_68 = puVar14;
      plVar11 = (long *)(**(code **)(piVar21 + 4))(&PTR_PTR_042a9240);
      if (plVar11 != (long *)0x0) {
        iVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,&PTR_PTR_042a9240,puVar14,(ulong)uVar23);
        if (iVar9 != 1) {
          (**(code **)(*plVar11 + 0x28))(plVar11,&PTR_PTR_042a9240);
          return iVar9;
        }
        plVar12 = *(long **)(param_1 + 0x38);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12,&PTR_PTR_042a9240);
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        *(int *)(param_1 + 0x30) = iVar10;
        *(long **)(param_1 + 0x38) = plVar11;
        goto LAB_02eadf10;
      }
    }
LAB_02eae284:
    *(int *)(param_1 + 0x30) = iVar10;
  }
LAB_02eadf10:
  pbVar18 = (byte *)((long)puVar14 + (ulong)uVar23);
  local_6c = param_3 - uVar23;
  local_68 = (ushort *)(pbVar18 + 1);
  bVar4 = *pbVar18;
  if (bVar4 == 0) {
    uVar6 = *local_68;
  }
  else {
    lVar20 = (*DAT_0442d138)(0,(ulong)bVar4 << 3);
    *(long *)(param_1 + 0x40) = lVar20;
    if (lVar20 == 0) {
      return 0x34;
    }
    *(uint *)(param_1 + 0x4c) = (uint)bVar4;
    local_68 = (ushort *)(pbVar18 + 6);
    local_70 = *(undefined4 *)(pbVar18 + 2);
    FUN_02ea8e34(param_1 + 0x40,pbVar18[1],&local_70);
    uVar23 = (uint)bVar4;
    puVar14 = local_68;
    while (uVar23 = uVar23 - 1, uVar23 != 0) {
      local_68 = (ushort *)((long)puVar14 + 5);
      local_70 = *(undefined4 *)((long)puVar14 + 1);
      FUN_02ea8e34(param_1 + 0x40,(byte)*puVar14,&local_70);
      puVar14 = local_68;
    }
    uVar6 = *puVar14;
    local_68 = puVar14;
  }
  if (uVar6 != 0) {
    lVar20 = (*DAT_0442d138)(0,(ulong)uVar6 * 0x28);
    *(long *)(param_1 + 0x50) = lVar20;
    if (lVar20 == 0) {
      return 0x34;
    }
    *(uint *)(param_1 + 0x5c) = (uint)uVar6;
  }
  puVar14 = local_68 + 1;
  uVar6 = *local_68;
  local_68 = puVar14;
  if (uVar6 != 0) {
    uVar23 = 0;
    do {
      pbVar15 = (byte *)((long)puVar14 + 7);
      uVar3 = *(undefined4 *)puVar14;
      uVar8 = puVar14[2];
      bVar4 = *(byte *)((long)puVar14 + 5);
      uVar19 = (byte)puVar14[3] & 0x7f;
      pbVar18 = pbVar15;
      if ((char)(byte)puVar14[3] < '\0') {
        do {
          pbVar15 = pbVar18 + 1;
          bVar5 = *pbVar18;
          uVar19 = bVar5 & 0x7f | uVar19 << 7;
          pbVar18 = pbVar15;
        } while ((char)bVar5 < '\0');
      }
      puVar14 = (ushort *)(pbVar15 + 7);
      iVar10 = *(int *)pbVar15;
      bVar5 = pbVar15[4];
      uVar7 = *(ushort *)(pbVar15 + 5);
      uVar25 = (ulong)uVar7;
      puVar13 = *(undefined8 **)(param_1 + 0x50);
      uVar26 = *(uint *)(param_1 + 0x58);
      local_68 = puVar14;
      if (uVar26 != 0) {
        puVar28 = puVar13;
        do {
          if (((uint)*(ushort *)((long)puVar28 + 6) == (uVar19 & 0xffff)) &&
             (*(int *)(puVar28 + 1) == iVar10)) {
            if (puVar28[2] != 0) {
              (*DAT_0442d150)(0);
              puVar28[2] = 0;
            }
            puVar28[3] = 0;
            puVar13 = *(undefined8 **)(param_1 + 0x50);
            uVar26 = *(uint *)(param_1 + 0x58);
            puVar24 = puVar28;
            if (puVar28 < puVar13 + (ulong)uVar26 * 5 + -5) {
              do {
                puVar17 = puVar24 + 5;
                *puVar24 = *puVar17;
                puVar24[4] = puVar24[9];
                puVar24[3] = puVar24[8];
                puVar24[2] = puVar24[7];
                puVar24[1] = puVar24[6];
                puVar24 = puVar17;
              } while (puVar17 < puVar13 + (ulong)uVar26 * 5 + -5);
              uVar26 = *(uint *)(param_1 + 0x58);
              puVar13 = *(undefined8 **)(param_1 + 0x50);
            }
            uVar26 = uVar26 - 1;
            *(uint *)(param_1 + 0x58) = uVar26;
          }
          else {
            puVar28 = puVar28 + 5;
          }
        } while (puVar13 + (ulong)uVar26 * 5 != puVar28);
      }
      uVar2 = *(uint *)(param_1 + 0x5c);
      if (uVar2 <= uVar26) {
        iVar9 = uVar2 + (uVar2 >> 1);
        if (uVar2 == 0) {
          iVar9 = 1;
        }
        uVar2 = iVar9 + uVar2;
        puVar13 = (undefined8 *)(*DAT_0442d148)(0,puVar13,(ulong)uVar2 * 0x28);
        if (puVar13 == (undefined8 *)0x0) {
          return 0x34;
        }
        *(undefined8 **)(param_1 + 0x50) = puVar13;
        *(uint *)(param_1 + 0x5c) = uVar2;
      }
      if (uVar2 <= uVar26) {
        return 0x34;
      }
      uVar16 = (ulong)*(uint *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) + 1;
      if (puVar13 + uVar16 * 5 == (undefined8 *)0x0) {
        return 0x34;
      }
      plVar11 = puVar13 + uVar16 * 5 + 2;
      *plVar11 = 0;
      *(undefined4 *)(puVar13 + uVar16 * 5 + 4) = 1;
      puVar13[uVar16 * 5 + 3] = 0;
      *(int *)(puVar13 + uVar16 * 5 + 1) = iVar10;
      *(undefined4 *)(puVar13 + uVar16 * 5) = uVar3;
      *(short *)((long)puVar13 + uVar16 * 0x28 + 6) = (short)uVar19;
      *(byte *)((long)puVar13 + uVar16 * 0x28 + 4) = (byte)uVar8;
      *(byte *)((long)puVar13 + uVar16 * 0x28 + 5) = bVar4;
      if (uVar7 != 0) {
        puVar27 = (uint *)((long)puVar13 + uVar16 * 0x28 + 0x1c);
        *puVar27 = 0;
        *(undefined4 *)(puVar13 + uVar16 * 5 + 4) = 1;
        piVar21 = (int *)(puVar13 + uVar16 * 5 + 3);
        *piVar21 = (int)(uVar25 + 2);
        lVar20 = (*DAT_0442d138)(0,(uVar25 + 2) * 0x14);
        *plVar11 = lVar20;
        if (lVar20 == 0) {
          *piVar21 = 0;
          return 0x34;
        }
        *puVar27 = (uint)bVar5;
        memcpy((void *)(lVar20 + 0xc),puVar14,uVar25 * 0xc);
        *(undefined4 *)(*plVar11 + 8) = 9;
        *(undefined4 *)*plVar11 = 0xff7fffff;
        *(undefined4 *)(*plVar11 + 4) = *(undefined4 *)(*plVar11 + 0x10);
        *(undefined4 *)(*plVar11 + (ulong)(*piVar21 - 1) * 0xc + 8) = 9;
        *(undefined4 *)(*plVar11 + (ulong)(*piVar21 - 1) * 0xc) = 0x7f7fffff;
        *(undefined4 *)(*plVar11 + (ulong)(*piVar21 - 1) * 0xc + 4) =
             *(undefined4 *)(*plVar11 + (ulong)(*piVar21 - 2) * 0xc + 4);
        FUN_02e9b180(plVar11);
      }
      if (*(uint *)(param_1 + 0x68) != 0) {
        pbVar18 = (byte *)(*(long *)(param_1 + 0x60) + 2);
        lVar20 = (ulong)*(uint *)(param_1 + 0x68) << 3;
        do {
          if (uVar19 == *(ushort *)(pbVar18 + -2)) {
            *pbVar18 = bVar4;
            break;
          }
          pbVar18 = pbVar18 + 8;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
      }
      uVar23 = uVar23 + 1;
      puVar14 = local_68 + uVar25 * 6;
      local_6c = local_6c + (uint)uVar7 * -0xc;
      local_68 = puVar14;
    } while (uVar23 != uVar6);
  }
  iVar10 = (**(code **)(*(long *)(param_1 + 0x18) + 0x70))
                     ((long *)(param_1 + 0x18),&local_68,&local_6c);
  if (iVar10 != 1) {
    return iVar10;
  }
  uVar6 = *local_68;
  if (uVar6 == 0) {
    return 1;
  }
  local_68 = local_68 + 1;
  lVar20 = (*DAT_0442d138)(0,(ulong)uVar6 << 3);
  *(long *)(param_1 + 0x60) = lVar20;
  if (lVar20 == 0) {
    return 0x34;
  }
  uVar23 = 0;
  *(uint *)(param_1 + 0x6c) = (uint)uVar6;
  do {
    pbVar15 = (byte *)((long)local_68 + 1);
    uVar19 = (byte)*local_68 & 0x7f;
    pbVar18 = pbVar15;
    if ((char)(byte)*local_68 < '\0') {
      do {
        pbVar15 = pbVar18 + 1;
        bVar4 = *pbVar18;
        uVar19 = bVar4 & 0x7f | uVar19 << 7;
        pbVar18 = pbVar15;
      } while ((char)bVar4 < '\0');
    }
    local_68 = (ushort *)(pbVar15 + 5);
    bVar4 = *pbVar15;
    uVar3 = *(undefined4 *)(pbVar15 + 1);
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar26 = *(uint *)(param_1 + 0x6c);
    if (uVar2 < uVar26) {
joined_r0x02eae4c4:
      if (uVar2 < uVar26) {
        uVar26 = *(uint *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = uVar26 + 1;
        puVar27 = (uint *)(*(long *)(param_1 + 0x60) + (ulong)uVar26 * 8);
        if (puVar27 != (uint *)0x0) {
          lVar20 = *(long *)(param_1 + 0x60) + (ulong)uVar26 * 8;
          *(undefined1 *)(lVar20 + 2) = 0;
          *puVar27 = uVar19 & 0xffff | (uint)bVar4 << 0x10;
          *(undefined4 *)(lVar20 + 4) = uVar3;
        }
      }
    }
    else {
      iVar10 = uVar26 + (uVar26 >> 1);
      if (uVar26 == 0) {
        iVar10 = 1;
      }
      uVar26 = uVar26 + iVar10;
      lVar20 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x60),(ulong)uVar26 << 3);
      if (lVar20 != 0) {
        *(long *)(param_1 + 0x60) = lVar20;
        *(uint *)(param_1 + 0x6c) = uVar26;
        goto joined_r0x02eae4c4;
      }
    }
    uVar23 = uVar23 + 1;
    if (uVar23 == uVar6) {
      return 1;
    }
  } while( true );
}


