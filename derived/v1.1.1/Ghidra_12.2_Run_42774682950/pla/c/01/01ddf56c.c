/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ddf56c; name: FUN_01ddf56c
 */


void FUN_01ddf56c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  char *__s;
  ulong uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  size_t sVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ushort *puVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
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
     (uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar12 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar20 = (uint *)((long)param_2 + uVar12);
    lVar13 = (long)puVar20 + (ulong)*puVar20;
  }
  sVar9 = strlen((char *)(lVar13 + 4));
  bVar7 = *(byte *)(lVar13 + 4);
  puVar18 = &DAT_cbf29ce484222645;
  if (bVar7 != 0) {
    puVar18 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar13 + 5);
    do {
      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar7 != 0);
  }
  *(size_t *)(param_1 + 200) = sVar9;
  plVar10 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = puVar18;
  *(char **)(param_1 + 0xc0) = (char *)(lVar13 + 4);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar13 = (long)*param_2;
  puVar16 = (ushort *)((long)param_2 - lVar13);
  puVar3 = (uint *)((long)param_2 + (ulong)puVar16[4]);
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  uVar6 = *puVar3;
  puVar20 = (uint *)0x0;
  if ((ulong)puVar16[4] != 0) {
    puVar20 = puVar3;
  }
  if (puVar20 != puVar3 + uVar6) {
    puVar20 = puVar20 + 1;
    puVar1 = (undefined8 *)(param_1 + 0xf0);
    do {
      puVar18 = &DAT_cbf29ce484222645;
      piVar4 = (int *)((long)puVar20 + (ulong)*puVar20);
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
        uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        local_140 = 0;
        if (uVar12 != 0) {
          local_140 = *(undefined8 *)((long)piVar4 + uVar12);
        }
      }
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 7) {
        local_138 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
        local_138 = 0;
        if (uVar12 != 0) {
          local_138 = *(undefined8 *)((long)piVar4 + uVar12);
        }
      }
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
         (uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar12 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar12);
        lVar13 = (long)puVar5 + (ulong)*puVar5;
      }
      local_120 = strlen((char *)(lVar13 + 4));
      bVar7 = *(byte *)(lVar13 + 4);
      local_130 = puVar18;
      if (bVar7 != 0) {
        pbVar17 = (byte *)(lVar13 + 5);
        do {
          local_130 = (undefined1 *)(((ulong)local_130 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar7 != 0);
      }
      local_118 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
         (uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar12 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar12);
        lVar14 = (long)puVar5 + (ulong)*puVar5;
      }
      pcStack_128 = (char *)(lVar13 + 4);
      local_100 = strlen((char *)(lVar14 + 4));
      bVar7 = *(byte *)(lVar14 + 4);
      local_110 = puVar18;
      if (bVar7 != 0) {
        pbVar17 = (byte *)(lVar14 + 5);
        do {
          local_110 = (undefined1 *)(((ulong)local_110 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar7 != 0);
      }
      local_f8 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
         (uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar12 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar12);
        lVar13 = (long)puVar5 + (ulong)*puVar5;
      }
      pcStack_108 = (char *)(lVar14 + 4);
      local_e0 = strlen((char *)(lVar13 + 4));
      bVar7 = *(byte *)(lVar13 + 4);
      local_f0 = puVar18;
      if (bVar7 != 0) {
        pbVar17 = (byte *)(lVar13 + 5);
        do {
          local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar7 != 0);
      }
      local_d8 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
         (uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar12 == 0)) {
        lVar14 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar12);
        lVar14 = (long)puVar5 + (ulong)*puVar5;
      }
      pcStack_e8 = (char *)(lVar13 + 4);
      local_c0 = strlen((char *)(lVar14 + 4));
      bVar7 = *(byte *)(lVar14 + 4);
      local_d0 = puVar18;
      if (bVar7 != 0) {
        pbVar17 = (byte *)(lVar14 + 5);
        do {
          local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar7 != 0);
      }
      local_b8 = (long *)0x0;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
         (uVar12 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar12 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar4 + uVar12);
        lVar13 = (long)puVar5 + (ulong)*puVar5;
      }
      __s = (char *)(lVar13 + 4);
      pcStack_c8 = (char *)(lVar14 + 4);
      local_a0 = strlen(__s);
      bVar7 = *(byte *)(lVar13 + 4);
      if (bVar7 != 0) {
        pbVar17 = (byte *)(lVar13 + 5);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar7 != 0);
      }
      local_98 = (long *)0x0;
      uVar12 = *(ulong *)(param_1 + 0xe0);
      local_b0 = puVar18;
      pcStack_a8 = __s;
      if (uVar12 < *(ulong *)(param_1 + 0xe8)) {
        FUN_01c7f7e8(puVar1,uVar12,&local_140);
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 0xb0;
      }
      else {
        lVar13 = (long)(uVar12 - *(long *)(param_1 + 0xd8)) >> 4;
        uVar12 = *(ulong *)(param_1 + 0xf8);
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        uVar2 = lVar13 * 0x2e8ba2e8ba2e8ba3 + 1;
        if (uVar12 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = (long)(*(ulong *)(param_1 + 0xe8) - *(long *)(param_1 + 0xd8)) >> 4;
        local_78 = 0;
        uVar19 = lVar14 * 0x5d1745d1745d1746;
        if (uVar2 <= uVar19) {
          uVar2 = uVar19;
        }
        if ((ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3) < uVar12 >> 1) {
          uVar12 = uVar2;
        }
        puStack_70 = puVar1;
        if (uVar12 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 * 0xb0,8);
          if (lVar14 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar21 = lVar14 + lVar13 * 0x10;
        lVar23 = lVar14 + uVar12 * 0xb0;
        local_90 = lVar14;
        local_88 = lVar21;
        local_78 = lVar23;
        FUN_01c7f7e8(puVar1,lVar21,&local_140);
        lVar13 = lVar21 + 0xb0;
        lVar14 = *(long *)(param_1 + 0xd8);
        lVar22 = *(long *)(param_1 + 0xe0);
        local_80 = lVar13;
        if (lVar22 == lVar14) {
          local_80 = lVar14;
        }
        else {
          do {
            lVar21 = lVar21 + -0xb0;
            lVar22 = lVar22 + -0xb0;
            FUN_01697004(puVar1,lVar21,lVar22);
          } while (lVar14 != lVar22);
          lVar14 = *(long *)(param_1 + 0xd8);
          local_80 = *(long *)(param_1 + 0xe0);
        }
        *(long *)(param_1 + 0xd8) = lVar21;
        *(long *)(param_1 + 0xe0) = lVar13;
        local_78 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xe8) = lVar23;
        local_90 = lVar14;
        local_88 = lVar14;
        FUN_01de9cd8(&local_90);
        lVar13 = local_90;
        if (local_90 != 0) {
          lVar14 = local_78 - local_90;
          plVar10 = (long *)*puStack_70;
          uVar12 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar12 & 1) != 0) {
            lVar22 = tpidr_el0;
            if (*(char *)(lVar22 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar22 + 0x38d488) = 1;
              *(undefined8 *)(lVar22 + 0x38d478) = 0;
              *(undefined8 *)(lVar22 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar22 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar13,lVar14,8);
              goto joined_r0x01ddfc98;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar14,8);
        }
      }
joined_r0x01ddfc98:
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
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar3 + uVar6 + 1);
    lVar13 = (long)*param_2;
    puVar16 = (ushort *)((long)param_2 - lVar13);
  }
  if (*puVar16 < 0xb) {
    uVar15 = 0;
  }
  else {
    uVar12 = (ulong)*(ushort *)((long)param_2 + (10 - lVar13));
    uVar15 = 0;
    if (uVar12 != 0) {
      uVar15 = *(undefined8 *)((long)param_2 + uVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    uVar11 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = *(undefined4 *)((long)param_2 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x118) = uVar11;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    bVar8 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    bVar8 = false;
    if (uVar12 != 0) {
      bVar8 = *(char *)((long)param_2 + uVar12) != '\0';
    }
  }
  *(bool *)(param_1 + 0x11c) = bVar8;
  return;
}


