/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23a68; name: FUN_02e23a68
 */


undefined8 FUN_02e23a68(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(char *)(param_1 + 0x95) != '\0') {
    uVar3 = *(uint *)(param_1 + 0xcc);
    lVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                      (*(long **)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0xc4) * 0x18);
    *(long *)(param_1 + 0x60) = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      lVar7 = 0;
      uVar8 = 1;
      lVar5 = 0;
      lVar2 = lVar4;
      while( true ) {
        if (lVar2 != 0) {
          puVar1 = (undefined4 *)(lVar4 + lVar7);
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar5 = *(long *)(param_1 + 0x60);
        }
        uVar6 = FUN_02e252cc(lVar5 + lVar7,*(undefined8 *)(param_1 + 0x10),uVar3 >> 1);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        if (*(uint *)(param_1 + 0xc4) <= uVar8) break;
        lVar4 = *(long *)(param_1 + 0x60);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x18;
        lVar2 = lVar4 + lVar7;
        lVar5 = lVar4;
      }
    }
  }
  return 1;
}


