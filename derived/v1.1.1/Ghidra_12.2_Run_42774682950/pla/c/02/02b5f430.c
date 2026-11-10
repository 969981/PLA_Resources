/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5f430; name: FUN_02b5f430
 */


void FUN_02b5f430(long *param_1,uint *param_2,ulong param_3,uint *param_4,ulong param_5,
                 undefined8 *param_6,long *param_7)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar3 = (long)param_4 - (long)param_2 >> 2;
  if (uVar3 < param_5) {
    puVar4 = param_2;
  }
  else {
    uVar5 = 0;
    if (param_5 != 0) {
      uVar5 = uVar3 / param_5;
    }
    puVar1 = (uint *)*param_6;
    lVar2 = *param_7;
    if (lVar2 != 0) {
LAB_02b5f458:
      uVar3 = uVar5 >> 1;
      puVar4 = param_2 + uVar3 * param_3;
      lVar6 = 0;
      do {
        lVar7 = lVar2;
        puVar8 = puVar4;
        puVar9 = puVar1;
        if (puVar4[lVar6] != puVar1[lVar6]) {
          if (puVar4[lVar6] < puVar1[lVar6]) {
            param_2 = puVar4 + param_3;
            uVar3 = uVar5 + ~uVar3;
            goto LAB_02b5f4e8;
          }
          break;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      do {
        if (*puVar9 != *puVar8) goto LAB_02b5f4dc;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
        if (lVar7 == 0) goto LAB_02b5f4f8;
      } while( true );
    }
    puVar4 = param_2 + (uVar5 >> 1) * param_3;
LAB_02b5f574:
    puVar4 = puVar4 + param_3;
    uVar3 = (long)param_4 - (long)puVar4 >> 2;
    if (param_5 <= uVar3) {
      uVar5 = 0;
      if (param_5 != 0) {
        uVar5 = uVar3 / param_5;
      }
      if (lVar2 == 0) {
        do {
          uVar3 = uVar5 >> 1;
          uVar5 = uVar5 + ~uVar3;
          puVar4 = puVar4 + param_3 + uVar3 * param_3;
        } while (uVar5 != 0);
      }
      else {
        do {
          uVar3 = uVar5 >> 1;
          lVar6 = lVar2;
          puVar9 = puVar4 + uVar3 * param_3;
          puVar8 = puVar1;
          do {
            if (*puVar8 != *puVar9) {
              if (*puVar8 < *puVar9) goto LAB_02b5f5bc;
              break;
            }
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          puVar4 = puVar4 + uVar3 * param_3 + param_3;
          uVar3 = uVar5 + ~uVar3;
LAB_02b5f5bc:
          uVar5 = uVar3;
        } while (uVar5 != 0);
      }
    }
  }
LAB_02b5f608:
  *param_1 = (long)param_2;
  param_1[1] = param_3;
  param_1[2] = (long)puVar4;
  param_1[3] = param_3;
  return;
LAB_02b5f4dc:
  if (*puVar8 <= *puVar9) {
LAB_02b5f4f8:
    uVar3 = (long)puVar4 - (long)param_2 >> 2;
    if (param_3 <= uVar3) {
      uVar5 = 0;
      if (param_3 != 0) {
        uVar5 = uVar3 / param_3;
      }
      do {
        uVar3 = uVar5 >> 1;
        lVar6 = lVar2;
        puVar9 = puVar1;
        puVar8 = param_2 + uVar3 * param_3;
        do {
          if (*puVar8 != *puVar9) {
            if (*puVar8 < *puVar9) {
              param_2 = param_2 + uVar3 * param_3 + param_3;
              uVar3 = uVar5 + ~uVar3;
            }
            break;
          }
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uVar5 = uVar3;
      } while (uVar3 != 0);
    }
    goto LAB_02b5f574;
  }
  param_4 = puVar4;
  param_5 = param_3;
LAB_02b5f4e8:
  puVar4 = param_2;
  uVar5 = uVar3;
  if (uVar3 == 0) goto LAB_02b5f608;
  goto LAB_02b5f458;
}


