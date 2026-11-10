/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ef358; name: FUN_012ef358
 */


void FUN_012ef358(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulong uVar16;
  long lVar17;
  ushort local_a0;
  ushort uStack_9e;
  ushort uStack_9c;
  ushort uStack_9a;
  ushort local_98;
  undefined4 local_94;
  ushort local_90;
  undefined4 local_8c;
  ushort local_88;
  undefined4 local_84;
  ushort local_80;
  undefined4 local_7c;
  ushort local_78;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  
  puVar7 = PTR_DAT_04379608;
  puVar6 = PTR_DAT_04379600;
  puVar5 = PTR_DAT_043795f8;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar10 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
    piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 != 0)) &&
        (puVar10 = (uint *)((long)piVar1 + uVar11),
        puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10), puVar10 != (uint *)0x0)) &&
       (uVar2 = *puVar10, (ulong)uVar2 != 0)) {
      lVar17 = 0;
      do {
        uVar11 = (ulong)*(uint *)((long)puVar10 + lVar17 + 4);
        lVar3 = lVar17 + uVar11;
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 5) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(ushort *)((long)puVar10 + lVar4 + 8);
          if ((ulong)uVar12 != 0) {
            uVar12 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar12 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 7) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(ushort *)((long)puVar10 + lVar4 + 10);
          if ((ulong)uVar13 != 0) {
            uVar13 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar13 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 9) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(ushort *)((long)puVar10 + lVar4 + 0xc);
          if ((ulong)uVar14 != 0) {
            uVar14 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar14 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0xb) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(ushort *)((long)puVar10 + lVar4 + 0xe);
          if ((ulong)uVar15 != 0) {
            uVar15 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar15 + 4);
          }
        }
        _local_a0 = CONCAT26(uVar15,CONCAT24(uVar14,CONCAT22(uVar13,uVar12)));
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0xd) {
          local_98 = 0;
        }
        else {
          local_98 = *(ushort *)((long)puVar10 + lVar4 + 0x10);
          if ((ulong)local_98 != 0) {
            local_98 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + local_98 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0xf) {
          local_94 = 0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)puVar10 + lVar4 + 0x12);
          local_94 = 0;
          if (uVar16 != 0) {
            local_94 = *(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar16 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x11) {
          local_90 = 0;
        }
        else {
          local_90 = *(ushort *)((long)puVar10 + lVar4 + 0x14);
          if ((ulong)local_90 != 0) {
            local_90 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + local_90 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x13) {
          local_8c = 0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)puVar10 + lVar4 + 0x16);
          local_8c = 0;
          if (uVar16 != 0) {
            local_8c = *(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar16 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x15) {
          local_88 = 0;
        }
        else {
          local_88 = *(ushort *)((long)puVar10 + lVar4 + 0x18);
          if ((ulong)local_88 != 0) {
            local_88 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + local_88 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x17) {
          local_84 = 0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)puVar10 + lVar4 + 0x1a);
          local_84 = 0;
          if (uVar16 != 0) {
            local_84 = *(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar16 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x19) {
          local_80 = 0;
        }
        else {
          local_80 = *(ushort *)((long)puVar10 + lVar4 + 0x1c);
          if ((ulong)local_80 != 0) {
            local_80 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + local_80 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x1b) {
          local_7c = 0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)puVar10 + lVar4 + 0x1e);
          local_7c = 0;
          if (uVar16 != 0) {
            local_7c = *(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar16 + 4);
          }
        }
        lVar4 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if (*(ushort *)((long)puVar10 + lVar4 + 4) < 0x1d) {
          local_78 = 0;
        }
        else {
          local_78 = *(ushort *)((long)puVar10 + lVar4 + 0x20);
          if ((ulong)local_78 != 0) {
            local_78 = (ushort)*(undefined4 *)((long)puVar10 + lVar17 + uVar11 + local_78 + 4);
          }
        }
        lVar3 = lVar17 + (uVar11 - (long)*(int *)((long)puVar10 + lVar3 + 4));
        if ((*(ushort *)((long)puVar10 + lVar3 + 4) < 0x1f) ||
           (uVar16 = (ulong)*(ushort *)((long)puVar10 + lVar3 + 0x22), uVar16 == 0)) {
          local_74 = 0;
        }
        else {
          local_74 = *(undefined4 *)((long)puVar10 + lVar17 + uVar11 + uVar16 + 4);
        }
        FUN_012ef984(param_1 + 0x98,&local_a0);
        uVar12 = uStack_9c;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_0437b168,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        if (uVar12 != 0) {
          FUN_02c4fb44(auStack_70);
          iVar8 = FUN_02c4fc60(auStack_70,0x12);
          if ((iVar8 == 0xb) || (iVar8 == 5)) {
            FUN_012ef984(param_1 + 0xd0,&local_a0);
          }
        }
        uVar12 = uStack_9c;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_0437b168,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        if (uVar12 != 0) {
          FUN_02c4fb44(auStack_70);
          iVar8 = FUN_02c4fc60(auStack_70,0x12);
          if (iVar8 == 1) {
            FUN_012ef984(param_1 + 0x108,&local_a0);
          }
        }
        uVar12 = uStack_9c;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_0437b168,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        if (uVar12 == 0) {
LAB_012ef3fc:
          FUN_012ef984(param_1 + 0x140,&local_a0);
        }
        else {
          FUN_02c4fb44(auStack_70);
          uVar9 = FUN_02c4fc60(auStack_70,0x12);
          if ((uVar9 < 0xd) && ((1 << (ulong)(uVar9 & 0x1f) & 0x13ddU) != 0)) goto LAB_012ef3fc;
        }
        lVar17 = lVar17 + 4;
      } while ((ulong)uVar2 * 4 != lVar17);
    }
  }
  return;
}


