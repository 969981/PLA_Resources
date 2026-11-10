/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db134c; name: FUN_00db134c
 */


undefined1  [16] FUN_00db134c(long param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  auVar9 = ZEXT816(0xbff0000000000000);
  if ((lVar7 != 0) &&
     (plVar8 = *(long **)(lVar7 + 0x338), auVar9 = ZEXT816(0xbff0000000000000),
     plVar8 != (long *)0x0)) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_38 = &DAT_cbf29ce484222645;
    bVar2 = *param_2;
    while (bVar2 != 0) {
      param_2 = param_2 + 1;
      local_38 = (undefined1 *)(((ulong)local_38 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *param_2;
    }
    auVar9 = FUN_01128f64(plVar8,&local_38);
    uVar11 = auVar9._8_8_;
    uVar6 = auVar9._0_8_;
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
      auVar9._8_8_ = uVar11;
      auVar9._0_8_ = uVar6;
    }
  }
  uVar6 = auVar9._8_8_;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = auVar9._0_8_;
  return auVar10;
}


