/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294a644; name: FUN_0294a644
 */


uint FUN_0294a644(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  
  uVar2 = FUN_0294a090();
  uVar2 = uVar2 & 0xff;
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = (param_4 & 0xff) / uVar2;
  }
  uVar2 = (param_4 & 0xff) - uVar6 * uVar2;
  if (((int)param_3 / 5) * 5 == 0) {
LAB_0294a700:
    uVar6 = 0;
  }
  else {
    uVar6 = (int)param_3 % 5;
    uVar3 = FUN_02949cec(param_1,param_2,uVar6);
    if ((uVar3 & 1) == 0) goto LAB_0294a700;
    if (param_1 == 2) {
LAB_0294a6c8:
      puVar4 = &DAT_03a7ebe0;
      if (4 < (int)param_3) goto LAB_0294a6d8;
LAB_0294a6f0:
      cVar5 = puVar4[param_3];
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 0) goto LAB_0294a700;
        goto LAB_0294a6c8;
      }
      puVar4 = &DAT_03a7ebe5;
      if ((int)param_3 < 5) goto LAB_0294a6f0;
LAB_0294a6d8:
      cVar5 = '\x02';
    }
    if (cVar5 == puVar4[uVar6]) goto LAB_0294a700;
    if ((uVar2 & 0xff) == 0) {
      return uVar6;
    }
    uVar6 = 1;
  }
  uVar1 = (int)(param_3 + 1) % 5;
  if ((uVar1 != param_3) && (uVar3 = FUN_02949cec(param_1,param_2,uVar1), (uVar3 & 1) != 0)) {
    if (param_1 == 2) {
LAB_0294a750:
      puVar4 = &DAT_03a7ebe0;
      if (4 < (int)param_3) goto LAB_0294a760;
LAB_0294a788:
      cVar5 = puVar4[param_3];
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 0) goto LAB_0294a7a4;
        goto LAB_0294a750;
      }
      puVar4 = &DAT_03a7ebe5;
      if ((int)param_3 < 5) goto LAB_0294a788;
LAB_0294a760:
      cVar5 = '\x02';
    }
    if (cVar5 != puVar4[uVar1]) {
      if (uVar6 == (uVar2 & 0xff)) {
        return uVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
LAB_0294a7a4:
  uVar1 = (int)(param_3 + 2) % 5;
  if ((uVar1 != param_3) && (uVar3 = FUN_02949cec(param_1,param_2,uVar1), (uVar3 & 1) != 0)) {
    if (param_1 == 2) {
LAB_0294a7f0:
      puVar4 = &DAT_03a7ebe0;
      if (4 < (int)param_3) goto LAB_0294a800;
LAB_0294a818:
      cVar5 = puVar4[param_3];
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 0) goto LAB_0294a834;
        goto LAB_0294a7f0;
      }
      puVar4 = &DAT_03a7ebe5;
      if ((int)param_3 < 5) goto LAB_0294a818;
LAB_0294a800:
      cVar5 = '\x02';
    }
    if (cVar5 != puVar4[uVar1]) {
      if (uVar6 == (uVar2 & 0xff)) {
        return uVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
LAB_0294a834:
  uVar1 = (int)(param_3 + 3) % 5;
  if ((uVar1 != param_3) && (uVar3 = FUN_02949cec(param_1,param_2,uVar1), (uVar3 & 1) != 0)) {
    if (param_1 == 2) {
LAB_0294a880:
      puVar4 = &DAT_03a7ebe0;
      if (4 < (int)param_3) goto LAB_0294a890;
LAB_0294a8a8:
      cVar5 = puVar4[param_3];
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 0) goto LAB_0294a8c4;
        goto LAB_0294a880;
      }
      puVar4 = &DAT_03a7ebe5;
      if ((int)param_3 < 5) goto LAB_0294a8a8;
LAB_0294a890:
      cVar5 = '\x02';
    }
    if (cVar5 != puVar4[uVar1]) {
      if (uVar6 == (uVar2 & 0xff)) {
        return uVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
LAB_0294a8c4:
  uVar1 = (int)(param_3 + 4) % 5;
  if (uVar1 == param_3) {
    return 5;
  }
  uVar3 = FUN_02949cec(param_1,param_2,uVar1);
  if ((uVar3 & 1) == 0) {
    return 5;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      puVar4 = &DAT_03a7ebe5;
      goto joined_r0x0294a91c;
    }
    if (param_1 != 0) {
      return 5;
    }
  }
  puVar4 = &DAT_03a7ebe0;
joined_r0x0294a91c:
  if ((int)param_3 < 5) {
    cVar5 = puVar4[param_3];
  }
  else {
    cVar5 = '\x02';
  }
  if ((uVar6 == (uVar2 & 0xff)) && (cVar5 != puVar4[uVar1])) {
    return uVar1;
  }
  return 5;
}


