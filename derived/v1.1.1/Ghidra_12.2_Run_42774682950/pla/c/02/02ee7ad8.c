/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee7ad8; name: FUN_02ee7ad8
 */


long FUN_02ee7ad8(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar3 = iVar1 + uVar3;
    lVar4 = (*DAT_0442d148)(0,*param_1,(ulong)uVar3 << 4);
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
    puVar6 = (undefined8 *)(lVar4 + (ulong)uVar3 * 0x10);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)puVar6 = 0;
      lVar4 = *param_1;
    }
    puVar5 = (undefined8 *)(lVar4 + (ulong)param_2 * 0x10);
    if (puVar5 < puVar6) {
      do {
        puVar7 = puVar6 + -2;
        *puVar6 = *puVar7;
        puVar6[1] = puVar6[-1];
        lVar4 = *param_1;
        puVar5 = (undefined8 *)(lVar4 + (ulong)param_2 * 0x10);
        puVar6 = puVar7;
      } while (puVar5 < puVar7);
    }
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)puVar5 = 0;
      lVar4 = *param_1;
    }
    lVar4 = lVar4 + (ulong)param_2 * 0x10;
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}


