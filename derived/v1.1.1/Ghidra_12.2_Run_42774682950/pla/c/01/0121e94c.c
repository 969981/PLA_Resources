/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121e94c; name: FUN_0121e94c
 */


bool FUN_0121e94c(long param_1,int param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar6 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar6;
    plVar7 = *(long **)(lVar6 + 0x248);
    if (plVar7 == (long *)0x0) {
      uVar8 = (ulong)DAT_000004a9;
    }
    else {
      lVar6 = plVar7[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar6 = plVar7[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      uVar8 = (ulong)*(byte *)((long)plVar7 + 0x4a9);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
    }
  }
  else {
    uVar8 = 0x20;
  }
  return (*(uint *)(param_1 + uVar8 * 4 + 0x169c) & 1 << (ulong)(param_3 & 0x1f)) != 0;
}


