/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022375c; name: FUN_0022375c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0022375c(long param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar4 = param_2[6];
  puVar7 = (undefined8 *)param_2[4];
  if (puVar7 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)((long)puVar7 + 0x39) == '\x01';
  }
  if (param_3 < uVar4) {
    if ((!bVar1) && ((puVar7[4] == 0 || (*(char *)(puVar7[4] + 0x39) != '\x01')))) {
      *(bool *)((long)param_2 + 0x39) = *(char *)((long)param_2 + 0x39) == '\0';
      *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
      *(bool *)(param_2[5] + 0x39) = *(char *)(param_2[5] + 0x39) == '\0';
      lVar5 = param_2[5];
      puVar7 = *(undefined8 **)(lVar5 + 0x20);
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)((long)puVar7 + 0x39) == '\x01')) {
        *(undefined8 *)(lVar5 + 0x20) = puVar7[5];
        puVar7[5] = lVar5;
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)(lVar5 + 0x39);
        *(undefined1 *)(lVar5 + 0x39) = 1;
        param_2[5] = puVar7;
        param_2[5] = puVar7[4];
        puVar7[4] = param_2;
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
        *(undefined1 *)((long)param_2 + 0x39) = 1;
        *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
        *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
        *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
        param_2 = puVar7;
      }
    }
    uVar2 = FUN_0022375c(param_1,param_2[4]);
    param_2[4] = uVar2;
    puVar7 = (undefined8 *)param_2[5];
  }
  else {
    if (bVar1) {
      param_2[4] = puVar7[5];
      puVar7[5] = param_2;
      *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_2 + 0x39) = 1;
      lVar5 = puVar7[5];
      uVar4 = puVar7[6];
    }
    else {
      lVar5 = param_2[5];
      puVar7 = param_2;
    }
    if ((uVar4 == param_3) && (lVar5 == 0)) {
      *puVar7 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar7;
      return (undefined8 *)0x0;
    }
    param_2 = puVar7;
    if ((*(char *)(lVar5 + 0x39) != '\x01') &&
       ((*(long *)(lVar5 + 0x20) == 0 || (*(char *)(*(long *)(lVar5 + 0x20) + 0x39) != '\x01')))) {
      *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
      *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
      *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
      puVar3 = (undefined8 *)puVar7[4];
      if ((puVar3[4] != 0) && (*(char *)(puVar3[4] + 0x39) == '\x01')) {
        puVar7[4] = puVar3[5];
        puVar3[5] = puVar7;
        *(undefined1 *)((long)puVar3 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
        *(undefined1 *)((long)puVar7 + 0x39) = 1;
        *(bool *)((long)puVar3 + 0x39) = *(char *)((long)puVar3 + 0x39) == '\0';
        *(bool *)(puVar3[4] + 0x39) = *(char *)(puVar3[4] + 0x39) == '\0';
        *(bool *)(puVar3[5] + 0x39) = *(char *)(puVar3[5] + 0x39) == '\0';
        param_2 = puVar3;
      }
    }
    puVar7 = (undefined8 *)param_2[5];
    if (param_2[6] == param_3) {
      puVar3 = puVar7;
      do {
        puVar6 = puVar3;
        puVar3 = (undefined8 *)puVar6[4];
      } while (puVar3 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        uVar4 = puVar6[6];
        bVar1 = uVar4 <= (ulong)puVar7[6];
        puVar3 = puVar7;
        if (!bVar1 || puVar7[6] == uVar4) goto LAB_00223a88;
        while (puVar3 = (undefined8 *)puVar3[4], puVar3 != (undefined8 *)0x0) {
          while (bVar1 = uVar4 <= (ulong)puVar3[6], (ulong)puVar3[6] <= uVar4) {
LAB_00223a88:
            if ((bVar1) || (puVar3 = (undefined8 *)puVar3[5], puVar3 == (undefined8 *)0x0))
            goto LAB_00223b34;
          }
        }
      }
LAB_00223b34:
      uVar2 = FUN_00223b6c(puVar7);
      puVar3[5] = uVar2;
      puVar3[4] = param_2[4];
      *(undefined1 *)((long)puVar3 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *param_2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = param_2;
      puVar7 = (undefined8 *)puVar3[5];
      param_2 = puVar3;
    }
    else {
      puVar7 = (undefined8 *)FUN_0022375c(param_1);
      param_2[5] = puVar7;
    }
  }
  if ((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) {
    puVar3 = (undefined8 *)param_2[4];
  }
  else {
    param_2[5] = puVar7[4];
    puVar7[4] = param_2;
    *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar3 = (undefined8 *)puVar7[4];
    param_2 = puVar7;
  }
  if ((puVar3 == (undefined8 *)0x0) || (*(char *)((long)puVar3 + 0x39) != '\x01')) {
    return param_2;
  }
  if ((puVar3[4] == 0) || (*(char *)(puVar3[4] + 0x39) != '\x01')) {
    puVar7 = puVar3;
  }
  else {
    param_2[4] = puVar3[5];
    puVar3[5] = param_2;
    *(undefined1 *)((long)puVar3 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar7 = (undefined8 *)puVar3[4];
    if (puVar7 == (undefined8 *)0x0) {
      return puVar3;
    }
    param_2 = puVar3;
    if (*(char *)((long)puVar7 + 0x39) != '\x01') {
      return puVar3;
    }
  }
  if ((param_2[5] != 0) && (*(char *)(param_2[5] + 0x39) == '\x01')) {
    *(bool *)((long)param_2 + 0x39) = *(char *)((long)param_2 + 0x39) == '\0';
    *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
    *(bool *)(param_2[5] + 0x39) = *(char *)(param_2[5] + 0x39) == '\0';
  }
  return param_2;
}


