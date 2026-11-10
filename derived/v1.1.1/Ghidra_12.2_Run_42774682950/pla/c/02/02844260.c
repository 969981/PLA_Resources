/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02844260; name: FUN_02844260
 */


void FUN_02844260(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  
  puVar4 = PTR_LAB_04379530;
  puVar3 = PTR_DAT_04379528;
  puVar2 = PTR_DAT_04379520;
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 5)) {
    puVar15 = (undefined8 *)param_1[1];
    do {
      lVar12 = param_1[3];
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        FUN_008a62a4(puVar3);
        FUN_00100250(puVar4,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar2);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (lVar8 == 0) {
        *puVar15 = &DAT_cbf29ce484222645;
        puVar15[1] = &DAT_03996322;
        puVar15[2] = 0;
        puVar15[3] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar12;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar15 = &DAT_cbf29ce484222645;
        puVar15[1] = &DAT_03996322;
        puVar15[2] = 0;
        puVar15[3] = 0;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      puVar15 = (undefined8 *)(param_1[1] + 0x20);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar15;
    } while (param_2 != 0);
    return;
  }
  uVar10 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 5;
  uVar7 = lVar12 + param_2;
  if (0x7ffffffffffffffe < uVar10) {
    uVar10 = 0x7fffffffffffffff;
  }
  if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - *param_1;
  if ((ulong)(lVar8 >> 5) < uVar10 >> 1) {
    uVar9 = lVar8 >> 4;
    uVar10 = uVar7;
    if (uVar7 <= uVar9) {
      uVar10 = uVar9;
    }
  }
  plVar11 = param_1 + 3;
  if (uVar10 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar10 << 5,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xb8))();
    }
  }
  puVar3 = PTR_DAT_04379528;
  puVar2 = PTR_DAT_04379520;
  puVar13 = (undefined8 *)(lVar8 + lVar12 * 0x20);
  puVar15 = puVar13;
  do {
    lVar12 = *plVar11;
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
      FUN_008a62a4(puVar3);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar2);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (lVar6 == 0) {
      *puVar15 = &DAT_cbf29ce484222645;
      puVar15[1] = &DAT_03996322;
      puVar15[2] = 0;
      puVar15[3] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar15 = &DAT_cbf29ce484222645;
      puVar15[1] = &DAT_03996322;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar15 = puVar15 + 4;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  lVar12 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 == lVar12) {
    lVar6 = lVar12;
  }
  else {
    do {
      puVar13 = puVar13 + -4;
      lVar6 = lVar6 + -0x20;
      FUN_00b835e0(plVar11,puVar13,lVar6);
    } while (lVar12 != lVar6);
    lVar12 = *param_1;
    lVar6 = param_1[1];
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)puVar15;
  lVar14 = param_1[2];
  param_1[2] = lVar8 + uVar10 * 0x20;
  while (lVar6 != lVar12) {
    plVar1 = (long *)(lVar6 + -8);
    lVar6 = lVar6 + -0x20;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  if (lVar12 == 0) {
    return;
  }
  plVar11 = (long *)*plVar11;
  uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar7 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02844470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
  return;
}


