/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012620d0; name: FUN_012620d0
 */


void FUN_012620d0(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  ushort uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 local_88 [8];
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar4 = PTR_DAT_04379cd8;
  puVar3 = PTR_DAT_04379cd0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar9 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
    piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
    if ((((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar13 != 0)) &&
        (puVar9 = (uint *)((long)piVar1 + uVar13), puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9),
        puVar9 != (uint *)0x0)) && (uVar2 = *puVar9, (ulong)uVar2 != 0)) {
      lVar17 = 0;
      do {
        uVar13 = (ulong)*(uint *)((long)puVar9 + lVar17 + 4);
        local_78 = (long *)0x0;
        local_70 = 0;
        local_80 = (long *)0x0;
        lVar15 = lVar17 + uVar13;
        lVar14 = lVar17 + (uVar13 - (long)*(int *)((long)puVar9 + lVar15 + 4));
        if (*(ushort *)((long)puVar9 + lVar14 + 4) < 5) {
          local_88[0] = 0;
        }
        else {
          uVar10 = (ulong)*(ushort *)((long)puVar9 + lVar14 + 8);
          local_88[0] = 0;
          if (uVar10 != 0) {
            local_88[0] = (undefined1)*(undefined4 *)((long)puVar9 + lVar17 + uVar13 + uVar10 + 4);
          }
        }
        lVar11 = (long)*(int *)((long)puVar9 + lVar15 + 4);
        lVar14 = lVar17 + (uVar13 - lVar11);
        uVar12 = *(ushort *)((long)puVar9 + lVar14 + 4);
        if (uVar12 < 7) {
LAB_012623cc:
          local_70 = 0;
        }
        else {
          uVar10 = (ulong)*(ushort *)((long)puVar9 + lVar14 + 10);
          lVar11 = -lVar11;
          if (uVar10 != 0) {
            uVar16 = (ulong)*(uint *)((long)puVar9 + lVar17 + uVar13 + uVar10 + 4);
            if ((long)puVar9 + lVar17 + uVar13 + uVar16 + uVar10 + 4 != 0) {
              lVar14 = uVar13 + uVar10 + uVar16;
              if (*(char *)((long)puVar9 + lVar17 + lVar14 + 8) == '\0') {
                plVar8 = (long *)FUN_00938550();
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x18))(plVar8);
                }
              }
              else {
                if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
                  FUN_00100250(PTR_LAB_04379d08,puVar4,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar3);
                }
                uVar7 = *(undefined8 *)puVar4;
                *(undefined8 *)PTR_DAT_04379ce0 = uVar7;
                FUN_02a47cd8(&local_68,uVar7,(long)puVar9 + lVar17 + lVar14 + 8);
                plVar8 = local_68;
                plVar5 = local_80;
                local_80 = (long *)0x0;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x20))();
                }
              }
              lVar14 = (long)*(int *)((long)puVar9 + lVar15 + 4);
              lVar11 = -lVar14;
              uVar12 = *(ushort *)((long)puVar9 + lVar17 + (uVar13 - lVar14) + 4);
              local_80 = plVar8;
            }
          }
          if (uVar12 < 9) goto LAB_012623cc;
          uVar10 = (ulong)*(ushort *)((long)puVar9 + lVar17 + lVar11 + uVar13 + 0xc);
          if (uVar10 != 0) {
            uVar16 = (ulong)*(uint *)((long)puVar9 + lVar17 + uVar13 + uVar10 + 4);
            if ((long)puVar9 + lVar17 + uVar13 + uVar16 + uVar10 + 4 != 0) {
              lVar14 = uVar13 + uVar10 + uVar16;
              if (*(char *)((long)puVar9 + lVar17 + lVar14 + 8) == '\0') {
                plVar8 = (long *)FUN_00938550();
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x18))(plVar8);
                }
              }
              else {
                if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
                  FUN_00100250(PTR_LAB_04379d08,puVar4,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar3);
                }
                uVar7 = *(undefined8 *)puVar4;
                *(undefined8 *)PTR_DAT_04379ce0 = uVar7;
                FUN_02a47cd8(&local_68,uVar7,(long)puVar9 + lVar17 + lVar14 + 8);
                plVar8 = local_68;
              }
              plVar5 = local_78;
              local_78 = (long *)0x0;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x20))();
              }
              lVar15 = (long)*(int *)((long)puVar9 + lVar15 + 4);
              lVar11 = -lVar15;
              uVar12 = *(ushort *)((long)puVar9 + lVar17 + (uVar13 - lVar15) + 4);
              local_78 = plVar8;
            }
          }
          if (uVar12 < 0xb) goto LAB_012623cc;
          uVar10 = (ulong)*(ushort *)((long)puVar9 + lVar17 + lVar11 + uVar13 + 0xe);
          local_70 = 0;
          if (uVar10 != 0) {
            local_70 = *(undefined8 *)((long)puVar9 + lVar17 + uVar13 + uVar10 + 4);
          }
        }
        uVar13 = FUN_012624a4(local_88);
        if ((uVar13 & 1) != 0) {
          FUN_01262644(param_1 + 0x98,local_88);
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        lVar17 = lVar17 + 4;
      } while ((ulong)uVar2 * 4 != lVar17);
    }
  }
  return;
}


