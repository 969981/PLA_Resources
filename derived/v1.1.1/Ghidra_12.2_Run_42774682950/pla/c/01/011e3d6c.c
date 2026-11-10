/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e3d6c; name: FUN_011e3d6c
 */


void FUN_011e3d6c(long param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *local_28;
  
  if (**(int **)(param_1 + 0xb08) == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(&local_28);
    lVar7 = 0;
    do {
      sVar2 = *(short *)(param_1 + lVar7 + 0x68);
      if ((sVar2 != 0) && (sVar3 = *(short *)(param_1 + lVar7 + 0x6a), sVar3 != 0)) {
        FUN_010db560(local_28,sVar2,sVar3,0xffffffff);
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x50);
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


