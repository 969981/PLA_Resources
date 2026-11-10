/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef7e10; name: FUN_02ef7e10
 */


long FUN_02ef7e10(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    lVar4 = (*DAT_0442d148)(0,*param_1,(ulong)uVar3 << 3);
    if (lVar4 == 0) {
      return 0;
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar3;
  }
  if (uVar2 < uVar3) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar4 = *param_1;
    *(uint *)(param_1 + 1) = uVar3 + 1;
    puVar7 = (undefined8 *)(lVar4 + (ulong)uVar3 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)puVar7 = 0;
      *(undefined4 *)(lVar4 + (ulong)uVar3 * 8 + 4) = 0;
      lVar4 = *param_1;
    }
    puVar6 = (undefined8 *)(lVar4 + (ulong)param_2 * 8);
    uVar5 = (ulong)param_2;
    if (puVar6 < puVar7) {
      do {
        puVar8 = puVar7 + -1;
        *puVar7 = *puVar8;
        lVar4 = *param_1;
        puVar6 = (undefined8 *)(lVar4 + uVar5 * 8);
        puVar7 = puVar8;
      } while (puVar6 < puVar8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)puVar6 = 0;
      *(undefined4 *)(lVar4 + uVar5 * 8 + 4) = 0;
      lVar4 = *param_1;
    }
    lVar4 = lVar4 + uVar5 * 8;
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}


