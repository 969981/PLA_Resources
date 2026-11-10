/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030410e0; name: FUN_030410e0
 */


void FUN_030410e0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar7 = (int)param_2;
    lVar4 = *(long *)(param_1 + (long)((int)(iVar7 + param_3) >> 1) * 8);
    uVar3 = (ulong)param_3;
    do {
      while( true ) {
        lVar5 = *(long *)(param_1 + (long)(int)param_2 * 8);
        param_2 = (ulong)(int)param_2;
        uVar1 = *(uint *)(lVar4 + 0x2c);
        if (*(uint *)(lVar5 + 0x2c) < uVar1) {
          do {
            lVar5 = *(long *)(param_1 + 8 + param_2 * 8);
            param_2 = param_2 + 1;
          } while (*(uint *)(lVar5 + 0x2c) < uVar1);
        }
        lVar6 = *(long *)(param_1 + (long)(int)uVar3 * 8);
        uVar3 = (ulong)(int)uVar3;
        if (uVar1 < *(uint *)(lVar6 + 0x2c)) {
          do {
            lVar6 = *(long *)(param_1 + -8 + uVar3 * 8);
            uVar3 = uVar3 - 1;
          } while (uVar1 < *(uint *)(lVar6 + 0x2c));
        }
        iVar2 = (int)uVar3;
        iVar8 = (int)param_2;
        if (iVar8 <= iVar2) break;
        if (iVar2 < iVar8) goto LAB_030411ac;
      }
      if (iVar2 != iVar8) {
        *(long *)(param_1 + uVar3 * 8) = lVar5;
        *(long *)(param_1 + param_2 * 8) = lVar6;
      }
      uVar3 = (ulong)(iVar2 - 1U);
      param_2 = (ulong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) <= (int)(iVar2 - 1U));
LAB_030411ac:
    if (iVar7 < (int)uVar3) {
      FUN_030410e0(param_1);
    }
    if ((int)param_3 <= (int)param_2) {
      return;
    }
  } while( true );
}


