/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125771c; name: FUN_0125771c
 */


void FUN_0125771c(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined1 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long alStack_4d8 [9];
  long *local_490;
  long local_488 [2];
  undefined1 local_478 [8];
  long local_470 [7];
  undefined4 local_438;
  char local_434 [980];
  
  lVar13 = 0;
  do {
    lVar3 = param_1 + lVar13;
    *(undefined4 *)((long)local_488 + lVar13) = *(undefined4 *)(lVar3 + 0xb40);
    plVar10 = *(long **)(lVar3 + 0xb48);
    *(long **)((long)local_488 + lVar13 + 8) = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
    local_478[lVar13] = *(undefined1 *)(lVar3 + 0xb50);
    plVar10 = *(long **)(lVar3 + 0xb58);
    *(long **)((long)local_470 + lVar13) = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
    plVar10 = *(long **)(lVar3 + 0xb60);
    *(long **)((long)local_470 + lVar13 + 8) = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
    plVar10 = *(long **)(lVar3 + 0xb70);
    *(undefined8 *)((long)local_470 + lVar13 + 0x10) = *(undefined8 *)(lVar3 + 0xb68);
    *(long **)((long)local_470 + lVar13 + 0x18) = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
    lVar1 = lVar13 + 0x58;
    uVar14 = *(undefined8 *)(lVar3 + 0xb80);
    uVar16 = *(undefined8 *)(lVar3 + 0xb88);
    *(undefined8 *)((long)local_470 + lVar13 + 0x20) = *(undefined8 *)(lVar3 + 0xb78);
    *(undefined8 *)((long)local_470 + lVar13 + 0x28) = uVar14;
    *(undefined8 *)((long)local_470 + lVar13 + 0x30) = uVar16;
    uVar4 = *(undefined4 *)(lVar3 + 0xb90);
    local_434[lVar13] = *(char *)(lVar3 + 0xb94);
    *(undefined4 *)((long)local_470 + lVar13 + 0x38) = uVar4;
    lVar13 = lVar1;
  } while (lVar1 != 0x420);
  alStack_4d8[8] = param_1 + 0xb30;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_490);
  puVar8 = PTR_PTR_04379d00;
  uVar17 = 0;
  do {
    plVar10 = (long *)local_488[uVar17 * 0xb + 1];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar18 = (long *)local_470[uVar17 * 0xb];
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    plVar19 = (long *)local_470[uVar17 * 0xb + 1];
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
    plVar20 = (long *)local_470[uVar17 * 0xb + 3];
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    if (local_434[uVar17 * 0x58] != '\0') {
      if (plVar10 == (long *)0x0) {
        plVar12 = (long *)PTR_DAT_04379c88;
      }
      else {
        plVar12 = plVar10 + 0xb;
      }
      puVar11 = &DAT_cbf29ce484222645;
      if ((undefined1 *)*plVar12 != &DAT_cbf29ce484222645) {
        plVar12 = (long *)puVar8;
        if (plVar10 != (long *)0x0) {
          plVar12 = plVar10 + 0xc;
        }
        pbVar15 = (byte *)*plVar12;
        bVar5 = *pbVar15;
        puVar11 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar11 = &DAT_cbf29ce484222645;
          do {
            pbVar15 = pbVar15 + 1;
            puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar15;
          } while (bVar5 != 0);
        }
      }
      FUN_0111b748(local_490,uVar17 & 0xffffffff,puVar11);
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 0xc);
  FUN_01237b7c(alStack_4d8[8]);
  if (local_490 != (long *)0x0) {
    lVar13 = local_490[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_490 + 0x20))();
    }
  }
  lVar13 = 0x420;
  do {
    plVar10 = *(long **)((long)alStack_4d8 + lVar13 + 0x28);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    plVar10 = *(long **)((long)alStack_4d8 + lVar13 + 0x18);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    plVar10 = *(long **)((long)alStack_4d8 + lVar13 + 0x10);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    if (*(long **)((long)alStack_4d8 + lVar13) != (long *)0x0) {
      (**(code **)(**(long **)((long)alStack_4d8 + lVar13) + 0x20))();
    }
    lVar13 = lVar13 + -0x58;
  } while (lVar13 != 0);
  return;
}


