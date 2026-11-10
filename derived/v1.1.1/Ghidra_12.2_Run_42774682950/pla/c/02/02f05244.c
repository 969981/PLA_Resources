/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05244; name: FUN_02f05244
 */


undefined8 FUN_02f05244(long *param_1,int param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  lVar6 = *plVar4;
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x38) == param_2) break;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  bVar3 = *(byte *)(lVar6 + 0x40);
  if (bVar3 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((long)param_3 + 0xc) == 0) {
      lVar6 = (*DAT_0442d148)(0,*param_3,4);
      if (lVar6 == 0) {
        return 1;
      }
      uVar7 = *(uint *)(param_3 + 1);
      *param_3 = lVar6;
      *(undefined4 *)((long)param_3 + 0xc) = 1;
    }
    else {
      lVar6 = *param_3;
      uVar7 = 0;
    }
    puVar1 = (undefined4 *)(lVar6 + (ulong)uVar7 * 4);
    *(uint *)(param_3 + 1) = uVar7 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    return 1;
  }
  puVar5 = (uint *)*param_3;
  uVar7 = *(uint *)(param_3 + 1);
  if (uVar7 != 0) {
    lVar6 = (ulong)uVar7 << 2;
    puVar8 = puVar5;
    do {
      if (*puVar8 == (uint)bVar3) {
        return 0;
      }
      lVar6 = lVar6 + -4;
      puVar8 = puVar8 + 1;
    } while (lVar6 != 0);
  }
  uVar9 = *(uint *)((long)param_3 + 0xc);
  if (uVar9 <= uVar7) {
    iVar2 = uVar9 + (uVar9 >> 1);
    if (uVar9 == 0) {
      iVar2 = 1;
    }
    uVar9 = iVar2 + uVar9;
    puVar5 = (uint *)(*DAT_0442d148)(0,puVar5,(ulong)uVar9 << 2);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    *param_3 = (long)puVar5;
    *(uint *)((long)param_3 + 0xc) = uVar9;
  }
  if (uVar9 <= uVar7) {
    return 0;
  }
  uVar7 = *(uint *)(param_3 + 1);
  *(uint *)(param_3 + 1) = uVar7 + 1;
  if (puVar5 + uVar7 == (uint *)0x0) {
    return 0;
  }
  puVar5[uVar7] = (uint)bVar3;
  return 0;
}


