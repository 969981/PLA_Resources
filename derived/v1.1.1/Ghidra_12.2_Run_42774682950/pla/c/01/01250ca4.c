/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01250ca4; name: FUN_01250ca4
 */


void FUN_01250ca4(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  long alStack_4e0 [9];
  long *local_498;
  undefined4 local_490 [2];
  long *local_488;
  undefined1 local_480 [8];
  long local_478 [7];
  undefined4 local_440;
  char local_43c [972];
  undefined1 local_70;
  undefined7 uStack_6f;
  
  lVar8 = FUN_01234c94(param_1 + 0x9c0);
  lVar13 = 0;
  do {
    puVar2 = (undefined4 *)(lVar8 + lVar13);
    *(undefined4 *)((long)local_490 + lVar13) = *puVar2;
    plVar9 = *(long **)(puVar2 + 2);
    *(long **)((long)local_490 + lVar13 + 8) = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    local_480[lVar13] = *(undefined1 *)(puVar2 + 4);
    plVar9 = *(long **)(puVar2 + 6);
    *(long **)((long)local_478 + lVar13) = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    plVar9 = *(long **)(puVar2 + 8);
    *(long **)((long)local_478 + lVar13 + 8) = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    plVar9 = *(long **)(puVar2 + 0xc);
    *(undefined8 *)((long)local_478 + lVar13 + 0x10) = *(undefined8 *)(puVar2 + 10);
    *(long **)((long)local_478 + lVar13 + 0x18) = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    uVar10 = *(undefined8 *)(puVar2 + 0xe);
    lVar1 = lVar13 + 0x58;
    uVar12 = *(undefined8 *)(puVar2 + 0x12);
    *(undefined8 *)((long)local_478 + lVar13 + 0x28) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)local_478 + lVar13 + 0x30) = uVar12;
    *(undefined8 *)((long)local_478 + lVar13 + 0x20) = uVar10;
    uVar3 = puVar2[0x14];
    local_43c[lVar13] = *(char *)(puVar2 + 0x15);
    *(undefined4 *)((long)local_478 + lVar13 + 0x38) = uVar3;
    lVar13 = lVar1;
  } while (lVar1 != 0x420);
  lVar13 = 0;
  pcVar15 = local_43c;
  plVar9 = local_488;
  if (local_488 == (long *)0x0) goto LAB_01250dd4;
LAB_01250f08:
  (**(code **)(*plVar9 + 0x18))(plVar9);
  plVar16 = *(long **)(pcVar15 + -0x3c);
  local_488 = plVar9;
  if (plVar16 == (long *)0x0) goto LAB_01250ddc;
LAB_01250f20:
  (**(code **)(*plVar16 + 0x18))(plVar16);
  plVar9 = *(long **)(pcVar15 + -0x34);
  if (plVar9 == (long *)0x0) goto LAB_01250de4;
LAB_01250f38:
  (**(code **)(*plVar9 + 0x18))(plVar9);
  plVar14 = *(long **)(pcVar15 + -0x24);
  if (plVar14 == (long *)0x0) goto LAB_01250dec;
  do {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    cVar4 = *pcVar15;
    pcVar5 = pcVar15;
    plVar6 = local_488;
    while( true ) {
      if (cVar4 != '\0') {
        if (*(int *)(pcVar5 + -4) == -1) {
          if (*(code **)(param_1 + 0x13c0) != (code *)0x0) {
            local_70 = (undefined1)lVar13;
            (**(code **)(param_1 + 0x13c0))(param_1 + 0x13e0,&local_70);
          }
        }
        else if ((-1 < *(int *)(pcVar5 + -4)) && (*(long *)(param_1 + 0x1340) != 0)) {
          if (plVar6 == (long *)0x0) {
            plVar11 = (long *)PTR_PTR_04379d00;
          }
          else {
            plVar11 = plVar6 + 0xc;
          }
          pcVar15 = (char *)*plVar11;
          if (*pcVar15 == '\0') {
            plVar11 = (long *)FUN_00938550();
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
          else {
            if (((*PTR_DAT_04379cd0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379cd0);
            }
            uVar10 = *(undefined8 *)PTR_DAT_04379cd8;
            *(undefined8 *)PTR_DAT_04379ce0 = uVar10;
            FUN_02a47cd8(&local_70,uVar10,pcVar15);
            plVar11 = (long *)CONCAT71(uStack_6f,local_70);
          }
          local_498 = plVar11;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          FUN_01252504((long *)(param_1 + 0x1340),&local_498);
          if (local_498 != (long *)0x0) {
            (**(code **)(*local_498 + 0x20))();
          }
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      lVar13 = lVar13 + 1;
      pcVar15 = pcVar5 + 0x58;
      if (lVar13 == 0xc) {
        lVar13 = 0x420;
        do {
          plVar9 = *(long **)((long)alStack_4e0 + lVar13 + 0x28);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          plVar9 = *(long **)((long)alStack_4e0 + lVar13 + 0x18);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          plVar9 = *(long **)((long)alStack_4e0 + lVar13 + 0x10);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          if (*(long **)((long)alStack_4e0 + lVar13) != (long *)0x0) {
            (**(code **)(**(long **)((long)alStack_4e0 + lVar13) + 0x20))();
          }
          lVar13 = lVar13 + -0x58;
        } while (lVar13 != 0);
        return;
      }
      local_488 = *(long **)(pcVar5 + 0xc);
      plVar9 = local_488;
      if (local_488 != (long *)0x0) goto LAB_01250f08;
LAB_01250dd4:
      plVar16 = *(long **)(pcVar15 + -0x3c);
      if (plVar16 != (long *)0x0) goto LAB_01250f20;
LAB_01250ddc:
      plVar9 = *(long **)(pcVar15 + -0x34);
      if (plVar9 != (long *)0x0) goto LAB_01250f38;
LAB_01250de4:
      plVar14 = *(long **)(pcVar15 + -0x24);
      if (plVar14 != (long *)0x0) break;
LAB_01250dec:
      cVar4 = *pcVar15;
      pcVar5 = pcVar15;
      plVar6 = local_488;
    }
  } while( true );
}


