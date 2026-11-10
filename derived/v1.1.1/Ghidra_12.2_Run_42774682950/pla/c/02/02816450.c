/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02816450; name: FUN_02816450
 */


void FUN_02816450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  iVar4 = *(int *)((long)param_1 + 0x14);
  if (iVar3 < *(int *)((long)param_1 + 4)) {
    uVar9 = *param_1;
    if (iVar4 < iVar3) {
      *param_1 = param_1[2];
    }
    else {
      *param_1 = param_1[1];
      param_1[1] = uVar9;
      if ((int)((ulong)uVar9 >> 0x20) <= iVar4) goto LAB_0281646c;
      param_1[1] = param_1[2];
    }
    param_1[2] = uVar9;
  }
  else if (iVar4 < iVar3) {
    uVar9 = param_1[1];
    uVar2 = param_1[2];
    param_1[1] = uVar2;
    param_1[2] = uVar9;
    if ((int)((ulong)uVar2 >> 0x20) < *(int *)((long)param_1 + 4)) {
      uVar9 = *param_1;
      *param_1 = uVar2;
      param_1[1] = uVar9;
    }
  }
LAB_0281646c:
  if (param_1 + 3 != param_2) {
    lVar6 = 0;
    puVar7 = param_1 + 2;
    puVar8 = param_1 + 3;
    do {
      if (*(int *)((long)puVar8 + 4) < *(int *)((long)puVar7 + 4)) {
        uVar9 = *puVar8;
        lVar5 = lVar6;
        do {
          lVar10 = lVar5;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x10);
          if (lVar10 == -0x10) {
            puVar7 = param_1;
            goto LAB_02816488;
          }
          lVar5 = lVar10 + -8;
        } while ((int)((ulong)uVar9 >> 0x20) < *(int *)((long)param_1 + lVar10 + 0xc));
        puVar7 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_02816488:
        *puVar7 = uVar9;
      }
      puVar1 = puVar8 + 1;
      lVar6 = lVar6 + 8;
      puVar7 = puVar8;
      puVar8 = puVar1;
    } while (puVar1 != param_2);
  }
  return;
}


