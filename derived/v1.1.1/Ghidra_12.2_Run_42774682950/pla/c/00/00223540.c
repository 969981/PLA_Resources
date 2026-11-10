/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223540; name: FUN_00223540
 */


undefined8 * FUN_00223540(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    *(undefined1 *)((long)param_3 + 0x39) = 1;
    param_3[4] = 0;
    param_3[5] = 0;
    return param_3;
  }
  if ((ulong)param_3[6] < (ulong)param_2[6]) {
    uVar2 = FUN_00223540(param_1,param_2[4]);
    param_2[4] = uVar2;
    puVar4 = (undefined8 *)param_2[5];
joined_r0x002236dc:
    if (puVar4 == (undefined8 *)0x0) goto LAB_002236e0;
LAB_00223578:
    if ((*(char *)((long)puVar4 + 0x39) != '\x01') ||
       ((param_2[4] != 0 && (*(char *)(param_2[4] + 0x39) == '\x01')))) goto LAB_002236e0;
    param_2[5] = puVar4[4];
    puVar4[4] = param_2;
    *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar3 = (undefined8 *)puVar4[4];
  }
  else {
    if (param_3[6] == param_2[6]) {
      if (param_2 != param_3) {
        param_3[5] = param_2[5];
        param_3[4] = param_2[4];
        *(undefined1 *)((long)param_3 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
        *param_2 = *(undefined8 *)(param_1 + 8);
        *(undefined8 **)(param_1 + 8) = param_2;
        param_2 = param_3;
      }
      puVar4 = (undefined8 *)param_2[5];
      goto joined_r0x002236dc;
    }
    puVar4 = (undefined8 *)FUN_00223540(param_1,param_2[5]);
    param_2[5] = puVar4;
    if (puVar4 != (undefined8 *)0x0) goto LAB_00223578;
LAB_002236e0:
    puVar3 = (undefined8 *)param_2[4];
    puVar4 = param_2;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return puVar4;
  }
  if (*(char *)((long)puVar3 + 0x39) == '\x01') {
    if ((puVar3[4] == 0) || (*(char *)(puVar3[4] + 0x39) != '\x01')) {
      cVar1 = *(char *)((long)puVar3 + 0x39);
      goto joined_r0x00223658;
    }
    puVar4[4] = puVar3[5];
    puVar3[5] = puVar4;
    *(undefined1 *)((long)puVar3 + 0x39) = *(undefined1 *)((long)puVar4 + 0x39);
    *(undefined1 *)((long)puVar4 + 0x39) = 1;
    puVar4 = puVar3;
    puVar5 = (undefined8 *)puVar3[4];
    if ((undefined8 *)puVar3[4] == (undefined8 *)0x0) {
      return puVar3;
    }
  }
  else {
    puVar5 = puVar3;
  }
  cVar1 = *(char *)((long)puVar5 + 0x39);
  puVar3 = puVar5;
joined_r0x00223658:
  if (((cVar1 == '\x01') && (puVar4[5] != 0)) && (*(char *)(puVar4[5] + 0x39) == '\x01')) {
    *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
    *(bool *)((long)puVar3 + 0x39) = *(char *)((long)puVar3 + 0x39) == '\0';
    *(bool *)(puVar4[5] + 0x39) = *(char *)(puVar4[5] + 0x39) == '\0';
  }
  return puVar4;
}


