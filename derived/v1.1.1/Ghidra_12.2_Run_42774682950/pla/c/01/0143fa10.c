/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143fa10; name: FUN_0143fa10
 */


undefined8 FUN_0143fa10(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_0115b058(*(undefined8 *)(param_1 + 0x5f0),1);
  plVar2 = *(long **)(param_1 + 0x5b8);
  for (plVar3 = *(long **)(param_1 + 0x5b0); plVar3 != plVar2; plVar3 = plVar3 + 1) {
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      FUN_01432000(*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x88),
                   *(undefined8 *)(lVar1 + 0x90));
    }
  }
  return 0;
}


