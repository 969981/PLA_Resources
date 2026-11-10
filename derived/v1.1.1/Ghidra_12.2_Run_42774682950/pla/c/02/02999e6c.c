/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02999e6c; name: FUN_02999e6c
 */


long FUN_02999e6c(undefined8 *param_1,short param_2,char param_3,uint param_4,long param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  long lStack_58;
  
  uVar4 = *(uint *)(param_5 + 0x3c);
  lVar10 = *(long *)(param_5 + 0x18);
  if ((uVar4 & 0x3000000) == 0x1000000 || (uVar4 & 0x8000000) != 0) {
    return lVar10;
  }
  if ((param_3 != '\b') && (*(char *)(param_5 + 0x30) != param_3)) {
    return lVar10;
  }
  if (((uVar4 & 0xffff) != 0) && (*(uint *)(param_1 + 0xf) <= (uVar4 & 0xffff))) {
    return lVar10;
  }
  if ((uVar4 >> 0x1d & 1) == 0) {
    return lVar10;
  }
  if ((param_2 == 0x8f) && ((uVar4 >> 0x1c & 1) == 0)) {
    return lVar10;
  }
  if ((uVar4 >> 0x10 & 0xff) == 0) {
    return lVar10;
  }
  uVar6 = (ulong)(uVar4 >> 0x10) & 0xff;
  puVar11 = (undefined8 *)(*(long *)(param_5 + 0x20) + 8);
  while (*(short *)(puVar11 + -1) != param_2) {
    puVar11 = puVar11 + 2;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return lVar10;
    }
  }
  if ((param_4 & 1) == 0) goto LAB_0299a0c4;
  if ((ulong)*(byte *)(param_5 + 0x3b) == 0x1f) {
    cVar2 = *(char *)(param_5 + 0x30);
    lVar8 = 0;
    lVar7 = param_1[1];
LAB_02999f64:
    if ((param_2 != 0xd1) && (cVar2 == '\x05')) {
      if (*(int *)(*(long *)(lVar7 + 0x28) + 0x1bc) != 0) {
        return lVar10;
      }
      if (lVar8 != 0) {
        if ((*(byte *)(lVar8 + 0x138) & 7) != 0) {
          return lVar10;
        }
        if ((*(byte *)(lVar8 + 0x385) >> 1 & 1) != 0) {
          return lVar10;
        }
      }
    }
  }
  else {
    lVar7 = param_1[1];
    cVar2 = *(char *)(param_5 + 0x30);
    lVar8 = *(long *)(*(long *)(lVar7 + 8) + (ulong)*(byte *)(param_5 + 0x3b) * 8 + 0x120);
    if (lVar8 == 0 || cVar2 != '\x04') goto LAB_02999f64;
    if ((*(byte *)(lVar8 + 0x120) & 7) != 0) {
      return lVar10;
    }
    if (*(long *)(lVar8 + 0x4a0) != 0) {
      switch(*(short *)(lVar8 + 0x364)) {
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
switchD_02999fd8_caseD_a2:
        if (*(int *)(*(long *)(lVar8 + 0x4a0) + 0x1cc) != 0) {
          return lVar10;
        }
        break;
      default:
        if (*(short *)(lVar8 + 0x364) != 0x79) goto switchD_02999fd8_caseD_a2;
      }
    }
    if ((((*(byte *)(lVar8 + 0x87) >> 5 & 1) != 0) &&
        (uVar1 = *(ushort *)(param_5 + 0x38) - 0xd1, uVar1 < 0x32)) &&
       ((1L << ((ulong)uVar1 & 0x3f) & 0x2808100000001U) != 0)) {
      return lVar10;
    }
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    pcVar5 = *(code **)(lVar7 + 0x28);
    if (pcVar5 != (code *)0x0) goto LAB_0299a04c;
LAB_0299a03c:
    do {
      do {
        do {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 == 0) {
            uVar4 = *(uint *)(param_5 + 0x3c);
            goto LAB_0299a0c4;
          }
          pcVar5 = *(code **)(lVar7 + 0x28);
        } while (pcVar5 == (code *)0x0);
LAB_0299a04c:
        uVar3 = local_80;
      } while ((*(byte *)(lVar7 + 0x3f) >> 3 & 1) != 0);
      if (*(char *)(lVar7 + 0x30) == '\x04') {
        local_90 = param_1[1];
        lVar8 = *(long *)(*(long *)(local_90 + 8) + (ulong)*(byte *)(lVar7 + 0x3b) * 8 + 0x120);
        if (lVar8 != 0) {
          if ((*(byte *)(lVar8 + 0x120) & 7) != 0) goto LAB_0299a03c;
          if (*(long *)(lVar8 + 0x4a0) != 0) {
            switch(*(short *)(lVar8 + 0x364)) {
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
switchD_0299a0a8_caseD_a2:
              if (*(int *)(*(long *)(lVar8 + 0x4a0) + 0x1cc) != 0) goto LAB_0299a03c;
              break;
            default:
              if (*(short *)(lVar8 + 0x364) != 0x79) goto switchD_0299a0a8_caseD_a2;
            }
          }
        }
      }
      else {
        local_90 = param_1[1];
      }
      local_98 = *param_1;
      local_80._0_3_ = CONCAT12(*(undefined1 *)(param_5 + 0x30),param_2);
      local_80._7_1_ = SUB81(uVar3,7);
      local_80._0_7_ =
           CONCAT16(*(undefined1 *)(param_5 + 0x3a),
                    CONCAT24(*(undefined2 *)(param_5 + 0x38),(undefined4)local_80));
      local_88 = lVar7;
      uVar6 = (*pcVar5)(&local_98);
      if ((uVar6 & 1) != 0) {
        return lVar10;
      }
    } while( true );
  }
LAB_0299a0c4:
  *(uint *)(param_5 + 0x3c) = uVar4 | 0x1000000;
  local_98 = *param_1;
  local_90 = param_1[1];
  local_88 = param_1[2];
  local_80 = param_1[3];
  local_78 = param_1[4];
  local_70 = param_1[5];
  local_60 = param_1[0xe];
  puStack_68 = param_1;
  lStack_58 = param_5;
  (*(code *)*puVar11)(&local_98,*(undefined1 *)(param_5 + 0x3a));
  uVar1 = *(uint *)(param_5 + 0x3c);
  uVar4 = 0xfeffffff;
  if ((uVar1 & 0x2000000) != 0) {
    uVar4 = 0xfdffffff;
  }
  uVar4 = uVar1 & uVar4;
  *(uint *)(param_5 + 0x3c) = uVar4;
  if ((uVar1 >> 0x1a & 1) == 0) {
    return lVar10;
  }
  while ((lVar10 != 0 && ((*(byte *)(lVar10 + 0x3f) >> 5 & 1) == 0))) {
    lVar10 = *(long *)(param_5 + 0x18);
  }
  if ((uVar1 >> 0x1d & 1) == 0) {
    return lVar10;
  }
  if ((uVar4 >> 0x18 & 1) != 0) {
    *(uint *)(param_5 + 0x3c) = uVar4 | 0x4000000;
    return lVar10;
  }
  lVar7 = *(long *)(param_1[1] + 0x88);
  if (*(long *)(lVar7 + 0x14c8) == param_5) {
    *(undefined8 *)(lVar7 + 0x14c8) = *(undefined8 *)(param_5 + 0x18);
  }
  lVar8 = *(long *)(param_5 + 0x10);
  lVar9 = *(long *)(param_5 + 0x18);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x18) = lVar9;
  }
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x10) = lVar8;
  }
  *(undefined8 *)(param_5 + 0x50) = 0;
  *(undefined8 *)(param_5 + 0x58) = 0;
  *(undefined8 *)(param_5 + 0x40) = 0;
  *(undefined8 *)(param_5 + 0x48) = 0;
  *(undefined8 *)(param_5 + 0x30) = 0;
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(undefined8 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(long *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  lVar8 = *(long *)(lVar7 + 0x14d0);
  *(long *)(param_5 + 0x18) = lVar8;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = param_5;
  }
  *(long *)(lVar7 + 0x14d0) = param_5;
  return lVar10;
}


