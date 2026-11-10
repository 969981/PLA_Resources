/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111dfe4; name: FUN_0111dfe4
 */


undefined8 FUN_0111dfe4(long param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined1 auStack_50 [16];
  
  FUN_02c4fb44(auStack_50);
  uVar2 = FUN_02c4fc60(auStack_50,0xe);
  if ((int)uVar2 == 0) {
    if (5 < param_4) {
      return uVar2;
    }
    if (0x1d < param_5) {
      return uVar2;
    }
    uVar4 = (ulong)(param_5 + param_4 * 0x1e);
    puVar5 = (ushort *)(param_1 + uVar4 * 4 + 0x68);
    uVar3 = (uint)*puVar5;
    if (uVar3 == param_2) {
      puVar5 = (ushort *)(param_1 + uVar4 * 4 + 0x6a);
      uVar3 = (uint)*puVar5 + param_3;
      if (uVar3 < 999) {
        *puVar5 = (ushort)uVar3;
        return 1;
      }
    }
    else if ((uVar3 == 0) && (iVar1 = FUN_0111d778(param_1,param_2), iVar1 == 0)) {
      *puVar5 = (ushort)param_2;
      *(short *)(param_1 + uVar4 * 4 + 0x6a) = (short)param_3;
      param_1 = param_1 + (ulong)(param_2 >> 3);
      *(byte *)(param_1 + 0x434) = *(byte *)(param_1 + 0x434) | (byte)(1 << (ulong)(param_2 & 7));
      return 1;
    }
  }
  return 0;
}


