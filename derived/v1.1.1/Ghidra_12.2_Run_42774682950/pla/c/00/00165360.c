/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00165360; name: FUN_00165360
 */


ulong FUN_00165360(long param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  uVar1 = *(short *)(*(long *)(param_1 + 0x38) + 0xc6) + 1;
  *(ushort *)(*(long *)(param_1 + 0x38) + 0xc6) = uVar1;
  if (200 < uVar1) {
    FUN_00163bb0(*(undefined8 *)(param_1 + 0x30),200,"C levels");
LAB_001656f8:
                    /* WARNING: Subroutine does not return */
    FUN_0016a180(param_1,"cannot use \'...\' outside a vararg function");
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0x7e) {
    if (iVar2 == 0x23) {
      uVar7 = 3;
    }
    else {
      if (iVar2 != 0x2d) {
        if (iVar2 != 0x7b) goto switchD_001653d4_caseD_108;
        FUN_00165710(param_1,param_2);
        goto LAB_00165544;
      }
      uVar7 = 0;
    }
switchD_001653d4_caseD_10f:
    uVar3 = *(undefined4 *)(param_1 + 4);
    FUN_0016a400(param_1);
    FUN_00165360(param_1,param_2,0xc);
    FUN_00168de0(*(undefined8 *)(param_1 + 0x30),uVar7,param_2,uVar3);
    goto LAB_00165544;
  }
  uVar7 = 2;
  switch(iVar2) {
  case 0x107:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar3 = 3;
    break;
  case 0x108:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x124:
    goto switchD_001653d4_caseD_108;
  case 0x109:
    FUN_0016a400(param_1);
    FUN_001659e0(param_1,param_2,0,*(undefined4 *)(param_1 + 4));
    goto LAB_00165544;
  case 0x10e:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar3 = 1;
    break;
  case 0x10f:
    goto switchD_001653d4_caseD_10f;
  case 0x114:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar3 = 2;
    break;
  case 0x119:
    if (*(char *)(**(long **)(param_1 + 0x30) + 0xb) == '\0') goto LAB_001656f8;
    uVar3 = FUN_00167040(*(long **)(param_1 + 0x30),0x2d,0,1,0);
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar5 = 0xe;
    goto LAB_00165534;
  case 0x122:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar3 = 5;
    goto LAB_00165508;
  case 0x123:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar3 = 6;
LAB_00165508:
    *param_2 = uVar3;
    param_2[2] = 0;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x18);
    goto LAB_0016553c;
  case 0x125:
    uVar3 = FUN_001677a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    uVar5 = 4;
LAB_00165534:
    *param_2 = uVar5;
    param_2[2] = uVar3;
    goto LAB_0016553c;
  default:
    if (iVar2 == 0x7e) {
      uVar7 = 1;
      goto switchD_001653d4_caseD_10f;
    }
    goto switchD_001653d4_caseD_108;
  }
  *param_2 = uVar3;
  param_2[2] = 0;
LAB_0016553c:
  FUN_0016a400(param_1);
LAB_00165544:
  uVar8 = 0x15;
  uVar6 = 0;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0x25:
    uVar6 = 3;
    break;
  case 0x26:
    uVar6 = 7;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7d:
    goto switchD_00165570_caseD_27;
  case 0x2a:
    uVar6 = 2;
    break;
  case 0x2b:
    break;
  case 0x2d:
    uVar6 = 1;
    break;
  case 0x2f:
    uVar6 = 5;
    break;
  case 0x3c:
    uVar6 = 0xe;
    break;
  case 0x3e:
    uVar6 = 0x11;
    break;
  case 0x5e:
    uVar6 = 4;
    break;
  case 0x7c:
    uVar6 = 8;
    break;
  case 0x7e:
    uVar6 = 9;
    break;
  default:
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0x101:
      uVar6 = 0x13;
      break;
    default:
      goto switchD_00165570_caseD_27;
    case 0x110:
      uVar6 = 0x14;
      break;
    case 0x117:
      uVar6 = 6;
      break;
    case 0x118:
      uVar6 = 0xc;
      break;
    case 0x11a:
      uVar6 = 0xd;
      break;
    case 0x11b:
      uVar6 = 0x12;
      break;
    case 0x11c:
      uVar6 = 0xf;
      break;
    case 0x11d:
      uVar6 = 0x10;
      break;
    case 0x11e:
      uVar6 = 10;
      break;
    case 0x11f:
      uVar6 = 0xb;
    }
  }
  uVar8 = uVar6;
  do {
    if ((int)(uint)(byte)(&DAT_039c5f3e)[uVar8 * 2] <= param_3) goto switchD_00165570_caseD_27;
    uVar3 = *(undefined4 *)(param_1 + 4);
    FUN_0016a400(param_1);
    FUN_00169330(*(undefined8 *)(param_1 + 0x30),uVar8,param_2);
    uVar4 = FUN_00165360(param_1,auStack_68,(&UNK_039c5f3f)[uVar8 * 2]);
    FUN_00169460(*(undefined8 *)(param_1 + 0x30),uVar8,param_2,auStack_68,uVar3);
    uVar8 = (ulong)uVar4;
  } while (uVar4 != 0x15);
  uVar8 = 0x15;
switchD_00165570_caseD_27:
  *(short *)(*(long *)(param_1 + 0x38) + 0xc6) = *(short *)(*(long *)(param_1 + 0x38) + 0xc6) + -1;
  return uVar8;
switchD_001653d4_caseD_108:
  FUN_00165e50(param_1,param_2);
  goto LAB_00165544;
}


