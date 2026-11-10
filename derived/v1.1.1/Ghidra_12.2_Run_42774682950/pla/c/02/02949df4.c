/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02949df4; name: FUN_02949df4
 */


char FUN_02949df4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  
  if (param_3 == 0) {
    cVar1 = false;
LAB_02949ea0:
    uVar2 = FUN_02949cec(param_1,param_2,1);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
LAB_02949ec8:
        if ((int)param_3 < 5) {
          puVar5 = &DAT_03a7ebe0;
LAB_02949f04:
          cVar3 = puVar5[param_3];
          cVar4 = '\x01';
        }
        else {
LAB_02949ee4:
          cVar4 = '\x01';
          cVar3 = '\x02';
        }
      }
      else {
        if (param_1 == 1) {
          if (4 < (int)param_3) goto LAB_02949ee4;
          puVar5 = &DAT_03a7ebe5;
          goto LAB_02949f04;
        }
        if (param_1 == 0) goto LAB_02949ec8;
        cVar3 = '\x02';
        cVar4 = '\x02';
      }
      if (cVar3 == cVar4) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 != 2) goto LAB_02949f1c;
LAB_02949f88:
    uVar2 = FUN_02949cec(param_1,param_2,3);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
LAB_02949fb0:
        if ((int)param_3 < 5) {
          cVar3 = (&DAT_03a7ebe0)[param_3];
        }
        else {
LAB_02949fb8:
          cVar3 = '\x02';
        }
        cVar4 = '\x02';
      }
      else {
        if (param_1 != 1) {
          if (param_1 == 0) goto LAB_02949fb0;
          goto LAB_02949fb8;
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
      if (cVar3 == cVar4) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 == 4) {
      return cVar1;
    }
  }
  else {
    uVar2 = FUN_02949cec(param_1,param_2,0);
    cVar1 = false;
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
LAB_02949e40:
        if ((int)param_3 < 5) {
          puVar5 = &DAT_03a7ebe0;
LAB_02949e8c:
          cVar3 = '\0';
          cVar1 = puVar5[param_3];
        }
        else {
LAB_02949e68:
          cVar3 = '\0';
          cVar1 = '\x02';
        }
      }
      else {
        if (param_1 == 1) {
          if (4 < (int)param_3) goto LAB_02949e68;
          puVar5 = &DAT_03a7ebe5;
          goto LAB_02949e8c;
        }
        if (param_1 == 0) goto LAB_02949e40;
        cVar1 = '\x02';
        cVar3 = '\x02';
      }
      cVar1 = cVar1 == cVar3;
    }
    if (param_3 != 1) goto LAB_02949ea0;
LAB_02949f1c:
    uVar2 = FUN_02949cec(param_1,param_2,2);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
LAB_02949f44:
        if ((int)param_3 < 5) {
          cVar3 = (&DAT_03a7ebe0)[param_3];
        }
        else {
LAB_02949f4c:
          cVar3 = '\x02';
        }
        cVar4 = '\x02';
      }
      else {
        if (param_1 != 1) {
          if (param_1 == 0) goto LAB_02949f44;
          goto LAB_02949f4c;
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
      if (cVar3 == cVar4) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 != 3) goto LAB_02949f88;
  }
  uVar2 = FUN_02949cec(param_1,param_2,4);
  if ((uVar2 & 1) == 0) {
    return cVar1;
  }
  if (param_1 == 2) {
LAB_0294a01c:
    if ((int)param_3 < 5) {
      puVar5 = &DAT_03a7ebe0;
LAB_0294a070:
      cVar3 = puVar5[param_3];
      goto LAB_0294a074;
    }
  }
  else if (param_1 == 1) {
    if ((int)param_3 < 5) {
      puVar5 = &DAT_03a7ebe5;
      goto LAB_0294a070;
    }
  }
  else if (param_1 == 0) goto LAB_0294a01c;
  cVar3 = '\x02';
LAB_0294a074:
  if (cVar3 == '\x02') {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


