/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f5ec0; name: FUN_032f5ec0
 */


int FUN_032f5ec0(ulong *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  ulong *puVar13;
  int iVar14;
  undefined4 uVar15;
  
  for (; (param_1 != (ulong *)0x0 && ((*param_1 & 1) == 0)); param_1 = (ulong *)param_1[1]) {
  }
  puVar13 = param_1;
  while( true ) {
    uVar9 = (uint)*puVar13;
    if ((uVar9 >> 0xf & 1) != 0) break;
    if (((*puVar13 & 9) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
    goto LAB_032f5f08;
  }
  uVar9 = (uVar9 & 0x7fff) - (uVar9 >> 1 & 0x1555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  if (((undefined8 *)puVar13[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
       (undefined8 *)0x0) &&
     (puVar13 = *(ulong **)
                 puVar13[(ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     puVar13 != (ulong *)0x0)) goto LAB_032f5f0c;
LAB_032f5f08:
  puVar13 = param_1;
LAB_032f5f0c:
  uVar9 = *(uint *)((long)param_4 + 0xc);
  if (0 < (int)uVar9) {
    uVar2 = (int)puVar13 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (int)((ulong)puVar13 >> 0x20) * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar10 = (ulong)((uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar9);
    lVar8 = *param_4;
    puVar11 = *(ulong **)(lVar8 + uVar10 * 0x10);
    if (puVar11 != (ulong *)0xffffffffffffffff) {
      if (puVar11 != puVar13) {
        do {
          uVar10 = (ulong)((int)uVar10 + 1U & uVar9);
          puVar11 = *(ulong **)(lVar8 + uVar10 * 0x10);
          if (puVar11 == (ulong *)0xffffffffffffffff) goto LAB_032f5f60;
        } while (puVar11 != puVar13);
      }
      puVar13 = *(ulong **)(lVar8 + uVar10 * 0x10 + 8);
    }
  }
LAB_032f5f60:
  uVar9 = *(uint *)((long)param_3 + 0xc);
  iVar14 = (int)((ulong)puVar13 >> 0x20);
  if (0 < (int)uVar9) {
    uVar2 = (int)puVar13 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = iVar14 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar10 = (ulong)((uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar9);
    lVar8 = *param_3;
    puVar11 = *(ulong **)(lVar8 + uVar10 * 0x10);
    if (puVar11 != (ulong *)0xffffffffffffffff) {
      if (puVar11 != puVar13) {
        do {
          uVar10 = (ulong)((int)uVar10 + 1U & uVar9);
          puVar11 = *(ulong **)(lVar8 + uVar10 * 0x10);
          if (puVar11 == (ulong *)0xffffffffffffffff) goto LAB_032f5fac;
        } while (puVar11 != puVar13);
      }
      iVar12 = *(int *)(lVar8 + uVar10 * 0x10 + 8);
      if (-1 < iVar12) {
        return iVar12;
      }
    }
  }
LAB_032f5fac:
  pbVar5 = (byte *)puVar13[1];
  if (pbVar5 == (byte *)0x0) {
    iVar12 = (int)param_2[1];
    iVar4 = -1;
    uVar15 = 0xffffffff;
    iVar6 = iVar12;
  }
  else {
    do {
      if ((*pbVar5 & 1) != 0) break;
      pbVar5 = *(byte **)(pbVar5 + 8);
    } while (pbVar5 != (byte *)0x0);
    iVar4 = FUN_032f5ec0(pbVar5,param_2,param_3);
    iVar12 = (int)param_2[1];
    if (iVar4 == -1) {
      uVar15 = 0xffffffff;
      iVar6 = iVar12;
    }
    else {
      lVar8 = *param_2 + (long)iVar4 * 0x18;
      uVar15 = *(undefined4 *)(lVar8 + 0xc);
      *(int *)(lVar8 + 0xc) = iVar12;
      iVar6 = (int)param_2[1];
    }
  }
  lVar8 = *param_2;
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar6) {
    lVar8 = FUN_032f631c(PTR_PTR_0434a090,iVar1);
    iVar6 = (int)param_2[1];
    *param_2 = lVar8;
  }
  puVar7 = (undefined8 *)(lVar8 + (long)iVar6 * 0x18);
  *puVar7 = puVar13;
  *(int *)(puVar7 + 1) = iVar4;
  *(undefined4 *)((long)puVar7 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar7 + 2) = uVar15;
  *(int *)(param_2 + 1) = iVar1;
  uVar9 = *(uint *)((long)param_3 + 0xc);
  if ((int)uVar9 < (int)param_3[1] * 2) {
    FUN_02fec8dc(param_3,PTR_PTR_0434a090,uVar9 * 2 + 2);
    uVar9 = *(uint *)((long)param_3 + 0xc);
  }
  uVar2 = (int)puVar13 * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = iVar14 * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  iVar14 = 1;
  uVar10 = (ulong)(uVar9 & (uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2));
  lVar8 = *param_3;
  puVar11 = *(ulong **)(lVar8 + uVar10 * 0x10);
  do {
    if (puVar11 == (ulong *)0xffffffffffffffff) {
LAB_032f604c:
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar14;
      uVar10 = -(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4;
      *(ulong **)(lVar8 + uVar10) = puVar13;
      *(long *)(*param_3 + uVar10 + 8) = (long)iVar12;
      return iVar12;
    }
    if (puVar11 == puVar13) {
      iVar14 = 0;
      goto LAB_032f604c;
    }
    uVar10 = (ulong)((int)uVar10 + 1U & uVar9);
    puVar11 = *(ulong **)(lVar8 + uVar10 * 0x10);
  } while( true );
}


