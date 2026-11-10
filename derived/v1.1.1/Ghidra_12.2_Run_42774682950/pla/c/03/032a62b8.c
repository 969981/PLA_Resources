/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a62b8; name: FUN_032a62b8
 */


/* WARNING: Removing unreachable block (ram,0x032a6354) */
/* WARNING: Removing unreachable block (ram,0x032a6410) */

long * FUN_032a62b8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong local_58;
  
  puVar5 = PTR_PTR_0434a080;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar2 = *(uint *)(param_2 + 1);
  lVar15 = *param_2;
  lVar14 = *param_1;
  lVar6 = lVar14;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 1);
    FUN_032bd100(uVar2,0x10,*(uint *)((long)param_1 + 0xc),&local_58);
    uVar4 = *(uint *)((long)param_1 + 0xc);
    lVar6 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_58,&local_58);
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        puVar12 = (undefined8 *)(lVar6 + 0x10);
        puVar11 = (undefined8 *)(lVar14 + 0x10);
        do {
          uVar1 = puVar11[-1];
          lVar9 = lVar9 + 2;
          puVar12[-2] = puVar11[-2];
          puVar12[-1] = uVar1;
          uVar1 = puVar11[1];
          *puVar12 = *puVar11;
          puVar12[1] = uVar1;
          puVar12 = puVar12 + 4;
          puVar11 = puVar11 + 4;
        } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar9);
        if ((uVar3 & 1) == 0) goto LAB_032a639c;
      }
      puVar12 = (undefined8 *)(lVar6 + lVar9 * 0x10);
      puVar11 = (undefined8 *)(lVar14 + lVar9 * 0x10);
      uVar1 = puVar11[1];
      *puVar12 = *puVar11;
      puVar12[1] = uVar1;
    }
LAB_032a639c:
    if (-1 < (int)uVar4) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar14,((ulong)uVar4 & 0x3fffffff) << 4);
    }
    if (local_58 < 0x3fffffff0) {
      uVar7 = (undefined4)(local_58 >> 4);
    }
    else {
      uVar7 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    *param_1 = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 1);
  uVar3 = uVar4;
  if ((int)uVar2 <= (int)uVar4) {
    uVar3 = uVar2;
  }
  if ((lVar6 == lVar15) || ((int)uVar3 < 1)) goto LAB_032a645c;
  if (uVar3 == 1) {
    lVar14 = 0;
LAB_032a6444:
    puVar12 = (undefined8 *)(lVar15 + lVar14 * 0x10);
    puVar11 = (undefined8 *)(lVar6 + lVar14 * 0x10);
    uVar1 = puVar12[1];
    *puVar11 = *puVar12;
    puVar11[1] = uVar1;
  }
  else {
    lVar14 = 0;
    puVar12 = (undefined8 *)(lVar15 + 0x10);
    puVar11 = (undefined8 *)(lVar6 + 0x10);
    do {
      uVar1 = puVar12[-1];
      lVar14 = lVar14 + 2;
      puVar11[-2] = puVar12[-2];
      puVar11[-1] = uVar1;
      uVar1 = puVar12[1];
      *puVar11 = *puVar12;
      puVar11[1] = uVar1;
      puVar12 = puVar12 + 4;
      puVar11 = puVar11 + 4;
    } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar14);
    if ((uVar3 & 1) != 0) goto LAB_032a6444;
  }
  lVar6 = *param_1;
LAB_032a645c:
  if ((int)uVar4 < (int)uVar2) {
    puVar12 = (undefined8 *)(lVar15 + (long)(int)uVar3 * 0x10);
    puVar11 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 0x10);
    uVar4 = uVar2 - uVar3 & 1;
    if (uVar2 != uVar3 + 1) {
      iVar8 = (uVar2 - uVar3) - uVar4;
      puVar10 = puVar11;
      puVar13 = puVar12;
      do {
        uVar1 = puVar13[1];
        puVar12 = puVar13 + 4;
        *puVar10 = *puVar13;
        puVar10[1] = uVar1;
        puVar11 = puVar10 + 4;
        uVar1 = puVar13[3];
        iVar8 = iVar8 + -2;
        puVar10[2] = puVar13[2];
        puVar10[3] = uVar1;
        puVar10 = puVar11;
        puVar13 = puVar12;
      } while (iVar8 != 0);
    }
    if (uVar4 != 0) {
      uVar1 = puVar12[1];
      *puVar11 = *puVar12;
      puVar11[1] = uVar1;
    }
  }
  *(uint *)(param_1 + 1) = uVar2;
  return param_1;
}


