/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e32c94; name: FUN_02e32c94
 */


undefined8 FUN_02e32c94(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  iVar6 = 0;
  if (*(uint *)(param_1 + 0x1c4) != 0) {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                      (*(long **)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x1c4) * 0x18);
    *(long *)(param_1 + 0x118) = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 0x1c4);
    iVar6 = 0;
    if (*(uint *)(param_1 + 0x1c4) != 0) {
      lVar8 = 0;
      uVar9 = 1;
      lVar2 = lVar4;
      while( true ) {
        if (lVar2 != 0) {
          puVar1 = (undefined4 *)(lVar4 + lVar8);
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          uVar7 = (ulong)*(uint *)(param_1 + 0x1c4);
        }
        iVar6 = (int)uVar7;
        if (uVar7 <= uVar9) break;
        lVar4 = *(long *)(param_1 + 0x118);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x18;
        lVar2 = lVar4 + lVar8;
      }
    }
  }
  if (((*(char *)(param_1 + 0x169) != '\0') && (*(char *)(param_1 + 0x1cc) != '\0')) && (iVar6 != 0)
     ) {
    uVar3 = *(undefined4 *)(param_1 + 0x164);
    lVar4 = 0;
    uVar7 = 0;
    do {
      uVar5 = FUN_02e252cc(*(long *)(param_1 + 0x118) + lVar4,*(undefined8 *)(param_1 + 0x10),uVar3)
      ;
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar7 < *(uint *)(param_1 + 0x1c4));
  }
  return 1;
}


