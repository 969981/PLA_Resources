/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8874; name: FUN_02ea8874
 */


void FUN_02ea8874(long param_1,int *param_2,uint *param_3,int param_4,undefined8 param_5,
                 ulong param_6,code *param_7,undefined8 param_8)

{
  ushort *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    uVar4 = param_6;
    if (param_7 == (code *)0x0) {
      do {
        uVar7 = (ulong)*(ushort *)(param_2 + 1);
        iVar5 = 0;
        puVar1 = (ushort *)((long)param_2 + 6);
        param_2 = (int *)(lVar9 + uVar7 * 0xc);
        iVar6 = *puVar1 - 1;
        do {
          while( true ) {
            iVar2 = iVar6 - iVar5;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar5 + (iVar2 >> 1);
            puVar8 = (uint *)(param_2 + (long)iVar2 * 3);
            if (*param_3 < *puVar8) break;
            if (*param_3 <= *puVar8) {
              if (param_4 + -1 == 0) {
                param_6 = param_6 & 0xffffffff;
                FUN_02ea85cc(puVar8,param_5);
                if (*param_2 != 0) {
                  return;
                }
                goto LAB_02ea89d4;
              }
              FUN_02ea8874(param_1,puVar8,param_3 + 1,param_4 + -1,param_5,param_6,0);
              iVar5 = *param_2;
              param_6 = param_6 & 0xffffffff;
              goto joined_r0x02ea8a64;
            }
            iVar5 = iVar2 + 1;
            if (iVar6 < iVar5) goto LAB_02ea8ac4;
          }
          iVar6 = iVar2 + -1;
        } while (iVar5 <= iVar6);
LAB_02ea8ac4:
        iVar5 = *param_2;
joined_r0x02ea8a64:
        if (iVar5 != 0) {
          return;
        }
LAB_02ea89d4:
        if (*param_3 == 0) {
          return;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_02ea8ad0;
        lVar9 = *(long *)(param_1 + 8);
        param_3 = param_3 + 1;
      } while (lVar9 != 0);
    }
    else {
      do {
        uVar7 = (ulong)*(ushort *)(param_2 + 1);
        iVar5 = 0;
        puVar1 = (ushort *)((long)param_2 + 6);
        param_2 = (int *)(lVar9 + uVar7 * 0xc);
        iVar6 = *puVar1 - 1;
        do {
          iVar2 = iVar6 - iVar5;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar5 + (iVar2 >> 1);
          puVar8 = (uint *)(param_2 + (long)iVar2 * 3);
          if (*param_3 < *puVar8) {
            iVar6 = iVar2 + -1;
          }
          else {
            if (*param_3 <= *puVar8) {
              if (param_4 + -1 == 0) {
                uVar3 = (*param_7)(uVar4 & 0xffffffff,puVar8[1],param_8);
                param_6 = uVar4 & 0xffffffff;
                if ((uVar3 & 1) == 0) break;
                FUN_02ea85cc(puVar8,param_5);
                uVar4 = uVar4 & 0xffffffff;
              }
              else {
                FUN_02ea8874(param_1,puVar8,param_3 + 1,param_4 + -1,param_5);
              }
              param_6 = uVar4 & 0xffffffff;
              break;
            }
            iVar5 = iVar2 + 1;
          }
          param_6 = uVar4;
        } while (iVar5 <= iVar6);
        if (*param_2 != 0) {
          return;
        }
        if (*param_3 == 0) {
          return;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) {
LAB_02ea8ad0:
          if ((param_7 == (code *)0x0) ||
             (uVar4 = (*param_7)(param_6 & 0xffffffff,*(undefined4 *)(lVar9 + uVar7 * 0xc + 4),
                                 param_8), (uVar4 & 1) != 0)) {
            FUN_02ea85cc(param_2,param_5);
            return;
          }
          return;
        }
        lVar9 = *(long *)(param_1 + 8);
        param_3 = param_3 + 1;
        uVar4 = param_6;
      } while (lVar9 != 0);
    }
  }
  return;
}


