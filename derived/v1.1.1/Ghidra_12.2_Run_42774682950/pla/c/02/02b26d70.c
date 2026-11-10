/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b26d70; name: FUN_02b26d70
 */


void FUN_02b26d70(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = param_2[3];
  lVar2 = param_2[4];
  lVar9 = param_2[5];
  lVar3 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar9;
  param_1[6] = lVar3;
  param_1[3] = lVar14;
  param_1[4] = lVar2;
  lVar14 = param_2[1] - *param_2;
  if (lVar14 != 0) {
    uVar12 = param_1[4];
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar14 >> 4) * 0x4ec4ec4ec4ec4ec5)) goto LAB_02b2732c;
    plVar11 = param_1 + 3;
    lVar9 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,lVar14,0x10);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xb8))();
    }
    param_1[2] = lVar9 + (lVar14 >> 4) * 0x10;
    *param_1 = lVar9;
    param_1[1] = lVar9;
    lVar2 = param_2[1];
    for (lVar14 = *param_2; lVar14 != lVar2; lVar14 = lVar14 + 0xd0) {
      FUN_02b26764(plVar11,lVar9,lVar14);
      lVar9 = param_1[1] + 0xd0;
      param_1[1] = lVar9;
    }
  }
  lVar14 = param_2[10];
  lVar2 = param_2[0xb];
  lVar9 = param_2[0xc];
  lVar3 = param_2[0xd];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar3;
  param_1[10] = lVar14;
  param_1[0xb] = lVar2;
  lVar14 = param_2[8] - param_2[7];
  if (lVar14 != 0) {
    uVar12 = param_1[0xb];
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar14 >> 4) * -0x3333333333333333)) goto LAB_02b2732c;
    puVar10 = (undefined8 *)
              (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],lVar14,0x10);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    param_1[9] = (long)(puVar10 + (lVar14 >> 4) * 2);
    param_1[7] = (long)puVar10;
    param_1[8] = (long)puVar10;
    puVar7 = PTR_LAB_04379530;
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    puVar4 = (undefined8 *)param_2[8];
    for (puVar1 = (undefined8 *)param_2[7]; puVar1 != puVar4; puVar1 = puVar1 + 10) {
      lVar14 = param_1[10];
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_008a62a4(puVar6);
        FUN_00100250(puVar7,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (lVar9 == 0) {
        uVar13 = puVar1[9];
        puVar10[7] = puVar1[7];
        puVar10[9] = uVar13;
        uVar13 = puVar1[5];
        puVar10[3] = puVar1[3];
        puVar10[5] = uVar13;
        puVar10[1] = puVar1[1];
        *puVar10 = *puVar1;
        uVar13 = puVar1[2];
        puVar10[4] = puVar1[4];
        puVar10[2] = uVar13;
        uVar13 = puVar1[6];
        puVar10[8] = puVar1[8];
        puVar10[6] = uVar13;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02b27324;
        *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar14;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        uVar13 = puVar1[9];
        puVar10[7] = puVar1[7];
        puVar10[9] = uVar13;
        uVar13 = puVar1[5];
        puVar10[3] = puVar1[3];
        puVar10[5] = uVar13;
        puVar10[1] = puVar1[1];
        *puVar10 = *puVar1;
        uVar13 = puVar1[2];
        puVar10[4] = puVar1[4];
        puVar10[2] = uVar13;
        uVar13 = puVar1[6];
        puVar10[8] = puVar1[8];
        puVar10[6] = uVar13;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      puVar10 = (undefined8 *)(param_1[8] + 0x50);
      param_1[8] = (long)puVar10;
    }
  }
  lVar14 = param_2[0x11];
  lVar2 = param_2[0x12];
  lVar9 = param_2[0x13];
  lVar3 = param_2[0x14];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = lVar9;
  param_1[0x14] = lVar3;
  param_1[0x11] = lVar14;
  param_1[0x12] = lVar2;
  lVar14 = param_2[0xf] - param_2[0xe];
  if (lVar14 != 0) {
    uVar12 = param_1[0x12];
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)((lVar14 >> 6) * -0x5555555555555555)) {
LAB_02b2732c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar10 = (undefined8 *)
              (**(code **)(*(long *)param_1[0x11] + 0x10))((long *)param_1[0x11],lVar14,0x10);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[0x11] + 0xb8))();
    }
    param_1[0x10] = (long)(puVar10 + (lVar14 >> 6) * 8);
    param_1[0xe] = (long)puVar10;
    param_1[0xf] = (long)puVar10;
    puVar7 = PTR_LAB_04379530;
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    puVar4 = (undefined8 *)param_2[0xf];
    for (puVar1 = (undefined8 *)param_2[0xe]; puVar1 != puVar4; puVar1 = puVar1 + 0x18) {
      lVar14 = param_1[0x11];
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_008a62a4(puVar6);
        FUN_00100250(puVar7,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (lVar9 != 0) {
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_02b27324:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar14;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      }
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar10[2] = puVar1[2];
      plVar11 = (long *)puVar1[3];
      puVar10[3] = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      puVar10[4] = puVar1[4];
      puVar10[5] = puVar1[5];
      puVar10[6] = puVar1[6];
      plVar11 = (long *)puVar1[7];
      puVar10[7] = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      puVar10[8] = puVar1[8];
      puVar10[9] = puVar1[9];
      puVar10[10] = puVar1[10];
      plVar11 = (long *)puVar1[0xb];
      puVar10[0xb] = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      puVar10[0xc] = puVar1[0xc];
      puVar10[0xd] = puVar1[0xd];
      puVar10[0xe] = puVar1[0xe];
      plVar11 = (long *)puVar1[0xf];
      puVar10[0xf] = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      puVar10[0x10] = puVar1[0x10];
      puVar10[0x11] = puVar1[0x11];
      puVar10[0x12] = puVar1[0x12];
      plVar11 = (long *)puVar1[0x13];
      puVar10[0x13] = plVar11;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))();
      }
      uVar13 = puVar1[0x17];
      puVar10[0x15] = puVar1[0x15];
      puVar10[0x17] = uVar13;
      uVar13 = puVar1[0x14];
      puVar10[0x16] = puVar1[0x16];
      puVar10[0x14] = uVar13;
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      puVar10 = (undefined8 *)(param_1[0xf] + 0xc0);
      param_1[0xf] = (long)puVar10;
    }
  }
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  return;
}


