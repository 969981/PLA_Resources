/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333b858; name: FUN_0333b858
 */


uint FUN_0333b858(long param_1,long param_2,undefined2 param_3,undefined1 param_4,undefined1 param_5
                 )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar13 = (long *)(param_2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar6 = PTR_PTR_0434a080;
  iVar10 = *(int *)(param_1 + 0x3c0);
  lVar9 = *(long *)(param_1 + 0x3b8);
  iVar1 = iVar10 + 1;
  if ((int)(*(uint *)(param_1 + 0x3c4) & 0x3fffffff) <= iVar10) {
    lVar9 = FUN_0333c5f0(PTR_PTR_0434a080,iVar1);
    *(long *)(param_1 + 0x3b8) = lVar9;
    iVar10 = *(int *)(param_1 + 0x3c0);
  }
  *(long *)(lVar9 + (long)iVar10 * 8) = param_2;
  uVar12 = *(uint *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x20);
  lVar9 = 0;
  if (param_2 != 0) {
    lVar9 = param_2 + 0x20;
  }
  *(int *)(param_1 + 0x3c0) = iVar1;
  uVar2 = uVar3 + 1;
  if ((int)uVar3 < (int)(uVar12 & 0x3fffffff)) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar12 = uVar3;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (0x3ffffffe < (int)uVar3) {
      FUN_032bd0a8(uVar2);
      uVar12 = *(uint *)(param_1 + 0x24);
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar8 = uVar2;
    if ((int)uVar2 <= (int)uVar12) {
      uVar8 = uVar12;
    }
    lVar7 = FUN_032bd1d4(puVar6,uVar8,0x18,uVar11,uVar3);
    uVar12 = *(uint *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar7;
  }
  plVar13 = (long *)(lVar7 + (long)(int)uVar12 * 0x18);
  *(uint *)(param_1 + 0x20) = uVar2;
  *plVar13 = lVar9;
  *(undefined2 *)(plVar13 + 1) = param_3;
  *(undefined1 *)((long)plVar13 + 0xb) = param_4;
  *(undefined1 *)((long)plVar13 + 10) = param_5;
  plVar13[2] = 0;
  return uVar3 & 0xffff;
}


