/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f13db8; name: FUN_02f13db8
 */


void FUN_02f13db8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *local_60 [2];
  
  if (DAT_0440ae08 == 0) {
    return;
  }
  uVar2 = param_1;
  plVar8 = DAT_0440ae00;
LAB_02f13df4:
  lVar6 = *plVar8;
  lVar9 = *(long *)(lVar6 + 0x120);
  if ((lVar9 != 0) && (uVar1 = (ulong)*(uint *)(lVar9 + 0x18), *(uint *)(lVar9 + 0x18) != 0)) {
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 0x118);
    lVar5 = lVar4;
    do {
      if (*(ulong *)(lVar5 + 0x18) == param_1) {
        uVar2 = FUN_02f19998(uVar2,lVar5 + 8,uVar7);
        if ((uVar2 & 1) == 0) goto LAB_02f14060;
        lVar4 = *(long *)(lVar9 + 0x10);
        uVar1 = (ulong)*(uint *)(lVar9 + 0x18);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar4 + uVar1 * 0x20);
  }
  lVar9 = *(long *)(lVar6 + 0x1a0);
  if ((lVar9 != 0) && (uVar1 = (ulong)*(uint *)(lVar9 + 0x18), *(uint *)(lVar9 + 0x18) != 0)) {
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 0x198);
    lVar5 = lVar4;
    do {
      if (*(ulong *)(lVar5 + 0x18) == param_1) {
        uVar2 = FUN_02f19998(uVar2,lVar5 + 8,uVar7);
        if ((uVar2 & 1) == 0) goto LAB_02f14060;
        lVar4 = *(long *)(lVar9 + 0x10);
        uVar1 = (ulong)*(uint *)(lVar9 + 0x18);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar4 + uVar1 * 0x20);
  }
  lVar9 = *(long *)(lVar6 + 0x220);
  if ((lVar9 != 0) && (uVar1 = (ulong)*(uint *)(lVar9 + 0x18), *(uint *)(lVar9 + 0x18) != 0)) {
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 0x218);
    lVar5 = lVar4;
    do {
      if (*(ulong *)(lVar5 + 0x18) == param_1) {
        uVar2 = FUN_02f19998(uVar2,lVar5 + 8,uVar7);
        if ((uVar2 & 1) == 0) goto LAB_02f14060;
        lVar4 = *(long *)(lVar9 + 0x10);
        uVar1 = (ulong)*(uint *)(lVar9 + 0x18);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar4 + uVar1 * 0x20);
  }
  lVar9 = *(long *)(lVar6 + 0x2a0);
  if ((lVar9 != 0) && (uVar1 = (ulong)*(uint *)(lVar9 + 0x18), *(uint *)(lVar9 + 0x18) != 0)) {
    lVar4 = *(long *)(lVar9 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 0x298);
    lVar5 = lVar4;
    do {
      if (*(ulong *)(lVar5 + 0x18) == param_1) {
        uVar2 = FUN_02f19998(uVar2,lVar5 + 8,uVar7);
        if ((uVar2 & 1) == 0) goto LAB_02f14060;
        lVar4 = *(long *)(lVar9 + 0x10);
        uVar1 = (ulong)*(uint *)(lVar9 + 0x18);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar4 + uVar1 * 0x20);
  }
  lVar9 = *(long *)(lVar6 + 0x68);
  if ((((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 200), lVar9 != 0)) && (*(int *)(lVar9 + 4) != 0))
     && (uVar3 = *(uint *)(lVar6 + 0x330), uVar3 != 0)) {
    lVar5 = *(long *)(lVar6 + 0x328);
    lVar9 = lVar5;
    do {
      if (*(ulong *)(lVar9 + 0x18) == param_1) {
        local_60[0] = (long *)0x0;
        FUN_02f18770((long *)(lVar6 + 0x68),local_60);
        uVar1 = FUN_02f19998(param_1,lVar9 + 8,*(undefined8 *)(*(long *)(lVar6 + 800) + 0x60));
        uVar2 = 0;
        if (local_60[0] != (long *)0x0) {
          uVar2 = (**(code **)(*local_60[0] + 0x18))();
          local_60[0] = (long *)0x0;
        }
        if ((uVar1 & 1) == 0) goto LAB_02f14060;
        lVar5 = *(long *)(lVar6 + 0x328);
        uVar3 = *(uint *)(lVar6 + 0x330);
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != lVar5 + (ulong)uVar3 * 0x20);
  }
  goto LAB_02f13e2c;
LAB_02f14060:
  uVar2 = FUN_02f26970(lVar6);
LAB_02f13e2c:
  plVar8 = plVar8 + 1;
  if (plVar8 == DAT_0440ae00 + DAT_0440ae08) {
    return;
  }
  goto LAB_02f13df4;
}


