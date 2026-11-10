/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5dfa0; name: FUN_02b5dfa0
 */


void FUN_02b5dfa0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  lVar12 = param_2[3];
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  lVar4 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar4;
  param_1[3] = lVar12;
  param_1[4] = lVar3;
  uVar6 = param_2[1] - *param_2;
  if (uVar6 != 0) {
    uVar14 = param_1[4];
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar11 = (undefined1 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6,1);
    if (puVar11 == (undefined1 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = puVar11;
    param_1[1] = puVar11;
    param_1[2] = puVar11 + uVar6;
    puVar9 = PTR_LAB_04379530;
    puVar8 = PTR_DAT_04379528;
    puVar7 = PTR_DAT_04379520;
    puVar5 = (undefined1 *)param_2[1];
    for (puVar2 = (undefined1 *)*param_2; puVar2 != puVar5; puVar2 = puVar2 + 1) {
      uVar15 = param_1[3];
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        FUN_008a62a4(puVar8);
        FUN_00100250(puVar9,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar7);
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
      if (lVar12 == 0) {
        *puVar11 = *puVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar15;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar11 = *puVar2;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      puVar11 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = puVar11;
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  if ((char)param_2[7] != '\0') {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    plVar13 = (long *)param_2[0xb];
    param_1[0xb] = plVar13;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))();
    }
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return;
}


