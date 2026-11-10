/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2f50c; name: FUN_00d2f50c
 */


void FUN_00d2f50c(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_3 != param_4) {
    lVar5 = *(long *)(param_2 + 0x28);
    puVar10 = (undefined8 *)(*(long *)(param_2 + 0x20) + lVar5 * 0x120);
    if (puVar10 == param_4) {
      puVar7 = param_3;
    }
    else {
      lVar8 = 0;
      do {
        puVar7 = (undefined8 *)((long)param_4 + lVar8);
        puVar1 = (undefined8 *)((long)param_3 + lVar8);
        *puVar1 = *puVar7;
        puVar1[1] = puVar7[1];
        plVar2 = (long *)puVar1[3];
        puVar1[2] = puVar7[2];
        puVar1[3] = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        uVar4 = puVar7[3];
        puVar7[3] = 0;
        puVar1[3] = uVar4;
        pcVar3 = (code *)puVar1[5];
        if (pcVar3 != (code *)0x0) {
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          (*pcVar3)(puVar1 + 8);
        }
        if ((code *)puVar7[7] == (code *)0x0) {
LAB_00d2f690:
          pcVar3 = (code *)puVar1[0x15];
        }
        else {
          (*(code *)puVar7[7])(puVar7 + 8,puVar1 + 8);
          uVar6 = puVar7[4];
          uVar4 = puVar7[5];
          uVar9 = puVar7[7];
          puVar1[6] = puVar7[6];
          puVar1[7] = uVar9;
          puVar1[4] = uVar6;
          puVar1[5] = uVar4;
          pcVar3 = (code *)puVar7[5];
          if (pcVar3 == (code *)0x0) goto LAB_00d2f690;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          (*pcVar3)(puVar7 + 8);
          pcVar3 = (code *)puVar1[0x15];
        }
        if (pcVar3 != (code *)0x0) {
          puVar1[0x16] = 0;
          puVar1[0x17] = 0;
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          (*pcVar3)(puVar1 + 0x18);
        }
        if ((code *)puVar7[0x17] != (code *)0x0) {
          (*(code *)puVar7[0x17])(puVar7 + 0x18,puVar1 + 0x18);
          uVar6 = puVar7[0x14];
          uVar4 = puVar7[0x15];
          uVar9 = puVar7[0x17];
          puVar1[0x16] = puVar7[0x16];
          puVar1[0x17] = uVar9;
          puVar1[0x14] = uVar6;
          puVar1[0x15] = uVar4;
          pcVar3 = (code *)puVar7[0x15];
          if (pcVar3 != (code *)0x0) {
            puVar7[0x16] = 0;
            puVar7[0x17] = 0;
            puVar7[0x14] = 0;
            puVar7[0x15] = 0;
            (*pcVar3)(puVar7 + 0x18);
          }
        }
        lVar8 = lVar8 + 0x120;
      } while (puVar7 + 0x24 != puVar10);
      lVar5 = *(long *)(param_2 + 0x28);
      puVar7 = (undefined8 *)((long)param_3 + lVar8);
    }
    lVar8 = (long)puVar10 - (long)puVar7 >> 5;
    lVar11 = lVar8 * -0x71c71c71c71c71c7;
    lVar5 = lVar5 + lVar8 * 0x71c71c71c71c71c7;
    if ((long)puVar10 - (long)puVar7 != 0) {
      lVar5 = *(long *)(param_2 + 0x20) + lVar5 * 0x120 + 0xc0;
      do {
        pcVar3 = *(code **)(lVar5 + -0x18);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x10) = 0;
          *(undefined8 *)(lVar5 + -8) = 0;
          *(undefined8 *)(lVar5 + -0x20) = 0;
          *(undefined8 *)(lVar5 + -0x18) = 0;
          (*pcVar3)(lVar5);
        }
        pcVar3 = *(code **)(lVar5 + -0x98);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar5 + -0x90) = 0;
          *(undefined8 *)(lVar5 + -0x88) = 0;
          *(undefined8 *)(lVar5 + -0xa0) = 0;
          *(undefined8 *)(lVar5 + -0x98) = 0;
          (*pcVar3)(lVar5 + -0x80);
        }
        lVar11 = lVar11 + -1;
        if (*(long **)(lVar5 + -0xa8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + -0xa8) + 0x20))();
        }
        lVar5 = lVar5 + 0x120;
      } while (lVar11 != 0);
      lVar5 = *(long *)(param_2 + 0x28) + lVar8 * 0x71c71c71c71c71c7;
    }
    *(long *)(param_2 + 0x28) = lVar5;
  }
  *param_1 = (long)param_3;
  return;
}


