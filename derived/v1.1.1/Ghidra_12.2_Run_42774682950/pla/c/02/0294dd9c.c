/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294dd9c; name: FUN_0294dd9c
 */


int FUN_0294dd9c(int param_1,char param_2,char param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  
  if (param_1 == 0) {
    if (param_3 == '\x02') {
      if ((param_4 & 0xff) < 4) {
        return param_4 + 2;
      }
      return 6;
    }
    if (param_3 == '\x01') {
      if ((param_4 & 0xff) == 0) {
        return 1;
      }
      return 6;
    }
    if (param_3 != '\0') {
      return 6;
    }
    if ((param_4 & 0xff) == 0) {
      return 0;
    }
    return 6;
  }
  if (param_1 != 1) {
    if ((char)((param_1 != 2) * '\x02') == param_3) {
      if ((param_4 & 0xff) == 0) {
        return 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    cVar5 = '\x01';
    if (param_1 != 2) {
      cVar5 = '\x02';
    }
    if (cVar5 == param_3) {
      if (uVar3 == (param_4 & 0xff)) {
        return 1;
      }
      if (uVar3 + 1 == (param_4 & 0xff)) {
        return 2;
      }
      uVar3 = uVar3 | 2;
      if (uVar3 == (param_4 & 0xff)) {
        return 3;
      }
      if (uVar3 + 1 == (param_4 & 0xff)) {
        return 4;
      }
      uVar3 = uVar3 + 2;
    }
    bVar2 = false;
    if (uVar3 == (param_4 & 0xff)) {
      bVar2 = cVar5 == param_3;
    }
    goto LAB_0294e0f8;
  }
  bVar1 = param_2 - 1;
  if (bVar1 < 5) {
    puVar6 = (uint *)(&PTR_DAT_04276850)[(char)bVar1];
  }
  else {
    puVar6 = &DAT_03a7eb68;
  }
  if ((int)*puVar6 < 5) {
    if ((&DAT_03a7ebe5)[*puVar6] != param_3) goto LAB_0294de34;
LAB_0294de84:
    if ((param_4 & 0xff) == 0) {
      return 0;
    }
    uVar3 = 1;
  }
  else {
    if (param_3 == '\x02') goto LAB_0294de84;
LAB_0294de34:
    uVar3 = 0;
  }
  if (bVar1 < 5) {
    puVar6 = (uint *)(&PTR_DAT_04276878)[(char)bVar1];
  }
  else {
    puVar6 = &DAT_03a7eb6c;
  }
  if ((int)*puVar6 < 5) {
    if ((&DAT_03a7ebe5)[*puVar6] == param_3) goto LAB_0294ded8;
  }
  else if (param_3 == '\x02') {
LAB_0294ded8:
    if (uVar3 == (param_4 & 0xff)) {
      return 1;
    }
    uVar3 = uVar3 + 1;
  }
  if (bVar1 < 5) {
    puVar6 = (uint *)(&PTR_DAT_042768a0)[(char)bVar1];
  }
  else {
    puVar6 = &DAT_03a7eb70;
  }
  if ((int)*puVar6 < 5) {
    if ((&DAT_03a7ebe5)[*puVar6] == param_3) goto LAB_0294df3c;
  }
  else if (param_3 == '\x02') {
LAB_0294df3c:
    if (uVar3 == (param_4 & 0xff)) {
      return 2;
    }
    uVar3 = uVar3 + 1;
  }
  if (bVar1 < 5) {
    puVar6 = (uint *)(&PTR_DAT_042768c8)[(char)bVar1];
  }
  else {
    puVar6 = &DAT_03a7eb74;
  }
  if ((int)*puVar6 < 5) {
    if ((&DAT_03a7ebe5)[*puVar6] == param_3) goto LAB_0294dfd4;
  }
  else if (param_3 == '\x02') {
LAB_0294dfd4:
    if (uVar3 == (param_4 & 0xff)) {
      return 3;
    }
    uVar3 = uVar3 + 1;
  }
  if (bVar1 < 5) {
    puVar6 = (uint *)(&PTR_DAT_042768f0)[(char)bVar1];
  }
  else {
    puVar6 = &DAT_03a7eb78;
  }
  if ((int)*puVar6 < 5) {
    if ((&DAT_03a7ebe5)[*puVar6] == param_3) goto LAB_0294e040;
  }
  else if (param_3 == '\x02') {
LAB_0294e040:
    if (uVar3 == (param_4 & 0xff)) {
      return 4;
    }
    uVar3 = uVar3 + 1;
  }
  if (bVar1 < 5) {
    puVar6 = (uint *)(&PTR_DAT_04276918)[(char)bVar1];
  }
  else {
    puVar6 = &DAT_03a7eb7c;
  }
  if ((int)*puVar6 < 5) {
    cVar5 = (&DAT_03a7ebe5)[*puVar6];
  }
  else {
    cVar5 = '\x02';
  }
  bVar2 = cVar5 == param_3 && uVar3 == (param_4 & 0xff);
LAB_0294e0f8:
  iVar4 = 5;
  if (!bVar2) {
    iVar4 = 6;
  }
  return iVar4;
}


