/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03177b80; name: FUN_03177b80
 */


void FUN_03177b80(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  int local_80 [2];
  int local_78 [2];
  undefined1 auStack_70 [32];
  int local_48 [2];
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar8 = *(long *)(param_1 + 0x38);
    lVar9 = 0;
    lVar10 = 0x1c;
    do {
      if (*(int *)(lVar8 + lVar10) == *(int *)(*(long *)(param_2 + 0x20) + 0x90)) {
        if ((int)lVar9 != 1) {
          iVar12 = -(int)lVar9;
          goto LAB_03177c18;
        }
        break;
      }
      lVar9 = lVar9 + -1;
      lVar10 = lVar10 + 0xf0;
    } while (-lVar9 != (long)*(int *)(param_1 + 0x40));
  }
  FUN_031763f8(local_48,param_1);
  lVar8 = *(long *)(param_1 + 0x38);
  iVar12 = local_48[0];
LAB_03177c18:
  plVar1 = (long *)(lVar8 + (long)iVar12 * 0xf0 + 8);
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar6 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)*plVar1;
  lVar10 = (long)iVar12;
  *plVar1 = param_2;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar9 = lVar8 + lVar10 * 0xf0;
  *(byte *)(lVar9 + 0xe0) = *(byte *)(lVar9 + 0xe0) | 2;
  lVar8 = lVar8 + lVar10 * 0xf0;
  if ((param_5 & 1) == 0) {
    *(undefined1 *)(lVar8 + 0x80) = *(undefined1 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar8 + 0x98) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar8 + 0x90) = uVar7;
  }
  else {
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(lVar8 + 0x80);
    uVar7 = *(undefined8 *)(lVar8 + 0x90);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar8 + 0x98);
    *(undefined8 *)(param_2 + 0x50) = uVar7;
  }
  FUN_03175f20(param_2,auStack_70);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar7 = FUN_0317c11c();
  }
  uVar5 = FUN_001d4c1c(uVar7,auStack_70,iVar12);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar10 * 0xf0 + 0x18) = uVar5;
  plVar1 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar10 = *plVar1;
  }
  else {
    lVar10 = FUN_0317a2cc(plVar1);
  }
  *(int *)(lVar10 + 0x94) = iVar12;
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    local_78[0] = iVar12;
    FUN_03177de8(param_1,local_78,*param_3);
  }
  lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  iVar2 = *(int *)(lVar10 + 0x60);
  if (iVar2 != 0) {
    lVar8 = (long)iVar2 << 4;
    puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x58) + 8);
    do {
      local_80[0] = iVar12;
      FUN_03177de8(param_1,local_80,*puVar11);
      lVar8 = lVar8 + -0x10;
      puVar11 = puVar11 + 2;
    } while (lVar8 != 0);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar10 = *plVar1;
  }
  else {
    lVar10 = FUN_0317a2cc(plVar1);
  }
  FUN_03184130(lVar10,param_1);
  return;
}


