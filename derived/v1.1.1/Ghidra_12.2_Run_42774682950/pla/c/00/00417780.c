/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417780; name: FUN_00417780
 */


void FUN_00417780(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar5 = param_3 >> 1;
    if (uVar5 != 0) {
      puVar4 = param_1 + param_3;
      uVar7 = param_3 >> 1 & 1;
      if (uVar5 != 1) {
        lVar6 = uVar7 - uVar5;
        puVar3 = param_1;
        do {
          uVar1 = puVar4[-1];
          lVar6 = lVar6 + 2;
          puVar4[-1] = *puVar3;
          *puVar3 = uVar1;
          param_1 = puVar3 + 2;
          puVar4 = puVar4 + -2;
          uVar1 = *puVar4;
          *puVar4 = puVar3[1];
          puVar3[1] = uVar1;
          puVar3 = param_1;
        } while (lVar6 != 0);
      }
      if (uVar7 != 0) {
        uVar1 = puVar4[-1];
        puVar4[-1] = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else if (param_3 != 0) {
    puVar4 = param_1 + (param_3 - 1);
    if ((param_3 < 8) || ((param_1 < param_2 + param_3 && (param_2 < param_1 + param_3)))) {
      uVar5 = 0;
      uVar7 = param_3 - 1;
      uVar8 = param_3 & 3;
    }
    else {
      uVar5 = param_3 & 0xfffffffffffffff8;
      uVar7 = (uVar5 - 8 >> 3) + 1;
      uVar8 = uVar7 & 1;
      lVar6 = 0;
      if (uVar5 - 8 != 0) {
        lVar9 = uVar7 - uVar8;
        puVar10 = (undefined8 *)(param_2 + 8);
        do {
          uVar11 = NEON_rev64(puVar10[-1],1);
          lVar2 = lVar6 + (param_3 - 8);
          lVar6 = lVar6 + -0x10;
          *(undefined8 *)(param_1 + lVar2) = uVar11;
          lVar9 = lVar9 + -2;
          uVar11 = NEON_rev64(*puVar10,1);
          *(undefined8 *)((long)(param_1 + lVar2) + -8) = uVar11;
          puVar10 = puVar10 + 2;
        } while (lVar9 != 0);
        lVar6 = -lVar6;
      }
      if (uVar8 != 0) {
        uVar11 = NEON_rev64(*(undefined8 *)(param_2 + lVar6),1);
        *(undefined8 *)(puVar4 + (-7 - lVar6)) = uVar11;
      }
      if (uVar5 == param_3) {
        return;
      }
      uVar7 = ~uVar5 + param_3;
      uVar8 = param_3 & 3;
      puVar4 = puVar4 + -uVar5;
      param_2 = param_2 + uVar5;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar5 = uVar5 + 1;
      *puVar4 = *param_2;
      puVar4 = puVar4 + -1;
      param_2 = param_2 + 1;
    }
    if (2 < uVar7) {
      lVar6 = param_3 - uVar5;
      do {
        *puVar4 = *param_2;
        puVar4[-1] = param_2[1];
        puVar4[-2] = param_2[2];
        puVar3 = param_2 + 3;
        lVar6 = lVar6 + -4;
        param_2 = param_2 + 4;
        puVar4[-3] = *puVar3;
        puVar4 = puVar4 + -4;
      } while (lVar6 != 0);
    }
  }
  return;
}


