/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8c6c0; name: FUN_02b8c6c0
 */


undefined8 FUN_02b8c6c0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *(long *)PTR_DAT_04388100;
  lVar1 = *(long *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_02b8cb8c(lVar2 + 0x18);
  }
  (*DAT_043f0050)(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 0x6038);
  for (plVar3 = *(long **)(param_1 + 0x6030); plVar3 != plVar4; plVar3 = plVar3 + 4) {
    lVar1 = *plVar3;
    if (*(long *)(lVar1 + 0x180) != 0) {
      (*DAT_043f0288)(lVar1);
      nn::vi::DestroyLayer(*(Layer **)(lVar1 + 0x188));
    }
  }
  return 1;
}


