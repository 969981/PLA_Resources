/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e5eac; name: FUN_028e5eac
 */


void FUN_028e5eac(long *param_1,int *param_2)

{
  char *__s;
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  size_t sVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  FUN_00b6e968();
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    return;
  }
  uVar14 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
  if (uVar14 == 0) {
    return;
  }
  uVar15 = (ulong)*(uint *)((long)param_2 + uVar14);
  puVar1 = (uint *)((long)((long)param_2 + uVar14) + uVar15);
  lVar13 = param_1[1];
  uVar10 = (ulong)*puVar1;
  uVar12 = lVar13 - *param_1 >> 5;
  if (uVar12 < uVar10) {
    FUN_02844260(param_1,uVar10 - uVar12);
  }
  else if (uVar12 != uVar10) {
    lVar4 = *param_1 + uVar10 * 0x20;
    while (lVar4 != lVar13) {
      plVar8 = (long *)(lVar13 + -8);
      lVar13 = lVar13 + -0x20;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
      }
    }
    param_1[1] = lVar4;
    uVar5 = *puVar1;
    goto joined_r0x028e6024;
  }
  uVar5 = *puVar1;
joined_r0x028e6024:
  if (uVar5 != 0) {
    uVar10 = 0;
    lVar13 = (long)param_2 + uVar15 + uVar14 + 9;
    do {
      puVar2 = puVar1 + uVar10 + 1;
      uVar14 = (ulong)*puVar2;
      __s = (char *)((long)puVar2 + uVar14 + 4);
      sVar7 = strlen(__s);
      bVar6 = *(byte *)((long)puVar2 + uVar14 + 4);
      puVar9 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        puVar9 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar13 + uVar14);
        do {
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar6 != 0);
      }
      puVar3 = (undefined8 *)(*param_1 + uVar10 * 0x20);
      puVar3[2] = sVar7;
      *puVar3 = puVar9;
      puVar3[1] = __s;
      plVar16 = puVar3 + 3;
      plVar8 = (long *)*plVar16;
      *plVar16 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      *plVar16 = 0;
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
    } while (uVar10 < *puVar1);
  }
  return;
}


