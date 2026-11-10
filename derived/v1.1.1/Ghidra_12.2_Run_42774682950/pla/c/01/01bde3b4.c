/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bde3b4; name: thunk_FUN_01a55e88
 */


void thunk_FUN_01a55e88(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *apuStack_38 [2];
  long *plStack_28;
  undefined8 uStack_18;
  
  FUN_01a4fa84(apuStack_38);
  FUN_01a4ff90(&plStack_28,apuStack_38);
  if (apuStack_38[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(apuStack_38[0] + 1);
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
      apuStack_38[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      uStack_18 = *apuStack_38[0];
      FUN_02a44274(lVar5 + 0xd8,&uStack_18);
    }
  }
  if (plStack_28 != (long *)0x0) {
    FUN_028ac6dc();
    if (plStack_28 != (long *)0x0) {
      lVar5 = plStack_28[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plStack_28 + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined1 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined1 *)(param_1 + 0x86c) = 0;
  return;
}


