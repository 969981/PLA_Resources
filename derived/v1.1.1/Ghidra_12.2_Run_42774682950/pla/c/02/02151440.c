/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02151440; name: FUN_02151440
 */


undefined8 FUN_02151440(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_001511d0(param_1,1);
  lVar1 = *(long *)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7));
  plVar2 = *(long **)(lVar1 + 0x98);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = *(long **)(lVar1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  return 0;
}


