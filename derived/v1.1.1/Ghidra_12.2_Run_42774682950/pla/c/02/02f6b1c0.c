/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6b1c0; name: FUN_02f6b1c0
 */


void FUN_02f6b1c0(long *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  puVar3 = PTR_PTR_0434a080;
  if (0 < param_3) {
    lVar11 = param_1[2];
    uVar9 = *param_2;
    plVar4 = *(long **)(*param_1 + 8);
    if (((plVar4 == (long *)0x0) ||
        (uVar5 = (**(code **)(*plVar4 + 0x30))
                           (plVar4,6,*param_1 + 0x10,lVar11 + (ulong)uVar9 * 0xc0), (uVar5 & 1) != 0
        )) && (uVar9 = *(uint *)(lVar11 + (ulong)uVar9 * 0xc0 + 0x50), (~uVar9 & 0xffffff) != 0)) {
      plVar4 = (long *)param_1[1];
      iVar6 = (int)plVar4[1];
      puVar8 = (uint *)((long)plVar4 + 0xc);
      uVar10 = *puVar8;
      uVar1 = iVar6 + 1;
      if (iVar6 < (int)(uVar10 & 0x3fffffff)) {
        lVar11 = *plVar4;
      }
      else {
        lVar11 = *plVar4;
        if (0x3ffffffe < iVar6) {
          FUN_032bd0a8(uVar1);
          uVar10 = *puVar8;
        }
        uVar10 = (uVar10 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar10) {
          uVar10 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar10) {
          uVar2 = uVar10;
        }
        lVar11 = FUN_032bd1d4(puVar3,uVar2,4,lVar11,iVar6,puVar8);
        iVar6 = (int)plVar4[1];
        *plVar4 = lVar11;
      }
      *(uint *)(lVar11 + (long)iVar6 * 4) = uVar9;
      *(uint *)(plVar4 + 1) = uVar1;
    }
    if (param_3 != 1) {
      iVar6 = 1;
      do {
        lVar11 = param_1[2];
        switch(iVar6) {
        case 0:
          uVar9 = *param_2;
          break;
        case 1:
          uVar9 = param_2[1];
          break;
        case 2:
          uVar9 = param_2[2];
          break;
        case 3:
          uVar9 = param_2[3];
          break;
        default:
          uVar9 = 0;
        }
        plVar4 = *(long **)(*param_1 + 8);
        if (((plVar4 == (long *)0x0) ||
            (uVar5 = (**(code **)(*plVar4 + 0x30))
                               (plVar4,6,*param_1 + 0x10,lVar11 + (ulong)uVar9 * 0xc0),
            (uVar5 & 1) != 0)) &&
           (uVar9 = *(uint *)(lVar11 + (ulong)uVar9 * 0xc0 + 0x50), (~uVar9 & 0xffffff) != 0)) {
          plVar4 = (long *)param_1[1];
          iVar7 = (int)plVar4[1];
          uVar10 = *(uint *)((long)plVar4 + 0xc);
          uVar1 = iVar7 + 1;
          if (iVar7 < (int)(uVar10 & 0x3fffffff)) {
            lVar11 = *plVar4;
          }
          else {
            lVar11 = *plVar4;
            if (0x3ffffffe < iVar7) {
              FUN_032bd0a8(uVar1);
              uVar10 = *(uint *)((long)plVar4 + 0xc);
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar2 = uVar1;
            if ((int)uVar1 <= (int)uVar10) {
              uVar2 = uVar10;
            }
            lVar11 = FUN_032bd1d4(puVar3,uVar2,4,lVar11,iVar7);
            iVar7 = (int)plVar4[1];
            *plVar4 = lVar11;
          }
          *(uint *)(lVar11 + (long)iVar7 * 4) = uVar9;
          *(uint *)(plVar4 + 1) = uVar1;
        }
        iVar6 = iVar6 + 1;
      } while (param_3 != iVar6);
    }
  }
  return;
}


