/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294da60; name: FUN_0294da60
 */


byte FUN_0294da60(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int *piVar6;
  
  if (param_1 == 0) {
    bVar4 = 2;
    if (param_3 != 1) {
      bVar4 = 1;
    }
    bVar3 = param_3 == 1;
    if (param_3 == 0) {
      bVar3 = bVar4;
    }
    return bVar3 | (param_3 == 5) << 2;
  }
  if (param_1 == 2) {
    return (param_3 == 0 | (param_3 == 1) << 2) + (param_3 == 1);
  }
  if (param_1 != 1) {
    cVar5 = '\x03';
    if (param_3 != 5) {
      cVar5 = '\0';
    }
    return cVar5 + (param_3 == 5) * '\x03';
  }
  uVar1 = param_2 & 0xff;
  if (uVar1 - 1 < 3) {
    piVar6 = &DAT_03a7eb80;
LAB_0294db4c:
    bVar4 = *piVar6 == param_3;
    if (uVar1 - 1 < 3) {
      piVar6 = &DAT_03a7eb84;
    }
    else {
      if (uVar1 == 5) goto LAB_0294db74;
      piVar6 = &DAT_03a7eb6c;
    }
    if (*piVar6 == param_3) {
      bVar4 = bVar4 + 1;
    }
    uVar1 = param_2 & 0xff;
    if (uVar1 - 1 < 3) {
      piVar6 = &DAT_03a7eb88;
    }
    else {
      if (uVar1 == 5) goto LAB_0294dbb8;
      piVar6 = &DAT_03a7eb70;
    }
    if (*piVar6 == param_3) {
      bVar4 = bVar4 + 1;
    }
    if (uVar1 - 1 < 3) {
      piVar6 = &DAT_03a7eb8c;
    }
    else {
      if (uVar1 == 5) goto LAB_0294dbc0;
      piVar6 = &DAT_03a7eb74;
    }
    param_2 = param_2 & 0xff;
    if (*piVar6 == param_3) {
      bVar4 = bVar4 + 1;
    }
    if (param_2 - 1 < 3) {
      piVar6 = &DAT_03a7eb90;
    }
    else {
      if (param_2 == 5) goto LAB_0294dbc8;
      piVar6 = &DAT_03a7eb78;
    }
    if (*piVar6 == param_3) {
      bVar4 = bVar4 + 1;
    }
    if (param_2 - 1 < 3) {
      piVar6 = &DAT_03a7eb94;
      goto LAB_0294dc7c;
    }
    if (param_2 != 5) {
      piVar6 = &DAT_03a7eb7c;
      goto LAB_0294dc7c;
    }
  }
  else {
    if (uVar1 != 5) {
      if (uVar1 == 4) {
        cVar5 = '\x02';
        if (param_3 != 1) {
          cVar5 = '\x01';
        }
        cVar2 = param_3 == 1;
        if (param_3 == 3) {
          cVar2 = cVar5;
        }
        if (param_3 == 5) {
          cVar2 = cVar2 + '\x01';
        }
        bVar4 = cVar2 + (param_3 == 0) * '\x02';
        piVar6 = &DAT_03a7ebac;
        goto LAB_0294dc7c;
      }
      piVar6 = &DAT_03a7eb68;
      goto LAB_0294db4c;
    }
    bVar4 = param_3 == 0;
LAB_0294db74:
    if (param_3 == 1) {
      bVar4 = bVar4 + 1;
    }
LAB_0294dbb8:
    if (param_3 == 2) {
      bVar4 = bVar4 + 1;
    }
LAB_0294dbc0:
    if (param_3 == 5) {
      bVar4 = bVar4 + 1;
    }
LAB_0294dbc8:
    if (param_3 == 5) {
      bVar4 = bVar4 + 1;
    }
  }
  piVar6 = &DAT_03a7ebc4;
LAB_0294dc7c:
  if (*piVar6 == param_3) {
    bVar4 = bVar4 + 1;
  }
  return bVar4;
}


