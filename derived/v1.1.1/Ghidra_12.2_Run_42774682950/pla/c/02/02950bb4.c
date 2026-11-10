/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02950bb4; name: FUN_02950bb4
 */


bool FUN_02950bb4(long param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  
  if ((param_2 != 1) || ((*(byte *)(param_1 + 0x120) & 7) != 0)) goto switchD_02950bf8_caseD_a1;
  sVar1 = *(short *)(param_1 + 0x364);
  if (*(long *)(param_1 + 0x4a0) == 0) {
LAB_02950c0c:
    if (sVar1 == 0xd5) {
      return true;
    }
  }
  else {
    bVar2 = true;
    switch(sVar1) {
    case 0xa1:
    case 0xb0:
    case 0xc5:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xe1:
    case 0xf1:
    case 0xf8:
    case 0x10a:
    case 0x10b:
      break;
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
switchD_02950bf8_caseD_a2:
      if (*(int *)(*(long *)(param_1 + 0x4a0) + 0x1cc) == 0) goto LAB_02950c0c;
      break;
    case 0xd5:
      goto switchD_02950bf8_caseD_d5;
    default:
      if (sVar1 != 0x79) goto switchD_02950bf8_caseD_a2;
    }
  }
switchD_02950bf8_caseD_a1:
  bVar2 = (*(byte *)(param_1 + 0xa0) & 7) != 0;
switchD_02950bf8_caseD_d5:
  return bVar2;
}


