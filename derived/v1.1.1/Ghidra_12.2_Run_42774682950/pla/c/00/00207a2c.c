/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00207a2c; name: FUN_00207a2c
 */


ulong FUN_00207a2c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  undefined4 uVar11;
  int *piVar12;
  
  piVar12 = *(int **)(param_1 + 0x150);
  cVar3 = (char)piVar12[3];
  if (cVar3 != '\x05' && cVar3 != '\x01') {
    if (cVar3 != '\0') goto LAB_00207b0c;
    lVar7 = FUN_00205cf4(param_1,piVar12[2]);
    *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) - *piVar12;
    if ((lVar7 != 0) &&
       (*(int *)(lVar7 + 0xbc) = *(int *)(lVar7 + 0xbc) - *piVar12,
       *(char *)((long)piVar12 + 0x71) != '\0')) {
      uVar6 = FUN_002119e8(lVar7);
      if ((int)uVar6 < -900) {
        return uVar6;
      }
      if ((*(code **)(param_1 + 0x808) != (code *)0x0) &&
         (iVar4 = (**(code **)(param_1 + 0x808))(param_1,piVar12,*(undefined8 *)(param_1 + 0x8b8)),
         iVar4 != 0)) {
        return 0xfffffc7a;
      }
      if (((*(byte *)((long)piVar12 + 0xd) & 1) == 0) ||
         (FUN_00211820(lVar7,2), (~*(byte *)(lVar7 + 0xe5) & 3) != 0))
      goto switchD_00207b90_default;
      uVar6 = FUN_00206c04(param_1,*(undefined4 *)(lVar7 + 0xb8),0);
      goto LAB_00207d68;
    }
    if (*(code **)(param_1 + 0x808) != (code *)0x0) {
      iVar4 = (**(code **)(param_1 + 0x808))(param_1,piVar12,*(undefined8 *)(param_1 + 0x8b8));
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = 0xfffffc7a;
      }
      return (ulong)uVar5;
    }
    goto switchD_00207b90_default;
  }
  iVar4 = FUN_0020c708(param_1 + 0x158);
  if (iVar4 != 0) goto switchD_00207b90_default;
LAB_00207b0c:
  if ((*(code **)(param_1 + 0x808) != (code *)0x0) &&
     (iVar4 = (**(code **)(param_1 + 0x808))(param_1,piVar12,*(undefined8 *)(param_1 + 0x8b8)),
     iVar4 != 0)) {
    return 0xfffffc7a;
  }
  uVar6 = 0;
  switch((char)piVar12[3]) {
  case '\x01':
    lVar7 = FUN_00205cf4(param_1,piVar12[2]);
    if (lVar7 == 0) {
      return 0;
    }
    switch(piVar12[0xe]) {
    case 0:
      uVar11 = 1;
      goto LAB_00207d0c;
    case 1:
      goto switchD_00207b90_caseD_1;
    case 2:
      *(byte *)(lVar7 + 0xe4) = *(byte *)(lVar7 + 0xe4) & 0xfe;
      *(long *)(param_1 + 0x8e8) = *(long *)(param_1 + 0x8e8) + 1;
      goto switchD_00207b90_caseD_1;
    case 3:
      goto switchD_00207b90_caseD_3;
    default:
      goto switchD_00207b90_default;
    }
  case '\x02':
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      lVar7 = FUN_00211270(param_1,piVar12[2]);
      if (lVar7 != 0) {
        uVar6 = FUN_00206560(param_1,lVar7,piVar12 + 4);
        if ((int)uVar6 < -900) {
          return uVar6;
        }
LAB_00207bf4:
        uVar5 = FUN_00206e78(param_1);
        goto LAB_00207d94;
      }
      uVar5 = piVar12[2];
      if (uVar5 != 0) {
        if ((uVar5 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar4 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x938);
        }
        if (iVar4 < (int)uVar5) {
          lVar7 = FUN_002066d8(param_1,uVar5,0,piVar12 + 4,5,0);
          if (lVar7 == 0) {
            return 0xfffffc7b;
          }
          goto LAB_00207bf4;
        }
      }
    }
    goto switchD_00207b90_default;
  case '\x03':
    uVar5 = FUN_00206c04(param_1,piVar12[2],piVar12[4]);
    goto LAB_00207d94;
  default:
    goto switchD_00207b58_caseD_4;
  case '\a':
    if ((*(byte *)(piVar12 + 0x18) >> 1 & 1) != 0) goto switchD_00207b90_default;
    bVar10 = *(byte *)(param_1 + 0x9ab);
    if ((*(byte *)(piVar12 + 0x18) & 1) != 0) {
      bVar10 = bVar10 | 2;
      *(byte *)(param_1 + 0x9ab) = bVar10;
    }
    *(byte *)(param_1 + 0x9ab) = bVar10 | 4;
    uVar6 = FUN_002090c4(param_1,piVar12[4],1);
    break;
  case '\b':
    if (piVar12[2] == 0) {
      *(undefined1 *)(param_1 + 0x9ac) = 0;
      if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x95c);
        lVar7 = param_1 + 0x954;
        lVar9 = param_1 + 0x950;
        uVar11 = 0;
        goto LAB_00207d8c;
      }
      uVar5 = FUN_0020b260(param_1,0);
    }
    else {
      lVar8 = FUN_00205cf4(param_1);
      if (lVar8 == 0) {
        return 0;
      }
      *(undefined1 *)(lVar8 + 0xe7) = 0;
      if ((*(byte *)(lVar8 + 0xe5) & 1) != 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x99c) & 1) == 0) {
        uVar5 = FUN_0020b3a4(param_1,lVar8,0,1);
      }
      else {
        uVar11 = *(undefined4 *)(lVar8 + 0xb8);
        lVar7 = lVar8 + 0xc4;
        lVar9 = lVar8 + 0xc0;
        uVar2 = *(undefined4 *)(lVar8 + 0xcc);
LAB_00207d8c:
        uVar5 = FUN_0020c094(param_1,lVar7,lVar9,0,uVar11,0,uVar2);
      }
    }
LAB_00207d94:
    uVar1 = 0;
    if ((int)uVar5 < -900) {
      uVar1 = uVar5;
    }
    uVar6 = (ulong)uVar1;
    goto switchD_00207b58_caseD_4;
  }
LAB_00207d68:
  if ((int)uVar6 < -900) {
    return uVar6;
  }
switchD_00207b90_default:
  uVar6 = 0;
switchD_00207b58_caseD_4:
  return uVar6;
switchD_00207b90_caseD_1:
  uVar11 = 2;
LAB_00207d0c:
  *(undefined4 *)(lVar7 + 0xdc) = uVar11;
switchD_00207b90_caseD_3:
  if ((*(byte *)((long)piVar12 + 0xd) & 1) != 0) {
    FUN_00211820(lVar7,2);
  }
  if (((~*(byte *)(lVar7 + 0xe5) & 3) == 0) &&
     (uVar6 = FUN_00206c04(param_1,*(undefined4 *)(lVar7 + 0xb8),0), (int)uVar6 < -900)) {
    return uVar6;
  }
  if (*(long *)(piVar12 + 0x1a) == 0) goto switchD_00207b90_default;
  uVar6 = FUN_00212584(param_1,1,piVar12[2],piVar12 + 0x18);
  goto LAB_00207d68;
}


