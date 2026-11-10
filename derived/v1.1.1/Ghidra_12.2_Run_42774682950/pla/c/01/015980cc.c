/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015980cc; name: FUN_015980cc
 */


void FUN_015980cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long local_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  uVar13 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
  plVar12 = *(long **)(param_2 + 200);
  if (plVar12 != (long *)0x0) {
    FUN_02a439f4(plVar12[0xb]);
  }
  FUN_0159855c(param_1,plVar12);
  plVar14 = *(long **)(param_2 + 0xc0);
  if (plVar14 != (long *)0x0) {
    FUN_02a439f4(plVar14[0xb]);
  }
  local_58 = plVar14[0x2e];
  lStack_50 = plVar14[0x2f];
  if ((plVar14 != (long *)0x0) && (uVar8 = FUN_02a43a5c(plVar14[0xb]), (uVar8 & 1) != 0)) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  lVar9 = FUN_01598c0c(auStack_48,uVar13,param_3,&local_58);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar10 = FUN_01598614(param_1);
  plVar14 = *(long **)(lVar10 + 0x690);
  *(undefined8 *)(lVar10 + 0x690) = 0;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  *(long *)(lVar10 + 0x690) = lVar9;
  lVar9 = FUN_01598614(param_1);
  pcVar11 = *(code **)(lVar9 + 0x618);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x620) = 0;
    *(undefined8 *)(lVar9 + 0x628) = 0;
    *(undefined8 *)(lVar9 + 0x610) = 0;
    *(undefined8 *)(lVar9 + 0x618) = 0;
    (*pcVar11)(lVar9 + 0x630);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,lVar9 + 0x630);
    uVar13 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[3];
    *(undefined8 *)(lVar9 + 0x620) = param_4[2];
    *(undefined8 *)(lVar9 + 0x628) = uVar4;
    *(undefined8 *)(lVar9 + 0x610) = uVar13;
    *(undefined8 *)(lVar9 + 0x618) = uVar3;
  }
  if ((plVar12 != (long *)0x0) && (uVar8 = FUN_02a43a5c(plVar12[0xb]), (uVar8 & 1) != 0)) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return;
}


