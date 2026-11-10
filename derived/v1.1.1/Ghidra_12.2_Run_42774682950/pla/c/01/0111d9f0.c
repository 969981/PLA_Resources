/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111d9f0; name: FUN_0111d9f0
 */


undefined8 FUN_0111d9f0(long param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auStack_50 [16];
  
  FUN_02c4fb44(auStack_50);
  iVar1 = FUN_02c4fc60(auStack_50,0xe);
  if (((iVar1 == 0) && (param_4 < 6)) && (param_5 < 0x1e)) {
    uVar2 = (ulong)(param_5 + param_4 * 0x1e);
    uVar3 = (uint)*(ushort *)(param_1 + uVar2 * 4 + 0x68);
    if (uVar3 == param_2) {
      if ((uint)*(ushort *)(param_1 + uVar2 * 4 + 0x6a) + param_3 < 999) {
        return 1;
      }
    }
    else if ((uVar3 == 0) && (iVar1 = FUN_0111d778(param_1,param_2), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}


