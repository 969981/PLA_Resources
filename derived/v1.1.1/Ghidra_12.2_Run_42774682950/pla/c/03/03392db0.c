/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03392db0; name: FUN_03392db0
 */


undefined1  [16] FUN_03392db0(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_1 + 0x218) != 0) {
    param_2 = FUN_033763f4(*(long *)(param_1 + 0x218),param_2,0);
  }
  lVar1 = param_1 + 0x200;
  iVar2 = FUN_03396ae4(lVar1,param_2);
  FUN_033784ac(lVar1,iVar2);
  FUN_033963e4(lVar1,param_3);
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
  }
  uVar3 = FUN_032e35d8(param_2);
  *(uint *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 0x18 + 4) = uVar3 & 0x1f;
  auVar4._8_4_ = iVar2;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}


