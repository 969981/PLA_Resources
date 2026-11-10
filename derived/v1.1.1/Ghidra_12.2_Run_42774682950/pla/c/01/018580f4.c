/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018580f4; name: FUN_018580f4
 */


bool FUN_018580f4(long param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  char *__s;
  uint *__src;
  long *plVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined1 *puVar22;
  string local_98;
  undefined7 uStack_97;
  void *local_88;
  ulong local_80;
  ulong local_78;
  byte *local_70;
  undefined8 local_68;
  
  iVar2 = *(int *)(param_1 + 0x74);
  iVar3 = *(int *)(param_1 + 0x78);
  cVar5 = *(char *)(param_1 + 0x7c);
  cVar6 = *(char *)(param_1 + 0x7d);
  plVar17 = *(long **)(param_1 + 0x98);
  if (plVar17 == (long *)0x0) {
    plVar18 = *(long **)(param_1 + 0xd0);
  }
  else {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    plVar18 = *(long **)(param_1 + 0xd0);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar14 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    goto LAB_0185815c;
  }
  iVar10 = *(int *)((long)param_2 + uVar14);
  *(int *)(param_1 + 0x70) = iVar10;
  if (iVar10 - 4U < 2) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
      lVar16 = 0;
    }
    else {
      uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
      lVar16 = 0;
      if (uVar14 != 0) {
        puVar1 = (uint *)((long)param_2 + uVar14);
        lVar16 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    FUN_01858728(&local_80,lVar16 + 4);
    uVar9 = std::stof((string *)&local_80,(ulong *)0x0);
    *(undefined4 *)(param_1 + 0xa0) = uVar9;
    if ((local_80 & 1) == 0) goto LAB_0185815c;
  }
  else {
    if (1 < iVar10 - 2U) goto LAB_0185815c;
    lVar16 = (long)*param_2;
    uVar7 = *(ushort *)((long)param_2 - lVar16);
    if (uVar7 < 7) goto LAB_0185815c;
    uVar14 = (ulong)((ushort *)((long)param_2 - lVar16))[3];
    if (uVar14 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar14);
      FUN_00947cf8(&local_98,(long)puVar1 + (ulong)*puVar1 + 4);
      FUN_02a47560(&local_80,&local_98);
      *(ulong *)(param_1 + 0x80) = local_80;
      *(ulong *)(param_1 + 0x88) = local_78;
      plVar19 = *(long **)(param_1 + 0x98);
      *(byte **)(param_1 + 0x90) = local_70;
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      uVar15 = local_68;
      local_68 = 0;
      *(undefined8 *)(param_1 + 0x98) = uVar15;
      if ((long *)CONCAT71(uStack_97,local_98) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT71(uStack_97,local_98) + 0x20))();
      }
      lVar16 = (long)*param_2;
      uVar7 = *(ushort *)((long)param_2 - lVar16);
    }
    if ((uVar7 < 9) || (uVar14 = (ulong)*(ushort *)((long)param_2 + (8 - lVar16)), uVar14 == 0))
    goto LAB_0185815c;
    puVar1 = (uint *)((long)param_2 + uVar14);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    __src = puVar1 + 1;
    uVar4 = *puVar1;
    uVar14 = (ulong)uVar4;
    local_78 = 0;
    local_70 = (byte *)0x0;
    local_80 = 0;
    if (uVar4 < 0x17) {
      local_80 = (ulong)(byte)(uVar4 << 1);
      pbVar20 = (byte *)((ulong)&local_80 | 1);
      if (uVar4 != 0) goto LAB_018584e8;
    }
    else {
      uVar21 = uVar14 + 0x10 & 0x1fffffff0;
      pbVar20 = operator_new(uVar21);
      local_80 = uVar21 | 1;
      local_78 = uVar14;
      local_70 = pbVar20;
LAB_018584e8:
      memcpy(pbVar20,__src,uVar14);
    }
    pbVar20[uVar14] = 0;
    bVar13 = (byte)local_80._0_1_ & 1;
    uVar14 = (ulong)((byte)local_80._0_1_ >> 1);
    if ((local_80 & 1) != 0) {
      uVar14 = local_78;
    }
    if (uVar14 != 0) {
      pbVar20 = (byte *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pbVar20 = local_70;
      }
      do {
        if (9 < *pbVar20 - 0x30) goto LAB_0185857c;
        uVar14 = uVar14 - 1;
        pbVar20 = pbVar20 + 1;
      } while (uVar14 != 0);
      FUN_01858728(&local_98,__src);
      uVar9 = std::stoi(&local_98,(ulong *)0x0,10);
      *(undefined4 *)(param_1 + 0xdc) = uVar9;
      if (((byte)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      bVar13 = (byte)local_80._0_1_ & 1;
    }
LAB_0185857c:
    if (bVar13 == 0) goto LAB_0185815c;
  }
  operator_delete(local_70);
LAB_0185815c:
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    uVar9 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar9 = 0;
    if (uVar14 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    uVar9 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar9 = 0;
    if (uVar14 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    bVar8 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    bVar8 = false;
    if (uVar14 != 0) {
      bVar8 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x7c) = bVar8;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    bVar8 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
    bVar8 = false;
    if (uVar14 != 0) {
      bVar8 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0x7d) = bVar8;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    bVar8 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    bVar8 = false;
    if (uVar14 != 0) {
      bVar8 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0xa4) = bVar8;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
    uVar15 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    uVar15 = 0;
    if (uVar14 != 0) {
      uVar15 = *(undefined8 *)((long)param_2 + uVar14);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x17) {
    uVar9 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    uVar9 = 0;
    if (uVar14 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar9;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x19) ||
     (uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc], uVar14 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar22 = *(undefined1 **)PTR_DAT_0437a0d8;
    __s = *(char **)(PTR_DAT_0437a0d8 + 8);
    sVar11 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar19 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar14);
    uVar21 = (ulong)*puVar1;
    __s = (char *)((long)puVar1 + uVar21 + 4);
    puVar22 = &DAT_cbf29ce484222645;
    sVar11 = strlen(__s);
    bVar13 = *(byte *)((long)puVar1 + uVar21 + 4);
    if (bVar13 != 0) {
      pbVar20 = (byte *)((long)param_2 + uVar21 + uVar14 + 5);
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar13) * 0x100000001b3);
        bVar13 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (bVar13 != 0);
    }
    plVar19 = (long *)0x0;
  }
  *(size_t *)(param_1 + 200) = sVar11;
  plVar12 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar22;
  *(char **)(param_1 + 0xc0) = __s;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  *(long **)(param_1 + 0xd0) = plVar19;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) {
    bVar8 = false;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    bVar8 = false;
    if (uVar14 != 0) {
      bVar8 = *(char *)((long)param_2 + uVar14) != '\0';
    }
  }
  *(bool *)(param_1 + 0xd8) = bVar8;
  if (((*(int *)(param_1 + 0x74) == iVar2) && (*(int *)(param_1 + 0x78) == iVar3)) &&
     (*(char *)(param_1 + 0x7c) == cVar5)) {
    bVar8 = *(char *)(param_1 + 0x7d) != cVar6;
  }
  else {
    bVar8 = true;
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  return bVar8;
}


