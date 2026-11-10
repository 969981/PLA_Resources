/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029528d0; name: FUN_029528d0
 */


void FUN_029528d0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined2 *)(param_1 + 0x2e8) = *(undefined2 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2e4) = uVar1;
  *(undefined2 *)(param_1 + 0x496) = *(undefined2 *)(param_2 + 0x496);
  lVar4 = 0x90;
  lVar5 = 0x238;
  do {
    if (((*(ulong *)(param_2 + lVar4) & 7) == 0) || (uVar6 = lVar5 - 0x238, 0x26 < (uint)uVar6))
    goto switchD_0295298c_caseD_a1;
    if ((1L << (uVar6 & 0x3f) & 0x4b00f21100U) != 0) goto switchD_0295298c_caseD_a2;
    if ((uVar6 & 0xffffffff) == 0x12) {
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
switchD_0295298c_caseD_a2:
        *(ulong *)(param_1 + lVar4) = *(ulong *)(param_2 + lVar4);
        *(undefined1 *)(param_1 + lVar5) = *(undefined1 *)(param_2 + lVar5);
        break;
      default:
        if (*(short *)(param_1 + 0x364) != 0x79) goto switchD_0295298c_caseD_a2;
      }
    }
switchD_0295298c_caseD_a1:
    lVar4 = lVar4 + 8;
    lVar5 = lVar5 + 1;
    if (lVar4 == 0x238) {
      if ((*(byte *)(param_2 + 0x388) >> 2 & 1) != 0) {
        *(byte *)(param_1 + 0x388) = *(byte *)(param_1 + 0x388) | 4;
        uVar2 = FUN_0295084c(param_1,8);
        uVar3 = FUN_0295084c(param_1,9);
        *(undefined2 *)(param_1 + 0x2d2) = uVar3;
        *(undefined2 *)(param_1 + 0x2d4) = uVar2;
      }
      if ((*(byte *)(param_2 + 0x388) >> 1 & 1) != 0) {
        *(byte *)(param_1 + 0x388) = *(byte *)(param_1 + 0x388) | 2;
      }
      *(undefined2 *)(param_2 + 0x496) = 0;
      memset((void *)(param_2 + 0xd0),0,0x168);
      *(undefined8 *)(param_2 + 0x260) = 0;
      *(undefined8 *)(param_2 + 0x265) = 0;
      *(undefined8 *)(param_2 + 0x240) = 0;
      *(undefined8 *)(param_2 + 0x248) = 0;
      *(undefined8 *)(param_2 + 0x250) = 0;
      *(undefined8 *)(param_2 + 600) = 0;
      if (*(char *)(param_2 + 0x2e4) != '\x01') {
        *(undefined1 *)(param_2 + 0x2e4) = 1;
        *(undefined1 *)(param_2 + 0x2e7) = 0;
      }
      if (*(char *)(param_2 + 0x2e5) != '\x01') {
        *(undefined1 *)(param_2 + 0x2e5) = 1;
        *(undefined1 *)(param_2 + 0x2e8) = 0;
      }
      if (*(char *)(param_2 + 0x2e6) != '\x01') {
        *(undefined1 *)(param_2 + 0x2e6) = 1;
        *(undefined1 *)(param_2 + 0x2e9) = 0;
      }
      *(undefined4 *)(param_2 + 0x387) = 0;
      return;
    }
  } while( true );
}


