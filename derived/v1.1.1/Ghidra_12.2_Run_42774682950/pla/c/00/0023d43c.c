/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023d43c; name: FUN_0023d43c
 */


void FUN_0023d43c(long param_1,long param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong local_78;
  byte local_64 [4];
  
  puVar10 = PTR_DAT_04372cb8;
  puVar9 = PTR_DAT_04372ca0;
  puVar8 = PTR_DAT_04372b98;
  bVar6 = *(byte *)(param_1 + 0x14);
  if ((bVar6 & 3) != 0) {
    local_78 = 0;
    lVar20 = *(long *)(param_2 + 0x18);
    lVar18 = *(long *)(param_1 + 0x18);
    uVar19 = 0;
    do {
      puVar2 = (ushort *)(lVar20 + uVar19 * 0x10);
      plVar21 = *(long **)(puVar2 + 4);
      if (((*PTR_DAT_04372cc0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04372cc0), iVar11 != 0)) {
        if (((*PTR_DAT_04372cc8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04372cc8), iVar11 != 0)) {
          *(undefined8 *)PTR_DAT_04372cd0 = 0;
          __cxa_guard_release(PTR_DAT_04372cc8);
        }
        *(undefined **)puVar10 = PTR_DAT_04372cd0;
        __cxa_guard_release(PTR_DAT_04372cc0);
      }
      if (plVar21 != (long *)0x0) {
        for (plVar12 = (long *)(**(code **)*plVar21)(plVar21); plVar12 != (long *)0x0;
            plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar10) {
            *(ushort *)(lVar18 + uVar19 * 0x10) =
                 *(ushort *)(lVar18 + uVar19 * 0x10) & 0xe0ff | 0x1000;
            lVar17 = plVar21[2];
            lVar13 = FUN_00232638(0x18,0x10);
            if (lVar13 != 0) {
              FUN_002502f0(lVar13,lVar17);
            }
            *(long *)(lVar18 + uVar19 * 0x10 + 8) = lVar13;
            goto joined_r0x0023d7b8;
          }
        }
      }
      lVar13 = (**(code **)(*plVar21 + 0x48))(plVar21);
      if (lVar13 != 0) {
        puVar14 = (undefined8 *)(**(code **)(*plVar21 + 0x48))(plVar21);
        if (((*PTR_DAT_04372b90 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04372b90), iVar11 != 0)) {
          if (((*PTR_DAT_04372a58 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar11 != 0)) {
            *(undefined8 *)PTR_DAT_04372a60 = 0;
            __cxa_guard_release(PTR_DAT_04372a58);
          }
          *(undefined **)puVar8 = PTR_DAT_04372a60;
          __cxa_guard_release(PTR_DAT_04372b90);
        }
        if (puVar14 != (undefined8 *)0x0) {
          for (plVar12 = (long *)(**(code **)*puVar14)(puVar14); plVar12 != (long *)0x0;
              plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar8) goto LAB_0023d594;
          }
          puVar14 = (undefined8 *)0x0;
        }
LAB_0023d594:
        puVar15 = (undefined8 *)(**(code **)(*plVar21 + 0x48))(plVar21);
        if (((*PTR_DAT_04372ca8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04372ca8), iVar11 != 0)) {
          if (((*PTR_DAT_04372a58 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar11 != 0)) {
            *(undefined8 *)PTR_DAT_04372a60 = 0;
            __cxa_guard_release(PTR_DAT_04372a58);
          }
          *(undefined **)puVar9 = PTR_DAT_04372a60;
          __cxa_guard_release(PTR_DAT_04372ca8);
        }
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar21 = (long *)(**(code **)*puVar15)(puVar15); plVar21 != (long *)0x0;
              plVar21 = (long *)*plVar21) {
            if (plVar21 == (long *)puVar9) goto LAB_0023d5e4;
          }
          puVar15 = (undefined8 *)0x0;
        }
LAB_0023d5e4:
        uVar16 = FUN_002362d0(param_3[3],*puVar2 >> 9 & 7);
        local_64[0] = 0;
        if (puVar14 == (undefined8 *)0x0) {
          if (puVar15 == (undefined8 *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = FUN_00235f90(uVar16,*param_3,param_3[2],puVar15);
            local_64[0] = 1;
            uVar4 = *(uint *)(param_1 + 0x10);
            uVar5 = *(uint *)(param_2 + 0x10);
            lVar17 = (local_78 & 0xff) * 0x20;
            puVar14 = (undefined8 *)
                      (*(long *)(param_2 + 0x18) +
                       (long)(int)((uVar5 >> 4 & 0x1c) + (uVar5 >> 8 & 0xc) + (uVar5 >> 0xc & 8) +
                                   (uVar5 >> 0xc & 1) * 0xc + (uVar5 >> 0x10 & 1) * 0x1c +
                                   (uVar5 >> 0xc & 0x10) * (uVar5 >> 6 & 7) +
                                   (uVar5 >> 0x11 & 1) * 0x74 +
                                   ((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                                  ((uVar5 >> 0xd & 3) + (uVar5 >> 2 & 3)) * 0x14) + lVar17);
            puVar15 = (undefined8 *)
                      (*(long *)(param_1 + 0x18) +
                       (long)(int)((uVar4 >> 4 & 0x1c) + (uVar4 >> 8 & 0xc) + (uVar4 >> 0xc & 8) +
                                   (uVar4 >> 0xc & 1) * 0xc + (uVar4 >> 0x10 & 1) * 0x1c +
                                   (uVar4 >> 0xc & 0x10) * (uVar4 >> 6 & 7) +
                                   (uVar4 >> 0x11 & 1) * 0x74 +
                                   ((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) +
                                  ((uVar4 >> 0xd & 3) + (uVar4 >> 2 & 3)) * 0x14) + lVar17);
            uVar16 = puVar14[1];
            uVar3 = puVar14[2];
            local_78 = (ulong)((int)local_78 + 1);
            *puVar15 = *puVar14;
            puVar15[1] = uVar16;
            puVar15[2] = uVar3;
            puVar15[3] = lVar13;
            uVar16 = *(undefined8 *)((long)puVar15 + 0xc);
            *(undefined8 *)(lVar13 + 0x140) = *(undefined8 *)((long)puVar15 + 4);
            *(undefined8 *)(lVar13 + 0x148) = uVar16;
          }
        }
        else {
          lVar13 = FUN_00235dfc(uVar16,local_64,puVar14);
        }
        puVar1 = (ushort *)(lVar18 + uVar19 * 0x10);
        uVar7 = *puVar1 & 0xfeff | (ushort)local_64[0] << 8;
        *puVar1 = uVar7;
        *puVar1 = uVar7 & 0xf1ff | *puVar2 & 0xe00;
        *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(lVar13 + 8);
      }
joined_r0x0023d7b8:
      uVar19 = uVar19 + 1;
    } while (uVar19 != (bVar6 & 3));
  }
  return;
}


