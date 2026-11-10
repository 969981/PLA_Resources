/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294a2f8; name: FUN_0294a2f8
 */


uint FUN_0294a2f8(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  
  bVar3 = FUN_02949df4();
  if (bVar3 == 0) {
    return 5;
  }
  uVar2 = 0;
  if (bVar3 != 0) {
    uVar2 = (param_4 & 0xff) / (uint)bVar3;
  }
  uVar2 = (param_4 & 0xff) - uVar2 * bVar3;
  if (((int)param_3 / 5) * 5 == 0) {
LAB_0294a3d0:
    uVar8 = 0;
  }
  else {
    uVar8 = (int)param_3 % 5;
    uVar4 = FUN_02949cec(param_1,param_2,uVar8);
    if ((uVar4 & 1) == 0) goto LAB_0294a3d0;
    if (param_1 == 2) {
LAB_0294a388:
      puVar5 = &DAT_03a7ebe0;
joined_r0x0294a3ac:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar8]) goto LAB_0294a3d0;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03a7ebe5;
        goto joined_r0x0294a3ac;
      }
      if (param_1 == 0) goto LAB_0294a388;
    }
    if ((uVar2 & 0xff) == 0) {
      return uVar8;
    }
    uVar8 = 1;
  }
  uVar1 = (int)(param_3 + 1) % 5;
  if ((uVar1 != param_3) && (uVar4 = FUN_02949cec(param_1,param_2,uVar1), (uVar4 & 1) != 0)) {
    if (param_1 == 2) {
LAB_0294a420:
      puVar5 = &DAT_03a7ebe0;
joined_r0x0294a444:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar1]) goto LAB_0294a464;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03a7ebe5;
        goto joined_r0x0294a444;
      }
      if (param_1 == 0) goto LAB_0294a420;
    }
    if (uVar8 == (uVar2 & 0xff)) {
      return uVar1;
    }
    uVar8 = uVar8 + 1;
  }
LAB_0294a464:
  uVar1 = (int)(param_3 + 2) % 5;
  if ((uVar1 != param_3) && (uVar4 = FUN_02949cec(param_1,param_2,uVar1), (uVar4 & 1) != 0)) {
    if (param_1 == 2) {
LAB_0294a4b0:
      puVar5 = &DAT_03a7ebe0;
joined_r0x0294a4d4:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar1]) goto LAB_0294a4f4;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03a7ebe5;
        goto joined_r0x0294a4d4;
      }
      if (param_1 == 0) goto LAB_0294a4b0;
    }
    if (uVar8 == (uVar2 & 0xff)) {
      return uVar1;
    }
    uVar8 = uVar8 + 1;
  }
LAB_0294a4f4:
  uVar1 = (int)(param_3 + 3) % 5;
  if ((uVar1 != param_3) && (uVar4 = FUN_02949cec(param_1,param_2,uVar1), (uVar4 & 1) != 0)) {
    if (param_1 == 2) {
LAB_0294a540:
      puVar5 = &DAT_03a7ebe0;
joined_r0x0294a564:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar1]) goto LAB_0294a584;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03a7ebe5;
        goto joined_r0x0294a564;
      }
      if (param_1 == 0) goto LAB_0294a540;
    }
    if (uVar8 == (uVar2 & 0xff)) {
      return uVar1;
    }
    uVar8 = uVar8 + 1;
  }
LAB_0294a584:
  uVar1 = (int)(param_3 + 4) % 5;
  if (uVar1 == param_3) {
    return 5;
  }
  uVar4 = FUN_02949cec(param_1,param_2,uVar1);
  if ((uVar4 & 1) == 0) {
    return 5;
  }
  if (param_1 == 2) {
LAB_0294a5d0:
    puVar5 = &DAT_03a7ebe0;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 0) {
        cVar6 = '\x02';
        cVar7 = '\x02';
        goto joined_r0x0294a604;
      }
      goto LAB_0294a5d0;
    }
    puVar5 = &DAT_03a7ebe5;
  }
  if ((int)param_3 < 5) {
    cVar6 = puVar5[param_3];
  }
  else {
    cVar6 = '\x02';
  }
  cVar7 = puVar5[uVar1];
joined_r0x0294a604:
  if ((uVar8 == (uVar2 & 0xff)) && (cVar6 == cVar7)) {
    return uVar1;
  }
  return 5;
}


