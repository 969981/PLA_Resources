/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d01c8; name: FUN_029d01c8
 */


void FUN_029d01c8(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  if (param_4 < 8) {
    FUN_02986e90(*(undefined8 *)(param_1 + 0x38),param_3,param_2,param_4,*param_5);
    return;
  }
  if (param_4 != 0x12) {
    FUN_029872c0(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
    return;
  }
  iVar1 = FUN_029506a8(param_3,0x10);
  if ((iVar1 != 0x100) && (*(long *)(param_3 + 0x4a0) != 0)) {
    switch(*(short *)(param_3 + 0x364)) {
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
      if (*(short *)(param_3 + 0x364) == 0x79) break;
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
      if (*(int *)(*(long *)(param_3 + 0x4a0) + 0x1cc) != 0) {
        return;
      }
    }
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x1880);
  FUN_02987998(*(undefined8 *)(lVar2 + 0x38),param_3);
  iVar1 = FUN_029506a8(param_3,0x10);
  if (iVar1 == 0x7f) {
    local_28 = param_3;
    FUN_029ea38c(*(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x1360),auStack_30,&local_28);
  }
  return;
}


