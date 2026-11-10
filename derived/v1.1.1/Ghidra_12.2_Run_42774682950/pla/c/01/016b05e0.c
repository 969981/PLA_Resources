/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b05e0; name: FUN_016b05e0
 */


undefined1 * FUN_016b05e0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *local_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  long *local_70;
  
  plVar10 = *(long **)(param_1 + 0xa8);
  while( true ) {
    if (plVar10 == (long *)0x0) {
      return &DAT_cbf29ce484222645;
    }
    piVar5 = (int *)plVar10[3];
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 7) {
      puVar8 = (uint *)0x0;
      uVar4 = uRam0000000000000000;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
      puVar8 = (uint *)0x0;
      if (uVar6 != 0) {
        puVar8 = (uint *)((long)piVar5 + uVar6);
        puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
      }
      uVar4 = *puVar8;
    }
    if (uVar4 == 0) break;
    uVar6 = 0;
    uVar11 = 1;
    do {
      piVar5 = (int *)((long)(puVar8 + uVar6 + 1) + (ulong)puVar8[uVar6 + 1]);
      if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
        local_118 = (undefined1 *)0x0;
LAB_016b06e4:
        local_108 = &DAT_cbf29ce484222645;
        local_100 = "";
        local_f8 = 0;
        local_f0 = (long *)0x0;
        local_e8 = &DAT_cbf29ce484222645;
        pcStack_e0 = "";
        local_d8 = 0;
        local_d0 = (long *)0x0;
        local_c8 = &DAT_cbf29ce484222645;
        pcStack_c0 = "";
        local_b8 = 0;
        local_b0 = (long *)0x0;
        local_a8 = &DAT_cbf29ce484222645;
        puStack_a0 = &DAT_03996322;
        local_98 = 0;
        local_90 = (long *)0x0;
        local_88 = &DAT_cbf29ce484222645;
        puStack_80 = &DAT_03996322;
        local_78 = 0;
        local_70 = (long *)0x0;
        if (*(ushort *)((long)piVar5 - (long)*piVar5) < 7) {
          local_110 = 0;
        }
        else {
          uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
          local_110 = 0;
          if (uVar7 != 0) {
            local_110 = *(undefined8 *)((long)piVar5 + uVar7);
          }
        }
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
           (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
          lVar12 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar5 + uVar7);
          lVar12 = (long)puVar1 + (ulong)*puVar1;
        }
        local_f8 = strlen((char *)(lVar12 + 4));
        bVar2 = *(byte *)(lVar12 + 4);
        local_108 = &DAT_cbf29ce484222645;
        if (bVar2 != 0) {
          local_108 = &DAT_cbf29ce484222645;
          pbVar9 = (byte *)(lVar12 + 5);
          do {
            local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
        }
        local_f0 = (long *)0x0;
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0xb) ||
           (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[5], uVar7 == 0)) {
          lVar13 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar5 + uVar7);
          lVar13 = (long)puVar1 + (ulong)*puVar1;
        }
        local_100 = (char *)(lVar12 + 4);
        local_d8 = strlen((char *)(lVar13 + 4));
        bVar2 = *(byte *)(lVar13 + 4);
        local_e8 = &DAT_cbf29ce484222645;
        if (bVar2 != 0) {
          local_e8 = &DAT_cbf29ce484222645;
          pbVar9 = (byte *)(lVar13 + 5);
          do {
            local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
        }
        local_d0 = (long *)0x0;
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0xd) ||
           (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[6], uVar7 == 0)) {
          lVar12 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar5 + uVar7);
          lVar12 = (long)puVar1 + (ulong)*puVar1;
        }
        pcStack_e0 = (char *)(lVar13 + 4);
        local_b8 = strlen((char *)(lVar12 + 4));
        bVar2 = *(byte *)(lVar12 + 4);
        local_c8 = &DAT_cbf29ce484222645;
        if (bVar2 != 0) {
          local_c8 = &DAT_cbf29ce484222645;
          pbVar9 = (byte *)(lVar12 + 5);
          do {
            local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
        }
        local_b0 = (long *)0x0;
        pcStack_c0 = (char *)(lVar12 + 4);
        uVar3 = FUN_0165ff30(&local_118);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        if ((uVar3 & 1) == 0) goto LAB_016b0654;
        uVar4 = *puVar8;
        uVar11 = uVar11 & uVar3;
      }
      else {
        uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
        local_118 = (undefined1 *)0x0;
        if (((uVar7 == 0) || (local_118 = *(undefined1 **)((long)piVar5 + uVar7), uVar6 == 0)) ||
           (local_118 != &DAT_cbf29ce484222645)) goto LAB_016b06e4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
    if (uVar11 != 0) break;
LAB_016b0654:
    plVar10 = (long *)*plVar10;
  }
  return (undefined1 *)plVar10[2];
}


