/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dac88; name: FUN_013dac88
 */


void FUN_013dac88(long param_1,int param_2,undefined1 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 8) == '\0') {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar8 = *(long **)(lVar7 + 0x298);
    if (plVar8 != (long *)0x0) {
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
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = param_2 - 1;
    if (((uVar4 < 6) && (param_4 < 0x3d5)) && (param_7 < 0x3d5)) {
      *(short *)((long)plVar8 + (ulong)uVar4 * 0x10 + 0x7c) = (short)param_4;
      *(undefined1 *)((long)plVar8 + (ulong)uVar4 * 0x10 + 0x7e) = param_3;
      *(undefined4 *)(plVar8 + (ulong)uVar4 * 2 + 0x10) = param_5;
      *(undefined4 *)((long)plVar8 + (ulong)uVar4 * 0x10 + 0x84) = param_6;
      *(short *)(plVar8 + (ulong)uVar4 * 2 + 0x11) = (short)param_7;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x013dadc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x20))(plVar8);
        return;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = param_3;
    *(short *)(param_1 + 0xc) = (short)param_4;
    *(undefined4 *)(param_1 + 0x10) = param_5;
    *(undefined4 *)(param_1 + 0x14) = param_6;
    *(short *)(param_1 + 0x18) = (short)param_7;
  }
  return;
}


