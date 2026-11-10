/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee2b44; name: FUN_02ee2b44
 */


void FUN_02ee2b44(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_3 != 0) {
    uVar9 = 0;
    plVar4 = param_1;
    do {
      uVar10 = 1L << (uVar9 & 0x3f);
      iVar8 = (int)uVar9;
      if ((uVar10 & param_3) != 0) {
        uVar2 = *(uint *)(param_1 + 4);
        if (uVar2 != 0) {
          uVar1 = iVar8 + (int)param_2;
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (plVar7 = *(long **)(param_1[3] + (ulong)(uVar1 - uVar3 * uVar2) * 8);
              plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
            if ((*plVar7 == param_2) && ((int)plVar7[1] == iVar8)) {
              uVar9 = (ulong)*(uint *)(plVar7 + 0xb);
              if (*(uint *)(plVar7 + 0xb) != 0) {
                lVar5 = plVar7[10];
                lVar11 = lVar5;
                do {
                  uVar2 = *(uint *)(param_1 + 1);
                  if (uVar2 != 0) {
                    uVar1 = *(uint *)(lVar11 + 4);
                    uVar3 = 0;
                    if (uVar2 != 0) {
                      uVar3 = uVar1 / uVar2;
                    }
                    for (puVar6 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8);
                        puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 2)) {
                      if (*puVar6 == uVar1) {
                        plVar4 = (long *)FUN_02edf4cc(plVar4,plVar7,puVar6 + 0x12,puVar6 + 0x16);
                        lVar5 = plVar7[10];
                        uVar9 = (ulong)*(uint *)(plVar7 + 0xb);
                        break;
                      }
                    }
                  }
                  lVar11 = lVar11 + 0x20;
                } while (lVar11 != lVar5 + uVar9 * 0x20);
              }
              break;
            }
          }
        }
        param_3 = param_3 & (uVar10 ^ 0xffffffffffffffff);
      }
      uVar9 = (ulong)(iVar8 + 1);
    } while (param_3 != 0);
  }
  return;
}


