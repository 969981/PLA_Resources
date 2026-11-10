/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee5aec; name: FUN_02ee5aec
 */


long FUN_02ee5aec(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02ee5cb4(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar6 = (undefined8 *)(lVar8 + (ulong)uVar2 * 0x28);
  if (puVar6 != (undefined8 *)0x0) {
    lVar8 = lVar8 + (ulong)uVar2 * 0x28;
    *(undefined4 *)(lVar8 + 8) = 0;
    *(undefined1 *)(lVar8 + 0xc) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *puVar6 = &PTR_LAB_042aaab8;
    lVar8 = *param_1;
  }
  puVar4 = (undefined8 *)(lVar8 + param_2 * 0x28);
  if (puVar4 < puVar6) {
    do {
      puVar7 = puVar6 + -5;
      puVar6[4] = puVar6[-1];
      puVar4 = (undefined8 *)puVar6[2];
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + -4);
      *(undefined1 *)((long)puVar6 + 0xc) = *(undefined1 *)((long)puVar6 + -0x1c);
      if (puVar4 != (undefined8 *)0x0) {
        if (*(uint *)(puVar6 + 3) != 0) {
          lVar8 = (ulong)*(uint *)(puVar6 + 3) * 0x28;
          do {
            (**(code **)*puVar4)(puVar4);
            lVar8 = lVar8 + -0x28;
            puVar4 = puVar4 + 5;
          } while (lVar8 != 0);
          puVar4 = (undefined8 *)puVar6[2];
        }
        *(undefined4 *)(puVar6 + 3) = 0;
        (*DAT_0442d150)(0,puVar4);
        puVar6[2] = 0;
        *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      }
      puVar6[2] = puVar6[-3];
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar6 + -2);
      *(undefined4 *)((long)puVar6 + 0x1c) = *(undefined4 *)((long)puVar6 + -0xc);
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar4 = (undefined8 *)(*param_1 + param_2 * 0x28);
      puVar6 = puVar7;
    } while (puVar4 < puVar7);
  }
  (**(code **)*puVar4)();
  lVar8 = *param_1;
  puVar6 = (undefined8 *)(lVar8 + param_2 * 0x28);
  if (puVar6 != (undefined8 *)0x0) {
    lVar8 = lVar8 + param_2 * 0x28;
    *(undefined4 *)(lVar8 + 8) = 0;
    *(undefined1 *)(lVar8 + 0xc) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *puVar6 = &PTR_LAB_042aaab8;
    lVar8 = *param_1;
  }
  return lVar8 + param_2 * 0x28;
}


