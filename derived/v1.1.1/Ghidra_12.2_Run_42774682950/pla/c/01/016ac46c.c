/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ac46c; name: FUN_016ac46c
 */


undefined8 FUN_016ac46c(long param_1,ulong *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  ushort *puVar11;
  byte *pbVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *pcStack_100;
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
  
  uVar10 = *(ulong *)(param_1 + 0xa0);
  if (uVar10 != 0) {
    uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar14 = uVar10 - 1 & uVar6;
    }
    else if (uVar6 < uVar10) {
      uVar14 = uVar6;
    }
    else {
      uVar14 = 0;
      if (uVar10 != 0) {
        uVar14 = uVar6 / uVar10;
      }
      uVar14 = uVar6 - uVar14 * uVar10;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x98) + uVar14 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar6) {
            if (plVar8[2] == uVar6) goto LAB_016ac584;
          }
          else if ((plVar8[1] & uVar10 - 1) != uVar14) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar6) {
          if (plVar8[2] == uVar6) goto LAB_016ac584;
        }
        else {
          if (uVar10 <= uVar7) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar4 * uVar10;
          }
          if (uVar7 != uVar14) {
            return 0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 0;
LAB_016ac584:
  if ((undefined1 *)plVar8[3] == (undefined1 *)0xc0ea47549ab5f3d9) {
    return 0;
  }
  if ((undefined1 *)plVar8[3] == &DAT_cbf29ce484222645) {
    return 0;
  }
  piVar9 = (int *)plVar8[5];
  puVar11 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar11 < 0x15) {
    return 0;
  }
  uVar10 = (ulong)puVar11[10];
  if (uVar10 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(uint *)((long)piVar9 + uVar10);
  puVar13 = (uint *)((long)((long)piVar9 + uVar10) + uVar7);
  if (puVar13 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar13;
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = 0;
  do {
    if (*(uint *)((long)piVar9 + uVar6 * 4 + uVar10 + uVar7 + 4) == (param_3 & 0xff)) break;
    uVar6 = uVar6 + 1;
  } while (uVar2 != uVar6);
  if ((uint)uVar6 == uVar2) {
    return 0;
  }
  if (*puVar11 < 0x19) {
    puVar13 = (uint *)0x0;
  }
  else {
    puVar13 = (uint *)0x0;
    if ((ulong)puVar11[0xc] != 0) {
      puVar13 = (uint *)((long)piVar9 + (ulong)puVar11[0xc]);
      puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    }
  }
  if ((uint)uVar6 < *puVar13) {
    uVar6 = uVar6 & 0xffffffff;
    while( true ) {
      piVar9 = (int *)((long)(puVar13 + uVar6 + 1) + (ulong)puVar13[uVar6 + 1]);
      local_108 = &DAT_cbf29ce484222645;
      pcStack_100 = "";
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
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 5) {
        local_118 = 0;
      }
      else {
        uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
        local_118 = 0;
        if (uVar10 != 0) {
          local_118 = *(undefined8 *)((long)piVar9 + uVar10);
        }
      }
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 7) {
        local_110 = 0;
      }
      else {
        uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
        local_110 = 0;
        if (uVar10 != 0) {
          local_110 = *(undefined8 *)((long)piVar9 + uVar10);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[4], uVar10 == 0)) {
        lVar15 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar9 + uVar10);
        lVar15 = (long)puVar1 + (ulong)*puVar1;
      }
      local_f8 = strlen((char *)(lVar15 + 4));
      bVar3 = *(byte *)(lVar15 + 4);
      local_108 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_108 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar15 + 5);
        do {
          local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_f0 = (long *)0x0;
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0xb) ||
         (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[5], uVar10 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar9 + uVar10);
        lVar16 = (long)puVar1 + (ulong)*puVar1;
      }
      pcStack_100 = (char *)(lVar15 + 4);
      local_d8 = strlen((char *)(lVar16 + 4));
      bVar3 = *(byte *)(lVar16 + 4);
      local_e8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_e8 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar16 + 5);
        do {
          local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_d0 = (long *)0x0;
      if (*(ushort *)((long)piVar9 - (long)*piVar9) < 0xd) {
        lVar15 = 0;
      }
      else {
        uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[6];
        if (uVar10 == 0) {
          lVar15 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar9 + uVar10);
          lVar15 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      pcStack_e0 = (char *)(lVar16 + 4);
      local_b8 = strlen((char *)(lVar15 + 4));
      bVar3 = *(byte *)(lVar15 + 4);
      local_c8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_c8 = &DAT_cbf29ce484222645;
        pbVar12 = (byte *)(lVar15 + 5);
        do {
          local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      local_b0 = (long *)0x0;
      pcStack_c0 = (char *)(lVar15 + 4);
      uVar10 = FUN_0165ff30(&local_118);
      if ((uVar10 & 1) == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = 5;
        if ((ulong)*puVar13 <= uVar6 + 1) {
          iVar5 = 0;
        }
      }
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
      if (iVar5 != 0) break;
      uVar6 = uVar6 + 1;
      if (*puVar13 <= uVar6) {
        return 1;
      }
    }
    if (iVar5 != 5) {
      return 0;
    }
  }
  return 1;
}


