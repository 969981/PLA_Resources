/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e7c4dc; name: FUN_01e7c4dc
 */


void FUN_01e7c4dc(void)

{
  int *piVar1;
  char *__s;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  size_t sVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined1 *local_1d0;
  char *pcStack_1c8;
  size_t local_1c0;
  long *local_1b8;
  undefined1 *local_1b0;
  char *pcStack_1a8;
  size_t local_1a0;
  long *local_198;
  undefined1 *local_190;
  char *pcStack_188;
  size_t local_180;
  long *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 *local_160;
  char *pcStack_158;
  size_t local_150;
  long *local_148;
  undefined1 *local_140;
  char *pcStack_138;
  size_t local_130;
  long *local_128;
  undefined1 *local_120;
  char *pcStack_118;
  size_t local_110;
  long *local_108;
  undefined1 *local_100;
  char *pcStack_f8;
  size_t local_f0;
  long *local_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  size_t local_d0;
  long *local_c8;
  undefined1 *local_c0;
  char *pcStack_b8;
  size_t local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar11 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar11;
  plVar12 = *(long **)(lVar11 + 0x78);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar13 = *(uint **)(*(long *)(plVar12[0xe] + 0xb0) + 0x250);
  piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar13 = puVar2 + 1;
  uVar14 = (ulong)*puVar2;
  if (uVar14 != 0) {
    puVar2 = puVar13 + uVar14;
    do {
      piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
      uStack_88 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x268);
      local_a0 = 0;
      uStack_98 = 0;
      local_70 = 0;
      local_90 = 0;
      local_80 = 0xf0f0f0f0f0f0f0;
      uStack_78 = 0;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar14 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar15 = (uint *)((long)piVar1 + uVar14);
        lVar11 = (long)puVar15 + (ulong)*puVar15;
      }
      __s = (char *)(lVar11 + 4);
      sVar10 = strlen(__s);
      bVar5 = *(byte *)(lVar11 + 4);
      puVar18 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar18 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar11 + 5);
        do {
          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 != 0);
      }
      uStack_a8 = 0;
      puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      uVar4 = *(uint *)((long)puVar15 + (ulong)*puVar15);
      local_c0 = puVar18;
      pcStack_b8 = __s;
      local_b0 = sVar10;
      if (uVar4 != 0) {
        uVar14 = 0;
        do {
          local_1b0 = &DAT_cbf29ce484222645;
          pcStack_1a8 = "";
          local_1a0 = 0;
          local_198 = (long *)0x0;
          local_190 = &DAT_cbf29ce484222645;
          pcStack_188 = "";
          local_170 = 0;
          local_168 = 0;
          local_180 = 0;
          local_178 = (long *)0x0;
          local_160 = &DAT_cbf29ce484222645;
          pcStack_158 = "";
          local_150 = 0;
          local_148 = (long *)0x0;
          local_140 = &DAT_cbf29ce484222645;
          pcStack_138 = "";
          local_130 = 0;
          local_128 = (long *)0x0;
          local_120 = &DAT_cbf29ce484222645;
          pcStack_118 = "";
          local_110 = 0;
          local_108 = (long *)0x0;
          local_100 = &DAT_cbf29ce484222645;
          pcStack_f8 = "";
          local_f0 = 0;
          local_e8 = (long *)0x0;
          local_e0 = &DAT_cbf29ce484222645;
          pcStack_d8 = "";
          local_d0 = 0;
          local_c8 = (long *)0x0;
          local_1b8 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar17 == 0)) {
            lVar11 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar11 = (long)puVar15 + (ulong)*puVar15;
          }
          local_1d0 = puVar18;
          pcStack_1c8 = __s;
          local_1c0 = sVar10;
          local_1a0 = strlen((char *)(lVar11 + 4));
          bVar5 = *(byte *)(lVar11 + 4);
          local_1b0 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_1b0 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar11 + 5);
            do {
              local_1b0 = (undefined1 *)(((ulong)local_1b0 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_198 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar17 == 0)) {
            lVar19 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar19 = (long)puVar15 + (ulong)*puVar15;
          }
          pcStack_1a8 = (char *)(lVar11 + 4);
          local_180 = strlen((char *)(lVar19 + 4));
          bVar5 = *(byte *)(lVar19 + 4);
          local_190 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_190 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar19 + 5);
            do {
              local_190 = (undefined1 *)(((ulong)local_190 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_178 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar17 == 0)) {
            local_170 = 0;
          }
          else {
            local_170 = *(undefined8 *)((long)piVar3 + uVar17);
          }
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar17 == 0)) {
            local_168 = 0;
          }
          else {
            local_168 = *(undefined8 *)((long)piVar3 + uVar17);
          }
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar17 == 0)) {
            lVar11 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar11 = (long)puVar15 + (ulong)*puVar15;
          }
          pcStack_188 = (char *)(lVar19 + 4);
          local_150 = strlen((char *)(lVar11 + 4));
          bVar5 = *(byte *)(lVar11 + 4);
          local_160 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_160 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar11 + 5);
            do {
              local_160 = (undefined1 *)(((ulong)local_160 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_148 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar17 == 0)) {
            lVar19 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar19 = (long)puVar15 + (ulong)*puVar15;
          }
          pcStack_158 = (char *)(lVar11 + 4);
          local_130 = strlen((char *)(lVar19 + 4));
          bVar5 = *(byte *)(lVar19 + 4);
          local_140 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_140 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar19 + 5);
            do {
              local_140 = (undefined1 *)(((ulong)local_140 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_128 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar17 == 0)) {
            lVar11 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar11 = (long)puVar15 + (ulong)*puVar15;
          }
          pcStack_138 = (char *)(lVar19 + 4);
          local_110 = strlen((char *)(lVar11 + 4));
          bVar5 = *(byte *)(lVar11 + 4);
          local_120 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_120 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar11 + 5);
            do {
              local_120 = (undefined1 *)(((ulong)local_120 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_108 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xf) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7], uVar17 == 0)) {
            lVar19 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar19 = (long)puVar15 + (ulong)*puVar15;
          }
          pcStack_118 = (char *)(lVar11 + 4);
          local_f0 = strlen((char *)(lVar19 + 4));
          bVar5 = *(byte *)(lVar19 + 4);
          local_100 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_100 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar19 + 5);
            do {
              local_100 = (undefined1 *)(((ulong)local_100 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_e8 = (long *)0x0;
          puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
          puVar15 = (uint *)((long)puVar15 + uVar14 * 4 + (ulong)*puVar15 + 4);
          piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x11) ||
             (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[8], uVar17 == 0)) {
            lVar11 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar3 + uVar17);
            lVar11 = (long)puVar15 + (ulong)*puVar15;
          }
          pcStack_f8 = (char *)(lVar19 + 4);
          local_d0 = strlen((char *)(lVar11 + 4));
          bVar5 = *(byte *)(lVar11 + 4);
          local_e0 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            local_e0 = &DAT_cbf29ce484222645;
            pbVar16 = (byte *)(lVar11 + 5);
            do {
              local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          local_c8 = (long *)0x0;
          pcStack_d8 = (char *)(lVar11 + 4);
          FUN_01e7e8ec(&local_a0,&local_1d0);
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          if (local_128 != (long *)0x0) {
            (**(code **)(*local_128 + 0x20))();
          }
          if (local_148 != (long *)0x0) {
            (**(code **)(*local_148 + 0x20))();
          }
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 0x20))();
          }
          if (local_198 != (long *)0x0) {
            (**(code **)(*local_198 + 0x20))();
          }
          if (local_1b8 != (long *)0x0) {
            (**(code **)(*local_1b8 + 0x20))();
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar4);
      }
      FUN_01e7ee98(plVar12[0xe] + 0x210,&local_c0,&local_a0);
      FUN_01e6d2a0(&local_a0);
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
  }
  lVar11 = plVar12[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar8 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))();
  }
  return;
}


