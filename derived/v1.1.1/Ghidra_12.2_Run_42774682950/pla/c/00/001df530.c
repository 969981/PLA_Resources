/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df530; name: FUN_001df530
 */


long * FUN_001df530(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(param_1 + 0x1100);
  auVar10 = FUN_001f8fb4();
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001f43b0(param_1,5,2);
  }
  FUN_001e0ebc(lVar4,auStack_78);
  lVar3 = FUN_001e0ecc(auStack_78);
  if (lVar3 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar6 = 0;
    plVar5 = (long *)0x0;
    iVar7 = -1;
    do {
      lVar3 = *(long *)(lVar3 + 0x18);
      for (puVar8 = *(undefined8 **)(lVar3 + 0x10); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)puVar8[2]) {
        plVar9 = (long *)*puVar8;
        iVar2 = iVar7;
        if ((plVar9[0x98] + plVar9[0x9c] == 0) && (*plVar9 == 0)) {
          iVar2 = FUN_001f8fe0(auVar10._0_8_,auVar10._8_8_,plVar9[0x47],plVar9[0x48]);
          lVar1 = lVar3;
          if (iVar2 <= iVar7) {
            iVar2 = iVar7;
            lVar1 = lVar6;
            plVar9 = plVar5;
          }
          plVar5 = plVar9;
          lVar6 = lVar1;
        }
        iVar7 = iVar2;
      }
      lVar3 = FUN_001e0ecc(auStack_78);
    } while (lVar3 != 0);
    if (plVar5 != (long *)0x0) {
      FUN_001df360(lVar6,plVar5);
      *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + -1;
      *plVar5 = param_1;
    }
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001f43f8(param_1,5);
  }
  return plVar5;
}


