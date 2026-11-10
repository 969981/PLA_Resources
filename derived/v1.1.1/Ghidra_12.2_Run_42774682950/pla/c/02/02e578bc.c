/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e578bc; name: FUN_02e578bc
 */


undefined4 * FUN_02e578bc(long *param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  
  puVar5 = (undefined4 *)FUN_02e57a50();
  if (*param_3 != '\0') {
    return puVar5;
  }
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = *(uint *)(param_1 + 1);
    uVar11 = *(uint *)((long)param_1 + 0xc);
    if (uVar11 <= uVar4) {
      iVar2 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar2 = 1;
      }
      uVar11 = iVar2 + uVar11;
      lVar6 = FUN_02f59e50(0,*param_1,(ulong)uVar11 << 2);
      if (lVar6 == 0) {
        return (undefined4 *)0x0;
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar11;
    }
    if (uVar4 < uVar11) {
      puVar5 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      goto joined_r0x02e579fc;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 1);
    uVar11 = *(uint *)((long)param_1 + 0xc);
    lVar12 = *param_1;
    lVar6 = lVar12;
    if (uVar11 <= uVar4) {
      iVar2 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar2 = 1;
      }
      uVar11 = iVar2 + uVar11;
      lVar6 = FUN_02f59e50(0,lVar12,(ulong)uVar11 << 2);
      if (lVar6 == 0) {
        return (undefined4 *)0x0;
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar11;
    }
    if (uVar4 < uVar11) {
      uVar11 = *(uint *)(param_1 + 1);
      uVar7 = (ulong)((long)puVar5 - lVar12) >> 2;
      *(uint *)(param_1 + 1) = uVar11 + 1;
      if ((uint)uVar7 < uVar11) {
        lVar9 = (ulong)uVar11 * 4;
        lVar3 = lVar6 + lVar9;
        uVar7 = (ulong)((long)puVar5 - lVar12) >> 2 & 0xffffffff;
        puVar8 = (undefined4 *)(lVar3 + -4);
        *(undefined4 *)(lVar6 + lVar9) = *puVar8;
        puVar5 = (undefined4 *)(*param_1 + uVar7 * 4);
        if (puVar5 < puVar8) {
          puVar10 = (undefined4 *)(lVar3 + -8);
          *puVar8 = *puVar10;
          puVar5 = (undefined4 *)(*param_1 + uVar7 * 4);
          if (puVar5 < puVar10) {
            puVar8 = (undefined4 *)(lVar6 + (ulong)uVar11 * 4 + -0xc);
            do {
              puVar8[1] = *puVar8;
              puVar5 = (undefined4 *)(*param_1 + uVar7 * 4);
              bVar1 = puVar5 < puVar8;
              puVar8 = puVar8 + -1;
            } while (bVar1);
          }
        }
      }
      else {
        puVar5 = (undefined4 *)(lVar6 + (uVar7 & 0xffffffff) * 4);
      }
joined_r0x02e579fc:
      if (puVar5 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      *puVar5 = param_2;
      return puVar5;
    }
  }
  return (undefined4 *)0x0;
}


