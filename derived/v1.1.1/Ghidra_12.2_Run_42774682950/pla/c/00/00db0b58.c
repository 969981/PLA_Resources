/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db0b58; name: FUN_00db0b58
 */


void FUN_00db0b58(long param_1,byte *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  if ((lVar7 != 0) && (plVar11 = *(long **)(lVar7 + 0x338), plVar11 != (long *)0x0)) {
    lVar7 = plVar11[0xb];
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
    puVar8 = &DAT_cbf29ce484222645;
    bVar2 = *param_2;
    while (bVar2 != 0) {
      param_2 = param_2 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *param_2;
    }
    plVar9 = plVar11 + 0x4d;
    do {
      if ((char)*plVar9 == '\0') {
        plVar10 = plVar9 + 1;
LAB_00db0cb4:
        *plVar10 = (long)puVar8;
        plVar9[2] = param_3;
        *(char *)plVar9 = '\x01';
        break;
      }
      if ((undefined1 *)plVar9[1] == puVar8) {
LAB_00db0c6c:
        plVar9[2] = param_3;
        break;
      }
      if ((char)plVar9[3] == '\0') {
        plVar10 = plVar9 + 4;
        plVar9 = plVar9 + 3;
        goto LAB_00db0cb4;
      }
      if ((undefined1 *)plVar9[4] == puVar8) {
        plVar9 = plVar9 + 3;
        goto LAB_00db0c6c;
      }
      plVar9 = plVar9 + 6;
    } while (plVar9 != plVar11 + 0x64d);
    lVar7 = plVar11[0xb];
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
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
  return;
}


