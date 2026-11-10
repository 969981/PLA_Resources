/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b53030; name: FUN_02b53030
 */


void FUN_02b53030(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  lVar14 = param_2[3];
  lVar4 = param_2[4];
  lVar1 = param_2[5];
  lVar5 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar5;
  param_1[3] = lVar14;
  param_1[4] = lVar4;
  lVar14 = param_2[1] - *param_2;
  if (lVar14 != 0) {
    uVar16 = param_1[4];
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)((lVar14 >> 2) * -0x3333333333333333)) goto LAB_02b5335c;
    puVar13 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar14,4);
    if (puVar13 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = (long)puVar13 + (lVar14 >> 2) * 4;
    *param_1 = puVar13;
    param_1[1] = puVar13;
    puVar11 = PTR_LAB_04379530;
    puVar10 = PTR_DAT_04379528;
    puVar9 = PTR_DAT_04379520;
    puVar6 = (undefined8 *)param_2[1];
    for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar6;
        puVar2 = (undefined8 *)((long)puVar2 + 0x14)) {
      uVar17 = param_1[3];
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        FUN_008a62a4(puVar10);
        FUN_00100250(puVar11,puVar10,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar9);
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
      if (lVar14 == 0) {
        uVar17 = *puVar2;
        uVar7 = puVar2[1];
        *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar13 = uVar17;
        puVar13[1] = uVar7;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_02b53354;
        *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        uVar17 = *puVar2;
        uVar7 = puVar2[1];
        *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar13 = uVar17;
        puVar13[1] = uVar7;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      puVar13 = (undefined8 *)(param_1[1] + 0x14);
      param_1[1] = puVar13;
    }
  }
  lVar14 = param_2[10];
  lVar4 = param_2[0xb];
  lVar1 = param_2[0xc];
  lVar5 = param_2[0xd];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = lVar1;
  param_1[0xd] = lVar5;
  param_1[10] = lVar14;
  param_1[0xb] = lVar4;
  lVar14 = param_2[8] - param_2[7];
  if (lVar14 != 0) {
    uVar16 = param_1[0xb];
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)(lVar14 >> 2)) {
LAB_02b5335c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar15 = (undefined4 *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],lVar14,4)
    ;
    if (puVar15 == (undefined4 *)0x0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    param_1[7] = puVar15;
    param_1[8] = puVar15;
    param_1[9] = puVar15 + (lVar14 >> 2);
    puVar11 = PTR_LAB_04379530;
    puVar10 = PTR_DAT_04379528;
    puVar9 = PTR_DAT_04379520;
    puVar8 = (undefined4 *)param_2[8];
    for (puVar3 = (undefined4 *)param_2[7]; puVar3 != puVar8; puVar3 = puVar3 + 1) {
      uVar17 = param_1[10];
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        FUN_008a62a4(puVar10);
        FUN_00100250(puVar11,puVar10,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar9);
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
      if (lVar14 == 0) {
        *puVar15 = *puVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_02b53354:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar17;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *puVar15 = *puVar3;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      puVar15 = (undefined4 *)(param_1[8] + 4);
      param_1[8] = puVar15;
    }
  }
  return;
}


