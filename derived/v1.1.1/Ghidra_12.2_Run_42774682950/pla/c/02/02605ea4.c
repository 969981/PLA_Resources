/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02605ea4; name: FUN_02605ea4
 */


void FUN_02605ea4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    if ((param_2 & 1) != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,0);
      FUN_02604e3c(param_1,1);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x108);
    uVar7 = *(ulong *)(lVar4 + 0xa8);
    lVar2 = *(long *)(lVar4 + 0x70);
    if (*(long *)(lVar4 + 0x78) != lVar2) {
      uVar1 = *(long *)(lVar4 + 0xb0) + uVar7;
      puVar5 = (undefined8 *)(*(long *)(lVar2 + (uVar7 / 0x38) * 8) + (uVar7 % 0x38) * 0x48);
      puVar8 = (undefined8 *)(*(long *)(lVar2 + (uVar1 / 0x38) * 8) + (uVar1 % 0x38) * 0x48);
      if (puVar8 != puVar5) {
        plVar3 = (long *)(lVar2 + (uVar7 / 0x38) * 8);
        do {
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar6 = puVar5 + 9;
          *puVar5 = 0;
          if ((long)puVar6 - *plVar3 == 0xfc0) {
            plVar3 = plVar3 + 1;
            puVar6 = (undefined8 *)*plVar3;
          }
          puVar5 = puVar6;
        } while (puVar8 != puVar6);
        plVar3 = *(long **)(param_1 + 0x78);
      }
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(ulong *)(param_1 + 0x168) = *(ulong *)(param_1 + 0x168) & 0xfffffffffffffff8;
    (**(code **)(*plVar3 + 0x48))(plVar3,0);
    *(undefined1 *)(param_1 + 0x150) = 1;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined1 *)(param_1 + 0x18c) = 0;
  }
  return;
}


