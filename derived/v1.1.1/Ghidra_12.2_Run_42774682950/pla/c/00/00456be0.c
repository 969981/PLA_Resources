/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456be0; name: FUN_00456be0
 */


void FUN_00456be0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  int local_38;
  int local_34;
  
  if (*(int *)(param_1 + 0x158) == 0) {
    FUN_00400140(*(undefined8 *)(param_1 + 0x150));
    if ((*(byte *)(param_1 + 0xe1) & 1) == 0) {
      puVar1 = (uint *)(param_1 + 0xe0);
      uVar6 = FUN_0044f830();
      FUN_00464990(param_1,uVar6,param_1 + 0x130,0);
      lVar7 = FUN_00466c70(param_1);
      if (lVar7 == 0) {
        *puVar1 = *puVar1 | 0x40;
      }
      piVar8 = (int *)FUN_0045e200(param_1,0x57,0,0);
      if (piVar8 != (int *)0x0) {
        iVar3 = *piVar8;
        if (iVar3 != 0) {
          *puVar1 = *puVar1 | 0x10;
        }
        if (*(long *)(piVar8 + 2) == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        else if ((iVar3 == 0) || (*(int *)(*(long *)(piVar8 + 2) + 4) == 0x102)) {
          uVar6 = 0;
          *puVar1 = *puVar1 | 0x80;
        }
        else {
          uVar6 = FUN_00420b50();
        }
        *(undefined8 *)(param_1 + 0xd0) = uVar6;
        FUN_00457c70(piVar8);
        *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
      }
      plVar9 = (long *)FUN_0045e200(param_1,0x297,0,0);
      if (plVar9 != (long *)0x0) {
        if ((((*(byte *)puVar1 >> 4 & 1) != 0) ||
            (iVar3 = FUN_0045e1e0(param_1,0x55,0xffffffff), -1 < iVar3)) ||
           (iVar3 = FUN_0045e1e0(param_1,0x56,0xffffffff), -1 < iVar3)) {
          *puVar1 = *puVar1 | 0x80;
        }
        if (*plVar9 == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = FUN_00420b50();
        }
        *(undefined8 *)(param_1 + 0xd8) = uVar6;
        FUN_00463fe0(plVar9);
        *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x400;
      }
      piVar8 = (int *)FUN_0045e200(param_1,0x53,0,0);
      if (piVar8 != (int *)0x0) {
        iVar3 = *piVar8;
        if (iVar3 < 1) {
          *(undefined4 *)(param_1 + 0xe4) = 0;
        }
        else {
          pbVar14 = *(byte **)(piVar8 + 2);
          bVar2 = *pbVar14;
          *(uint *)(param_1 + 0xe4) = (uint)bVar2;
          if (iVar3 != 1) {
            *(uint *)(param_1 + 0xe4) = (uint)CONCAT11(pbVar14[1],bVar2);
          }
        }
        *puVar1 = *puVar1 | 2;
        thunk_FUN_0040a4b0();
      }
      *(undefined4 *)(param_1 + 0xe8) = 0;
      lVar7 = FUN_0045e200(param_1,0x7e,0,0);
      if (lVar7 != 0) {
        *puVar1 = *puVar1 | 4;
        local_38 = 0;
        iVar3 = FUN_00407950();
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            FUN_00407970(lVar7,iVar3);
            iVar4 = FUN_00407f40();
            uVar13 = 1;
            switch(iVar4) {
            case 0x81:
              break;
            case 0x82:
              uVar13 = 2;
              break;
            case 0x83:
              uVar13 = 8;
              break;
            case 0x84:
              uVar13 = 4;
              break;
            case 0x85:
              uVar13 = 0x40;
              break;
            case 0x86:
            case 0x87:
            case 0x88:
            case 0x8a:
            case 0x8c:
            case 0x8d:
            case 0x8e:
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x99:
            case 0x9a:
            case 0x9b:
            case 0x9c:
            case 0x9d:
            case 0x9e:
            case 0x9f:
            case 0xa0:
            case 0xa1:
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
            case 0xb0:
            case 0xb1:
            case 0xb2:
            case 0xb3:
              goto switchD_00456e40_caseD_86;
            case 0x89:
            case 0x8b:
              uVar13 = 0x10;
              break;
            case 0xb4:
              uVar13 = 0x20;
              break;
            default:
              if (iVar4 == 0x129) {
                uVar13 = 0x80;
              }
              else {
                if (iVar4 != 0x38e) goto switchD_00456e40_caseD_86;
                uVar13 = 0x100;
              }
            }
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | uVar13;
switchD_00456e40_caseD_86:
            iVar3 = iVar3 + 1;
            iVar4 = FUN_00407950(lVar7);
          } while (iVar3 < iVar4);
          local_38 = iVar3;
        }
        FUN_004078c0(lVar7,PTR_FUN_04374318);
      }
      piVar8 = (int *)FUN_0045e200(param_1,0x47,0,0);
      if (piVar8 != (int *)0x0) {
        if (*piVar8 < 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = (uint)**(byte **)(piVar8 + 2);
        }
        *(uint *)(param_1 + 0xec) = uVar13;
        *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 8;
        thunk_FUN_0040a4b0();
      }
      uVar6 = FUN_0045e200(param_1,0x52,0,0);
      *(undefined8 *)(param_1 + 0xf0) = uVar6;
      uVar6 = FUN_0045e200(param_1,0x5a,0,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar6;
      uVar6 = FUN_0044e530(param_1);
      uVar10 = FUN_0044e490(param_1);
      iVar3 = FUN_0044e250(uVar6,uVar10);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x20;
        iVar3 = FUN_00457410(param_1,*(undefined8 *)(param_1 + 0xf8));
        if ((iVar3 == 0) &&
           (((*puVar1 >> 1 & 1) == 0 || ((*(byte *)(param_1 + 0xe4) >> 2 & 1) != 0)))) {
          *puVar1 = *puVar1 | 0x2000;
        }
      }
      uVar6 = FUN_0045e200(param_1,0x55,0,0);
      *(undefined8 *)(param_1 + 0x110) = uVar6;
      lVar7 = FUN_0045e200(param_1,0x29a,&local_38,0);
      *(long *)(param_1 + 0x118) = lVar7;
      if ((lVar7 == 0) && (local_38 != -1)) {
        *puVar1 = *puVar1 | 0x80;
      }
      uVar6 = FUN_0045e200(param_1,0x67,0,0);
      *(undefined8 *)(param_1 + 0x108) = uVar6;
      iVar3 = FUN_00407950();
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          puVar11 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 0x108),iVar3);
          piVar8 = (int *)puVar11[1];
          if (piVar8 == (int *)0x0) {
            *(undefined4 *)(puVar11 + 3) = 0x807f;
            piVar8 = (int *)*puVar11;
          }
          else {
            iVar4 = *piVar8;
            if (iVar4 < 1) {
              uVar13 = *(uint *)(puVar11 + 3);
            }
            else {
              pbVar14 = *(byte **)(piVar8 + 2);
              bVar2 = *pbVar14;
              uVar13 = (uint)bVar2;
              puVar12 = (uint *)(puVar11 + 3);
              *puVar12 = (uint)bVar2;
              if (iVar4 != 1) {
                uVar13 = (uint)CONCAT11(pbVar14[1],bVar2);
                *puVar12 = uVar13;
                *puVar12 = uVar13 & 0x807f;
                piVar8 = (int *)*puVar11;
                goto joined_r0x00457078;
              }
            }
            *(uint *)(puVar11 + 3) = uVar13 & 0x807f;
            piVar8 = (int *)*puVar11;
          }
joined_r0x00457078:
          if ((piVar8 != (int *)0x0) && (*piVar8 == 1)) {
            iVar4 = FUN_00407950(puVar11[2]);
            if (0 < iVar4) {
              iVar4 = 0;
              do {
                piVar8 = (int *)FUN_00407970(puVar11[2],iVar4);
                if (*piVar8 == 4) {
                  lVar7 = *(long *)(piVar8 + 2);
                  if (lVar7 != 0) goto LAB_00456ff8;
                  break;
                }
                iVar4 = iVar4 + 1;
                iVar5 = FUN_00407950(puVar11[2]);
              } while (iVar4 < iVar5);
            }
            lVar7 = FUN_0044e490(param_1);
LAB_00456ff8:
            FUN_00458640(*puVar11,lVar7);
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00407950(*(undefined8 *)(param_1 + 0x108));
        } while (iVar3 < iVar4);
      }
      uVar6 = FUN_0045e200(param_1,0x122,0,0);
      *(undefined8 *)(param_1 + 0x120) = uVar6;
      uVar6 = FUN_0045e200(param_1,0x123,0,0);
      *(undefined8 *)(param_1 + 0x128) = uVar6;
      local_38 = 0;
      iVar3 = FUN_0045e1d0(param_1);
      if (0 < iVar3) {
        do {
          uVar6 = FUN_0045e1f0(param_1,local_38);
          FUN_0045b5c0();
          iVar3 = FUN_00407f40();
          if (iVar3 == 0x359) {
            *puVar1 = *puVar1 | 0x1000;
          }
          iVar3 = FUN_0045b5e0(uVar6);
          if (iVar3 != 0) {
            FUN_0045b5c0(uVar6);
            local_34 = FUN_00407f40();
            if ((local_34 == 0) ||
               (lVar7 = FUN_00408a60(&local_34,&DAT_03a0c510,0xe,4,&LAB_00457ab0), lVar7 == 0)) {
              *puVar1 = *puVar1 | 0x200;
              break;
            }
          }
          iVar3 = local_38 + 1;
          local_38 = iVar3;
          iVar4 = FUN_0045e1d0(param_1);
        } while (iVar3 < iVar4);
      }
      FUN_00466d40(param_1);
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x100;
      *(undefined4 *)(param_1 + 0x158) = 1;
    }
    FUN_00400160(*(undefined8 *)(param_1 + 0x150));
  }
  return;
}


