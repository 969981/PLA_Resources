/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01252140; name: FUN_01252140
 */


void FUN_01252140(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long alStack_4e0 [10];
  long local_490 [2];
  undefined1 local_480 [8];
  long local_478 [7];
  undefined4 local_440;
  char local_43c [972];
  long *local_70 [2];
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(local_70);
  if (local_70[0] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar11 = FUN_01234c94(param_1 + 0x9c0);
  lVar18 = 0;
  do {
    puVar3 = (undefined4 *)(lVar11 + lVar18);
    *(undefined4 *)((long)local_490 + lVar18) = *puVar3;
    plVar12 = *(long **)(puVar3 + 2);
    *(long **)((long)local_490 + lVar18 + 8) = plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))();
    }
    local_480[lVar18] = *(undefined1 *)(puVar3 + 4);
    plVar12 = *(long **)(puVar3 + 6);
    *(long **)((long)local_478 + lVar18) = plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))();
    }
    plVar12 = *(long **)(puVar3 + 8);
    *(long **)((long)local_478 + lVar18 + 8) = plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))();
    }
    plVar12 = *(long **)(puVar3 + 0xc);
    *(undefined8 *)((long)local_478 + lVar18 + 0x10) = *(undefined8 *)(puVar3 + 10);
    *(long **)((long)local_478 + lVar18 + 0x18) = plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))();
    }
    puVar9 = PTR_PTR_04379d00;
    uVar4 = *(undefined8 *)(puVar3 + 0xe);
    lVar1 = lVar18 + 0x58;
    uVar16 = *(undefined8 *)(puVar3 + 0x12);
    *(undefined8 *)((long)local_478 + lVar18 + 0x28) = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)((long)local_478 + lVar18 + 0x30) = uVar16;
    *(undefined8 *)((long)local_478 + lVar18 + 0x20) = uVar4;
    uVar5 = puVar3[0x14];
    local_43c[lVar18] = *(char *)(puVar3 + 0x15);
    *(undefined4 *)((long)local_478 + lVar18 + 0x38) = uVar5;
    lVar18 = lVar1;
  } while (lVar1 != 0x420);
  uVar17 = 0;
  do {
    plVar12 = (long *)local_490[uVar17 * 0xb + 1];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar19 = (long *)local_478[uVar17 * 0xb];
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
    plVar20 = (long *)local_478[uVar17 * 0xb + 1];
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    plVar21 = (long *)local_478[uVar17 * 0xb + 3];
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
    if (local_43c[uVar17 * 0x58] != '\0') {
      if (plVar12 == (long *)0x0) {
        plVar14 = (long *)PTR_DAT_04379c88;
      }
      else {
        plVar14 = plVar12 + 0xb;
      }
      puVar13 = &DAT_cbf29ce484222645;
      if ((undefined1 *)*plVar14 != &DAT_cbf29ce484222645) {
        plVar14 = (long *)puVar9;
        if (plVar12 != (long *)0x0) {
          plVar14 = plVar12 + 0xc;
        }
        pbVar15 = (byte *)*plVar14;
        bVar6 = *pbVar15;
        puVar13 = &DAT_cbf29ce484222645;
        if (bVar6 != 0) {
          puVar13 = &DAT_cbf29ce484222645;
          do {
            pbVar15 = pbVar15 + 1;
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar15;
          } while (bVar6 != 0);
        }
      }
      FUN_0111b748(local_70[0],uVar17 & 0xffffffff,puVar13);
    }
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 0xc);
  lVar18 = 0x420;
  do {
    plVar12 = *(long **)((long)alStack_4e0 + lVar18 + 0x28);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = *(long **)((long)alStack_4e0 + lVar18 + 0x18);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = *(long **)((long)alStack_4e0 + lVar18 + 0x10);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    if (*(long **)((long)alStack_4e0 + lVar18) != (long *)0x0) {
      (**(code **)(**(long **)((long)alStack_4e0 + lVar18) + 0x20))();
    }
    lVar18 = lVar18 + -0x58;
  } while (lVar18 != 0);
  if (local_70[0] != (long *)0x0) {
    lVar18 = local_70[0][0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  return;
}


