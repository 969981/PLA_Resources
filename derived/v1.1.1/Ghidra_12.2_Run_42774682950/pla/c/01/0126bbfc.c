/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126bbfc; name: FUN_0126bbfc
 */


void FUN_0126bbfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x90;
  FUN_01232f94(lVar2);
  lVar1 = FUN_01233404(lVar2,3,4);
  *(undefined1 *)(param_1 + 0x1a1) = *(undefined1 *)(lVar1 + 0x34);
  lVar1 = FUN_01233404(lVar2,3,4);
  *(undefined1 *)(param_1 + 0x1a2) = *(undefined1 *)(lVar1 + 0x35);
  lVar2 = FUN_01233404(lVar2,3,4);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar2 + 0x38);
  return;
}


