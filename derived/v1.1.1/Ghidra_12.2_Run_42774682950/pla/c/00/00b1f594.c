/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1f594; name: FUN_00b1f594
 */


void FUN_00b1f594(long param_1)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined4 local_78;
  long *local_68;
  
  puVar7 = PTR_DAT_04379ce0;
  puVar6 = PTR_DAT_04379cd8;
  puVar5 = PTR_DAT_04379cd0;
  puVar12 = *(uint **)(*(long *)(param_1 + 0x70) + 0x250);
  piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  uVar3 = *puVar12;
  if ((ulong)uVar3 != 0) {
    lVar16 = 0;
    do {
      uVar14 = (ulong)*(uint *)((long)puVar12 + lVar16 + 4);
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
      local_78 = 0x3f800000;
      lVar4 = lVar16 + uVar14;
      lVar2 = lVar16 + (uVar14 - (long)*(int *)((long)puVar12 + lVar4 + 4));
      if (*(ushort *)((long)puVar12 + lVar2 + 4) < 5) {
        local_90 = 0;
      }
      else {
        uVar13 = (ulong)*(ushort *)((long)puVar12 + lVar2 + 8);
        local_90 = 0;
        if (uVar13 != 0) {
          local_90 = *(undefined8 *)((long)puVar12 + lVar16 + uVar14 + uVar13 + 4);
        }
      }
      lVar2 = lVar16 + (uVar14 - (long)*(int *)((long)puVar12 + lVar4 + 4));
      if (*(ushort *)((long)puVar12 + lVar2 + 4) < 7) {
        local_98 = 0;
      }
      else {
        uVar13 = (ulong)*(ushort *)((long)puVar12 + lVar2 + 10);
        local_98 = 0;
        if (uVar13 != 0) {
          local_98 = *(undefined8 *)((long)puVar12 + lVar16 + uVar14 + uVar13 + 4);
        }
      }
      lVar2 = lVar16 + (uVar14 - (long)*(int *)((long)puVar12 + lVar4 + 4));
      if ((*(ushort *)((long)puVar12 + lVar2 + 4) < 9) ||
         (uVar13 = (ulong)*(ushort *)((long)puVar12 + lVar2 + 0xc), uVar13 == 0)) {
        pcVar15 = &DAT_00000004;
        if (DAT_00000004 != '\0') goto LAB_00b1f6f8;
LAB_00b1f89c:
        plVar11 = (long *)FUN_00938550();
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      else {
        lVar2 = uVar14 + uVar13;
        pcVar15 = (char *)((long)puVar12 +
                          lVar16 + lVar2 + (ulong)*(uint *)((long)puVar12 + lVar16 + lVar2 + 4) + 8)
        ;
        if (*pcVar15 == '\0') goto LAB_00b1f89c;
LAB_00b1f6f8:
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar7 = uVar9;
        FUN_02a47cd8(&local_68,uVar9,pcVar15);
        plVar11 = local_68;
        plVar10 = local_80;
        local_80 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      lVar2 = uVar14 + *(ushort *)
                        ((long)puVar12 +
                        lVar16 + (uVar14 - (long)*(int *)((long)puVar12 + lVar4 + 4)) + 0xe);
      lVar2 = lVar2 + (ulong)*(uint *)((long)puVar12 + lVar16 + lVar2 + 4);
      local_80 = plVar11;
      if (*(char *)((long)puVar12 + lVar16 + lVar2 + 8) == '\0') {
        plVar10 = (long *)FUN_00938550();
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      else {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar7 = uVar9;
        FUN_02a47cd8(&local_68,uVar9,(long)puVar12 + lVar16 + lVar2 + 8);
        plVar10 = local_68;
      }
      plVar11 = local_88;
      local_88 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      lVar4 = lVar16 + (uVar14 - (long)*(int *)((long)puVar12 + lVar4 + 4));
      local_78 = 0;
      if (0xc < *(ushort *)((long)puVar12 + lVar4 + 4)) {
        uVar13 = (ulong)*(ushort *)((long)puVar12 + lVar4 + 0x10);
        local_78 = 0;
        if (uVar13 != 0) {
          local_78 = *(undefined4 *)((long)puVar12 + lVar16 + uVar14 + uVar13 + 4);
        }
      }
      local_88 = plVar10;
      uVar9 = FUN_00b1fcbc(param_1 + 0x98,&local_90);
      FUN_00b20818(uVar9,&local_98,&local_88);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      lVar16 = lVar16 + 4;
    } while ((ulong)uVar3 * 4 != lVar16);
  }
  return;
}


