/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f32fe0; name: FUN_02f32fe0
 */


undefined8
FUN_02f32fe0(undefined2 *param_1,byte *param_2,uint param_3,uint param_4,short param_5,short param_6
            ,uint param_7)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (int)param_5;
  iVar4 = (int)param_6;
  param_7 = param_7 & 0xff;
  uVar5 = param_3 >> 1;
  if (uVar5 != 0) {
    pbVar3 = param_2;
    do {
      param_2 = pbVar3 + 1;
      lVar1 = (long)(int)(*pbVar3 & 0xf | param_7 << 4) * 8;
      iVar2 = *(int *)(&DAT_03aa0d88 + lVar1) + (iVar4 * 2 - iVar6);
      lVar1 = (long)(int)((uint)(*pbVar3 >> 4) | *(int *)(&DAT_03aa0d8c + lVar1) << 4) * 8;
      iVar6 = 0x7fff;
      if (iVar2 < 0) {
        iVar6 = -0x8000;
      }
      param_7 = *(uint *)(&DAT_03aa0d8c + lVar1);
      if (iVar2 == (short)iVar2) {
        iVar6 = iVar2;
      }
      iVar2 = (iVar6 * 2 - iVar4) + *(int *)(&DAT_03aa0d88 + lVar1);
      iVar4 = 0x7fff;
      if (iVar2 < 0) {
        iVar4 = -0x8000;
      }
      if (iVar2 == (short)iVar2) {
        iVar4 = iVar2;
      }
      *param_1 = (short)iVar6;
      param_1[param_4] = (short)iVar4;
      uVar5 = uVar5 - 1;
      param_1 = param_1 + (ulong)param_4 * 2;
      pbVar3 = param_2;
    } while (uVar5 != 0);
  }
  if ((param_3 & 1) == 0) {
    return 1;
  }
  iVar6 = *(int *)(&DAT_03aa0d88 +
                  (-(ulong)((param_7 & 0xfffffff) >> 0x1b) & 0xfffffff800000000 |
                  (ulong)(*param_2 & 0xf | param_7 << 4) << 3)) + (iVar4 * 2 - iVar6);
  iVar4 = 0x7fff;
  if (iVar6 < 0) {
    iVar4 = 0x8000;
  }
  if (iVar6 == (short)iVar6) {
    iVar4 = iVar6;
  }
  *param_1 = (short)iVar4;
  return 1;
}


