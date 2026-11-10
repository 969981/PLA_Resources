/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333b190; name: FUN_0333b190
 */


ulong FUN_0333b190(long param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined1 *local_478;
  undefined8 local_470;
  undefined1 local_468 [1032];
  
  puVar4 = PTR_PTR_0434a080;
  uVar16 = *(uint *)(param_1 + 0x20);
  local_478 = local_468;
  local_470 = -0x7ffffc0000000000;
  if ((int)uVar16 < 0x401) {
    local_470._0_4_ = 0;
    bVar5 = SBORROW4(0,uVar16);
    iVar12 = -uVar16;
    bVar6 = uVar16 == 0;
    if ((int)uVar16 < 1) {
LAB_0333b338:
      if (!bVar6 && iVar12 < 0 == bVar5) {
        local_470 = CONCAT44(local_470._4_4_,uVar16);
      }
      goto LAB_0333b204;
    }
  }
  else {
    if ((int)uVar16 < 0x40000000) {
      uVar11 = 0x800;
    }
    else {
      FUN_032bd0a8(uVar16);
      uVar11 = (local_470._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar11) {
        uVar11 = 0x3fffffff;
      }
    }
    uVar10 = uVar16;
    if ((int)uVar16 <= (int)uVar11) {
      uVar10 = uVar11;
    }
    local_478 = (undefined1 *)FUN_032bd1d4(puVar4,uVar10,1,local_478,0,(long)&local_470 + 4);
    bVar5 = SBORROW4((uint)local_470,uVar16);
    iVar12 = (uint)local_470 - uVar16;
    bVar6 = (uint)local_470 == uVar16;
    if ((int)uVar16 <= (int)(uint)local_470) goto LAB_0333b338;
  }
  lVar15 = (long)(int)(uint)local_470;
  uVar11 = ~(uint)local_470;
  local_470 = CONCAT44(local_470._4_4_,uVar16);
  memset(local_478 + lVar15,1,(ulong)(uVar16 + uVar11) + 1);
LAB_0333b204:
  if (0 < *(int *)(param_1 + 0x330)) {
    lVar13 = 0;
    lVar15 = 0;
    do {
      lVar15 = lVar15 + 1;
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x328) + lVar13);
      lVar13 = lVar13 + 4;
      uVar16 = uVar16 - (byte)local_478[uVar3];
      local_478[uVar3] = 0;
    } while (lVar15 < *(int *)(param_1 + 0x330));
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  if (uVar16 == 1) {
    if (0 < (int)uVar11) {
      uVar17 = 0;
      do {
        if (local_478[uVar17] != '\0') goto LAB_0333b3e4;
        uVar17 = uVar17 + 1;
      } while ((long)(int)uVar11 != uVar17);
    }
    uVar17 = 0;
  }
  else {
    puVar18 = (uint *)(param_1 + 0x24);
    uVar10 = *puVar18;
    uVar16 = uVar11 + 1;
    if ((int)uVar11 < (int)(uVar10 & 0x3fffffff)) {
      lVar15 = *(long *)(param_1 + 0x18);
      uVar10 = uVar11;
    }
    else {
      uVar19 = *(undefined8 *)(param_1 + 0x18);
      if (0x3ffffffe < (int)uVar11) {
        FUN_032bd0a8(uVar16);
        uVar10 = *puVar18;
      }
      uVar10 = (uVar10 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uVar8 = uVar16;
      if ((int)uVar16 <= (int)uVar10) {
        uVar8 = uVar10;
      }
      lVar15 = FUN_032bd1d4(puVar4,uVar8,0x18,uVar19,(ulong)uVar11,puVar18);
      uVar10 = *(uint *)(param_1 + 0x20);
      *(long *)(param_1 + 0x18) = lVar15;
    }
    puVar14 = (undefined8 *)(lVar15 + (long)(int)uVar10 * 0x18);
    *(uint *)(param_1 + 0x20) = uVar16;
    *(undefined2 *)(puVar14 + 1) = 1;
    *puVar14 = 0;
    *(undefined1 *)((long)puVar14 + 10) = 0x40;
    puVar14[2] = 0;
    iVar12 = *(int *)(param_1 + 0x20);
    if (iVar12 < 2) {
      bVar20 = 0;
    }
    else {
      lVar15 = 0;
      bVar20 = 0;
      lVar13 = 10;
      do {
        bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + lVar13);
        if (bVar20 <= bVar2) {
          bVar20 = bVar2;
        }
        if (local_478[lVar15] != '\0') {
          uVar16 = *(uint *)(param_1 + 0x334);
          iVar9 = *(int *)(param_1 + 0x330);
          iVar12 = iVar9 + 1;
          if (iVar9 < (int)(uVar16 & 0x3fffffff)) {
            lVar7 = *(long *)(param_1 + 0x328);
          }
          else {
            uVar19 = *(undefined8 *)(param_1 + 0x328);
            if (0x3ffffffe < iVar9) {
              FUN_032bd0a8(iVar12);
              uVar16 = *(uint *)(param_1 + 0x334);
            }
            uVar16 = (uVar16 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar16) {
              uVar16 = 0x3fffffff;
            }
            if ((int)uVar16 < iVar12) {
              uVar16 = iVar9 + 1;
            }
            lVar7 = FUN_032bd1d4(puVar4,uVar16,4,uVar19,iVar9,(uint *)(param_1 + 0x334));
            iVar9 = *(int *)(param_1 + 0x330);
            *(long *)(param_1 + 0x328) = lVar7;
          }
          puVar1 = (undefined2 *)(lVar7 + (long)iVar9 * 4);
          *(int *)(param_1 + 0x330) = iVar12;
          *puVar1 = (short)lVar15;
          puVar1[1] = (short)uVar11;
          iVar12 = *(int *)(param_1 + 0x20);
        }
        lVar15 = lVar15 + 1;
        lVar13 = lVar13 + 0x18;
      } while (lVar15 < iVar12 + -1);
    }
    uVar17 = (ulong)uVar11 & 0xffff;
    *(byte *)(*(long *)(param_1 + 0x18) + uVar17 * 0x18 + 10) = bVar20;
  }
LAB_0333b3e4:
  lVar15 = local_470;
  uVar16 = local_470._4_4_;
  local_470 = (ulong)local_470._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_478 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_478,uVar16 & 0x3fffffff);
  }
  return uVar17 & 0xffffffff;
}


