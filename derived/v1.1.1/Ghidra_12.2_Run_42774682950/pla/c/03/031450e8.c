/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031450e8; name: FUN_031450e8
 */


void FUN_031450e8(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  puVar4 = (undefined8 *)(*param_1 + (ulong)param_2 * 0x18);
  *puVar4 = 0xffffffffffffffff;
  puVar4[1] = 0xffffffffffffffff;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  uVar6 = (ulong)(uVar3 + param_2 & uVar3);
  lVar5 = *param_1;
  lVar7 = *(long *)(lVar5 + uVar6 * 0x18);
  while ((lVar7 != -1 && (*(long *)(lVar5 + uVar6 * 0x18 + 8) != -1))) {
    uVar6 = (ulong)((int)uVar6 + uVar3 & uVar3);
    lVar7 = *(long *)(lVar5 + uVar6 * 0x18);
  }
  uVar9 = (ulong)(uVar3 & param_2 + 1);
  if (*(long *)(lVar5 + uVar9 * 0x18) != -1) {
    uVar1 = (int)uVar6 + 1U & uVar3;
    do {
      lVar7 = *(long *)(lVar5 + uVar9 * 0x18 + 8);
      if (lVar7 == -1) {
        return;
      }
      uVar2 = (int)lVar7 * -0x61c8864f & uVar3;
      uVar8 = (uint)uVar9;
      if ((((uVar8 < uVar1) || (uVar2 <= param_2)) &&
          ((param_2 <= uVar8 || (uVar2 <= param_2 && uVar8 < uVar2)))) &&
         (uVar2 <= param_2 || uVar1 <= uVar2)) {
        memcpy((void *)(lVar5 + (ulong)param_2 * 0x18),(void *)(lVar5 + uVar9 * 0x18),0x18);
        puVar4 = (undefined8 *)(*param_1 + uVar9 * 0x18);
        *puVar4 = 0xffffffffffffffff;
        puVar4[1] = 0xffffffffffffffff;
        uVar3 = *(uint *)((long)param_1 + 0xc);
        lVar5 = *param_1;
        param_2 = uVar8;
      }
      uVar9 = (ulong)(uVar3 & uVar8 + 1);
    } while (*(long *)(lVar5 + uVar9 * 0x18) != -1);
  }
  return;
}


