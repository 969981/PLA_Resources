/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cc90c; name: FUN_028cc90c
 */


void FUN_028cc90c(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  uint *__s;
  undefined1 *puVar9;
  int *piVar10;
  ulong uVar11;
  
  puVar9 = &DAT_cbf29ce484222645;
  *param_1 = param_2;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_03996322;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == (int *)0x0) {
    FUN_028ca298(param_1 + 5);
    lVar6 = 0;
  }
  else {
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar7 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar7);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_028ca298(param_1 + 5,lVar6);
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar7 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_2 + uVar7);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_028ca298(param_1 + 0x1a,lVar6);
  piVar10 = (int *)*param_1;
  if (((piVar10 != (int *)0x0) && (4 < *(ushort *)((long)piVar10 - (long)*piVar10))) &&
     (uVar7 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar7 != 0)) {
    uVar11 = (ulong)*(uint *)((long)piVar10 + uVar7);
    puVar1 = (uint *)((long)((long)piVar10 + uVar7) + uVar11);
    __s = puVar1 + 1;
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar4 = strlen((char *)__s);
    }
    bVar3 = (byte)*__s;
    if (bVar3 != 0) {
      pbVar8 = (byte *)((long)piVar10 + uVar11 + uVar7 + 5);
      do {
        puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar3 != 0);
    }
    param_1[3] = uVar4;
    plVar5 = (long *)param_1[4];
    param_1[4] = 0;
    param_1[1] = puVar9;
    param_1[2] = __s;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    param_1[4] = 0;
  }
  return;
}


