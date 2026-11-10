/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d81fc; name: FUN_027d81fc
 */


void FUN_027d81fc(undefined4 *param_1,ushort *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *param_2;
  uVar4 = 0xffffff80;
  if (0xff < uVar2) {
    uVar4 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar4;
  }
  lVar3 = FUN_02761670(uVar1);
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar3)) {
    *param_1 = 0xd;
    return;
  }
  FUN_02761f78(param_1,param_2,param_3);
  return;
}


