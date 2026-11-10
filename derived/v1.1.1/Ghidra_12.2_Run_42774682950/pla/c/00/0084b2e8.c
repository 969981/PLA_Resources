/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084b2e8; name: FUN_0084b2e8
 */


void FUN_0084b2e8(long *param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  
  param_1[0x9a] = param_2;
  param_1[0x9b] = param_3;
  param_1[1] = param_4;
  *(undefined1 *)(param_1 + 2) = param_5;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    sVar2 = *(short *)(*(long *)PTR_DAT_043773c0 + 0x50);
    uVar3 = (**(code **)(*param_1 + 0x38))();
    *(ushort *)(param_1 + 0x9c) =
         (((short)uVar1 + sVar2 * -2) - ((ushort)((uVar3 & 0xff) + 0x1f >> 3) & 0x3c)) + -0x33;
  }
  return;
}


