/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01854ff0; name: FUN_01854ff0
 */


bool FUN_01854ff0(long param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  size_t sVar17;
  long *plVar18;
  byte bVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  char *__s;
  uint *__src;
  long *plVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined1 *puVar28;
  string local_98;
  undefined7 uStack_97;
  void *local_88;
  ulong local_80;
  ulong local_78;
  byte *local_70;
  undefined8 local_68;
  
  iVar2 = *(int *)(param_1 + 0x74);
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x80);
  iVar6 = *(int *)(param_1 + 0x84);
  iVar7 = *(int *)(param_1 + 0x88);
  iVar8 = *(int *)(param_1 + 0x8c);
  iVar9 = *(int *)(param_1 + 0x90);
  iVar10 = *(int *)(param_1 + 0x94);
  iVar11 = *(int *)(param_1 + 0x98);
  plVar23 = *(long **)(param_1 + 0xd0);
  if (plVar23 == (long *)0x0) {
    plVar24 = *(long **)(param_1 + 0x108);
  }
  else {
    (**(code **)(*plVar23 + 0x18))(plVar23);
    plVar24 = *(long **)(param_1 + 0x108);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar20 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    goto LAB_01855090;
  }
  iVar16 = *(int *)((long)param_2 + uVar20);
  *(int *)(param_1 + 0x70) = iVar16;
  if (iVar16 - 4U < 2) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
      lVar22 = 0;
    }
    else {
      uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
      lVar22 = 0;
      if (uVar20 != 0) {
        puVar1 = (uint *)((long)param_2 + uVar20);
        lVar22 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    FUN_018558d0(&local_80,lVar22 + 4);
    uVar15 = std::stof((string *)&local_80,(ulong *)0x0);
    *(undefined4 *)(param_1 + 0xd8) = uVar15;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    goto LAB_01855090;
  }
  if (1 < iVar16 - 2U) goto LAB_01855090;
  lVar22 = (long)*param_2;
  uVar13 = *(ushort *)((long)param_2 - lVar22);
  if (uVar13 < 7) goto LAB_01855090;
  uVar20 = (ulong)((ushort *)((long)param_2 - lVar22))[3];
  if (uVar20 != 0) {
    puVar1 = (uint *)((long)param_2 + uVar20);
    FUN_00947cf8(&local_98,(long)puVar1 + (ulong)*puVar1 + 4);
    FUN_02a47560(&local_80,&local_98);
    *(ulong *)(param_1 + 0xb8) = local_80;
    *(ulong *)(param_1 + 0xc0) = local_78;
    plVar25 = *(long **)(param_1 + 0xd0);
    *(byte **)(param_1 + 200) = local_70;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x20))();
    }
    uVar21 = local_68;
    local_68 = 0;
    *(undefined8 *)(param_1 + 0xd0) = uVar21;
    if ((long *)CONCAT71(uStack_97,local_98) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0x20))();
    }
    lVar22 = (long)*param_2;
    uVar13 = *(ushort *)((long)param_2 - lVar22);
  }
  if ((uVar13 < 9) || (uVar20 = (ulong)*(ushort *)((long)param_2 + (8 - lVar22)), uVar20 == 0))
  goto LAB_01855090;
  puVar1 = (uint *)((long)param_2 + uVar20);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  __src = puVar1 + 1;
  uVar12 = *puVar1;
  uVar20 = (ulong)uVar12;
  local_80 = 0;
  local_78 = 0;
  local_70 = (byte *)0x0;
  if (uVar12 < 0x17) {
    local_80 = (ulong)(byte)(uVar12 << 1);
    pbVar26 = (byte *)((ulong)&local_80 | 1);
    if (uVar12 != 0) goto LAB_01855640;
  }
  else {
    uVar27 = uVar20 + 0x10 & 0x1fffffff0;
    pbVar26 = operator_new(uVar27);
    local_80 = uVar27 | 1;
    local_78 = uVar20;
    local_70 = pbVar26;
LAB_01855640:
    memcpy(pbVar26,__src,uVar20);
  }
  pbVar26[uVar20] = 0;
  bVar19 = (byte)local_80._0_1_ & 1;
  uVar20 = (ulong)((byte)local_80._0_1_ >> 1);
  if ((local_80 & 1) != 0) {
    uVar20 = local_78;
  }
  if (uVar20 != 0) {
    pbVar26 = (byte *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pbVar26 = local_70;
    }
    do {
      if (9 < *pbVar26 - 0x30) goto LAB_018556d4;
      uVar20 = uVar20 - 1;
      pbVar26 = pbVar26 + 1;
    } while (uVar20 != 0);
    FUN_018558d0(&local_98,__src);
    uVar15 = std::stoi(&local_98,(ulong *)0x0,10);
    *(undefined4 *)(param_1 + 0x114) = uVar15;
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    bVar19 = (byte)local_80._0_1_ & 1;
  }
LAB_018556d4:
  if (bVar19 != 0) {
    operator_delete(local_70);
  }
LAB_01855090:
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x74) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x17) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x84) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x29) {
    uVar21 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14];
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = *(undefined8 *)((long)param_2 + uVar20);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar21;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x27) {
    uVar21 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x13];
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = *(undefined8 *)((long)param_2 + uVar20);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar21;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2b) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x15];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    bVar14 = false;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    bVar14 = false;
    if (uVar20 != 0) {
      bVar14 = *(char *)((long)param_2 + uVar20) != '\0';
    }
  }
  *(bool *)(param_1 + 0xdc) = bVar14;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2d) {
    uVar21 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x16];
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = *(undefined8 *)((long)param_2 + uVar20);
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = uVar21;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2f) {
    uVar15 = 0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x17];
    uVar15 = 0;
    if (uVar20 != 0) {
      uVar15 = *(undefined4 *)((long)param_2 + uVar20);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x21) {
    bVar14 = false;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10];
    bVar14 = false;
    if (uVar20 != 0) {
      bVar14 = *(char *)((long)param_2 + uVar20) != '\0';
    }
  }
  *(bool *)(param_1 + 0xec) = bVar14;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x23) {
    bVar14 = false;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x11];
    bVar14 = false;
    if (uVar20 != 0) {
      bVar14 = *(char *)((long)param_2 + uVar20) != '\0';
    }
  }
  *(bool *)(param_1 + 0xed) = bVar14;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x25) {
    bVar14 = false;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x12];
    bVar14 = false;
    if (uVar20 != 0) {
      bVar14 = *(char *)((long)param_2 + uVar20) != '\0';
    }
  }
  *(bool *)(param_1 + 0xee) = bVar14;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x31) ||
     (uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x18], uVar20 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar28 = *(undefined1 **)PTR_DAT_0437a0d8;
    __s = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar17 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar25 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar20);
    uVar27 = (ulong)*puVar1;
    __s = (char *)((long)puVar1 + uVar27 + 4);
    puVar28 = &DAT_cbf29ce484222645;
    sVar17 = strlen(__s);
    bVar19 = *(byte *)((long)puVar1 + uVar27 + 4);
    if (bVar19 != 0) {
      pbVar26 = (byte *)((long)param_2 + uVar27 + uVar20 + 5);
      do {
        puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar19) * 0x100000001b3);
        bVar19 = *pbVar26;
        pbVar26 = pbVar26 + 1;
      } while (bVar19 != 0);
    }
    plVar25 = (long *)0x0;
  }
  *(size_t *)(param_1 + 0x100) = sVar17;
  plVar18 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined1 **)(param_1 + 0xf0) = puVar28;
  *(char **)(param_1 + 0xf8) = __s;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  *(long **)(param_1 + 0x108) = plVar25;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x33) {
    bVar14 = false;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x19];
    bVar14 = false;
    if (uVar20 != 0) {
      bVar14 = *(char *)((long)param_2 + uVar20) != '\0';
    }
  }
  *(bool *)(param_1 + 0x110) = bVar14;
  if ((((((*(int *)(param_1 + 0x74) == iVar2) && (*(int *)(param_1 + 0x78) == iVar3)) &&
        (*(int *)(param_1 + 0x7c) == iVar4)) &&
       ((*(int *)(param_1 + 0x80) == iVar5 && (*(int *)(param_1 + 0x84) == iVar6)))) &&
      ((*(int *)(param_1 + 0x88) == iVar7 &&
       ((*(int *)(param_1 + 0x8c) == iVar8 && (*(int *)(param_1 + 0x90) == iVar9)))))) &&
     (*(int *)(param_1 + 0x94) == iVar10)) {
    bVar14 = *(int *)(param_1 + 0x98) != iVar11;
  }
  else {
    bVar14 = true;
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  return bVar14;
}


