/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01116b38; name: FUN_01116b38
 */


ulong FUN_01116b38(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_01117990();
  if (((uVar1 & 0xff) == 0) && (plVar2 = *(long **)(param_1 + 0x60), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
  }
  return uVar1 >> 0x20;
}


