/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d0a90; name: FUN_004d0a90
 */


undefined4 FUN_004d0a90(ulong *param_1,ulong *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  lVar1 = uVar3 - uVar4;
  if ((uVar4 <= uVar3 && lVar1 != 0) && (lVar1 < 0)) {
    return 0x80;
  }
  if (uVar3 < uVar4 && 0 < lVar1) {
    return 0xffffff80;
  }
  if (0x80 < lVar1) {
    return 0x80;
  }
  uVar2 = (undefined4)lVar1;
  if (lVar1 < -0x7f) {
    uVar2 = 0xffffff80;
  }
  return uVar2;
}


