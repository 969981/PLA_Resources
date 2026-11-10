/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006763ac; name: FUN_006763ac
 */


void FUN_006763ac(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  long *plStack_68;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = FUN_00612290();
  param_1[3] = lVar5;
  puVar4 = PTR_DAT_04375a00;
  lVar5 = *param_2;
  lVar3 = param_2[1];
  if (lVar5 != lVar3) {
    lVar11 = 0;
    plVar1 = param_1 + 3;
    do {
      while (lVar6 = FUN_006818c8(lVar5), *(int *)(lVar6 + 0x1c) == 3) {
        lVar6 = FUN_006818c8(lVar5);
        puVar12 = puVar4;
        if (*(int *)(lVar6 + 0x1c) == 3) {
          puVar12 = *(undefined **)(lVar6 + 0x10);
        }
        uVar14 = param_1[1];
        if (uVar14 < (ulong)param_1[2]) {
          FUN_00675ee0(uVar14,lVar11,puVar12);
          param_1[1] = param_1[1] + 0x48;
          break;
        }
        lVar6 = (long)(uVar14 - *param_1) >> 3;
        uVar14 = lVar6 * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar14) {
                    /* try { // try from 00676604 to 0067660b has its CatchHandler @ 0067660c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = param_1[2] - *param_1 >> 3;
        plStack_68 = plVar1;
        if ((ulong)(lVar7 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
          uVar8 = lVar7 * 0x1c71c71c71c71c72;
          if (uVar14 <= uVar8) {
            uVar14 = uVar8;
          }
          if (uVar14 != 0) goto LAB_006764f8;
          local_88 = (undefined8 *)0x0;
        }
        else {
          uVar14 = 0x38e38e38e38e38e;
LAB_006764f8:
          local_70 = (undefined8 *)0x0;
          local_88 = (undefined8 *)
                     (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar14 * 0x48,8);
        }
        puVar13 = local_88 + lVar6;
        local_70 = local_88 + uVar14 * 9;
        local_80 = puVar13;
        FUN_00675ee0(puVar13,lVar11,puVar12);
        local_88 = (undefined8 *)*param_1;
        puVar2 = puVar13 + 9;
        puVar9 = (undefined8 *)param_1[1];
        if ((undefined8 *)param_1[1] == local_88) {
          puStack_78 = local_88;
        }
        else {
          do {
            puVar10 = puVar9 + -9;
            puVar13[-9] = *puVar10;
            uVar15 = puVar9[-8];
            uVar17 = puVar9[-5];
            uVar16 = puVar9[-6];
            puVar13[-7] = puVar9[-7];
            puVar13[-8] = uVar15;
            puVar13[-5] = uVar17;
            puVar13[-6] = uVar16;
            puVar9[-8] = 0;
            puVar9[-7] = 0;
            puVar9[-6] = 0;
            puVar13[-2] = 0;
            puVar13[-4] = 0;
            puVar13[-3] = 0;
            puVar13[-1] = puVar9[-1];
            uVar15 = puVar9[-4];
            puVar13[-3] = puVar9[-3];
            puVar13[-4] = uVar15;
            puVar13[-2] = puVar9[-2];
            puVar9[-4] = 0;
            puVar9[-3] = 0;
            puVar9[-2] = 0;
            puVar13 = local_80 + -9;
            puVar9 = puVar10;
            local_80 = puVar13;
          } while (local_88 != puVar10);
          local_88 = (undefined8 *)*param_1;
          puStack_78 = (undefined8 *)param_1[1];
        }
        lVar6 = param_1[2];
        *param_1 = (long)puVar13;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)local_70;
        local_80 = local_88;
        local_70 = (undefined8 *)lVar6;
        FUN_00676634(&local_88);
        lVar5 = lVar5 + 8;
        lVar11 = lVar11 + 1;
        if (lVar5 == lVar3) {
          return;
        }
      }
      lVar5 = lVar5 + 8;
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar3);
  }
  return;
}


