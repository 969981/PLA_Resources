/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d88f0; name: FUN_004d88f0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004d88f0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar10 = &DAT_04181630;
    *param_2 = 0;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar9 = *param_1;
      *param_3 = iVar9;
      *param_2 = iVar9;
      if (param_4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: real_max == NULL","external/openssl/ssl/statem/statem_lib.c"
                     ,0x7e6);
      }
      return 0;
    }
    piVar10 = &DAT_041816c0;
    *param_2 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (*piVar10 == 0) {
    *param_3 = 0;
    return 0xbf;
  }
  if (param_4 == (int *)0x0) {
    iVar9 = 0;
    bVar3 = true;
    pcVar8 = *(code **)(piVar10 + 2);
    do {
      piVar6 = piVar10 + 6;
      if (pcVar8 == (code *)0x0) {
        iVar11 = *piVar6;
        goto joined_r0x004d8cb0;
      }
      piVar7 = (int *)(*pcVar8)();
      iVar11 = *piVar7;
      iVar5 = param_1[0x175];
      if ((iVar5 == 0) || (iVar11 == iVar5)) {
LAB_004d8bf4:
        iVar5 = FUN_004e2fc0(param_1,9,0,iVar11,0);
        if (iVar5 == 0) {
          iVar11 = *piVar6;
          bVar3 = true;
        }
        else {
          iVar5 = param_1[0x176];
          if ((iVar5 != 0) && (iVar11 != iVar5)) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
              if (iVar5 <= iVar11) {
                iVar11 = *piVar6;
                bVar3 = true;
                goto joined_r0x004d8c40;
              }
            }
            else {
              iVar4 = 0xff00;
              if (iVar11 != 0x100) {
                iVar4 = iVar11;
              }
              iVar11 = 0xff00;
              if (iVar5 != 0x100) {
                iVar11 = iVar5;
              }
              if (iVar4 <= iVar11) {
                iVar11 = *piVar6;
                goto joined_r0x004d8cb0;
              }
            }
          }
          if ((*(ulong *)(piVar7 + 2) & (ulong)(uint)param_1[0x173]) == 0) {
            if (((*(byte *)(piVar7 + 1) >> 1 & 1) == 0) ||
               ((*(byte *)(*(long *)(param_1 + 0x122) + 0x1e) & 3) == 0)) {
              if (bVar3) {
                iVar9 = *piVar7;
              }
              *param_2 = *piVar7;
              iVar11 = *piVar6;
              bVar3 = false;
              goto joined_r0x004d8c40;
            }
            iVar11 = *piVar6;
          }
          else {
            iVar11 = *piVar6;
          }
joined_r0x004d8cb0:
          bVar3 = true;
        }
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0) {
          iVar4 = 0xff00;
          if (iVar11 != 0x100) {
            iVar4 = iVar11;
          }
          iVar2 = 0xff00;
          if (iVar5 != 0x100) {
            iVar2 = iVar5;
          }
          if (iVar2 < iVar4) {
            iVar11 = *piVar6;
            goto joined_r0x004d8cb0;
          }
          goto LAB_004d8bf4;
        }
        if (iVar5 <= iVar11) goto LAB_004d8bf4;
        bVar3 = true;
        iVar11 = *piVar6;
      }
joined_r0x004d8c40:
      if (iVar11 == 0) goto LAB_004d8ce4;
      pcVar8 = *(code **)(piVar10 + 8);
      piVar10 = piVar6;
    } while( true );
  }
  iVar11 = 0;
  iVar9 = 0;
  bVar3 = true;
  pcVar8 = *(code **)(piVar10 + 2);
  do {
    if (pcVar8 == (code *)0x0) {
      iVar11 = 0;
      iVar5 = piVar10[6];
      goto joined_r0x004d8980;
    }
    piVar6 = (int *)(*pcVar8)();
    if ((iVar11 == 0) && (bVar3)) {
      iVar11 = *piVar10;
    }
    iVar5 = *piVar6;
    iVar4 = param_1[0x175];
    if ((iVar4 == 0) || (iVar5 == iVar4)) {
LAB_004d8a08:
      iVar4 = FUN_004e2fc0(param_1,9,0,iVar5,0);
      if (iVar4 == 0) {
        bVar3 = true;
        iVar5 = piVar10[6];
      }
      else {
        iVar4 = param_1[0x176];
        if ((iVar4 == 0) || (iVar5 == iVar4)) {
LAB_004d8a84:
          if ((*(ulong *)(piVar6 + 2) & (ulong)(uint)param_1[0x173]) == 0) {
            if (((*(byte *)(piVar6 + 1) >> 1 & 1) == 0) ||
               ((*(byte *)(*(long *)(param_1 + 0x122) + 0x1e) & 3) == 0)) {
              if (bVar3) {
                if (iVar11 != 0) {
                  *param_4 = iVar11;
                }
                iVar9 = *piVar6;
                bVar3 = false;
                *param_2 = iVar9;
                iVar5 = piVar10[6];
              }
              else {
                *param_2 = *piVar6;
                iVar5 = piVar10[6];
              }
            }
            else {
              bVar3 = true;
              iVar5 = piVar10[6];
            }
            goto joined_r0x004d8ae8;
          }
          iVar5 = piVar10[6];
        }
        else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
          if (iVar5 < iVar4) goto LAB_004d8a84;
          iVar5 = piVar10[6];
        }
        else {
          iVar2 = 0xff00;
          if (iVar5 != 0x100) {
            iVar2 = iVar5;
          }
          iVar5 = 0xff00;
          if (iVar4 != 0x100) {
            iVar5 = iVar4;
          }
          if (iVar5 < iVar2) goto LAB_004d8a84;
          iVar5 = piVar10[6];
        }
joined_r0x004d8980:
        bVar3 = true;
      }
    }
    else {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
        if (iVar5 < iVar4) {
          iVar5 = piVar10[6];
          goto joined_r0x004d8980;
        }
        goto LAB_004d8a08;
      }
      iVar2 = 0xff00;
      if (iVar5 != 0x100) {
        iVar2 = iVar5;
      }
      iVar1 = 0xff00;
      if (iVar4 != 0x100) {
        iVar1 = iVar4;
      }
      if (iVar2 <= iVar1) goto LAB_004d8a08;
      bVar3 = true;
      iVar5 = piVar10[6];
    }
joined_r0x004d8ae8:
    if (iVar5 == 0) {
LAB_004d8ce4:
      *param_3 = iVar9;
      if (iVar9 == 0) {
        return 0xbf;
      }
      return 0;
    }
    pcVar8 = *(code **)(piVar10 + 8);
    piVar10 = piVar10 + 6;
  } while( true );
}


