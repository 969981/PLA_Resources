/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01785dc4; name: FUN_01785dc4
 */


void FUN_01785dc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
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
  *param_2 = *param_3;
  uVar12 = param_4[1];
  param_2[1] = *param_4;
  param_2[2] = uVar12;
  uVar12 = param_4[5];
  uVar2 = param_4[6];
  uVar1 = param_4[7];
  uVar3 = param_4[8];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = uVar1;
  param_2[9] = uVar3;
  param_2[6] = uVar12;
  param_2[7] = uVar2;
  lVar5 = param_4[3] - param_4[2];
  if (lVar5 != 0) {
    uVar10 = param_2[7];
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)(lVar5 >> 5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar11 = param_2 + 6;
    lVar9 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,lVar5,0x10);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*puVar11 + 0xb8))();
    }
    param_2[3] = lVar9;
    param_2[4] = lVar9;
    param_2[5] = lVar9 + (lVar5 >> 5) * 0x20;
    lVar5 = param_4[2];
    lVar4 = param_4[3];
    if (lVar5 != lVar4) {
      FUN_01785554(puVar11,lVar9,lVar5);
      param_2[4] = param_2[4] + 0x20;
      if (lVar5 + 0x20 != lVar4) {
        FUN_01785554(puVar11);
        param_2[4] = param_2[4] + 0x20;
        if (lVar5 + 0x40 != lVar4) {
          FUN_01785554(puVar11);
          param_2[4] = param_2[4] + 0x20;
          if (lVar5 + 0x60 != lVar4) {
            FUN_01785554(puVar11);
            param_2[4] = param_2[4] + 0x20;
            if (lVar5 + 0x80 != lVar4) {
              FUN_01785554(puVar11);
              lVar9 = param_2[4] + 0x20;
              param_2[4] = lVar9;
              for (lVar5 = lVar5 + 0xa0; lVar5 != lVar4; lVar5 = lVar5 + 0x20) {
                FUN_01785554(puVar11,lVar9,lVar5);
                lVar9 = param_2[4] + 0x20;
                param_2[4] = lVar9;
              }
            }
          }
        }
      }
    }
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


