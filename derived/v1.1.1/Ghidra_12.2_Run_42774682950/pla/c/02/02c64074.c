/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c64074; name: FUN_02c64074
 */


ulong FUN_02c64074(undefined8 param_1,long param_2,long *param_3,char *param_4,undefined4 *param_5)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  uVar10 = FUN_02c5fb2c(param_2);
  if (uVar10 < *(byte *)(param_5 + 3)) {
    return 0;
  }
  plVar16 = (long *)(param_2 + 0x98);
  uVar10 = FUN_02c74104(*plVar16);
  if (((uVar10 == (byte)param_4[0x14]) &&
      (iVar11 = FUN_02c68b0c(*plVar16), iVar11 == *(int *)(param_4 + 0x10))) &&
     (uVar13 = FUN_02c76158(*plVar16,param_4 + 0x16), (uVar13 & 1) != 0)) {
    uVar10 = FUN_02c6917c(*plVar16);
  }
  else {
    uVar10 = FUN_02c74440(*plVar16);
    uVar10 = uVar10 & 0xff;
  }
  uVar13 = 1;
  switch(*param_5) {
  case 1:
  case 0x23:
    bVar3 = 0x9e < uVar10;
    bVar4 = uVar10 == 0x9f;
    goto LAB_02c64394;
  case 2:
    if (uVar10 < 0xa0) {
      return 0;
    }
  case 0x20:
switchD_02c64134_caseD_20:
    cVar5 = param_4[5];
    break;
  case 3:
    if (uVar10 < 0xa0) {
      return 0;
    }
    goto switchD_02c64134_caseD_21;
  case 4:
  case 0xe:
    goto switchD_02c64134_caseD_4;
  default:
    goto switchD_02c64134_caseD_5;
  case 9:
    if (*(long *)(*plVar16 + 8) == 0) {
      uVar6 = FUN_02c5e59c(param_2);
    }
    else {
      uVar6 = FUN_02c671ac();
    }
    if (*(long *)(*plVar16 + 8) == 0) {
      uVar9 = FUN_02c5e850(param_2);
    }
    else {
      uVar9 = FUN_02c674d4();
    }
    bVar4 = uVar6 <= uVar9;
    goto LAB_02c64648;
  case 10:
    if (*(long *)(*plVar16 + 8) == 0) {
      sVar7 = FUN_02c5e59c(param_2);
    }
    else {
      sVar7 = FUN_02c671ac();
    }
    if (*(long *)(*plVar16 + 8) == 0) {
      sVar8 = FUN_02c5e850(param_2);
    }
    else {
      sVar8 = FUN_02c674d4();
    }
    bVar4 = sVar8 == sVar7;
    goto LAB_02c645b4;
  case 0xb:
    if (*(long *)(*plVar16 + 8) == 0) {
      uVar6 = FUN_02c5e59c(param_2);
    }
    else {
      uVar6 = FUN_02c671ac();
    }
    if (*(long *)(*plVar16 + 8) == 0) {
      uVar9 = FUN_02c5e850(param_2);
    }
    else {
      uVar9 = FUN_02c674d4();
    }
    bVar4 = uVar9 <= uVar6;
    goto LAB_02c64648;
  case 0xc:
    uVar6 = *(ushort *)(*(long *)(*plVar16 + 0x10) + 2);
    bVar4 = 4 < (uint)uVar6 + (uVar6 / 10) * -10;
LAB_02c64648:
    return (ulong)!bVar4;
  case 0xd:
    uVar6 = *(ushort *)(*(long *)(*plVar16 + 0x10) + 2);
    uVar10 = (uint)uVar6 + (uVar6 / 10) * -10;
    bVar3 = 3 < uVar10;
    bVar4 = uVar10 == 4;
LAB_02c64394:
    return (ulong)(bVar3 && !bVar4);
  case 0xf:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  case 0x13:
    sVar7 = FUN_02c687d4(*plVar16);
    if (*(short *)(param_5 + 1) != sVar7) {
      return 0;
    }
    goto switchD_02c64134_caseD_20;
  case 0x14:
    sVar7 = FUN_02c687d4(*plVar16);
    if (*(short *)(param_5 + 1) != sVar7) {
      return 0;
    }
    goto switchD_02c64134_caseD_21;
  case 0x15:
    uVar10 = FUN_02c6b1c0(*plVar16,0);
    if (uVar10 == *(ushort *)(param_5 + 1)) {
      return 1;
    }
    uVar10 = FUN_02c6b1c0(*plVar16,1);
    if (uVar10 == *(ushort *)(param_5 + 1)) {
      return 1;
    }
    uVar10 = FUN_02c6b1c0(*plVar16,2);
    if (uVar10 == *(ushort *)(param_5 + 1)) {
      return 1;
    }
    uVar10 = FUN_02c6b1c0(*plVar16,3);
    return (ulong)(uVar10 == *(ushort *)(param_5 + 1));
  case 0x16:
    uVar13 = FUN_02c58604(param_3,*(undefined2 *)(param_5 + 1));
    return uVar13;
  case 0x17:
    iVar11 = FUN_02c6f5e8(*plVar16);
    bVar4 = iVar11 == 0;
    goto LAB_02c645b4;
  case 0x18:
  case 0x22:
    iVar11 = FUN_02c6f5e8(*plVar16);
    bVar4 = iVar11 == 1;
    goto LAB_02c645b4;
  case 0x19:
    cVar5 = *param_4;
    break;
  case 0x1a:
    cVar5 = param_4[2];
    break;
  case 0x1b:
    cVar5 = param_4[1];
    break;
  case 0x1c:
    cVar5 = param_4[10];
    break;
  case 0x1d:
    if (uVar10 < 0xa0) {
      return 0;
    }
    uVar13 = FUN_02c6b1c0(*plVar16,0);
    lVar14 = (&DAT_0428af30)[(uVar13 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar13 & 0xffffffff) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar13 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ushort)*(byte *)((long)piVar1 + uVar13);
    }
    if (uVar6 == *(ushort *)(param_5 + 1)) {
      return 1;
    }
    uVar13 = FUN_02c6b1c0(*plVar16,1);
    lVar14 = (&DAT_0428af30)[(uVar13 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar13 & 0xffffffff) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar13 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ushort)*(byte *)((long)piVar1 + uVar13);
    }
    if (uVar6 == *(ushort *)(param_5 + 1)) {
      return 1;
    }
    uVar13 = FUN_02c6b1c0(*plVar16,2);
    lVar14 = (&DAT_0428af30)[(uVar13 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar13 & 0xffffffff) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar13 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ushort)*(byte *)((long)piVar1 + uVar13);
    }
    if (uVar6 == *(ushort *)(param_5 + 1)) {
      return 1;
    }
    uVar13 = FUN_02c6b1c0(*plVar16,3);
    lVar14 = (&DAT_0428af30)[(uVar13 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar16 = &DAT_0428af30;
    }
    else {
      plVar16 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar16 = &DAT_0428af30 + (uVar13 & 0xffffffff) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar16 + 0x250) + (ulong)**(uint **)(*plVar16 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar13 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ushort)*(byte *)((long)piVar1 + uVar13);
    }
    goto LAB_02c642b4;
  case 0x1e:
    bVar2 = *(byte *)(param_3 + 0x11);
    if (bVar2 == 0) {
      return 0;
    }
    uVar10 = 0;
    while( true ) {
      lVar14 = (**(code **)(*param_3 + 0x58))(param_3,uVar10);
      uVar13 = FUN_02c6cf3c(*(undefined8 *)(lVar14 + 0x98));
      if ((((uVar13 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar14 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         ((cVar5 = FUN_02c63ba8(lVar14), cVar5 == '\x10' ||
          (cVar5 = FUN_02c63ce0(lVar14), cVar5 == '\x10')))) break;
      uVar10 = uVar10 + 1;
      if (bVar2 == uVar10) {
        return 0;
      }
    }
    return 1;
  case 0x1f:
    cVar5 = param_4[8];
    break;
  case 0x21:
    goto switchD_02c64134_caseD_21;
  case 0x24:
    uVar6 = (ushort)*(byte *)(DAT_04407c08 + 0x259);
LAB_02c642b4:
    bVar4 = uVar6 == *(ushort *)(param_5 + 1);
LAB_02c645b4:
    return (ulong)bVar4;
  case 0x25:
    if ((ushort)*(byte *)(DAT_04407c08 + 0x259) != *(ushort *)(param_5 + 1)) {
      return 0;
    }
    goto switchD_02c64134_caseD_20;
  case 0x26:
    if ((ushort)*(byte *)(DAT_04407c08 + 0x259) != *(ushort *)(param_5 + 1)) {
      return 0;
    }
    goto switchD_02c64134_caseD_21;
  case 0x27:
    cVar5 = param_4[3];
    break;
  case 0x28:
    cVar5 = param_4[7];
    break;
  case 0x29:
    cVar5 = param_4[4];
    break;
  case 0x2b:
    if (*(long *)(*plVar16 + 8) == 0) {
      sVar7 = FUN_02c5e31c(param_2);
      if (sVar7 == 0) {
        return 0;
      }
    }
    else {
      iVar11 = FUN_02c66b3c();
      if (iVar11 == 0) {
        return 0;
      }
    }
    bVar3 = (ushort)(byte)param_4[0xc] <= *(ushort *)(param_5 + 1);
    bVar4 = *(ushort *)(param_5 + 1) == (ushort)(byte)param_4[0xc];
    goto LAB_02c6443c;
  case 0x2e:
    uVar10 = FUN_02c6fc70(*plVar16);
    if (0x18 < uVar10) {
      return 0;
    }
    uVar10 = 0x1486b5d >> (ulong)(uVar10 & 0x1f);
LAB_02c64578:
    return (ulong)(uVar10 & 1);
  case 0x2f:
    iVar11 = FUN_02c6fc70(*plVar16);
    if (iVar11 - 1U < 0x17) {
      uVar10 = 0x5bca51 >> (ulong)(iVar11 - 1U & 0x1f);
      goto LAB_02c64578;
    }
switchD_02c64134_caseD_5:
    return 0;
  case 0x33:
    uVar10 = *(uint *)(DAT_04407c08 + 0x25c);
    iVar11 = FUN_02c6849c(*plVar16);
    if (iVar11 != 0xea) goto LAB_02c6432c;
    goto LAB_02c64430;
  case 0x34:
    uVar10 = *(uint *)(DAT_04407c08 + 0x260);
    iVar11 = FUN_02c6849c(*plVar16);
    if ((iVar11 == 0xd3) && (sVar7 = FUN_02c6f924(*plVar16), sVar7 == 1)) goto LAB_02c64430;
    goto LAB_02c6432c;
  case 0x35:
    iVar11 = FUN_02c6f5e8(*plVar16);
    if (iVar11 != 0) {
      return 0;
    }
    goto LAB_02c642fc;
  case 0x36:
    iVar11 = FUN_02c6f5e8(*plVar16);
    if (iVar11 != 1) {
      return 0;
    }
LAB_02c642fc:
    uVar10 = *(uint *)(DAT_04407c08 + 0x264);
    iVar11 = FUN_02c6849c(*plVar16);
    if ((iVar11 == 0x226) && (sVar7 = FUN_02c6f924(*plVar16), sVar7 == 2)) {
LAB_02c64430:
      uVar12 = FUN_02c8ad24(*plVar16);
    }
    else {
LAB_02c6432c:
      uVar12 = 0;
    }
    bVar3 = uVar12 <= uVar10;
    bVar4 = uVar10 == uVar12;
LAB_02c6443c:
    uVar13 = (ulong)(!bVar3 || bVar4);
    goto switchD_02c64134_caseD_4;
  }
LAB_02c64550:
  uVar13 = (ulong)(cVar5 != '\0');
switchD_02c64134_caseD_4:
  return uVar13;
switchD_02c64134_caseD_21:
  cVar5 = param_4[6];
  goto LAB_02c64550;
}


