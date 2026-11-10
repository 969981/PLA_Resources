/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05a14; name: FUN_02f05a14
 */


undefined8 FUN_02f05a14(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    puVar4 = (undefined8 *)*param_1;
    if ((param_2 & 1) == 0) {
      do {
        lVar3 = puVar4[1];
        if (*(long *)(lVar3 + 0x10) != 0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          (*DAT_0442d150)(0);
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(undefined4 *)(lVar3 + 0x1c) = 0;
        }
        *(undefined8 *)(lVar3 + 8) = 0;
        (*DAT_0442d150)(2,lVar3);
        uVar2 = *(uint *)(param_1 + 1);
        if (1 < uVar2) {
          lVar3 = *param_1 + (ulong)uVar2 * 0x10;
          uVar1 = *(undefined8 *)(lVar3 + -8);
          *puVar4 = *(undefined8 *)(lVar3 + -0x10);
          puVar4[1] = uVar1;
          uVar2 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar2 - 1;
      } while ((undefined8 *)(*param_1 + (ulong)(uVar2 - 1) * 0x10) != puVar4);
    }
    else {
      puVar5 = puVar4;
      do {
        lVar3 = puVar5[1];
        if (*(long *)(lVar3 + 8) == 0) {
          if (*(long *)(lVar3 + 0x10) != 0) {
            *(undefined4 *)(lVar3 + 0x18) = 0;
            (*DAT_0442d150)(0);
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined4 *)(lVar3 + 0x1c) = 0;
          }
          *(undefined8 *)(lVar3 + 8) = 0;
          (*DAT_0442d150)(2,lVar3);
          uVar2 = *(uint *)(param_1 + 1);
          if (1 < uVar2) {
            lVar3 = *param_1 + (ulong)uVar2 * 0x10;
            uVar1 = *(undefined8 *)(lVar3 + -8);
            *puVar5 = *(undefined8 *)(lVar3 + -0x10);
            puVar5[1] = uVar1;
            uVar2 = *(uint *)(param_1 + 1);
          }
          puVar4 = (undefined8 *)*param_1;
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 1) = uVar2;
        }
        else {
          puVar5 = puVar5 + 2;
        }
      } while (puVar4 + (ulong)uVar2 * 2 != puVar5);
    }
  }
  return 1;
}


