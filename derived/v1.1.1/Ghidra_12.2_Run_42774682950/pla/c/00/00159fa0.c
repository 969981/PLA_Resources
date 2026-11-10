/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159fa0; name: FUN_00159fa0
 */


char * FUN_00159fa0(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  
  do {
    lVar3 = FUN_0015ca20(param_1,param_3 + 1,param_2);
    *param_4 = lVar3;
    if (lVar3 != 0) {
      return "local";
    }
    if ((int)param_2 < 1) goto LAB_0015a10c;
    lVar3 = *(long *)(param_1 + 0x38);
    uVar7 = 0;
    iVar2 = 0;
    uVar11 = 0xffffffff;
    do {
      uVar1 = *(uint *)(lVar3 + uVar7 * 4);
      uVar8 = uVar1 >> 6 & 0xff;
      uVar6 = (uint)uVar7;
      iVar9 = iVar2;
      switch((int)((ulong)uVar1 & 0x3f)) {
      case 4:
        if ((long)uVar7 < (long)iVar2) {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar8 <= (int)param_3 && (int)param_3 <= (int)(uVar8 + (uVar1 >> 0x17))) {
          uVar11 = uVar6;
        }
        break;
      default:
        if ((uVar8 == param_3 && ((&DAT_039c5e39)[(ulong)uVar1 & 0x3f] & 0x40) != 0) &&
           (uVar11 = uVar6, (long)uVar7 < (long)iVar2)) {
          uVar11 = 0xffffffff;
        }
        break;
      case 0x1e:
        iVar9 = uVar6 + (uVar1 >> 0xe) + -0x1fffe;
        if (((long)iVar9 <= (long)uVar7 || (int)param_2 < iVar9) || iVar9 <= iVar2) {
          iVar9 = iVar2;
        }
        break;
      case 0x29:
        uVar8 = uVar8 + 2;
      case 0x24:
      case 0x25:
        if ((long)uVar7 < (long)iVar2) {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar8 <= (int)param_3) {
          uVar11 = uVar6;
        }
      }
      iVar2 = iVar9;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    if (uVar11 == 0xffffffff) goto LAB_0015a10c;
    uVar8 = *(uint *)(lVar3 + (long)(int)uVar11 * 4);
    if ((uVar8 & 0x3f) != 0) {
      pcVar10 = (char *)0x0;
      switch(uVar8 & 0x3f) {
      case 1:
        uVar8 = uVar8 >> 0xe;
        break;
      case 2:
        uVar8 = *(uint *)(lVar3 + (long)(int)uVar11 * 4 + 4) >> 6;
        break;
      default:
        goto switchD_0015a154_caseD_3;
      case 5:
        lVar3 = *(long *)(*(long *)(param_1 + 0x58) + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
        puVar5 = &DAT_038f8f88;
        if (lVar3 != 0) {
          puVar5 = (undefined *)(lVar3 + 0x18);
        }
        *param_4 = (long)puVar5;
        return "upvalue";
      case 6:
      case 7:
        if ((uVar8 & 0x3f) == 7) {
          pcVar10 = (char *)FUN_0015ca20(param_1,(uVar8 >> 0x17) + 1,uVar11);
          if ((uVar8 >> 0x16 & 1) != 0) goto LAB_0015a17c;
LAB_0015a278:
          pcVar4 = (char *)FUN_00159fa0(param_1,uVar11,uVar8 >> 0xe & 0x1ff,param_4);
          if ((pcVar4 != (char *)0x0) && (*pcVar4 == 'c')) goto LAB_0015a2a8;
LAB_0015a29c:
          puVar5 = &DAT_038f8f88;
        }
        else {
          lVar3 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(uVar8 >> 0x17) * 0x10);
          pcVar10 = "?";
          if (lVar3 != 0) {
            pcVar10 = (char *)(lVar3 + 0x18);
          }
          if ((uVar8 >> 0x16 & 1) == 0) goto LAB_0015a278;
LAB_0015a17c:
          uVar7 = (ulong)(uVar8 >> 0xe & 0xff);
          if ((*(uint *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10 + 8) & 0xf) != 4)
          goto LAB_0015a29c;
          puVar5 = (undefined *)(*(long *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10) + 0x18);
        }
        *param_4 = (long)puVar5;
LAB_0015a2a8:
        if (pcVar10 == (char *)0x0) {
          return "field";
        }
        iVar2 = strcmp(pcVar10,"_ENV");
        pcVar10 = "global";
        if (iVar2 != 0) {
          pcVar10 = "field";
        }
        return pcVar10;
      case 0xc:
        if ((uVar8 >> 0x16 & 1) == 0) {
          pcVar10 = (char *)FUN_00159fa0(param_1,uVar11,uVar8 >> 0xe & 0x1ff,param_4);
          if ((pcVar10 == (char *)0x0) || (*pcVar10 != 'c')) {
LAB_0015a308:
            puVar5 = &DAT_038f8f88;
            goto LAB_0015a310;
          }
        }
        else {
          if ((*(uint *)(*(long *)(param_1 + 0x30) + (ulong)(byte)(uVar8 >> 0xe) * 0x10 + 8) & 0xf)
              != 4) goto LAB_0015a308;
          puVar5 = (undefined *)
                   (*(long *)(*(long *)(param_1 + 0x30) + ((ulong)(uVar8 >> 0xe) & 0xff) * 0x10) +
                   0x18);
LAB_0015a310:
          *param_4 = (long)puVar5;
        }
        pcVar10 = "method";
        goto switchD_0015a154_caseD_3;
      }
      if ((*(uint *)(*(long *)(param_1 + 0x30) + (ulong)uVar8 * 0x10 + 8) & 0xf) == 4) {
        *param_4 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar8 * 0x10) + 0x18;
        return "constant";
      }
      goto LAB_0015a10c;
    }
    param_3 = uVar8 >> 0x17;
    param_2 = uVar11;
    if ((uVar8 >> 6 & 0xff) <= param_3) {
LAB_0015a10c:
      pcVar10 = (char *)0x0;
switchD_0015a154_caseD_3:
      return pcVar10;
    }
  } while( true );
}


