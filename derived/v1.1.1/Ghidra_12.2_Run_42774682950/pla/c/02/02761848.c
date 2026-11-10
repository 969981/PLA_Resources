/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761848; name: FUN_02761848
 */


long FUN_02761848(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar5 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar5 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar5;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  lVar3 = FUN_02761670(uVar1);
  uVar2 = param_1[1];
  uVar5 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar5 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar5;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  lVar4 = FUN_02761670(uVar1);
  return lVar4 + lVar3;
}


