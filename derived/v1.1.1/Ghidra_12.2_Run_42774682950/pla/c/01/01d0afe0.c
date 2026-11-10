/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d0afe0; name: FUN_01d0afe0
 */


void FUN_01d0afe0(long param_1,int *param_2)

{
  undefined8 *puVar1;
  char *__s;
  ulong uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  byte bVar7;
  size_t sVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  char *pcStack_128;
  size_t local_120;
  long *local_118;
  undefined1 *local_110;
  char *pcStack_108;
  size_t local_100;
  long *local_f8;
  undefined1 *local_f0;
  char *pcStack_e8;
  size_t local_e0;
  long *local_d8;
  undefined1 *local_d0;
  char *pcStack_c8;
  size_t local_c0;
  long *local_b8;
  undefined1 *local_b0;
  char *pcStack_a8;
  size_t local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 *puStack_70;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar10 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar17 = (uint *)((long)param_2 + uVar10);
    lVar11 = (long)puVar17 + (ulong)*puVar17;
  }
  sVar8 = strlen((char *)(lVar11 + 4));
  bVar7 = *(byte *)(lVar11 + 4);
  puVar15 = &DAT_cbf29ce484222645;
  if (bVar7 != 0) {
    puVar15 = &DAT_cbf29ce484222645;
    pbVar14 = (byte *)(lVar11 + 5);
    do {
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar7 != 0);
  }
  *(size_t *)(param_1 + 200) = sVar8;
  plVar9 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar15;
  *(char **)(param_1 + 0xc0) = (char *)(lVar11 + 4);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar11 = (long)*param_2;
  puVar13 = (ushort *)((long)param_2 - lVar11);
  puVar3 = (uint *)((long)param_2 + (ulong)puVar13[4]);
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  uVar6 = *puVar3;
  puVar17 = (uint *)0x0;
  if ((ulong)puVar13[4] != 0) {
    puVar17 = puVar3;
  }
  if (puVar17 != puVar3 + uVar6) {
    puVar17 = puVar17 + 1;
    puVar1 = (undefined8 *)(param_1 + 0xf0);
    do {
      puVar15 = &DAT_cbf29ce484222645;
      piVar4 = (int *)((long)puVar17 + (ulong)*puVar17);
      local_130 = &DAT_cbf29ce484222645;
      pcStack_128 = "";
      local_120 = 0;
      local_118 = (long *)0x0;
      local_110 = &DAT_cbf29ce484222645;
      pcStack_108 = "";
      local_100 = 0;
      local_f8 = (long *)0x0;
      local_f0 = &DAT_cbf29ce484222645;
      pcStack_e8 = "";
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_d0 = &DAT_cbf29ce484222645;
      pcStack_c8 = "";
      local_c0 = 0;
      local_b8 = (long *)0x0;
      local_b0 = &DAT_cbf29ce484222645;
      pcStack_a8 = "";
      local_a0 = 0;
      local_98 = (long *)0x0;
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        local_140 = 0;
      }
      else {
        uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        local_140 = 0;
        if (uVar10 != 0) {
          local_140 = *(undefined8 *)((long)piVar4 + uVar10);
        }
      }
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
        local_138 = 0;
      }
      else {
        uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
        local_138 = 0;
        if (uVar10 != 0) {
          local_138 = *(undefined8 *)((long)piVar4 + uVar10);
        }
      }
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar10 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar10);
        lVar11 = (long)puVar5 + (ulong)*puVar5;
      }
      local_120 = strlen((char *)(lVar11 + 4));
      bVar7 = *(byte *)(lVar11 + 4);
      local_130 = puVar15;
      if (bVar7 != 0) {
        pbVar14 = (byte *)(lVar11 + 5);
        do {
          local_130 = (undefined1 *)(((ulong)local_130 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar7 != 0);
      }
      local_118 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
         (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar10 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar10);
        lVar12 = (long)puVar5 + (ulong)*puVar5;
      }
      pcStack_128 = (char *)(lVar11 + 4);
      local_100 = strlen((char *)(lVar12 + 4));
      bVar7 = *(byte *)(lVar12 + 4);
      local_110 = puVar15;
      if (bVar7 != 0) {
        pbVar14 = (byte *)(lVar12 + 5);
        do {
          local_110 = (undefined1 *)(((ulong)local_110 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar7 != 0);
      }
      local_f8 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
         (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar10 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar10);
        lVar11 = (long)puVar5 + (ulong)*puVar5;
      }
      pcStack_108 = (char *)(lVar12 + 4);
      local_e0 = strlen((char *)(lVar11 + 4));
      bVar7 = *(byte *)(lVar11 + 4);
      local_f0 = puVar15;
      if (bVar7 != 0) {
        pbVar14 = (byte *)(lVar11 + 5);
        do {
          local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar7 != 0);
      }
      local_d8 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
         (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar10 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar10);
        lVar12 = (long)puVar5 + (ulong)*puVar5;
      }
      pcStack_e8 = (char *)(lVar11 + 4);
      local_c0 = strlen((char *)(lVar12 + 4));
      bVar7 = *(byte *)(lVar12 + 4);
      local_d0 = puVar15;
      if (bVar7 != 0) {
        pbVar14 = (byte *)(lVar12 + 5);
        do {
          local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar7 != 0);
      }
      local_b8 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
         (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar10 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar10);
        lVar11 = (long)puVar5 + (ulong)*puVar5;
      }
      __s = (char *)(lVar11 + 4);
      pcStack_c8 = (char *)(lVar12 + 4);
      local_a0 = strlen(__s);
      bVar7 = *(byte *)(lVar11 + 4);
      if (bVar7 != 0) {
        pbVar14 = (byte *)(lVar11 + 5);
        do {
          puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar7 != 0);
      }
      local_98 = (long *)0x0;
      uVar10 = *(ulong *)(param_1 + 0xe0);
      local_b0 = puVar15;
      pcStack_a8 = __s;
      if (uVar10 < *(ulong *)(param_1 + 0xe8)) {
        FUN_01c7f7e8(puVar1,uVar10,&local_140);
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 0xb0;
      }
      else {
        lVar11 = (long)(uVar10 - *(long *)(param_1 + 0xd8)) >> 4;
        uVar10 = *(ulong *)(param_1 + 0xf8);
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar2 = lVar11 * 0x2e8ba2e8ba2e8ba3 + 1;
        if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = (long)(*(ulong *)(param_1 + 0xe8) - *(long *)(param_1 + 0xd8)) >> 4;
        local_78 = 0;
        uVar16 = lVar12 * 0x5d1745d1745d1746;
        if (uVar2 <= uVar16) {
          uVar2 = uVar16;
        }
        if ((ulong)(lVar12 * 0x2e8ba2e8ba2e8ba3) < uVar10 >> 1) {
          uVar10 = uVar2;
        }
        puStack_70 = puVar1;
        if (uVar10 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar10 * 0xb0,8);
          if (lVar12 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar18 = lVar12 + lVar11 * 0x10;
        lVar20 = lVar12 + uVar10 * 0xb0;
        local_90 = lVar12;
        local_88 = lVar18;
        local_78 = lVar20;
        FUN_01c7f7e8(puVar1,lVar18,&local_140);
        lVar11 = lVar18 + 0xb0;
        lVar12 = *(long *)(param_1 + 0xd8);
        lVar19 = *(long *)(param_1 + 0xe0);
        local_80 = lVar11;
        if (lVar19 == lVar12) {
          local_80 = lVar12;
        }
        else {
          do {
            lVar18 = lVar18 + -0xb0;
            lVar19 = lVar19 + -0xb0;
            FUN_01697004(puVar1,lVar18,lVar19);
          } while (lVar12 != lVar19);
          lVar12 = *(long *)(param_1 + 0xd8);
          local_80 = *(long *)(param_1 + 0xe0);
        }
        *(long *)(param_1 + 0xd8) = lVar18;
        *(long *)(param_1 + 0xe0) = lVar11;
        local_78 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xe8) = lVar20;
        local_90 = lVar12;
        local_88 = lVar12;
        FUN_01d10410(&local_90);
        lVar11 = local_90;
        if (local_90 != 0) {
          lVar12 = local_78 - local_90;
          plVar9 = (long *)*puStack_70;
          uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar10 & 1) != 0) {
            lVar19 = tpidr_el0;
            if (*(char *)(lVar19 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar19 + 0x38d488) = 1;
              *(undefined8 *)(lVar19 + 0x38d478) = 0;
              *(undefined8 *)(lVar19 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar19 + 0x38d480)) {
              FUN_02bcc824(plVar9,lVar11,lVar12,8);
              goto joined_r0x01d0b6d4;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,lVar12,8);
        }
      }
joined_r0x01d0b6d4:
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar3 + uVar6 + 1);
    lVar11 = (long)*param_2;
    puVar13 = (ushort *)((long)param_2 - lVar11);
  }
  uVar21 = 0;
  uVar22 = 0;
  if (10 < *puVar13) {
    uVar10 = (ulong)*(ushort *)((long)param_2 + (10 - lVar11));
    uVar22 = 0;
    if (uVar10 != 0) {
      uVar22 = *(undefined4 *)((long)param_2 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x110) = uVar22;
  if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar10 != 0)) {
    uVar21 = *(undefined4 *)((long)param_2 + uVar10);
  }
  *(undefined4 *)(param_1 + 0x114) = uVar21;
  return;
}


