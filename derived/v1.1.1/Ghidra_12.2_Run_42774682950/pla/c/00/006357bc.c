/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006357bc; name: FUN_006357bc
 */


long * FUN_006357bc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  void *__s1;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  plVar8 = (long *)(param_1 + 8);
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    *param_2 = plVar8;
    return plVar8;
  }
  pbVar10 = *(byte **)*param_3;
  bVar5 = *pbVar10;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar10 + 8);
  }
  if ((bVar5 & 1) != 0) {
    do {
      pbVar11 = *(byte **)plVar9[4];
      bVar5 = *pbVar11;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar11 + 8);
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 == 0) {
LAB_0063586c:
        if (uVar2 <= uVar1) {
          if (sVar3 != 0) {
            pbVar12 = *(byte **)(pbVar11 + 0x10);
            __s1 = *(void **)(pbVar10 + 0x10);
            goto LAB_00635880;
          }
LAB_006358ac:
          if (uVar2 < uVar1) goto LAB_0063589c;
          goto LAB_00635958;
        }
LAB_0063580c:
        plVar7 = (long *)*plVar9;
        plVar8 = plVar9;
        if (plVar7 == (long *)0x0) goto LAB_00635968;
      }
      else {
        __s1 = *(void **)(pbVar10 + 0x10);
        pbVar12 = *(byte **)(pbVar11 + 0x10);
        pbVar4 = pbVar12;
        if ((bVar5 & 1) == 0) {
          pbVar4 = pbVar11 + 1;
        }
        iVar6 = memcmp(__s1,pbVar4,sVar3);
        if (iVar6 == 0) goto LAB_0063586c;
        if (iVar6 < 0) goto LAB_0063580c;
LAB_00635880:
        if ((bVar5 & 1) == 0) {
          pbVar12 = pbVar11 + 1;
        }
        iVar6 = memcmp(pbVar12,__s1,sVar3);
        if (iVar6 == 0) goto LAB_006358ac;
        if (-1 < iVar6) goto LAB_00635958;
LAB_0063589c:
        plVar8 = plVar9 + 1;
        plVar7 = (long *)*plVar8;
        if (plVar7 == (long *)0x0) goto LAB_00635958;
      }
      plVar9 = plVar7;
    } while( true );
  }
  do {
    pbVar11 = *(byte **)plVar9[4];
    bVar5 = *pbVar11;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar11 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_00635914:
      if (uVar2 <= uVar1) {
        if (sVar3 != 0) {
          pbVar12 = *(byte **)(pbVar11 + 0x10);
          goto LAB_00635924;
        }
LAB_00635950:
        if (uVar2 < uVar1) goto LAB_00635940;
LAB_00635958:
        *param_2 = plVar9;
        return plVar8;
      }
LAB_006358b8:
      plVar7 = (long *)*plVar9;
      plVar8 = plVar9;
      if (plVar7 == (long *)0x0) {
LAB_00635968:
        *param_2 = plVar9;
        return plVar9;
      }
    }
    else {
      pbVar12 = *(byte **)(pbVar11 + 0x10);
      pbVar4 = pbVar12;
      if ((bVar5 & 1) == 0) {
        pbVar4 = pbVar11 + 1;
      }
      iVar6 = memcmp(pbVar10 + 1,pbVar4,sVar3);
      if (iVar6 == 0) goto LAB_00635914;
      if (iVar6 < 0) goto LAB_006358b8;
LAB_00635924:
      if ((bVar5 & 1) == 0) {
        pbVar12 = pbVar11 + 1;
      }
      iVar6 = memcmp(pbVar12,pbVar10 + 1,sVar3);
      if (iVar6 == 0) goto LAB_00635950;
      if (-1 < iVar6) goto LAB_00635958;
LAB_00635940:
      plVar8 = plVar9 + 1;
      plVar7 = (long *)*plVar8;
      if (plVar7 == (long *)0x0) goto LAB_00635958;
    }
    plVar9 = plVar7;
  } while( true );
}


