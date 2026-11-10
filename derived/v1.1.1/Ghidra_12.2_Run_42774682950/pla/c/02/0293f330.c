/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293f330; name: FUN_0293f330
 */


ulong FUN_0293f330(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  byte local_68 [8];
  byte abStack_60 [8];
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_48;
  undefined2 local_44;
  byte local_42;
  
  bVar4 = *(byte *)(param_3 + 0x7d);
  iVar3 = *(int *)(param_1 + 0x110);
  if (bVar4 < 6) {
    lVar12 = 0;
  }
  else if (bVar4 < 0xc) {
    lVar12 = 2;
  }
  else if (bVar4 < 0x12) {
    lVar12 = 1;
  }
  else if (bVar4 < 0x18) {
    lVar12 = 3;
  }
  else {
    lVar12 = (ulong)(bVar4 < 0x1e) << 2;
  }
  uVar14 = (uint)*(byte *)(param_2 + lVar12 * 0x38 + 0x38);
  if (uVar14 != 0) {
    uVar13 = 0;
    do {
      if (*(byte *)(*(long *)(param_2 + lVar12 * 0x38 + (ulong)(uVar13 & 0xff) * 8 + 8) + 0x7d) ==
          bVar4) {
        uVar14 = FUN_0294753c(param_1);
        uVar17 = (ulong)uVar14;
        if ((uVar14 & 0xff) != 6) goto LAB_0293f414;
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar13);
  }
  uVar17 = 6;
LAB_0293f414:
  lVar12 = (&DAT_0428af30)[(ulong)param_4 * 6];
  if (lVar12 == 0) {
    plVar15 = &DAT_0428af30;
  }
  else {
    plVar15 = &DAT_0428af30;
    if (*(char *)(lVar12 + 0x1e1) != '\0') {
      plVar15 = &DAT_0428af30 + (ulong)param_4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2f) ||
     (uVar16 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar16 == 0)) {
    uVar14 = 0;
    if (param_4 == 0xae) goto LAB_0293f478;
joined_r0x0293f56c:
    uVar13 = uVar14;
    if (iVar3 != 0) goto LAB_0293f4e4;
LAB_0293f570:
    if (uVar14 < 10) {
      uVar14 = 1 << (ulong)(uVar14 & 0x1f);
      if ((uVar14 & 0x239) != 0) {
        uVar17 = FUN_0294dc8c(*(undefined4 *)(param_1 + 0x110),
                              *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),uVar17,0);
        return uVar17;
      }
      if ((uVar14 & 0x82) != 0) {
        return uVar17;
      }
    }
  }
  else {
    uVar14 = (uint)*(byte *)((long)piVar1 + uVar16);
    if (param_4 != 0xae) goto joined_r0x0293f56c;
LAB_0293f478:
    bVar8 = (*(byte *)(param_3 + 0x168) & 7) != 0;
    cVar11 = *(char *)(param_3 + 0x2dc);
    cVar5 = *(char *)(param_3 + 0x2dd);
    bVar9 = cVar5 != '\x12';
    bVar10 = cVar5 == '\x02';
    cVar7 = cVar5;
    if (*(char *)(param_3 + 0x389) < '\0') {
      if (cVar11 != '\x12' && (cVar11 != '\x02' || !bVar8)) {
        if (!bVar9 || bVar8 && bVar10) goto LAB_0293f55c;
      }
      else {
        cVar11 = cVar5;
        if (!bVar9 || bVar8 && bVar10) {
          cVar11 = '\x12';
LAB_0293f55c:
          cVar7 = cVar11;
        }
      }
    }
    else if (cVar11 != '\x12' && (cVar11 != '\x02' || !bVar8)) {
      if (!bVar9 || bVar8 && bVar10) goto LAB_0293f55c;
    }
    else {
      cVar7 = '\0';
      cVar11 = '\0';
      if (bVar9 && (!bVar8 || !bVar10)) {
        cVar7 = cVar5;
        cVar11 = cVar5;
      }
    }
    if (((cVar11 == '\a') || (cVar7 == '\a')) || (*(char *)(param_3 + 0x2de) == '\a')) {
      uVar14 = 0;
      goto joined_r0x0293f56c;
    }
    uVar14 = 7;
    uVar13 = 7;
    if (iVar3 == 0) goto LAB_0293f570;
LAB_0293f4e4:
    local_58 = 2;
    switch(uVar13) {
    case 0:
    case 3:
    case 9:
      break;
    case 1:
      local_58 = 4;
      break;
    case 2:
      local_58 = 5;
      break;
    default:
      goto switchD_0293f510_caseD_4;
    case 7:
      goto switchD_0293f510_caseD_7;
    }
    local_54 = (undefined1)uVar17;
    iVar3 = *(int *)(param_1 + 0x110);
    uVar6 = *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55);
    cVar11 = FUN_0299d334(&local_58,iVar3,uVar6,param_2,abStack_60);
    if (cVar11 == '\0') {
      if (((uint)uVar17 & 0xff) == 6) {
        return 6;
      }
      local_42 = 0;
      local_48 = 0x6060606;
      local_44 = 0x606;
      if (iVar3 == 1) {
        FUN_0299c054(&local_58,&local_48,uVar6);
      }
      else if (iVar3 == 2) {
        FUN_0299c6e8();
      }
      else {
        FUN_0299beac();
      }
      uVar17 = (ulong)local_42;
      if (uVar17 != 0) {
        memcpy(local_68,&local_48,uVar17);
        puVar2 = &DAT_043ecde0;
        if (param_5 != 0) {
          puVar2 = &DAT_043ecda0;
        }
        uVar17 = FUN_02954744(*puVar2,uVar17);
        return (ulong)local_68[uVar17 & 0xff];
      }
    }
    else {
      puVar2 = &DAT_043ecde0;
      if (param_5 != 0) {
        puVar2 = &DAT_043ecda0;
      }
      uVar17 = FUN_02954744(*puVar2,cVar11);
      bVar4 = abStack_60[uVar17 & 0xff];
      if (bVar4 < 6) {
        lVar12 = 0;
      }
      else if (bVar4 < 0xc) {
        lVar12 = 2;
      }
      else if (bVar4 < 0x12) {
        lVar12 = 1;
      }
      else if (bVar4 < 0x18) {
        lVar12 = 3;
      }
      else {
        lVar12 = (ulong)(bVar4 < 0x1e) << 2;
      }
      uVar14 = (uint)*(byte *)(param_2 + lVar12 * 0x38 + 0x38);
      if (uVar14 != 0) {
        uVar13 = 0;
        do {
          if (*(byte *)(*(long *)(param_2 + lVar12 * 0x38 + (ulong)(uVar13 & 0xff) * 8 + 8) + 0x7d)
              == bVar4) {
            uVar14 = FUN_0294753c(param_1);
            if ((uVar14 & 0xff) != 6) {
              return (ulong)uVar14;
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
      }
    }
  }
switchD_0293f510_caseD_4:
  uVar17 = 6;
switchD_0293f510_caseD_7:
  return uVar17;
}


