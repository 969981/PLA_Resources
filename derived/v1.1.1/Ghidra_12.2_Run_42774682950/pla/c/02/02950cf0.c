/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02950cf0; name: FUN_02950cf0
 */


int FUN_02950cf0(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined1 auStack_730 [1740];
  uint local_64;
  uint local_60;
  uint local_58;
  
  iVar8 = 0;
  switch(param_2) {
  case 4:
    plVar10 = *(long **)(*(long *)(param_1 + 0x4a8) + 0x1e8);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_009463f0(auStack_730,plVar10 + 0xc);
    FUN_00945e04(auStack_730);
    uVar11 = local_60;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        bVar7 = iVar8 == 0;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02950ea8:
      if (bVar7) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    break;
  case 5:
    if ((param_3 & 0x3f07) == 0xf01) {
      uVar6 = *(ushort *)(param_1 + 0x72) >> 4;
      if ((*(ushort *)(param_1 + 0x72) & 0xf) != 0) {
        uVar6 = uVar6 + 1;
      }
      iVar8 = FUN_0293ebd0(*(undefined8 *)(param_1 + 0x4a8),param_1,uVar6);
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      return iVar8 * (param_4 & 0xff);
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x4a8) + 0x1e8);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_009463f0(auStack_730,plVar10 + 0xc);
    FUN_00945e04(auStack_730);
    uVar11 = local_64;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        bVar7 = iVar8 == 0;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_02950ea8;
    }
    break;
  default:
    goto switchD_02950d2c_caseD_6;
  case 7:
    plVar10 = *(long **)(*(long *)(param_1 + 0x4a8) + 0x1e8);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_009463f0(auStack_730,plVar10 + 0xc);
    FUN_00945e04(auStack_730);
    uVar11 = local_58;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        bVar7 = iVar8 == 0;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_02950ea8;
    }
    break;
  case 0xb:
    if ((*(byte *)(param_1 + 0x120) & 7) != 0) goto switchD_02950e54_caseD_a1;
    sVar3 = *(short *)(param_1 + 0x364);
    if (*(long *)(param_1 + 0x4a0) == 0) {
LAB_02950ef4:
      if (sVar3 == 0xd5) goto switchD_02950d2c_caseD_c;
    }
    else {
      switch(sVar3) {
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
switchD_02950e54_caseD_a2:
        if (*(int *)(*(long *)(param_1 + 0x4a0) + 0x1cc) == 0) goto LAB_02950ef4;
        break;
      case 0xd5:
        goto switchD_02950d2c_caseD_c;
      default:
        if (sVar3 != 0x79) goto switchD_02950e54_caseD_a2;
      }
    }
switchD_02950e54_caseD_a1:
    if ((*(byte *)(param_1 + 0xa0) & 7) == 0) {
      return 0;
    }
  case 0xc:
switchD_02950d2c_caseD_c:
    uVar2 = (uint)(*(ushort *)(param_1 + 0x72) >> 2);
    uVar9 = *(undefined8 *)(param_1 + 0x4a8);
    if ((*(ushort *)(param_1 + 0x72) & 3) != 0) {
      uVar2 = uVar2 + 1;
    }
    goto LAB_02950f1c;
  }
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  uVar2 = 0;
  if (uVar11 != 0) {
    uVar2 = *(ushort *)(param_1 + 0x72) / uVar11;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x4a8);
  if ((uint)*(ushort *)(param_1 + 0x72) != uVar2 * uVar11) {
    uVar2 = uVar2 + 1;
  }
LAB_02950f1c:
  iVar8 = FUN_0293ebd0(uVar9,param_1,uVar2);
  if (iVar8 == 0) {
    iVar8 = 1;
  }
switchD_02950d2c_caseD_6:
  return iVar8;
}


