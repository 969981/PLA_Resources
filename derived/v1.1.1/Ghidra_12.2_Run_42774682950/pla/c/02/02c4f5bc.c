/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4f5bc; name: FUN_02c4f5bc
 */


void FUN_02c4f5bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != &DAT_043f22b8) {
    do {
      puVar7 = (undefined8 *)*puVar1;
      if (puVar7 == &DAT_043f22b8 || *(int *)(puVar1 + 3) == 1) break;
      puVar4 = (undefined8 *)puVar7[1];
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar3 = puVar4;
      if (puVar1 == puVar4) {
        puVar3 = (undefined8 *)puVar7[2];
      }
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) != 0)) {
        puVar3 = (undefined8 *)puVar1[1];
        if (puVar1 == puVar4) {
          if (puVar3 != param_1) {
            puVar3 = (undefined8 *)param_1[1];
            puVar1[2] = puVar3;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = puVar1;
            }
            param_1[1] = puVar1;
            *puVar1 = param_1;
            *param_1 = puVar7;
            puVar7[1] = param_1;
            FUN_02c4f79c();
            FUN_02c4f79c(param_1);
            puVar1 = param_1;
          }
          puVar4 = (undefined8 *)*puVar7;
          puVar3 = (undefined8 *)puVar4[1];
          puVar6 = (undefined8 *)puVar1[2];
          puVar7[1] = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = puVar7;
          }
          puVar1[2] = puVar7;
          *puVar7 = puVar1;
          puVar6 = puVar4 + 1;
          if (puVar3 != puVar7) {
            puVar6 = puVar4 + 2;
          }
        }
        else {
          if (puVar3 == param_1) {
            puVar3 = (undefined8 *)param_1[2];
            puVar1[1] = puVar3;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = puVar1;
            }
            param_1[2] = puVar1;
            *puVar1 = param_1;
            *param_1 = puVar7;
            puVar7[2] = param_1;
            FUN_02c4f79c();
            FUN_02c4f79c(param_1);
            puVar3 = (undefined8 *)param_1[1];
            puVar1 = param_1;
          }
          else {
          }
          puVar4 = (undefined8 *)*puVar7;
          puVar5 = (undefined8 *)puVar4[1];
          puVar7[2] = puVar3;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = puVar7;
          }
          puVar1[1] = puVar7;
          puVar6 = puVar4 + 1;
          if (puVar5 != puVar7) {
            puVar6 = puVar4 + 2;
          }
          *puVar7 = puVar1;
        }
        *puVar1 = puVar4;
        puVar3 = &DAT_043f22b8;
        if (puVar4 != &DAT_043f22b8) {
          puVar3 = puVar6;
        }
        *puVar3 = puVar1;
        FUN_02c4f79c(puVar7);
        FUN_02c4f79c(puVar1);
        *(undefined4 *)(puVar1 + 3) = 1;
        goto LAB_02c4f77c;
      }
      *(undefined4 *)(puVar3 + 3) = 1;
      *(undefined4 *)(puVar1 + 3) = 1;
      puVar1 = (undefined8 *)*puVar7;
      param_1 = puVar7;
    } while (puVar1 != &DAT_043f22b8);
  }
  while (((param_1 != (undefined8 *)0x0 && (param_1 != &DAT_043f22b8)) &&
         (uVar2 = FUN_02c4f79c(param_1), (uVar2 & 1) != 0))) {
    param_1 = (undefined8 *)*param_1;
  }
LAB_02c4f77c:
  *(undefined4 *)(DAT_043f22b8 + 0x18) = 1;
  return;
}


