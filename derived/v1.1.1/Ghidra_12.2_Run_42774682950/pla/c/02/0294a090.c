/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294a090; name: FUN_0294a090
 */


char FUN_0294a090(ulong param_1,ulong param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = param_2 & 0xffffffff;
  uVar7 = param_1 & 0xffffffff;
  uVar2 = FUN_02949cec(param_1,param_2,0);
  cVar1 = false;
  iVar6 = (int)param_1;
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
LAB_0294a0d0:
      if ((int)param_3 < 5) {
        puVar5 = &DAT_03a7ebe0;
LAB_0294a114:
        cVar3 = '\0';
        cVar1 = puVar5[param_3];
      }
      else {
LAB_0294a0f0:
        cVar3 = '\0';
        cVar1 = '\x02';
      }
    }
    else {
      if (iVar6 == 1) {
        if (4 < (int)param_3) goto LAB_0294a0f0;
        puVar5 = &DAT_03a7ebe5;
        goto LAB_0294a114;
      }
      if (iVar6 == 0) goto LAB_0294a0d0;
      cVar1 = '\x02';
      cVar3 = '\x02';
    }
    cVar1 = cVar1 != cVar3;
  }
  uVar2 = FUN_02949cec(uVar7,uVar8,1);
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
LAB_0294a148:
      if ((int)param_3 < 5) {
        puVar5 = &DAT_03a7ebe0;
LAB_0294a184:
        cVar3 = puVar5[param_3];
        cVar4 = '\x01';
      }
      else {
LAB_0294a164:
        cVar4 = '\x01';
        cVar3 = '\x02';
      }
    }
    else {
      if (iVar6 == 1) {
        if (4 < (int)param_3) goto LAB_0294a164;
        puVar5 = &DAT_03a7ebe5;
        goto LAB_0294a184;
      }
      if (iVar6 == 0) goto LAB_0294a148;
      cVar3 = '\x02';
      cVar4 = '\x02';
    }
    if (cVar3 != cVar4) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = FUN_02949cec(uVar7,uVar8,2);
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
LAB_0294a1bc:
      if ((int)param_3 < 5) {
        cVar3 = (&DAT_03a7ebe0)[param_3];
      }
      else {
LAB_0294a1c4:
        cVar3 = '\x02';
      }
      cVar4 = '\x02';
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 == 0) goto LAB_0294a1bc;
        goto LAB_0294a1c4;
      }
      if ((int)param_3 < 5) {
        cVar4 = '\0';
        cVar3 = (&DAT_03a7ebe5)[param_3];
      }
      else {
        cVar4 = '\0';
        cVar3 = '\x02';
      }
    }
    if (cVar3 != cVar4) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = FUN_02949cec(uVar7,uVar8,3);
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
LAB_0294a220:
      if ((int)param_3 < 5) {
        cVar3 = (&DAT_03a7ebe0)[param_3];
      }
      else {
LAB_0294a228:
        cVar3 = '\x02';
      }
      cVar4 = '\x02';
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 == 0) goto LAB_0294a220;
        goto LAB_0294a228;
      }
      if ((int)param_3 < 5) {
        cVar4 = '\x01';
        cVar3 = (&DAT_03a7ebe5)[param_3];
      }
      else {
        cVar4 = '\x01';
        cVar3 = '\x02';
      }
    }
    if (cVar3 != cVar4) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = FUN_02949cec(uVar7,uVar8,4);
  if ((uVar2 & 1) == 0) {
    return cVar1;
  }
  if (iVar6 == 2) {
LAB_0294a284:
    if ((int)param_3 < 5) {
      puVar5 = &DAT_03a7ebe0;
LAB_0294a2d8:
      cVar3 = puVar5[param_3];
      goto LAB_0294a2dc;
    }
  }
  else if (iVar6 == 1) {
    if ((int)param_3 < 5) {
      puVar5 = &DAT_03a7ebe5;
      goto LAB_0294a2d8;
    }
  }
  else if (iVar6 == 0) goto LAB_0294a284;
  cVar3 = '\x02';
LAB_0294a2dc:
  if (cVar3 != '\x02') {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


