/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f8afc; name: FUN_029f8afc
 */


undefined8 FUN_029f8afc(long param_1)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  long local_90 [10];
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined2 uStack_38;
  byte bStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 auStack_30 [8];
  undefined1 *local_28;
  
  lVar4 = *(long *)(param_1 + 0x40);
  cVar5 = *(char *)(lVar4 + 0xc4);
  cVar6 = '\x10';
  cVar7 = '\x0f';
  cVar8 = '\x0e';
  cVar9 = '\v';
  cVar10 = '\n';
  cVar11 = '\t';
  cVar12 = '\b';
  cVar13 = '\a';
  cVar14 = '\x06';
  cVar2 = '\x04';
  switch(cVar5) {
  case '\0':
    break;
  case '\x01':
    goto switchD_029f8b5c_caseD_1;
  case '\x02':
    goto switchD_029f8b5c_caseD_2;
  case '\x03':
    goto switchD_029f8b5c_caseD_3;
  case '\x04':
    goto switchD_029f8b5c_caseD_4;
  case '\x05':
    goto switchD_029f8b5c_caseD_5;
  case '\x06':
    goto switchD_029f8b5c_caseD_6;
  case '\a':
    goto switchD_029f8b5c_caseD_7;
  case '\b':
    goto switchD_029f8b5c_caseD_8;
  case '\t':
    goto switchD_029f8b5c_caseD_9;
  case '\n':
    goto switchD_029f8b5c_caseD_a;
  case '\v':
    goto switchD_029f8b5c_caseD_b;
  case '\f':
switchD_029f8b5c_caseD_c:
    FUN_029f92b8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18e0),&local_28,local_90);
    *(char *)(*(long *)(param_1 + 0x40) + 0xc4) =
         *(char *)(*(long *)(param_1 + 0x40) + 0xc4) + '\x01';
    lVar4 = *(long *)(param_1 + 0x40);
    cVar8 = *(char *)(lVar4 + 0xc4) + '\x01';
  case '\r':
    *(char *)(lVar4 + 0xc4) = cVar8;
    local_90[0] = CONCAT62(local_90[0]._2_6_,0x93);
    FUN_029f8ffc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18c0),&local_28,local_90);
    if ((char)local_28 != '\0') {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    cVar7 = *(char *)(lVar4 + 0xc4) + '\x01';
  case '\x0e':
    *(char *)(lVar4 + 0xc4) = cVar7;
    uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (**(char **)(lVar4 + 0x28) == '\x05') {
      return 3;
    }
    cVar6 = *(char *)(lVar4 + 0xc4) + '\x01';
  case '\x0f':
    *(char *)(lVar4 + 0xc4) = cVar6;
    if (*(char *)(*(long *)(param_1 + 0x50) + 0xe) != '\0') {
      return 2;
    }
switchD_029f8b5c_caseD_10:
    local_90[0] = CONCAT62(local_90[0]._2_6_,0x94);
    FUN_029f8ffc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18c0),&local_28,local_90);
    *(char *)(*(long *)(param_1 + 0x40) + 0xc4) =
         *(char *)(*(long *)(param_1 + 0x40) + 0xc4) + '\x01';
    return 0;
  case '\x10':
    goto switchD_029f8b5c_caseD_10;
  default:
    goto LAB_029f8e9c;
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x95,0);
  *(char *)(*(long *)(param_1 + 0x40) + 0xc4) = *(char *)(*(long *)(param_1 + 0x40) + 0xc4) + '\x01'
  ;
  lVar4 = *(long *)(param_1 + 0x40);
  cVar5 = *(char *)(lVar4 + 0xc4);
switchD_029f8b5c_caseD_1:
  *(char *)(lVar4 + 0xc4) = cVar5 + '\x01';
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x1960);
  FUN_029fb9fc(lVar4);
  FUN_029d3abc(*(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x2e0),&local_28,local_90);
  if ((char)local_28 != '\0') {
    return 1;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  cVar5 = *(char *)(lVar4 + 0xc4);
switchD_029f8b5c_caseD_2:
  *(char *)(lVar4 + 0xc4) = cVar5 + '\x01';
  uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((uVar3 & 1) != 0) {
LAB_029f8e9c:
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (**(char **)(lVar4 + 0x28) == '\x05') {
    return 3;
  }
  cVar2 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_3:
  *(char *)(lVar4 + 0xc4) = cVar2;
  if (*(char *)(*(long *)(param_1 + 0x50) + 0xe) == '\0') {
switchD_029f8b5c_caseD_4:
    uStack_38 = 0;
    bStack_36 = 0;
    uStack_35 = 0;
    uStack_34 = 0;
    uStack_33 = 0;
    local_90[0] = 0;
    local_90[9] = 0;
    uStack_40 = 0;
    local_3a = 0;
    local_90[7] = 0;
    local_90[8] = 0;
    local_90[5] = 0;
    local_90[6] = 0;
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_28 = (undefined1 *)local_90;
    FUN_029e9b78(*(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1900) + 0x60) + 0x12c0),
                 auStack_30,&local_28);
    uStack_34 = 0;
    if (((ulong)bStack_36 != 0) && (uStack_34 = 1, local_90[0] != 0)) {
      uVar3 = 1;
      do {
        if (bStack_36 == uVar3) break;
        uStack_34 = (char)(uVar3 + 1);
        plVar1 = local_90 + uVar3;
        uVar3 = uVar3 + 1;
      } while (*plVar1 != 0);
    }
    *(char *)(*(long *)(param_1 + 0x40) + 0xc4) =
         *(char *)(*(long *)(param_1 + 0x40) + 0xc4) + '\x01';
    lVar4 = *(long *)(param_1 + 0x40);
    cVar14 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_5:
    *(char *)(lVar4 + 0xc4) = cVar14;
    local_90[0] = CONCAT62(local_90[0]._2_6_,0x92);
    FUN_029f8ffc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18c0),&local_28,local_90);
    if ((char)local_28 != '\0') {
      return 1;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    cVar13 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_6:
    *(char *)(lVar4 + 0xc4) = cVar13;
    uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (**(char **)(lVar4 + 0x28) == '\x05') {
      return 3;
    }
    cVar12 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_7:
    *(char *)(lVar4 + 0xc4) = cVar12;
    if (*(char *)(*(long *)(param_1 + 0x50) + 0xe) == '\0') {
      lVar4 = *(long *)(param_1 + 0x40);
      cVar11 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_8:
      *(char *)(lVar4 + 0xc4) = cVar11;
      FUN_029f9a88(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1920),&local_28,local_90);
      if ((char)local_28 != '\0') {
        return 1;
      }
      lVar4 = *(long *)(param_1 + 0x40);
      cVar10 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_9:
      *(char *)(lVar4 + 0xc4) = cVar10;
      uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0x40);
      if (**(char **)(lVar4 + 0x28) == '\x05') {
        return 3;
      }
      cVar9 = *(char *)(lVar4 + 0xc4) + '\x01';
switchD_029f8b5c_caseD_a:
      *(char *)(lVar4 + 0xc4) = cVar9;
      if (*(char *)(*(long *)(param_1 + 0x50) + 0xe) == '\0') {
switchD_029f8b5c_caseD_b:
        FUN_029fb5f0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1940),&local_28,local_90);
        *(char *)(*(long *)(param_1 + 0x40) + 0xc4) =
             *(char *)(*(long *)(param_1 + 0x40) + 0xc4) + '\x01';
        goto switchD_029f8b5c_caseD_c;
      }
    }
  }
  return 2;
}


