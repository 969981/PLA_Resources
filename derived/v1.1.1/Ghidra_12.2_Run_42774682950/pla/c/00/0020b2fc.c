/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b2fc; name: FUN_0020b2fc
 */


ulong FUN_0020b2fc(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0xfffffe0b;
  }
  else if ((*(byte *)(param_1 + 0x99c) & 1) == 0) {
    uVar3 = 0xfffffdf9;
  }
  else {
    uVar3 = FUN_0020c094(param_1,param_1 + 0x954,param_1 + 0x950,*(undefined1 *)(param_1 + 0x9ac),0,
                         param_3,*(undefined4 *)(param_1 + 0x95c));
    if ((-0x385 < (int)uVar3) && (lVar4 = FUN_00205cf4(param_1,param_2), uVar3 = 0, lVar4 != 0)) {
      uVar2 = FUN_0020c094(param_1,lVar4 + 0xc4,lVar4 + 0xc0,*(undefined1 *)(lVar4 + 0xe7),
                           *(undefined4 *)(lVar4 + 0xb8),param_3,*(undefined4 *)(lVar4 + 0xcc));
      uVar1 = 0;
      if ((int)uVar2 < -900) {
        uVar1 = uVar2;
      }
      uVar3 = (ulong)uVar1;
    }
  }
  return uVar3;
}


