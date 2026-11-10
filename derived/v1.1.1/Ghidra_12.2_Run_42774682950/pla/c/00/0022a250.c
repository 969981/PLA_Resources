/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022a250; name: FUN_0022a250
 */


long * FUN_0022a250(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  plVar5 = (long *)FUN_00234600(param_3);
  (**(code **)(*plVar5 + 0x48))
            (plVar5,param_2,param_5,*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x70));
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    uVar3 = *(ushort *)(plVar5 + 7);
    if (uVar3 < *(ushort *)((long)plVar5 + 0x3a)) {
      *(ushort *)(plVar5 + 7) = uVar3 + 1;
      puVar2 = (undefined8 *)(plVar5[6] + (ulong)uVar3 * 0x10);
      *puVar2 = param_4;
      puVar2[1] = lVar8;
    }
  }
  bVar4 = (**(code **)(*param_4 + 0x50))(param_4);
  if (*(byte *)(param_1 + 0x72) <= bVar4) {
    bVar4 = *(byte *)(param_1 + 0x72);
  }
  if (bVar4 != 0) {
    uVar9 = 0;
    plVar1 = (long *)(param_1 + 0x28);
    if (*plVar1 != 0) goto LAB_0022a314;
    do {
      do {
        uVar9 = uVar9 + 1;
        if (bVar4 <= uVar9) {
          return plVar5;
        }
      } while (plVar1[uVar9] == 0);
LAB_0022a314:
      uVar6 = (**(code **)(*param_4 + 0x58))(param_4,uVar9 & 0xffffffff);
      uVar7 = FUN_00227ae4(plVar5,uVar6,plVar1[uVar9]);
    } while ((uVar7 & 1) != 0);
  }
  return plVar5;
}


