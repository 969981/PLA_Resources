/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029395ec; name: FUN_029395ec
 */


undefined4 FUN_029395ec(long param_1,byte param_2,byte param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  
  uVar10 = (uint)param_2;
  uVar5 = FUN_029506a8(*(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)uVar10 * 8 + 0x120),0x11)
  ;
  if (uVar10 < 6) {
    uVar10 = 0;
  }
  else if (uVar10 < 0xc) {
    uVar10 = 2;
  }
  else if (param_2 < 0x12) {
    uVar10 = 1;
  }
  else if (param_2 < 0x18) {
    uVar10 = 3;
  }
  else {
    uVar10 = (uint)(param_2 < 0x1e) << 2;
  }
  lVar11 = *(long *)(param_1 + 0x58);
  iVar3 = *(int *)(lVar11 + 0x110);
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      puVar7 = &DAT_03a7ebe5;
      goto joined_r0x02939674;
    }
    if (iVar3 != 0) {
      return uVar5;
    }
  }
  puVar7 = &DAT_03a7ebe0;
joined_r0x02939674:
  if (param_3 < 5) {
    cVar9 = puVar7[param_3];
  }
  else {
    cVar9 = '\x02';
  }
  if (cVar9 != puVar7[uVar10]) {
    FUN_02949cec(iVar3,*(undefined1 *)(*(long *)(lVar11 + 0x58) + 0x55),uVar10);
    plVar6 = *(long **)(lVar11 + (ulong)uVar10 * 8 + 0x1a0);
    plVar1 = plVar6 + 10;
    do {
      cVar9 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (*(byte *)(plVar6 + 0xc) == param_2) {
      uVar2 = 0;
      if (*(char *)((long)plVar6 + 0x73) != '\0') {
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      if (plVar6 == (long *)0x0) {
        return uVar2;
      }
    }
    else {
      pbVar8 = (byte *)((long)plVar6 + 0x74);
      if ((((*pbVar8 == param_2) || (pbVar8 = (byte *)(plVar6 + 0x11), *pbVar8 == param_2)) ||
          (pbVar8 = (byte *)((long)plVar6 + 0x9c), *pbVar8 == param_2)) ||
         ((pbVar8 = (byte *)(plVar6 + 0x16), *pbVar8 == param_2 ||
          (pbVar8 = (byte *)((long)plVar6 + 0xc4), *pbVar8 == param_2)))) {
        uVar2 = 0;
        if (pbVar8[0x13] != 0) {
          uVar2 = uVar5;
        }
        uVar5 = uVar2;
      }
      else {
        uVar5 = 0;
      }
    }
    plVar1 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar1 + -1;
      cVar9 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar3;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return uVar5;
}


