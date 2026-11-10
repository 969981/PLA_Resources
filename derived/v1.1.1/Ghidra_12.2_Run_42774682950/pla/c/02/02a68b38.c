/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a68b38; name: FUN_02a68b38
 */


void FUN_02a68b38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if ((puVar10 != puVar7) && (uVar6 = (*(code *)*puVar10)(puVar10 + 4,param_2), (uVar6 & 1) == 0)) {
    do {
      if (puVar7 + -0x10 == puVar10) {
        puVar10 = puVar7;
        goto LAB_02a68c3c;
      }
      puVar1 = puVar10 + 0x10;
      puVar9 = puVar10 + 0x14;
      puVar10 = puVar10 + 0x10;
      uVar6 = (*(code *)*puVar1)(puVar9,param_2);
    } while ((uVar6 & 1) == 0);
  }
  puVar1 = puVar10;
  if (puVar10 != puVar7) {
    while( true ) {
      puVar1 = puVar1 + 0x10;
      if (puVar1 == puVar7) break;
      puVar9 = puVar1 + 4;
      uVar6 = (*(code *)*puVar1)(puVar9,param_2);
      if ((uVar6 & 1) == 0) {
        pcVar8 = (code *)puVar10[1];
        if (pcVar8 != (code *)0x0) {
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          (*pcVar8)(puVar10 + 4);
        }
        if ((code *)puVar1[3] != (code *)0x0) {
          (*(code *)puVar1[3])(puVar9,puVar10 + 4);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          uVar4 = puVar1[3];
          puVar10[2] = puVar1[2];
          puVar10[3] = uVar4;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          pcVar8 = (code *)puVar1[1];
          if (pcVar8 != (code *)0x0) {
            puVar1[2] = 0;
            puVar1[3] = 0;
            *puVar1 = 0;
            puVar1[1] = 0;
            (*pcVar8)(puVar9);
          }
        }
        puVar10 = puVar10 + 0x10;
      }
    }
  }
LAB_02a68c3c:
  puVar7 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar7 - (long)puVar10;
  if (lVar5 != 0) {
    if ((undefined8 *)((long)puVar10 + lVar5) != puVar7) {
      pcVar8 = (code *)puVar10[1];
      puVar1 = puVar10;
      while( true ) {
        if (pcVar8 != (code *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          (*pcVar8)(puVar1 + 4);
        }
        puVar10 = puVar1 + (lVar5 >> 7) * 0x10;
        if ((code *)puVar10[3] != (code *)0x0) {
          (*(code *)puVar10[3])(puVar10 + 4,puVar1 + 4);
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar10[3];
          puVar1[2] = puVar10[2];
          puVar1[3] = uVar4;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          pcVar8 = (code *)puVar10[1];
          if (pcVar8 != (code *)0x0) {
            puVar10[2] = 0;
            puVar10[3] = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            (*pcVar8)(puVar10 + 4);
          }
        }
        puVar10 = puVar1 + 0x10;
        if (puVar7 + (lVar5 >> 7) * -0x10 == puVar10) break;
        pcVar8 = (code *)puVar1[0x11];
        puVar1 = puVar10;
      }
      puVar7 = (undefined8 *)param_1[1];
    }
    while (puVar1 = puVar7, puVar1 != puVar10) {
      pcVar8 = (code *)puVar1[-0xf];
      puVar7 = puVar1 + -0x10;
      if (pcVar8 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar8)(puVar1 + -0xc);
      }
    }
    param_1[1] = puVar10;
  }
  if ((undefined8 *)*param_1 == puVar10) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}


