/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff6a84; name: FUN_02ff6a84
 */


void FUN_02ff6a84(long param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    FUN_02ff6c8c(param_1,param_1 + 0x90,param_1 + 0xb0);
  }
  lVar12 = 0;
  plVar1 = (long *)(param_1 + 0x48);
  do {
    lVar6 = *(long *)((long)plVar1 + lVar12);
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar6 + (long)plVar1 + lVar12;
    }
    lVar6 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x48))(lVar2);
    if (lVar6 != 0) {
      if (lVar12 != 0) {
        if (*plVar1 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar1 + (long)plVar1;
        }
        bVar3 = lVar2 == lVar6;
        if (lVar12 != 8) {
          lVar5 = *(long *)(param_1 + 0x50);
          if (lVar5 != 0) {
            lVar5 = lVar5 + param_1 + 0x50;
          }
          bVar3 = lVar2 == lVar6 || lVar2 == lVar5;
          if (lVar12 != 0x10) {
            lVar7 = *(long *)(param_1 + 0x58);
            if (lVar7 != 0) {
              lVar7 = lVar7 + param_1 + 0x58;
            }
            bVar3 = bVar3 || lVar2 == lVar7;
            if (lVar12 != 0x18) {
              lVar8 = *(long *)(param_1 + 0x60);
              if (lVar8 != 0) {
                lVar8 = lVar8 + param_1 + 0x60;
              }
              bVar3 = bVar3 || lVar2 == lVar8;
              if (lVar12 != 0x20) {
                lVar9 = *(long *)(param_1 + 0x68);
                if (lVar9 == 0) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = lVar9 + param_1 + 0x68;
                }
                bVar3 = bVar3 || lVar2 == lVar9;
                if (lVar12 != 0x28) {
                  lVar10 = *(long *)(param_1 + 0x70);
                  if (lVar10 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = lVar10 + param_1 + 0x70;
                  }
                  bVar3 = bVar3 || lVar2 == lVar10;
                  if (lVar12 != 0x30) {
                    lVar11 = *(long *)(param_1 + 0x78);
                    if (lVar11 == 0) {
                      lVar11 = 0;
                    }
                    else {
                      lVar11 = lVar11 + param_1 + 0x78;
                    }
                    if ((((((lVar2 == lVar6 || lVar2 == lVar5) || lVar2 == lVar7) || lVar2 == lVar8)
                         || lVar2 == lVar9) || lVar2 == lVar10) || lVar2 == lVar11)
                    goto LAB_02ff6b0c;
                    goto LAB_02ff6ae4;
                  }
                }
              }
            }
          }
        }
        if (bVar3) goto LAB_02ff6b0c;
      }
LAB_02ff6ae4:
      uVar4 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x48))(lVar2);
      FUN_02ff73bc(uVar4,param_1,&LAB_02ff7494,0);
    }
LAB_02ff6b0c:
    lVar12 = lVar12 + 8;
    if (lVar12 == 0x40) {
      return;
    }
  } while( true );
}


