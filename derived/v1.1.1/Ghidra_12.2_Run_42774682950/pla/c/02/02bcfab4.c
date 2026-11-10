/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcfab4; name: FUN_02bcfab4
 */


void FUN_02bcfab4(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long local_28;
  ulong local_18;
  
  if (DAT_04286908 == 1) {
    return;
  }
  plVar3 = (long *)(param_1 + 0x80);
  plVar5 = (long *)*plVar3;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      lVar4 = 0x10;
      if (param_2 <= (ulong)plVar5[4]) {
        lVar4 = 8;
        plVar6 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar4);
    } while (plVar5 != (long *)0x0);
    if (plVar6 != plVar3) {
      plVar5 = plVar3;
      if ((ulong)plVar6[4] <= param_2) {
        plVar5 = plVar6;
      }
      if (plVar5 != plVar3) {
        plVar5[5] = param_3;
        return;
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0xa8);
  local_28 = param_3;
  local_18 = param_2;
  if ((plVar3 == (long *)0x0) || (plVar3 == (long *)(param_1 + 0xa8))) {
    FUN_02bcfdf4(param_1,&local_18,&local_28);
    uVar7 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + (uVar7 / 0x38) * 8) + (uVar7 % 0x38) * 0x48;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xb0);
    *(ulong *)(lVar4 + 0x30) = param_2;
    *(long *)(lVar4 + 0x38) = param_3;
    plVar5 = *(long **)(param_1 + 0xb0);
    lVar2 = *plVar5;
    plVar3 = (long *)plVar5[1];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + -1;
    *plVar5 = 0;
    plVar5[1] = 0;
  }
  plVar3 = (long *)(param_1 + 0x80);
  if ((long *)*plVar3 != (long *)0x0) {
    uVar7 = *(ulong *)(lVar4 + 0x30);
    plVar5 = (long *)0x0;
    plVar6 = (long *)*plVar3;
    do {
      plVar10 = plVar6;
      uVar8 = plVar10[4];
      if (uVar8 <= uVar7) {
        plVar5 = plVar10;
      }
      lVar2 = 8;
      if (uVar8 <= uVar7) {
        lVar2 = 0x10;
      }
      plVar6 = *(long **)((long)plVar10 + lVar2);
    } while (*(long **)((long)plVar10 + lVar2) != (long *)0x0);
    if ((plVar5 != (long *)0x0) && (uVar7 <= (ulong)plVar5[4])) {
      return;
    }
    lVar2 = lVar4 + 0x10;
    if (uVar8 <= uVar7) {
      lVar9 = plVar10[2];
      if (lVar9 == 0) {
        plVar5 = plVar10;
        do {
          bVar1 = plVar5 == (long *)((long *)*plVar5)[2];
          plVar5 = (long *)*plVar5;
        } while (bVar1);
      }
      else {
        do {
          lVar9 = *(long *)(lVar9 + 8);
        } while (lVar9 != 0);
      }
    }
    if (plVar10 != plVar3) {
      plVar3 = plVar10;
      if (uVar7 < uVar8) {
        plVar10[1] = lVar2;
        if (plVar10 == *(long **)(param_1 + 0x88)) {
          *(long *)(param_1 + 0x88) = lVar2;
        }
      }
      else {
        plVar10[2] = lVar2;
        if (plVar10 == *(long **)(param_1 + 0x90)) {
          *(long *)(param_1 + 0x90) = lVar2;
        }
      }
      goto LAB_02bcfc7c;
    }
  }
  lVar2 = lVar4 + 0x10;
  *(long *)(param_1 + 0x88) = lVar2;
  *(long *)(param_1 + 0x90) = lVar2;
  *(long *)(param_1 + 0x80) = lVar2;
LAB_02bcfc7c:
  *(long **)(lVar4 + 0x10) = plVar3;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  FUN_02b92bec();
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  return;
}


