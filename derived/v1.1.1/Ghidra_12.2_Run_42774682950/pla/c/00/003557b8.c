/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003557b8; name: FUN_003557b8
 */


void FUN_003557b8(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  if (*(long *)(param_2 + 0x88) == 0) {
    uVar2 = FUN_003b3f30();
    *(undefined8 *)(param_2 + 0x88) = uVar2;
    iVar1 = *(int *)(param_2 + 0x2c);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x2c);
  }
  if (0 < iVar1) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x68);
      uVar2 = FUN_00365e80(param_3 + 0x30,uVar6 & 0xffffffff);
      FUN_0035b574(param_1,lVar3 + lVar8,uVar2);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x90;
    } while ((long)uVar6 < (long)*(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x80);
      uVar2 = FUN_00366138(param_3 + 0x78,uVar6 & 0xffffffff);
      FUN_0035c068(param_1,lVar3 + lVar8,uVar2);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x98;
    } while ((long)uVar6 < (long)*(int *)(param_2 + 0x38));
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    uVar6 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x70);
      lVar8 = FUN_00365f68(param_3 + 0x48,uVar6 & 0xffffffff);
      plVar5 = (long *)(lVar3 + uVar6 * 0x50 + 0x20);
      if (*plVar5 == 0) {
        lVar10 = FUN_003b83d0();
        *plVar5 = lVar10;
        piVar9 = (int *)(lVar3 + uVar6 * 0x50 + 0x2c);
        iVar1 = *piVar9;
      }
      else {
        piVar9 = (int *)(lVar3 + uVar6 * 0x50 + 0x2c);
        iVar1 = *piVar9;
      }
      if (0 < iVar1) {
        uVar7 = 0;
        lVar10 = 0x20;
        do {
          lVar4 = *(long *)(lVar3 + uVar6 * 0x50 + 0x30);
          FUN_003664d8(lVar8 + 0x18,uVar7 & 0xffffffff);
          if (*(long *)(lVar4 + lVar10) == 0) {
            uVar2 = FUN_003b8ddc();
            *(undefined8 *)(lVar4 + lVar10) = uVar2;
          }
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0x28;
        } while ((long)uVar7 < (long)*piVar9);
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)*(int *)(param_2 + 0x30));
  }
  if (0 < *(int *)(param_2 + 0x34)) {
    uVar6 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x78);
      lVar8 = FUN_00366050(param_3 + 0x60,uVar6 & 0xffffffff);
      plVar5 = (long *)(lVar3 + uVar6 * 0x30 + 0x18);
      if (*plVar5 == 0) {
        lVar10 = FUN_003b9718();
        *plVar5 = lVar10;
        piVar9 = (int *)(lVar3 + uVar6 * 0x30 + 0x28);
        iVar1 = *piVar9;
      }
      else {
        piVar9 = (int *)(lVar3 + uVar6 * 0x30 + 0x28);
        iVar1 = *piVar9;
      }
      if (0 < iVar1) {
        lVar10 = 0;
        uVar7 = 0;
        do {
          lVar4 = *(long *)(lVar3 + uVar6 * 0x30 + 0x20);
          uVar2 = FUN_003666a8(lVar8 + 0x18,uVar7 & 0xffffffff);
          FUN_0035d6e0(param_1,lVar4 + lVar10,uVar2);
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0x68;
        } while ((long)uVar7 < (long)*piVar9);
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)*(int *)(param_2 + 0x34));
  }
  return;
}


