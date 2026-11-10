/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010e590; name: FUN_0010e590
 */


byte * FUN_0010e590(byte *param_1,byte *param_2,long *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  long in_x10;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if (param_2 + -1 <= param_1) {
    *param_3 = in_x10;
    return (byte *)0x0;
  }
  uVar4 = 1L << ((ulong)param_4 & 0x3f);
  pbVar3 = param_1 + 2;
  uVar1 = (ulong)CONCAT11(*param_1,param_1[1]);
  lVar5 = uVar1 - uVar4;
  if (uVar1 < uVar4) {
    if (pbVar3 < param_2) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        pbVar7 = pbVar3 + 1;
        lVar2 = (ulong)*pbVar3 - (1L << ((ulong)param_5 & 0x3f));
        if (-1 < lVar2) {
          lVar5 = (lVar2 << (uVar6 & 0x3f)) + lVar5;
          pbVar3 = pbVar3 + 1;
          goto LAB_0010e63c;
        }
        lVar5 = (lVar2 + 0x100 << (uVar6 & 0x3f)) + lVar5;
        uVar6 = (ulong)((int)uVar6 + param_5);
        pbVar3 = pbVar7;
      } while (pbVar7 < param_2);
    }
    lVar5 = 0;
    pbVar3 = (byte *)0x0;
LAB_0010e63c:
    lVar5 = (0x10000 - uVar4) + uVar1 + (lVar5 << ((ulong)param_4 & 0x3f));
  }
  *param_3 = lVar5;
  return pbVar3;
}


