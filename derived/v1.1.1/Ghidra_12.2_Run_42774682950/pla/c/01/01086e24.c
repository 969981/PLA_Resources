/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01086e24; name: FUN_01086e24
 */


void FUN_01086e24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  long *plVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint *__s;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  piVar14 = (int *)*param_2;
  if ((((piVar14 == (int *)0x0) || (*(uint *)(param_2 + 1) == 0xffffffff)) ||
      (puVar8 = (ushort *)((long)piVar14 - (long)*piVar14), *puVar8 < 5)) || ((ulong)puVar8[2] == 0)
     ) {
LAB_01086fe8:
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    plVar7 = (long *)param_3[3];
    param_1[3] = plVar7;
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01087030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))();
      return;
    }
  }
  else {
    puVar10 = (uint *)((long)piVar14 + (ulong)puVar8[2]);
    puVar10 = (uint *)((long)puVar10 + (ulong)*(uint *)(param_2 + 1) * 4 + (ulong)*puVar10 + 4);
    piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(uint *)((long)piVar1 + uVar11);
      if (uVar15 == 0xffffffff) goto LAB_01086fe8;
    }
    uVar4 = puVar8[3];
    puVar10 = (uint *)((long)piVar14 + (ulong)uVar4);
    uVar11 = (ulong)*puVar10;
    puVar10 = (uint *)((long)puVar10 + (ulong)uVar15 * 4 + uVar11 + 4);
    uVar16 = (ulong)*puVar10;
    piVar1 = (int *)((long)puVar10 + uVar16);
    puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
    if (((*puVar8 < 5) || ((ulong)puVar8[2] == 0)) ||
       (*(char *)((long)piVar1 + (ulong)puVar8[2]) != '\x03')) {
      param_1[2] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03996322;
    }
    else {
      uVar5 = puVar8[3];
      puVar10 = (uint *)((long)piVar1 + (ulong)uVar5);
      uVar17 = (ulong)*puVar10;
      piVar1 = (int *)((long)puVar10 + uVar17);
      uVar18 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar10 = (uint *)((long)piVar1 + uVar18);
      uVar13 = (ulong)*puVar10;
      puVar10 = (uint *)((long)puVar10 + uVar13);
      __s = puVar10 + 1;
      uVar2 = *puVar10;
      uVar6 = (ulong)uVar2;
      if (uVar2 == 0) {
        uVar6 = strlen((char *)__s);
      }
      bVar3 = (byte)*__s;
      puVar9 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        pbVar12 = (byte *)((long)piVar14 +
                          uVar13 + (ulong)uVar15 * 4 + uVar18 + uVar17 + (ulong)uVar5 + uVar16 +
                          uVar11 + (ulong)uVar4 + 9);
        do {
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar3 != 0);
      }
      *param_1 = puVar9;
      param_1[1] = __s;
      param_1[2] = uVar6;
    }
    param_1[3] = 0;
  }
  return;
}


