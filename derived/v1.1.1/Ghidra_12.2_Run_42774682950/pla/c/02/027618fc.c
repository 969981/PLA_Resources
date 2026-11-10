/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027618fc; name: FUN_027618fc
 */


long FUN_027618fc(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar6 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar6 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar6;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  lVar3 = FUN_02761670(uVar1);
  iVar5 = (int)*(char *)(param_1 + 0x20);
  if (iVar5 < 0) {
    iVar5 = -0x80;
  }
  lVar4 = FUN_02761670(iVar5);
  return lVar3 + lVar4 + 0x1c;
}


