/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027617c0; name: FUN_027617c0
 */


long FUN_027617c0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = FUN_02761804();
  uVar2 = *(ushort *)(param_1 + 10);
  uVar5 = 0xffffff80;
  if (0xff < uVar2) {
    uVar5 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar5;
  }
  lVar4 = FUN_02761670(uVar1);
  return lVar4 + lVar3;
}


