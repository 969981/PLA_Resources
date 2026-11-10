/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeaccc; name: FUN_02eeaccc
 */


ulong FUN_02eeaccc(long *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ushort uVar20;
  undefined **ppuVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 local_6c;
  uint *local_68;
  
  local_6c = param_3;
  local_68 = param_2;
  iVar13 = (**(code **)(*param_1 + 0x88))();
  uVar12 = DAT_0440a148;
  if (iVar13 != 2) {
    lVar18 = param_1[2];
    uVar15 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_02e96d3c(uVar12,(int)lVar18,2,uVar15);
    return 0x5b;
  }
  local_68 = param_2 + 1;
  uVar16 = FUN_02ed7ba4(param_1,&local_68,&local_6c,0);
  if ((int)uVar16 != 1) {
    return uVar16;
  }
  sVar9 = (short)*local_68;
  sVar10 = *(short *)((long)local_68 + 2);
  uVar24 = local_68[1];
  *(short *)((long)param_1 + 0x10c) = sVar9;
  sVar11 = 0;
  if (sVar9 != 0) {
    sVar11 = sVar10;
  }
  sVar10 = 0;
  if (sVar9 != 0) {
    sVar10 = (short)uVar24;
  }
  *(short *)((long)param_1 + 0x10e) = sVar11;
  *(short *)(param_1 + 0x22) = sVar10;
  uVar15 = *(undefined4 *)((long)local_68 + 6);
  uVar4 = *(undefined4 *)((long)local_68 + 10);
  uVar5 = *(undefined4 *)((long)local_68 + 0xe);
  sVar11 = *(short *)((long)local_68 + 0x12);
  uVar24 = local_68[5];
  bVar6 = *(byte *)((long)local_68 + 0x15);
  pbVar1 = (byte *)((long)local_68 + 0x16);
  bVar7 = *(byte *)((long)local_68 + 0x17);
  local_68 = local_68 + 6;
  puVar2 = (ushort *)((long)param_1 + 0x115);
  if ((*puVar2 & 7) == (ushort)*pbVar1) goto LAB_02eeae2c;
  uVar20 = *puVar2 & 0xfff8 | *pbVar1 & 7;
  *puVar2 = uVar20;
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
    uVar20 = *puVar2;
  }
  plVar17 = (long *)(*DAT_0442d138)(2,0x18);
  if ((uVar20 & 7) == 1) {
    if (plVar17 != (long *)0x0) {
      ppuVar21 = &PTR_LAB_042ab038;
      goto LAB_02eeae00;
    }
  }
  else if (plVar17 != (long *)0x0) {
    ppuVar21 = &PTR_LAB_042aafb8;
LAB_02eeae00:
    *plVar17 = (long)ppuVar21;
    plVar17[1] = 0;
    plVar17[2] = 0;
  }
  param_1[0x1c] = (long)plVar17;
  if (plVar17 == (long *)0x0) {
    uVar16 = 2;
  }
  else {
    uVar14 = (**(code **)(*plVar17 + 0x10))();
    if (uVar14 == 1) {
      FUN_02eec68c(param_1);
LAB_02eeae2c:
      *(undefined4 *)(param_1 + 0x20) = uVar15;
      *(undefined4 *)((long)param_1 + 0x104) = uVar4;
      *(undefined4 *)(param_1 + 0x21) = uVar5;
      if (*(short *)((long)param_1 + 0x112) != sVar11) {
        *(short *)((long)param_1 + 0x112) = sVar11;
        FUN_02eec68c(param_1);
      }
      bVar8 = *(byte *)((long)param_1 + 0x114);
      if ((bVar8 & 0xf) != (byte)uVar24) {
        *(byte *)((long)param_1 + 0x114) = bVar8 & 0xf0 | (byte)uVar24 & 0xf;
        FUN_02eec68c(param_1);
        bVar8 = *(byte *)((long)param_1 + 0x114);
      }
      uVar24 = bVar7 & 2;
      if ((bVar8 >> 4 & 3) != bVar6) {
        *(byte *)((long)param_1 + 0x114) = bVar8 & 0xcf | (bVar6 & 3) << 4;
        FUN_02eec68c(param_1);
      }
      uVar20 = *puVar2;
      uVar14 = bVar7 & 8;
      if ((uVar20 >> 4 & 1) != uVar24 >> 1) {
        *puVar2 = uVar20 & 0xffef | (ushort)(uVar24 << 3);
        FUN_02eec68c(param_1);
        uVar20 = *puVar2;
      }
      uVar24 = (bVar7 & 4) << 3;
      uVar3 = bVar7 & 0x10;
      uVar23 = uVar20 & 0xffffffdf | uVar24;
      *puVar2 = (ushort)uVar23;
      if ((uVar20 >> 6 & 1) != uVar14 >> 3) {
        *puVar2 = uVar20 & 0xff9f | (ushort)uVar24 | (ushort)(uVar14 << 3);
        FUN_02eec68c(param_1);
        uVar23 = (uint)*puVar2;
      }
      if ((uVar23 >> 7 & 1) != uVar3 >> 4) {
        *puVar2 = (ushort)uVar23 & 0xff7f | (ushort)(uVar3 << 3);
        FUN_02eec68c(param_1);
      }
      uVar24 = *local_68;
      uVar16 = (ulong)uVar24;
      puVar22 = local_68 + 1;
      if (uVar24 != 0) {
        local_68 = local_68 + 1;
        lVar18 = (*DAT_0442d140)(0,uVar16 << 3,4);
        param_1[0x1a] = lVar18;
        if (lVar18 == 0) {
          return 0x34;
        }
        *(uint *)((long)param_1 + 0xdc) = uVar24;
        do {
          uVar24 = *local_68;
          local_68 = local_68 + 1;
          uVar19 = (**(code **)(*param_1 + 0x58))(param_1,uVar24);
          iVar13 = (int)uVar19;
          if (iVar13 != 0xf && iVar13 != 1) {
            return uVar19;
          }
          uVar24 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar24;
        } while (uVar24 != 0);
        if (iVar13 != 1) {
          return uVar19;
        }
        puVar22 = local_68;
      }
      local_68 = (uint *)((long)puVar22 + 2);
      uVar24 = (uint)(ushort)*puVar22;
      if (uVar24 != 0) {
        do {
          uVar24 = uVar24 - 1;
          puVar22 = local_68 + 2;
          uVar3 = *local_68;
          uVar14 = local_68[1];
          uVar20 = *puVar2;
          if (uVar14 != 50000) {
            uVar20 = uVar20 | 8;
            *puVar2 = uVar20;
          }
          local_68 = puVar22;
          if (((uVar20 & 7) != 1) &&
             (uVar16 = (**(code **)(*(long *)param_1[0x1c] + 0x48))((long *)param_1[0x1c],uVar3),
             (uVar16 & 1) != 0)) {
            return 0x23;
          }
          uVar16 = (**(code **)(*(long *)param_1[0x1c] + 0x30))((long *)param_1[0x1c],uVar3,uVar14);
          if ((int)uVar16 == 1) {
            FUN_02eec68c(param_1);
          }
          else if ((int)uVar16 != 0xf) {
            return uVar16;
          }
        } while (uVar24 != 0);
      }
      return 1;
    }
    uVar16 = (ulong)uVar14;
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
    param_1[0x1c] = 0;
  }
  FUN_02eec68c(param_1);
  return uVar16;
}


