/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01354150; name: FUN_01354150
 */


void FUN_01354150(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)(param_2 + 0x38);
  lVar6 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,0x50,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)*puVar10 + 0xb8))();
  }
  *param_1 = lVar6;
  param_1[1] = (long)puVar10;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar11 = *puVar10;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
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
  *(undefined4 *)(lVar6 + 0x10) = *param_4;
  *(undefined8 *)(lVar6 + 0x18) = *param_5;
  *(undefined8 *)(lVar6 + 0x20) = param_5[1];
  *(undefined8 *)(lVar6 + 0x28) = param_5[2];
  plVar8 = (long *)param_5[3];
  *(long **)(lVar6 + 0x30) = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  lVar9 = param_5[4];
  *(long *)(lVar6 + 0x38) = lVar9;
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
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar11 = param_5[5];
  *(undefined4 *)(lVar6 + 0x48) = *(undefined4 *)(param_5 + 6);
  *(undefined8 *)(lVar6 + 0x40) = uVar11;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar10 = (undefined8 *)*param_1;
  *puVar10 = 0;
  puVar10[1] = param_3;
  return;
}


