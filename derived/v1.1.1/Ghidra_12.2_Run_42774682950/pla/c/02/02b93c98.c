/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b93c98; name: FUN_02b93c98
 */


void FUN_02b93c98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)param_2[1];
  puVar5 = (undefined8 *)param_2[2];
  puVar2 = param_2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  else if (puVar5 == (undefined8 *)0x0) {
    puVar3 = puVar6;
  }
  else {
    puVar3 = puVar5;
    do {
      puVar2 = puVar3;
      puVar3 = (undefined8 *)puVar2[1];
    } while ((undefined8 *)puVar2[1] != (undefined8 *)0x0);
    puVar3 = (undefined8 *)puVar2[2];
  }
  puVar4 = (undefined8 *)*param_2;
  puVar7 = (undefined8 *)puVar4[1];
  if (puVar2 == param_2) {
    if (puVar3 == (undefined8 *)0x0) {
      if (puVar4 == param_1) {
        *param_1 = 0;
      }
      else if (puVar7 == param_2) {
        puVar4[1] = 0;
      }
      else {
        puVar4[2] = 0;
      }
    }
    else {
      *puVar3 = puVar4;
      if (puVar4 == param_1) {
        *param_1 = puVar3;
      }
      else if (puVar7 == param_2) {
        puVar4[1] = puVar3;
      }
      else {
        puVar4[2] = puVar3;
      }
    }
    puVar7 = puVar4;
    if ((undefined8 *)param_1[1] == param_2) {
      while (puVar1 = puVar5, puVar1 != (undefined8 *)0x0) {
        puVar7 = puVar1;
        puVar5 = (undefined8 *)puVar1[1];
      }
      param_1[1] = puVar7;
    }
    puVar5 = puVar4;
    if ((undefined8 *)param_1[2] == param_2) {
      while (puVar7 = puVar6, puVar7 != (undefined8 *)0x0) {
        puVar5 = puVar7;
        puVar6 = (undefined8 *)puVar7[2];
      }
      param_1[2] = puVar5;
    }
  }
  else {
    *puVar6 = puVar2;
    puVar2[1] = puVar6;
    if (puVar5 != puVar2) {
      puVar2[2] = puVar5;
      *puVar5 = puVar2;
      puVar5 = (undefined8 *)*puVar2;
      if (puVar3 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar3 = puVar5;
        puVar6 = puVar3;
      }
      puVar5[1] = puVar6;
    }
    *puVar2 = puVar4;
    if (puVar4 == param_1) {
      *param_1 = puVar2;
      puVar4 = puVar5;
    }
    else if (puVar7 == param_2) {
      puVar4[1] = puVar2;
      puVar4 = puVar5;
    }
    else {
      puVar4[2] = puVar2;
      puVar4 = puVar5;
    }
  }
  param_3[1] = puVar4;
  param_3[2] = puVar2;
  *param_3 = puVar3;
  return;
}


