/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01232f94; name: FUN_01232f94
 */


void FUN_01232f94(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_80;
  undefined1 uStack_7f;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  uint local_50;
  bool local_4c;
  bool bStack_4b;
  undefined4 local_48;
  
  if ((((*(long *)(param_1 + 0x70) != 0) &&
       (puVar7 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250),
       piVar1 = (int *)((long)puVar7 + (ulong)*puVar7), piVar1 != (int *)0x0)) &&
      (4 < *(ushort *)((long)piVar1 - (long)*piVar1))) &&
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 != 0)) {
    puVar7 = (uint *)((long)piVar1 + uVar8);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    uVar2 = *puVar7;
    if ((ulong)uVar2 != 0) {
      lVar12 = 0;
      do {
        local_50 = 0;
        uVar8 = (ulong)*(uint *)((long)puVar7 + lVar12 + 4);
        lVar3 = lVar12 + uVar8;
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        if (*(ushort *)((long)puVar7 + lVar4 + 4) < 5) {
          uVar9 = 0;
        }
        else {
          uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 8);
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = (undefined1)*(undefined4 *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
          }
        }
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        if (*(ushort *)((long)puVar7 + lVar4 + 4) < 7) {
          uVar10 = 0;
        }
        else {
          uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 10);
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = (undefined1)*(undefined4 *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
          }
        }
        _local_80 = CONCAT11(uVar10,uVar9);
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        uVar13 = local_50;
        if ((8 < *(ushort *)((long)puVar7 + lVar4 + 4)) &&
           (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0xc), uVar11 != 0)) {
          uVar13 = *(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
        }
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        uVar14 = local_50;
        if ((10 < *(ushort *)((long)puVar7 + lVar4 + 4)) &&
           (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0xe), uVar11 != 0)) {
          uVar14 = *(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
        }
        local_70 = CONCAT44(uVar14,uVar13);
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        uVar13 = local_50;
        if ((0xc < *(ushort *)((long)puVar7 + lVar4 + 4)) &&
           (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x10), uVar11 != 0)) {
          uVar13 = *(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
        }
        uStack_68 = (ulong)uVar13;
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        uVar13 = local_50;
        if ((0xe < *(ushort *)((long)puVar7 + lVar4 + 4)) &&
           (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x12), uVar11 != 0)) {
          uVar13 = *(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
        }
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        uVar14 = local_50;
        if ((0x10 < *(ushort *)((long)puVar7 + lVar4 + 4)) &&
           (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x14), uVar11 != 0)) {
          uVar14 = *(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
        }
        local_60 = CONCAT44(uVar14,uVar13);
        uStack_58 = 0;
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        if (0x12 < *(ushort *)((long)puVar7 + lVar4 + 4)) {
          uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x16);
          uStack_58 = 0;
          if (uVar11 != 0) {
            uStack_58 = (ulong)*(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
          }
        }
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        if ((0x16 < *(ushort *)((long)puVar7 + lVar4 + 4)) &&
           (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x1a), uVar11 != 0)) {
          local_50 = *(uint *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
        }
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        if (*(ushort *)((long)puVar7 + lVar4 + 4) < 0x15) {
          bVar5 = false;
        }
        else {
          uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x18);
          bVar5 = false;
          if (uVar11 != 0) {
            bVar5 = *(char *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4) != '\0';
          }
        }
        lVar4 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        if (*(ushort *)((long)puVar7 + lVar4 + 4) < 0x19) {
          bVar6 = false;
        }
        else {
          uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 0x1c);
          bVar6 = false;
          if (uVar11 != 0) {
            bVar6 = *(char *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4) != '\0';
          }
        }
        _local_4c = CONCAT11(bVar6,bVar5);
        lVar3 = lVar12 + (uVar8 - (long)*(int *)((long)puVar7 + lVar3 + 4));
        local_48 = 0;
        if (0x1a < *(ushort *)((long)puVar7 + lVar3 + 4)) {
          uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar3 + 0x1e);
          local_48 = 0;
          if (uVar11 != 0) {
            local_48 = *(undefined4 *)((long)puVar7 + lVar12 + uVar8 + uVar11 + 4);
          }
        }
        FUN_012333b0(param_1 + 0x98,&local_80);
        lVar12 = lVar12 + 4;
      } while ((ulong)uVar2 * 4 != lVar12);
    }
  }
  return;
}


