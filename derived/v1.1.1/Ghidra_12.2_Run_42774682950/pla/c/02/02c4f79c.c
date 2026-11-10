/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4f79c; name: FUN_02c4f79c
 */


bool FUN_02c4f79c(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)0x0) {
LAB_02c4f7d4:
    puVar5 = puVar8;
    do {
      puVar7 = puVar5;
      puVar5 = (undefined8 *)puVar7[2];
    } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
  }
  else {
    if ((puVar1 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0x0)) {
      puVar5 = puVar1;
      if (puVar1 == (undefined8 *)0x0) {
        puVar7 = puVar8;
        if ((undefined8 *)puVar8[1] == param_1) {
          puVar5 = puVar8;
          do {
            puVar7 = (undefined8 *)*puVar5;
            bVar2 = (undefined8 *)puVar7[1] == puVar5;
            puVar5 = puVar7;
          } while (bVar2);
        }
        goto LAB_02c4f828;
      }
    }
    else if (((puVar1 == puVar3) || ((undefined8 *)*puVar1 != param_1)) ||
            (puVar5 = puVar1, (undefined8 *)*puVar3 != param_1)) goto LAB_02c4f7d4;
    do {
      puVar7 = puVar5;
      puVar5 = (undefined8 *)puVar7[2];
    } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
  }
LAB_02c4f828:
  if (puVar7 == &DAT_043f22b8) {
    if (puVar1 == (undefined8 *)0x0) {
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = puVar1[6];
      uVar6 = puVar3[6];
    }
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    goto LAB_02c4f914;
  }
  puVar5 = puVar8;
  if (puVar8 == (undefined8 *)0x0) {
LAB_02c4f868:
    do {
      puVar8 = puVar5;
      puVar5 = (undefined8 *)puVar8[2];
    } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
LAB_02c4f8e0:
    if (puVar8 != param_1) goto LAB_02c4f8e8;
LAB_02c4f92c:
    uVar6 = 0;
  }
  else {
    if ((puVar1 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) {
      if ((puVar1 != puVar3) && ((undefined8 *)*puVar1 == param_1)) {
        puVar7 = puVar1;
        if ((undefined8 *)*puVar3 == param_1) goto LAB_02c4f890;
      }
      goto LAB_02c4f868;
    }
    puVar7 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
LAB_02c4f890:
      do {
        puVar8 = puVar7;
        puVar7 = (undefined8 *)puVar8[2];
      } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
      goto LAB_02c4f8e0;
    }
    if ((undefined8 *)puVar8[1] == param_1) {
      do {
        puVar8 = (undefined8 *)*puVar5;
        bVar2 = (undefined8 *)puVar8[1] == puVar5;
        puVar5 = puVar8;
      } while (bVar2);
      goto LAB_02c4f8e0;
    }
    if (puVar8 == param_1) goto LAB_02c4f92c;
LAB_02c4f8e8:
    uVar6 = param_1[4] - puVar8[5];
  }
  uVar4 = uVar6;
  if ((puVar1 != (undefined8 *)0x0) && (uVar4 = puVar1[6], (ulong)puVar1[6] <= uVar6)) {
    uVar4 = uVar6;
  }
  uVar6 = uVar4;
  if ((puVar3 != (undefined8 *)0x0) && (uVar6 = puVar3[6], (ulong)puVar3[6] <= uVar4)) {
    uVar6 = uVar4;
  }
LAB_02c4f914:
  uVar4 = param_1[6];
  param_1[6] = uVar6;
  return uVar6 == uVar4;
}


