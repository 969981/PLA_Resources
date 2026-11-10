/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c6f4ac; name: FUN_01c6f4ac
 */


void FUN_01c6f4ac(long param_1,int *param_2)

{
  char *__s;
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar7 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar7);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar14 = &DAT_cbf29ce484222645;
  sVar5 = strlen((char *)(lVar9 + 4));
  bVar2 = *(byte *)(lVar9 + 4);
  puVar13 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)(lVar9 + 5);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar2 != 0);
  }
  *(size_t *)(param_1 + 200) = sVar5;
  plVar6 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar13;
  *(char **)(param_1 + 0xc0) = (char *)(lVar9 + 4);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    piVar12 = (int *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    piVar12 = (int *)0x0;
    if (uVar7 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar7);
      piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar7 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar12 + uVar7);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
  }
  iVar4 = strcmp((char *)(lVar9 + 4),"Box");
  uVar17 = 1;
  if (iVar4 == 0) {
    uVar17 = 2;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar17;
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar8 < 0xb) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)0x0;
    if ((ulong)puVar8[5] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar8[5]);
      piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 7) ||
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar7 == 0)) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar12 + uVar7);
    piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  uVar17 = 0;
  if ((4 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar7 != 0)) {
    uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
  }
  if (*puVar8 < 0xb) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)0x0;
    if ((ulong)puVar8[5] != 0) {
      puVar1 = (uint *)((long)param_2 + (ulong)puVar8[5]);
      piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 7) ||
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar7 == 0)) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar12 + uVar7);
    piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  uVar18 = 0;
  uVar20 = 0;
  if (6 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar20 = 0;
    if (uVar7 != 0) {
      uVar20 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  piVar12 = (int *)((long)((long)param_2 + (ulong)puVar8[5]) +
                   (ulong)*(uint *)((long)param_2 + (ulong)puVar8[5]));
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (6 - (long)*piVar12)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar7 = 0;
  if (8 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar10 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4];
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar7 = (ulong)*(uint *)((long)piVar12 + uVar10);
    }
  }
  *(ulong *)(param_1 + 0xe8) = uVar7;
  *(ulong *)(param_1 + 0xe0) = CONCAT44(uVar20,uVar17);
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((8 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4], uVar7 != 0)) {
    uVar18 = *(undefined4 *)((long)piVar12 + uVar7);
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar18;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 0xb) ||
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar7 == 0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar17;
  uVar7 = (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2));
  puVar1 = (uint *)((long)param_2 + uVar7);
  uVar10 = (ulong)*puVar1;
  piVar12 = (int *)((long)puVar1 + uVar10);
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 0xd) ||
     (uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[6], uVar15 == 0)) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_80 = *(undefined1 **)PTR_DAT_0437a0d8;
    pcStack_78 = *(char **)(PTR_DAT_0437a0d8 + 8);
    local_70 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_68 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    puVar1 = (uint *)((long)piVar12 + uVar15);
    uVar16 = (ulong)*puVar1;
    __s = (char *)((long)puVar1 + uVar16 + 4);
    local_70 = strlen(__s);
    bVar2 = *(byte *)((long)puVar1 + uVar16 + 4);
    if (bVar2 != 0) {
      pbVar11 = (byte *)((long)param_2 + uVar16 + uVar15 + uVar10 + uVar7 + 5);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar2 != 0);
    }
    local_68 = (long *)0x0;
    local_80 = puVar14;
    pcStack_78 = __s;
  }
  uVar17 = FUN_018fdfa4(&local_80);
  *(undefined4 *)(param_1 + 0xf8) = uVar17;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (*(ushort *)((long)piVar12 - (long)*piVar12) < 0xf) {
    uVar17 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[7];
    if (uVar7 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar17;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar18 = 0;
  uVar17 = 0;
  if (0x10 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[8];
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = uVar17;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar17 = 0;
  if (0x12 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[9];
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x104) = uVar17;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x14 - (long)*piVar12)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar8 = (ushort *)((long)piVar12 - (long)*piVar12);
  uVar3 = *puVar8;
  uVar17 = 0;
  uVar20 = 0;
  uVar21 = 0;
  if (4 < uVar3) {
    uVar17 = 0;
    uVar20 = 0;
    if ((ulong)puVar8[2] != 0) {
      uVar20 = *(undefined4 *)((long)piVar12 + (ulong)puVar8[2]);
    }
    if (uVar3 < 7) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      uVar17 = 0;
      if ((ulong)puVar8[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar12 + (ulong)puVar8[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar8[4] != 0)) {
        uVar21 = *(uint *)((long)piVar12 + (ulong)puVar8[4]);
      }
    }
  }
  uVar19 = 0;
  *(ulong *)(param_1 + 0x118) = (ulong)uVar21;
  *(ulong *)(param_1 + 0x110) = CONCAT44(uVar17,uVar20);
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (0x16 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xb];
    uVar19 = 0;
    if (uVar7 != 0) {
      uVar19 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x120) = uVar19;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar17 = 0;
  if (0x18 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xc];
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x124) = uVar17;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x1a - (long)*piVar12)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar8 = (ushort *)((long)piVar12 - (long)*piVar12);
  uVar3 = *puVar8;
  uVar17 = 0;
  uVar20 = 0;
  uVar21 = 0;
  if (4 < uVar3) {
    uVar17 = 0;
    uVar20 = 0;
    if ((ulong)puVar8[2] != 0) {
      uVar20 = *(undefined4 *)((long)piVar12 + (ulong)puVar8[2]);
    }
    if (uVar3 < 7) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      uVar17 = 0;
      if ((ulong)puVar8[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar12 + (ulong)puVar8[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar8[4] != 0)) {
        uVar21 = *(uint *)((long)piVar12 + (ulong)puVar8[4]);
      }
    }
  }
  uVar19 = 0;
  *(ulong *)(param_1 + 0x138) = (ulong)uVar21;
  *(ulong *)(param_1 + 0x130) = CONCAT44(uVar17,uVar20);
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (0x1c < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xe];
    uVar19 = 0;
    if (uVar7 != 0) {
      uVar19 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x140) = uVar19;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar17 = 0;
  if (0x1e < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xf];
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x144) = uVar17;
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x20 - (long)*piVar12)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar8 = (ushort *)((long)piVar12 - (long)*piVar12);
  uVar3 = *puVar8;
  uVar17 = 0;
  uVar20 = 0;
  uVar21 = 0;
  if (4 < uVar3) {
    uVar17 = 0;
    uVar20 = 0;
    if ((ulong)puVar8[2] != 0) {
      uVar20 = *(undefined4 *)((long)piVar12 + (ulong)puVar8[2]);
    }
    if (uVar3 < 7) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      uVar17 = 0;
      if ((ulong)puVar8[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar12 + (ulong)puVar8[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar8[4] != 0)) {
        uVar21 = *(uint *)((long)piVar12 + (ulong)puVar8[4]);
      }
    }
  }
  *(ulong *)(param_1 + 0x158) = (ulong)uVar21;
  *(ulong *)(param_1 + 0x150) = CONCAT44(uVar17,uVar20);
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (10 - (long)*param_2)));
  piVar12 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((0x22 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x11], uVar7 != 0)) {
    uVar18 = *(undefined4 *)((long)piVar12 + uVar7);
  }
  *(undefined4 *)(param_1 + 0x160) = uVar18;
  return;
}


