/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7be30; name: FUN_02e7be30
 */


void FUN_02e7be30(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined1 local_38;
  
  for (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x40); plVar2 != (long *)0x0;
      plVar2 = (long *)*plVar2) {
    lVar1 = plVar2[2];
    *(undefined4 *)(lVar1 + 0x2f8) = 0xffffffff;
    local_38 = 0;
    local_40 = 0x400000000;
    FUN_02ecc3d4(lVar1,&local_40,1);
  }
  return;
}


