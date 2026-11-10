/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d5e60; name: FUN_029d5e60
 */


void FUN_029d5e60(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*(byte *)(param_3 + 0x7d);
  if ((uVar4 < 0x1e) && (*(char *)(param_4 + uVar4 * 8 + 4) != '\0')) {
    uVar3 = FUN_02991460(*(undefined8 *)(param_1 + 0x38),param_3);
    if ((uVar3 & 1) == 0) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x48,
                   *(undefined1 *)(param_3 + 0x7d),0xffff0000);
    }
  }
  else {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa8,
                 *(undefined1 *)(param_2 + 0x7d),uVar4);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar1);
  if (((uVar3 & 1) != 0) ||
     (uVar2 = FUN_02957720(*(undefined8 *)(lVar1 + 0x188),9,uVar4,0,0), (int)uVar2 < 0)) {
    return;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 < 10) {
    *(undefined1 *)
     (*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x188) + (ulong)uVar2 + 0x10) = 1;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x6d,(ulong)uVar2,9);
  return;
}


