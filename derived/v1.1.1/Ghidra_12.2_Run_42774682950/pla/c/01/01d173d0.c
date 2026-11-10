/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d173d0; name: FUN_01d173d0
 */


void FUN_01d173d0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)(param_2 + 0x38);
  lVar6 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,0x20,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)*puVar9 + 0xb8))();
  }
  *param_1 = lVar6;
  param_1[1] = (long)puVar9;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar10 = *puVar9;
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
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  *(undefined8 *)(lVar6 + 0x10) = *param_4;
  lVar8 = *param_5;
  *(long *)(lVar6 + 0x18) = lVar8;
  if (lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
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
  }
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar9 = (undefined8 *)*param_1;
  *puVar9 = 0;
  puVar9[1] = param_3;
  return;
}


