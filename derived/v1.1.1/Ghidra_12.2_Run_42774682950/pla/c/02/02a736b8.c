/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a736b8; name: FUN_02a736b8
 */


undefined1  [16] FUN_02a736b8(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_02a73734();
  lVar1 = *(long *)(param_1 + 600);
  FUN_0021e444(lVar1 + 0x80,*(long *)(*(long *)(lVar1 + 0x78) + 0x58) + 0x3010,
               *(undefined8 *)(lVar1 + 0x58),0,0,0);
  FUN_0021e920(lVar1 + 0x80,&LAB_02a74054,lVar1);
  auVar2._8_8_ = auVar2._8_8_ & 0xffffffff;
  return auVar2;
}


