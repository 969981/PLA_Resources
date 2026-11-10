/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317765c; name: FUN_0317765c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0317765c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  int local_68 [2];
  int local_60 [2];
  int local_58 [2];
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar9 = 0;
    piVar11 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
    do {
      if (*piVar11 == *(int *)(*(long *)(param_2 + 0x20) + 0x5c)) {
        if ((int)lVar9 != 1) {
          iVar13 = -(int)lVar9;
          goto LAB_031776f0;
        }
        break;
      }
      lVar9 = lVar9 + -1;
      piVar11 = piVar11 + 0x3c;
    } while (-lVar9 != (long)*(int *)(param_1 + 0x40));
  }
  FUN_031763f8(local_58,param_1);
  iVar13 = local_58[0];
LAB_031776f0:
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar9 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar9 = FUN_02898d80();
  }
  *(int *)(lVar9 + 0x60) = iVar13;
  lVar9 = *(long *)(param_1 + 0x38);
  plVar1 = (long *)(lVar9 + (long)iVar13 * 0xf0 + 0x10);
  if (*(long *)(param_2 + 8) != 0) {
    plVar8 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)*plVar1;
  lVar14 = (long)iVar13;
  *plVar1 = param_2;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  lVar10 = lVar9 + lVar14 * 0xf0;
  *(byte *)(lVar10 + 0xe0) = *(byte *)(lVar10 + 0xe0) | 4;
  uVar15 = _DAT_03889a80;
  puVar12 = (undefined8 *)(lVar10 + 0x20);
  if ((param_5 & 1) == 0) {
    *(undefined8 *)(lVar10 + 0x28) = _UNK_03889a88;
    *puVar12 = uVar15;
    uVar7 = DAT_0388a148;
    uVar6 = DAT_0388a140;
    uVar5 = _UNK_03888d18;
    uVar15 = _DAT_03888d10;
    lVar9 = lVar9 + lVar14 * 0xf0;
    *(undefined8 *)(lVar9 + 0x60) = 0;
    *(undefined8 *)(lVar9 + 0x68) = 0;
    *(undefined8 *)(lVar9 + 0x70) = 0;
    *(undefined8 *)(lVar9 + 0x78) = 0;
    *(undefined8 *)(lVar9 + 0x38) = uVar7;
    *(undefined8 *)(lVar9 + 0x30) = uVar6;
    *(undefined8 *)(lVar9 + 0x48) = uVar5;
    *(undefined8 *)(lVar9 + 0x40) = uVar15;
    uVar15 = _DAT_0388a130;
    *(undefined8 *)(lVar9 + 0x58) = _UNK_0388a138;
    *(undefined8 *)(lVar9 + 0x50) = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_2 + 0x48);
    *puVar12 = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(lVar9 + 0x30) = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar9 + 0x40) = uVar15;
    uVar15 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(lVar9 + 0x50) = uVar15;
  }
  else {
    uVar15 = *puVar12;
    lVar9 = lVar9 + lVar14 * 0xf0;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(param_2 + 0x40) = uVar15;
    uVar15 = *(undefined8 *)(lVar9 + 0x30);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar9 + 0x38);
    *(undefined8 *)(param_2 + 0x50) = uVar15;
    uVar15 = *(undefined8 *)(lVar9 + 0x40);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar9 + 0x48);
    *(undefined8 *)(param_2 + 0x60) = uVar15;
    uVar15 = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 *)(param_2 + 0x70) = uVar15;
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    local_60[0] = iVar13;
    FUN_03176b40(param_1,local_60,*param_3);
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  iVar2 = *(int *)(lVar9 + 0x78);
  if (iVar2 != 0) {
    lVar14 = (long)iVar2 << 4;
    puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x70) + 8);
    do {
      local_68[0] = iVar13;
      FUN_03176b40(param_1,local_68,*puVar12);
      lVar14 = lVar14 + -0x10;
      puVar12 = puVar12 + 2;
    } while (lVar14 != 0);
  }
  FUN_0318469c(param_2,param_1);
  return;
}


