/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adc23c; name: FUN_02adc23c
 */


void FUN_02adc23c(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  uVar12 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar12;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  lVar11 = param_3[3];
  lVar2 = param_3[4];
  lVar9 = param_3[5];
  lVar3 = param_3[6];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = lVar9;
  param_2[6] = lVar3;
  param_2[3] = lVar11;
  param_2[4] = lVar2;
  lVar11 = param_3[1] - *param_3;
  if (lVar11 != 0) {
    uVar10 = param_2[4];
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)(lVar11 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar13 = param_2 + 3;
    lVar9 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,lVar11,4);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*plVar13 + 0xb8))();
    }
    *param_2 = lVar9;
    param_2[1] = lVar9;
    param_2[2] = lVar9 + (lVar11 >> 3) * 8;
    lVar2 = param_3[1];
    for (lVar11 = *param_3; lVar11 != lVar2; lVar11 = lVar11 + 8) {
      FUN_02adc418(plVar13,lVar9,lVar11);
      lVar9 = param_2[1] + 8;
      param_2[1] = lVar9;
    }
  }
  lVar11 = param_3[7];
  param_2[7] = lVar11;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[8] = param_3[8];
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


