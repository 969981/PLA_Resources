/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be4818; name: FUN_02be4818
 */


undefined8 FUN_02be4818(long param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar9 = *(long *)(param_1 + 0xd0);
  if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x20) <= param_2)) {
    uVar8 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x18) + (long)(int)param_2 * 0x40);
    uVar13 = puVar2[1];
    uVar11 = *puVar2;
    uVar14 = puVar2[3];
    uVar12 = puVar2[2];
    uVar10 = puVar2[5];
    uVar3 = *(undefined4 *)(puVar2 + 4);
    uVar4 = *(undefined4 *)(puVar2 + 6);
    lVar9 = (**(code **)(**(long **)(lVar9 + 0x48) + 0x80))(*(long **)(lVar9 + 0x48),uVar10);
    plVar7 = *(long **)(lVar9 + 0x78);
    uVar8 = *(undefined8 *)(lVar9 + 0x98);
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *param_3 = (int)uVar10;
    param_3[0xc] = uVar3;
    *(undefined8 *)(param_3 + 0xe) = uVar8;
    param_3[0x10] = uVar4;
    *(ulong *)(param_3 + 6) = uVar13 & 0xffffffff;
    *(undefined8 *)(param_3 + 4) = uVar11;
    *(ulong *)(param_3 + 10) = uVar14 & 0xffffffff;
    *(undefined8 *)(param_3 + 8) = uVar12;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar1 = plVar7 + 2;
      do {
        lVar9 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 1) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


