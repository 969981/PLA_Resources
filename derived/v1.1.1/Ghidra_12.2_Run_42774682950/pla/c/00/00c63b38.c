/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c63b38; name: FUN_00c63b38
 */


void FUN_00c63b38(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  uVar9 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  lVar1 = param_3[3];
  lVar2 = param_3[4];
  lVar7 = param_3[5];
  lVar3 = param_3[6];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = lVar7;
  param_2[6] = lVar3;
  param_2[3] = lVar1;
  param_2[4] = lVar2;
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    uVar8 = param_2[4];
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < (ulong)((lVar1 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar10 = param_2 + 3;
    lVar7 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar1,0x10);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xb8))();
    }
    param_2[2] = lVar7 + (lVar1 >> 4) * 0x10;
    *param_2 = lVar7;
    param_2[1] = lVar7;
    lVar2 = param_3[1];
    for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x250) {
      FUN_00bac10c(plVar10,lVar7,lVar1);
      lVar7 = param_2[1] + 0x250;
      param_2[1] = lVar7;
    }
  }
  *(int *)(param_2 + 7) = (int)param_3[7];
  param_2[8] = param_3[8];
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


