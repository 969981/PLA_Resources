/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb7db8; name: FUN_02eb7db8
 */


void FUN_02eb7db8(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,int param_6
                 )

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_3 + 0x18);
  if (uVar3 == 0) {
    return;
  }
  uVar4 = 0;
  iVar2 = 0;
  param_1 = param_1 + 0x10;
  do {
    lVar5 = (ulong)*(uint *)(param_3 + 0x14) * 0x20;
    uVar1 = *(uint *)(param_1 + lVar5);
    if (param_5 <= uVar1 && uVar1 < param_6 + param_5) {
      *(undefined4 *)(param_1 + lVar5) = 0;
      uVar3 = *(uint *)(param_3 + 0x18);
      iVar2 = iVar2 + 1;
    }
    uVar4 = uVar4 + 1;
    param_1 = param_1 + 0x20;
  } while (uVar4 < uVar3);
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + iVar2;
  *(uint *)(param_3 + 0x18) = uVar3 - iVar2;
  *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + iVar2;
  return;
}


