/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6eac4; name: FUN_02b6eac4
 */


void FUN_02b6eac4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar11 = param_2[3];
  lVar3 = param_2[4];
  lVar1 = param_2[5];
  lVar4 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar4;
  param_1[3] = lVar11;
  param_1[4] = lVar3;
  lVar11 = param_2[1] - *param_2;
  if (lVar11 != 0) {
    uVar12 = param_1[4];
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)(lVar11 >> 2)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar10 = (undefined4 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar11,4);
    if (puVar10 == (undefined4 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = puVar10;
    param_1[1] = puVar10;
    param_1[2] = puVar10 + (lVar11 >> 2);
    puVar8 = PTR_LAB_04379530;
    puVar7 = PTR_DAT_04379528;
    puVar6 = PTR_DAT_04379520;
    puVar5 = (undefined4 *)param_2[1];
    for (puVar2 = (undefined4 *)*param_2; puVar2 != puVar5; puVar2 = puVar2 + 1) {
      uVar13 = param_1[3];
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        FUN_008a62a4(puVar7);
        FUN_00100250(puVar8,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar6);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
      if (lVar11 == 0) {
        *puVar10 = *puVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar13;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *puVar10 = *puVar2;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      puVar10 = (undefined4 *)(param_1[1] + 4);
      param_1[1] = puVar10;
    }
  }
  param_1[7] = param_2[7];
  return;
}


