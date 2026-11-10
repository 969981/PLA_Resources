/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02791128; name: FUN_02791128
 */


void FUN_02791128(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint local_b98;
  undefined8 auStack_b94 [14];
  undefined4 auStack_b24 [697];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar7 = *(long **)(lVar6 + 0x2a8);
  if (plVar7 == (long *)0x0) {
    *param_1 = 0;
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
    FUN_0110c0ac(&local_b98,plVar7);
    if ((param_3 < local_b98) && (param_3 < 0x19)) {
      lVar6 = (ulong)param_3 * 0x74;
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x10);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)((long)auStack_b94 + lVar6 + 8);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)((long)auStack_b94 + lVar6);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x30);
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x28);
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x20);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x18);
      *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x50);
      *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x48);
      *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x40);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x38);
      *(undefined4 *)(param_1 + 0x74) = auStack_b24[(ulong)param_3 * 0x1d];
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x68);
      uVar5 = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x60);
      *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)((long)auStack_b94 + lVar6 + 0x58);
      *(undefined8 *)(param_1 + 100) = uVar5;
      *param_1 = 1;
    }
    else {
      *param_1 = 0;
    }
    lVar6 = plVar7[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
  return;
}


