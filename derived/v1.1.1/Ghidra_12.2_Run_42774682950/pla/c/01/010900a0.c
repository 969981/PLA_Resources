/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010900a0; name: FUN_010900a0
 */


void FUN_010900a0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  
  bVar2 = *(char *)(*(long *)(param_1 + 0x98) + 0x19) == '\0';
  if (bVar2) {
    FUN_02c66480();
  }
  local_54 = 0x20;
  plVar13 = (long *)FUN_00a246f0(auStack_58,param_3,&local_54);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar10 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98));
  uVar11 = FUN_02c70958(*(undefined8 *)(param_1 + 0x98));
  iVar12 = FUN_02c71158(*(undefined8 *)(param_1 + 0x98));
  bVar8 = FUN_02c6f2b0(*(undefined8 *)(param_1 + 0x98));
  uVar5 = (uVar11 ^ uVar10) >> 0x10;
  if (((uVar11 ^ uVar10) & 0xfff0 ^ uVar5) < 0x10) {
    iVar14 = 1;
    if ((uVar5 ^ uVar10 & 0xffff) == (uVar11 & 0xffff)) {
      iVar14 = 2;
    }
  }
  else {
    iVar14 = 0;
  }
  iVar3 = 2;
  if (((iVar12 == 0x22 | bVar8) & iVar14 != 0) == 0) {
    iVar3 = iVar14;
  }
  FUN_02c7a244(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_2 + 0x78));
  uVar10 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98));
  uVar11 = FUN_02c70958(*(undefined8 *)(param_1 + 0x98));
  iVar12 = FUN_02c71158(*(undefined8 *)(param_1 + 0x98));
  bVar8 = FUN_02c6f2b0(*(undefined8 *)(param_1 + 0x98));
  uVar5 = (uVar11 ^ uVar10) >> 0x10;
  if (((uVar11 ^ uVar10) & 0xfff0 ^ uVar5) < 0x10) {
    iVar14 = 1;
    if ((uVar5 ^ uVar10 & 0xffff) == (uVar11 & 0xffff)) {
      iVar14 = 2;
    }
  }
  else {
    iVar14 = 0;
  }
  iVar4 = 2;
  if (((iVar12 == 0x22 | bVar8) & iVar14 != 0) == 0) {
    iVar4 = iVar14;
  }
  if (iVar3 == iVar4) {
    cVar6 = *(char *)((long)plVar13 + 0x7c);
  }
  else {
    FUN_02c63a78(param_1,iVar3);
    cVar6 = *(char *)((long)plVar13 + 0x7c);
  }
  if (cVar6 != '\0') {
    uVar9 = FUN_02c30580(plVar13[0xb],param_2 + 0x88,(short)plVar13[0xf]);
    *(undefined2 *)((long)plVar13 + 0x7a) = uVar9;
  }
  FUN_02c8169c(*(undefined8 *)(param_1 + 0x98),plVar13[0xb]);
  FUN_02c83b84(*(undefined8 *)(param_1 + 0x98),*(undefined1 *)(param_2 + 0x7d));
  if (bVar2 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') {
    FUN_02c66640();
  }
  plVar1 = plVar13 + 10;
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar2) {
      *(int *)plVar1 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return;
}


