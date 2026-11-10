/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309d080; name: FUN_0309d080
 */


void FUN_0309d080(long *param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  iVar4 = (int)param_4[1];
  if (0 < iVar4) {
    lVar8 = 0;
    iVar3 = 0x7fffffff;
    do {
      piVar6 = (int *)(*param_4 + lVar8 * 0xc);
      iVar1 = *piVar6;
      iVar9 = piVar6[1];
      if (iVar1 < iVar9) {
        iVar9 = iVar9 - iVar1;
        lVar7 = (long)iVar1 * 0xc + 4;
        do {
          uVar5 = (ulong)*(uint *)(*param_1 + lVar7);
          if (((((*(byte *)(param_3 + uVar5 * 0x68 + 0x42) >> 2 & 1) == 0) ||
               ((~*(uint *)(param_3 + uVar5 * 0x68 + 8) & 0xffffff) != 0)) ||
              ((~*(uint *)(param_3 + uVar5 * 0x68 + 0x18) & 0xffffff) != 0)) &&
             (iVar4 = *(int *)(param_3 + uVar5 * 0x68 + 0x34), iVar4 != iVar3 && iVar4 != 0x7fffffff
             )) {
            lVar2 = FUN_030053a4(*(undefined8 *)(param_2 + 0x488),iVar4);
            uVar5 = FUN_03004298(param_2,lVar2);
            iVar3 = iVar4;
            if ((uVar5 & 1) == 0) {
              FUN_030040bc(param_2,lVar2,*(undefined1 *)(lVar2 + 0x21));
            }
          }
          iVar9 = iVar9 + -1;
          lVar7 = lVar7 + 0xc;
        } while (iVar9 != 0);
        iVar4 = (int)param_4[1];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  return;
}


