/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8c34; name: FUN_02ea8c34
 */


uint * FUN_02ea8c34(long param_1,long param_2,uint *param_3,int param_4,undefined4 param_5,
                   code *param_6,undefined8 param_7)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    puVar7 = (uint *)(lVar8 + (ulong)uVar1 * 0xc);
    iVar5 = 0;
    iVar6 = *(ushort *)(param_2 + 6) - 1;
    do {
      iVar2 = iVar6 - iVar5;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar5 + (iVar2 >> 1);
      puVar3 = puVar7 + (long)iVar2 * 3;
      if (*param_3 < *puVar3) {
        iVar6 = iVar2 + -1;
      }
      else {
        if (*param_3 <= *puVar3) {
          if (param_4 + -1 == 0) {
            if (param_6 == (code *)0x0) {
              return puVar3;
            }
            uVar4 = (*param_6)(param_5,puVar3[1],param_7,0);
            if ((uVar4 & 1) == 0) {
              puVar3 = (uint *)0x0;
            }
            return puVar3;
          }
          puVar3 = (uint *)FUN_02ea8c34(param_1,puVar3,param_3 + 1,param_4 + -1,param_5,param_6,
                                        param_7);
          if (puVar3 != (uint *)0x0) {
            return puVar3;
          }
          break;
        }
        iVar5 = iVar2 + 1;
      }
    } while (iVar5 <= iVar6);
    if ((*puVar7 == 0) && (*param_3 != 0)) {
      if (param_4 + -1 == 0) {
        if (param_6 == (code *)0x0) {
          return puVar7;
        }
        uVar4 = (*param_6)(param_5,*(undefined4 *)(lVar8 + (ulong)uVar1 * 0xc + 4),param_7,0);
        if ((uVar4 & 1) == 0) {
          puVar7 = (uint *)0x0;
        }
        return puVar7;
      }
      puVar7 = (uint *)FUN_02ea8c34(param_1,puVar7,param_3 + 1,param_4 + -1,param_5,param_6,param_7)
      ;
      if (puVar7 != (uint *)0x0) {
        return puVar7;
      }
    }
  }
  return (uint *)0x0;
}


