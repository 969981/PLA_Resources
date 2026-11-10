/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029397d0; name: FUN_029397d0
 */


uint FUN_029397d0(long param_1,byte param_2)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  char cVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint local_4c [3];
  
  uVar8 = (uint)param_2;
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)uVar8 * 8 + 0x120);
  uVar5 = FUN_029506a8(lVar13,0x11);
  if (uVar8 < 6) {
    uVar8 = 0;
  }
  else if (uVar8 < 0xc) {
    uVar8 = 2;
  }
  else if (param_2 < 0x12) {
    uVar8 = 1;
  }
  else if (param_2 < 0x18) {
    uVar8 = 3;
  }
  else {
    uVar8 = (uint)(param_2 < 0x1e) << 2;
  }
  lVar15 = *(long *)(param_1 + 0x58);
  iVar2 = *(int *)(lVar15 + 0x110);
  bVar3 = *(byte *)(*(long *)(param_1 + 0x80) + 0x59);
  if (iVar2 == 2) {
LAB_0293988c:
    puVar9 = &DAT_03a7ebe0;
    if (4 < bVar3) goto LAB_0293989c;
LAB_029398b4:
    cVar12 = puVar9[bVar3];
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return uVar5;
      }
      goto LAB_0293988c;
    }
    puVar9 = &DAT_03a7ebe5;
    if (bVar3 < 5) goto LAB_029398b4;
LAB_0293989c:
    cVar12 = '\x02';
  }
  if (cVar12 == puVar9[uVar8]) {
    return uVar5;
  }
  uVar6 = FUN_02949cec(iVar2,*(undefined1 *)(*(long *)(lVar15 + 0x58) + 0x55),uVar8);
  if ((uVar6 & 1) == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(lVar15 + (ulong)uVar8 * 8 + 0x1a0);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        cVar12 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
  }
  pbVar10 = (byte *)(plVar14 + 0xc);
  if ((((((*pbVar10 != param_2) && (pbVar10 = (byte *)((long)plVar14 + 0x74), *pbVar10 != param_2))
        && (pbVar10 = (byte *)(plVar14 + 0x11), *pbVar10 != param_2)) &&
       (((pbVar10 = (byte *)((long)plVar14 + 0x9c), *pbVar10 != param_2 &&
         (pbVar10 = (byte *)(plVar14 + 0x16), *pbVar10 != param_2)) &&
        (pbVar10 = (byte *)((long)plVar14 + 0xc4), *pbVar10 != param_2)))) || (pbVar10[0x13] == 0))
     && ((0x30 < uVar5 - 0x17 || ((1L << ((ulong)(uVar5 - 0x17) & 0x3f) & 0x1000000080001U) == 0))))
  {
    piVar7 = (int *)FUN_02c53064(*(undefined2 *)(lVar13 + 0x70),*(undefined1 *)(lVar13 + 0x369));
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xf) ||
       ((uVar6 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[7], uVar6 == 0 ||
        (uVar8 = (uint)*(ushort *)((long)piVar7 + uVar6), uVar8 == 0)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      local_4c[0] = uVar8;
    }
    piVar7 = (int *)FUN_02c53064(*(undefined2 *)(lVar13 + 0x70),*(undefined1 *)(lVar13 + 0x369));
    if (((0x10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
        (uVar11 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[8], uVar11 != 0)) &&
       (uVar8 = (uint)*(ushort *)((long)piVar7 + uVar11), uVar8 != 0)) {
      local_4c[uVar6] = uVar8;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
    piVar7 = (int *)FUN_02c53064(*(undefined2 *)(lVar13 + 0x70),*(undefined1 *)(lVar13 + 0x369));
    if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x13) ||
        (uVar11 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[9], uVar11 == 0)) ||
       (uVar8 = (uint)*(ushort *)((long)piVar7 + uVar11), uVar8 == 0)) {
      if ((int)uVar6 == 0) goto LAB_02939a6c;
    }
    else {
      local_4c[uVar6] = uVar8;
      uVar6 = (ulong)((int)uVar6 + 1);
    }
    lVar13 = FUN_02954744(param_1 + 0x60,uVar6);
    uVar5 = local_4c[lVar13];
  }
LAB_02939a6c:
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      iVar2 = (int)*plVar1 + -1;
      cVar12 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  return uVar5;
}


