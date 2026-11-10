/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026011a0; name: FUN_026011a0
 */


void FUN_026011a0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)(param_2 + 0x38);
  lVar6 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,0x68,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)*puVar10 + 0xb8))();
  }
  *param_1 = lVar6;
  param_1[1] = (long)puVar10;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar11 = *puVar10;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  puVar1 = PTR_DAT_04381920 + 0x10;
  *(undefined8 *)(lVar6 + 0x10) = *param_4;
  *(undefined **)(lVar6 + 0x18) = puVar1;
  FUN_0098731c(lVar6 + 0x20,param_5 + 8);
  lVar9 = *(long *)(param_5 + 0x18);
  *(long *)(lVar6 + 0x30) = lVar9;
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = *(long *)(param_5 + 0x20);
  *(long *)(lVar6 + 0x38) = lVar9;
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = *(long *)(param_5 + 0x28);
  *(long *)(lVar6 + 0x40) = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined **)(lVar6 + 0x18) = PTR_DAT_0437a6d0 + 0x10;
  *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_5 + 0x40);
  plVar8 = *(long **)(param_5 + 0x48);
  *(long **)(lVar6 + 0x60) = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar10 = (undefined8 *)*param_1;
  *puVar10 = 0;
  puVar10[1] = param_3;
  return;
}


