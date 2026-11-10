/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb7cb8; name: FUN_02eb7cb8
 */


void FUN_02eb7cb8(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 2);
  if (((lVar3 != 0) && ((*(byte *)(param_2 + 8) >> 2 & 1) != 0)) &&
     (uVar2 = (ulong)*param_1, *param_1 != 0)) {
    lVar4 = 0;
    uVar5 = 1;
    while( true ) {
      uVar1 = *(uint *)(lVar3 + lVar4 + 4);
      if (param_3 <= uVar1 && uVar1 < param_4) {
        FUN_02edd3b8(DAT_0440a170,param_2);
        uVar2 = (ulong)*param_1;
      }
      if (uVar2 <= uVar5) break;
      lVar3 = *(long *)(param_1 + 2);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    }
  }
  return;
}


