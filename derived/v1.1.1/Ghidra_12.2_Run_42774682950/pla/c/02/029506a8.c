/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029506a8; name: FUN_029506a8
 */


ulong FUN_029506a8(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x4a0);
  if (lVar3 == 0) {
    switch((int)param_2) {
    case 1:
    case 3:
      goto switchD_029506d8_caseD_1;
    case 2:
    case 4:
      goto switchD_029506d8_caseD_2;
    case 5:
    case 6:
    case 7:
      goto switchD_029506d8_caseD_5;
    case 8:
    case 10:
      goto switchD_029506d8_caseD_8;
    case 9:
      goto switchD_02950708_caseD_9;
    case 0xb:
      goto switchD_02950708_caseD_b;
    case 0xc:
      goto switchD_029506d8_caseD_c;
    case 0xd:
      goto switchD_029506d8_caseD_d;
    case 0xe:
      goto switchD_029506d8_caseD_e;
    case 0xf:
      goto switchD_029506d8_caseD_f;
    case 0x10:
      goto switchD_029506d8_caseD_10;
    case 0x11:
      goto switchD_029506d8_caseD_11;
    case 0x12:
      goto switchD_029506d8_caseD_12;
    case 0x13:
      goto switchD_029506d8_caseD_13;
    case 0x14:
      goto switchD_029506d8_caseD_14;
    case 0x15:
      goto switchD_029506d8_caseD_15;
    case 0x16:
      goto switchD_029506d8_caseD_16;
    case 0x17:
      goto switchD_029506d8_caseD_17;
    default:
      goto switchD_029506d8_default;
    }
  }
  switch((int)param_2) {
  case 1:
  case 3:
switchD_029506d8_caseD_1:
    return (long)*(char *)(param_1 + 0x2e4);
  case 2:
  case 4:
switchD_029506d8_caseD_2:
    return (long)*(char *)(param_1 + 0x2e5);
  case 5:
  case 6:
  case 7:
switchD_029506d8_caseD_5:
    return (long)*(char *)(param_1 + 0x2e6);
  case 8:
  case 10:
    goto switchD_029506d8_caseD_8;
  case 9:
    if (*(int *)(lVar3 + 0x1b8) != 0) {
switchD_02950708_caseD_b:
      param_2 = 0xb;
      goto switchD_029506d8_caseD_8;
    }
    break;
  case 0xb:
    if (*(int *)(lVar3 + 0x1b8) == 0) goto switchD_02950708_caseD_b;
    break;
  case 0xc:
switchD_029506d8_caseD_c:
    uVar2 = FUN_0295084c();
    return uVar2;
  case 0xd:
switchD_029506d8_caseD_d:
    return (ulong)*(ushort *)(param_1 + 0x74);
  case 0xe:
switchD_029506d8_caseD_e:
    return (ulong)*(ushort *)(param_1 + 0x72);
  case 0xf:
switchD_029506d8_caseD_f:
    return (ulong)*(byte *)(param_1 + 0x7c);
  case 0x10:
    goto switchD_029506d8_caseD_10;
  case 0x11:
    goto switchD_029506d8_caseD_11;
  case 0x12:
switchD_029506d8_caseD_12:
    return (ulong)*(byte *)(param_1 + 0x2df);
  case 0x13:
switchD_029506d8_caseD_13:
    return (ulong)*(byte *)(param_1 + 0x80);
  case 0x14:
switchD_029506d8_caseD_14:
    return (ulong)*(uint *)(param_1 + 0x68);
  case 0x15:
switchD_029506d8_caseD_15:
    return (ulong)*(uint *)(param_1 + 0x6c);
  case 0x16:
switchD_029506d8_caseD_16:
    return (ulong)*(byte *)(param_1 + 0x7e);
  case 0x17:
switchD_029506d8_caseD_17:
    return (ulong)*(byte *)(param_1 + 0x7f);
  default:
    goto switchD_029506d8_default;
  }
switchD_02950708_caseD_9:
  param_2 = 9;
switchD_029506d8_caseD_8:
  uVar1 = FUN_0295084c(param_1,param_2);
  return (ulong)(uVar1 & 0xffff);
switchD_029506d8_caseD_11:
  if ((*(byte *)(param_1 + 0x120) & 7) != 0) {
switchD_029506d8_default:
    return 0;
  }
  if (lVar3 != 0) {
    switch(*(short *)(param_1 + 0x364)) {
    case 0xa1:
    case 0xb0:
    case 0xc5:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd5:
    case 0xe1:
    case 0xf1:
    case 0xf8:
    case 0x10a:
    case 0x10b:
      break;
    default:
      if (*(short *)(param_1 + 0x364) == 0x79) break;
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd4:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x109:
      if (*(int *)(lVar3 + 0x1cc) != 0) {
        return 0;
      }
    }
  }
switchD_029506d8_caseD_10:
  return (ulong)*(ushort *)(param_1 + 0x364);
}


