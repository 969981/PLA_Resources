/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092a90c; name: FUN_0092a90c
 */


undefined8 FUN_0092a90c(long param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 local_54 [20];
  
  lVar8 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_4);
  lVar8 = *(long *)(lVar8 + 0x70);
  bVar3 = (*(byte *)(lVar8 + 0x168) & 7) != 0;
  bVar1 = *(byte *)(lVar8 + 0x2dc);
  uVar10 = (uint)bVar1;
  bVar2 = *(byte *)(lVar8 + 0x2dd);
  uVar12 = (uint)bVar2;
  bVar4 = bVar2 != 0x12;
  bVar5 = bVar2 == 2;
  if (*(char *)(lVar8 + 0x389) < '\0') {
    if (bVar1 != 0x12 && (bVar1 != 2 || !bVar3)) {
      if (bVar4 && (!bVar3 || !bVar5)) goto LAB_0092a99c;
    }
    else {
      if (bVar4 && (!bVar3 || !bVar5)) goto LAB_0092a998;
      uVar10 = 0x12;
    }
LAB_0092a9f8:
    uVar12 = uVar10;
    uVar10 = uVar12;
  }
  else if (bVar1 != 0x12 && (bVar1 != 2 || !bVar3)) {
    if (!bVar4 || bVar3 && bVar5) goto LAB_0092a9f8;
  }
  else {
    uVar10 = 0;
    if (bVar4 && (!bVar3 || !bVar5)) {
      uVar10 = uVar12;
    }
    uVar12 = uVar10;
LAB_0092a998:
    uVar10 = uVar12;
  }
LAB_0092a99c:
  uVar12 = uVar10 & 0x1f | (uVar12 & 0x1f) << 5 | (*(byte *)(lVar8 + 0x2de) & 0x1f) << 10;
  iVar6 = FUN_0293e2a0(0,uVar12);
  if (iVar6 < 1) {
    uVar16 = 0;
    iVar17 = 0;
    iVar7 = 0;
    if (iVar6 != 0) goto LAB_0092aa10;
  }
  else {
    iVar7 = iVar6;
  }
  iVar17 = iVar7;
  uVar16 = 1;
  local_54[0] = 0;
LAB_0092aa10:
  iVar6 = FUN_0293e2a0(1,uVar12);
  bVar3 = iVar17 == iVar6;
  if (iVar17 < iVar6) {
    uVar16 = 1;
    local_54[0] = 1;
  }
  else {
    iVar6 = iVar17;
    if (bVar3) {
      *(undefined1 *)((ulong)local_54 | uVar16) = 1;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(2,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 2;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      *(undefined1 *)((ulong)local_54 | uVar16) = 2;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(3,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 3;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 3;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(4,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 4;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 4;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(5,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 5;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 5;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(6,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 6;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 6;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(7,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 7;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 7;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(8,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 8;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 8;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(9,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 9;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 9;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(10,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 10;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 10;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(0xb,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 0xb;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 0xb;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(0xc,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 0xc;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 0xc;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(0xd,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 0xd;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 0xd;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(0xe,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 0xe;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 0xe;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar6 = FUN_0293e2a0(0xf,uVar12);
  bVar3 = iVar7 == iVar6;
  if (iVar7 < iVar6) {
    uVar16 = 1;
    local_54[0] = 0xf;
  }
  else {
    iVar6 = iVar7;
    if (bVar3) {
      local_54[uVar16] = 0xf;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  iVar7 = FUN_0293e2a0(0x10,uVar12);
  bVar3 = iVar6 == iVar7;
  if (iVar6 < iVar7) {
    uVar16 = 1;
    local_54[0] = 0x10;
  }
  else {
    iVar7 = iVar6;
    if (bVar3) {
      local_54[uVar16] = 0x10;
      uVar16 = (ulong)((int)uVar16 + 1);
    }
  }
  uVar10 = (uint)uVar16;
  iVar6 = FUN_0293e2a0(0x11,uVar12);
  if (iVar7 < iVar6) {
    uVar16 = 0;
    local_54[0] = 0x11;
  }
  else {
    if (iVar7 == iVar6) {
      local_54[uVar16] = 0x11;
      uVar10 = uVar10 + 1;
    }
    else if (uVar10 == 0) {
      return 0;
    }
    if (uVar10 < 2) {
      uVar16 = 0;
    }
    else {
      lVar8 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar10) & 0x1f) & uVar10) != 0) {
        lVar8 = 0x20;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 0xc0);
      uVar11 = lVar8 - LZCOUNT(uVar10);
      uVar16 = uVar11 >> 6;
      if ((uVar11 & 0x3f) != 0) {
        uVar16 = uVar16 + 1;
      }
      if (uVar11 < uVar16) {
        uVar11 = 0;
      }
      else {
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar11 / uVar16;
        }
        uVar11 = 0xffffffffffffffff >> (-uVar13 & 0x3f);
      }
      uVar13 = *(ulong *)(lVar9 + 0x70);
      uVar14 = *(ulong *)(lVar9 + 0x78);
      do {
        uVar15 = uVar13 ^ uVar14;
        uVar16 = uVar13 + uVar14;
        uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
        uVar16 = uVar16 & uVar11;
        uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
      } while (uVar10 <= (uint)uVar16);
      uVar16 = uVar16 & 0xffffffff;
      *(ulong *)(lVar9 + 0x70) = uVar13;
      *(ulong *)(lVar9 + 0x78) = uVar14;
    }
  }
  *param_2 = local_54[uVar16];
  return 1;
}


