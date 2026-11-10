/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009af634; name: FUN_009af634
 */


void FUN_009af634(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar11;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  uVar4 = *param_3;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_3 + 1);
  *param_2 = uVar4;
  lVar10 = *(long *)(param_3 + 2);
  *(long *)(param_2 + 2) = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  if (*(code **)(param_3 + 8) != (code *)0x0) {
    (**(code **)(param_3 + 8))(param_3 + 0xc,param_2 + 0xc);
    uVar11 = *(undefined8 *)(param_3 + 4);
    uVar2 = *(undefined8 *)(param_3 + 6);
    uVar3 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 10) = uVar3;
    *(undefined8 *)(param_2 + 4) = uVar11;
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  return;
}


