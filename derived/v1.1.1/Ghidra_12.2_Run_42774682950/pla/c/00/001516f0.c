/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001516f0; name: FUN_001516f0
 */


void FUN_001516f0(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 == 0) {
    plVar7 = *(long **)(param_1 + 0x10);
    *plVar7 = param_2;
    uVar5 = 0x16;
  }
  else {
    lVar4 = FUN_0015c680(param_1,param_3);
    *(long *)(lVar4 + 0x18) = param_2;
    lVar8 = *(long *)(param_1 + 0x10);
    plVar7 = (long *)(lVar8 + (long)param_3 * -0x10);
    uVar6 = (ulong)param_3;
    *(long **)(param_1 + 0x10) = plVar7;
    if ((uVar6 & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar8 + -8);
      uVar6 = uVar6 - 1;
      lVar1 = lVar4 + uVar6 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar8 + -0x10);
      *(undefined8 *)(lVar1 + 0x28) = uVar3;
      plVar7 = *(long **)(param_1 + 0x10);
    }
    if (param_3 != 1) {
      lVar8 = uVar6 << 4;
      do {
        uVar3 = *(undefined8 *)((long)plVar7 + lVar8 + -8);
        puVar2 = (undefined8 *)(lVar4 + lVar8);
        puVar2[2] = *(undefined8 *)((long)plVar7 + lVar8 + -0x10);
        puVar2[3] = uVar3;
        lVar1 = *(long *)(param_1 + 0x10) + lVar8;
        uVar6 = uVar6 - 2;
        uVar3 = *(undefined8 *)(lVar1 + -0x18);
        lVar8 = lVar8 + -0x20;
        *puVar2 = *(undefined8 *)(lVar1 + -0x20);
        puVar2[1] = uVar3;
        plVar7 = *(long **)(param_1 + 0x10);
      } while (uVar6 != 0);
    }
    uVar5 = 0x66;
    *plVar7 = lVar4;
  }
  *(undefined4 *)(plVar7 + 1) = uVar5;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x18) < 1) {
    return;
  }
  FUN_0015dc70(param_1);
  return;
}


