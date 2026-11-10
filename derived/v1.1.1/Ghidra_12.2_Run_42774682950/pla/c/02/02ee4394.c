/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4394; name: FUN_02ee4394
 */


undefined8 FUN_02ee4394(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar8;
  if (uVar8 != 0) {
    lVar7 = *param_1;
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar8 >> 1);
      uVar9 = *(ulong *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
      if (uVar9 == param_2) {
        puVar5 = (undefined8 *)(lVar7 + (long)iVar1 * 0x28);
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        puVar2 = (undefined8 *)((lVar7 + uVar6 * 0x28) - 0x28);
        while (puVar5 < puVar2) {
          puVar5[4] = puVar5[9];
          puVar3 = (undefined8 *)puVar5[2];
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar5 + 6);
          *(undefined1 *)((long)puVar5 + 0xc) = *(undefined1 *)((long)puVar5 + 0x34);
          if (puVar3 != (undefined8 *)0x0) {
            if (*(uint *)(puVar5 + 3) != 0) {
              lVar7 = (ulong)*(uint *)(puVar5 + 3) * 0x28;
              do {
                (**(code **)*puVar3)(puVar3);
                lVar7 = lVar7 + -0x28;
                puVar3 = puVar3 + 5;
              } while (lVar7 != 0);
              puVar3 = (undefined8 *)puVar5[2];
            }
            *(undefined4 *)(puVar5 + 3) = 0;
            (*DAT_0442d150)(0,puVar3);
            puVar5[2] = 0;
            *(undefined4 *)((long)puVar5 + 0x1c) = 0;
          }
          puVar5[2] = puVar5[7];
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar5 + 8);
          *(undefined4 *)((long)puVar5 + 0x1c) = *(undefined4 *)((long)puVar5 + 0x44);
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5 = puVar5 + 5;
        }
        (**(code **)*puVar2)();
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      if (uVar9 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar9 < param_2) >> 1;
    } while (uVar8 != 0);
  }
  return 0;
}


