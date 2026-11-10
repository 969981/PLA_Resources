/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014cdda0; name: FUN_014cdda0
 */


void FUN_014cdda0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long *local_68;
  long *local_58;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_011490f0(&local_58);
  FUN_00d702d8(&local_68,*(undefined8 *)(param_1 + 0x5b8));
  lVar11 = 0;
  do {
    puVar14 = (undefined8 *)(param_1 + 0x5c0 + lVar11);
    lVar11 = lVar11 + 0x20;
    *puVar14 = &DAT_cbf29ce484222645;
    puVar14[1] = &DAT_cbf29ce484222645;
    puVar14[2] = &DAT_cbf29ce484222645;
    puVar14[3] = &DAT_cbf29ce484222645;
  } while (lVar11 != 0x800);
  iVar6 = FUN_00d6e810(local_68);
  if (iVar6 != 0) {
    uVar12 = 0;
    uVar8 = 0;
    do {
      uVar9 = FUN_01143250(local_58,uVar8);
      if ((uVar9 & 1) != 0) {
        uVar10 = FUN_00d6e914(local_68,uVar8);
        lVar11 = (long)(int)uVar12;
        uVar12 = uVar12 + 1;
        *(undefined8 *)(param_1 + lVar11 * 8 + 0x5c0) = uVar10;
      }
      uVar8 = uVar8 + 1;
      uVar7 = FUN_00d6e810(local_68);
    } while (uVar8 < uVar7);
    if (0 < (int)uVar12) {
      uVar9 = 0;
      puVar14 = (undefined8 *)(param_1 + 0x5c0);
      uVar15 = (ulong)uVar12;
      do {
        puVar1 = (undefined8 *)(param_1 + uVar9 * 8 + 0x5c0);
        puVar13 = puVar14;
        uVar16 = uVar15;
        do {
          uVar8 = FUN_00d6efb8(local_68,puVar1);
          uVar7 = FUN_00d6efb8(local_68,puVar13);
          if (uVar7 < uVar8) {
            uVar10 = *puVar1;
            *puVar1 = *puVar13;
            *puVar13 = uVar10;
          }
          uVar16 = uVar16 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar16 != 0);
        uVar9 = uVar9 + 1;
        uVar15 = uVar15 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar9 != uVar12);
    }
  }
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[0xb];
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


