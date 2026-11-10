/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01194708; name: FUN_01194708
 */


void FUN_01194708(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  
  uVar11 = *(undefined8 *)(param_1 + 0x1a8);
  uVar6 = FUN_00d5294c(uVar11);
  puVar8 = (undefined8 *)FUN_00d4bf2c(uVar11,uVar6);
  puVar9 = puVar8;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar9 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar9 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar12 = *(long **)(lVar10 + 0x280);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    puVar9 = *(undefined8 **)(lVar10 + 0x18);
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      puVar9 = (undefined8 *)(**(code **)*puVar9)();
      *(undefined8 **)(lVar10 + 0x10) = puVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x16c4);
  uVar7 = FUN_010dac08(puVar9,iVar3);
  if (iVar3 == 0) {
    plVar2 = plVar12 + 0xd;
joined_r0x0119480c:
    if ((uint)puVar8 < uVar7) {
      uVar6 = *(undefined4 *)((long)plVar2 + ((ulong)puVar8 & 0xffffffff) * 4);
      goto joined_r0x0119482c;
    }
  }
  else {
    if (iVar3 == 1) {
      plVar2 = (long *)((long)plVar12 + 0xaf4);
      goto joined_r0x0119480c;
    }
    if (iVar3 == 2) {
      plVar2 = (long *)((long)plVar12 + 0xc84);
      goto joined_r0x0119480c;
    }
  }
  uVar6 = 0;
joined_r0x0119482c:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  FUN_0119f7a4(*(undefined8 *)(param_1 + 0x1a8),uVar6);
  return;
}


