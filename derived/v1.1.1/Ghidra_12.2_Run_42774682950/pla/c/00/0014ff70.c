/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014ff70; name: FUN_0014ff70
 */


void FUN_0014ff70(long param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar7 = puVar5 + -2;
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar12 = (long *)**(long **)(param_1 + 0x20);
        puVar6 = &DAT_039c5c28;
        if ((int)plVar12[1] != 0x16) {
          lVar13 = *plVar12;
          puVar6 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar13 + 10)) {
            puVar6 = (undefined8 *)(lVar13 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar6 = puVar5 + (long)param_2 * 2;
    }
  }
  else {
    puVar6 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (puVar5 <= puVar6) {
      puVar6 = &DAT_039c5c28;
    }
  }
  uVar8 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
  puVar9 = (undefined8 *)((long)puVar7 - uVar8);
  if ((int)param_3 < 0) {
    puVar9 = (undefined8 *)((long)puVar6 + (-0x10 - uVar8));
  }
  if (puVar6 < puVar9) {
    puVar14 = puVar6;
    puVar11 = puVar9;
    do {
      puVar10 = puVar11 + -2;
      uVar1 = *puVar14;
      uVar2 = puVar14[1];
      uVar3 = puVar11[1];
      puVar15 = puVar14 + 2;
      *puVar14 = *puVar11;
      puVar14[1] = uVar3;
      *puVar11 = uVar1;
      puVar11[1] = uVar2;
      puVar14 = puVar15;
      puVar11 = puVar10;
    } while (puVar15 < puVar10);
  }
  if (puVar9 + 2 < puVar7) {
    puVar11 = puVar5 + -4;
    puVar9 = puVar9 + 2;
    do {
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar3 = puVar11[3];
      *puVar9 = puVar11[2];
      puVar9[1] = uVar3;
      puVar11[2] = uVar1;
      puVar11[3] = uVar2;
      bVar4 = puVar9 + 2 < puVar11;
      puVar11 = puVar11 + -2;
      puVar9 = puVar9 + 2;
    } while (bVar4);
  }
  if (puVar6 < puVar7) {
    puVar5 = puVar5 + -4;
    do {
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar3 = puVar5[3];
      *puVar6 = puVar5[2];
      puVar6[1] = uVar3;
      puVar5[2] = uVar1;
      puVar5[3] = uVar2;
      bVar4 = puVar6 + 2 < puVar5;
      puVar5 = puVar5 + -2;
      puVar6 = puVar6 + 2;
    } while (bVar4);
  }
  return;
}


