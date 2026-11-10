/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6564c; name: FUN_02e6564c
 */


long * FUN_02e6564c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(*DAT_0442d138)(7,0x38);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_02e656e8(plVar2,param_1,param_2,param_3), iVar1 != 1))
  {
    if (((*(byte *)((long)plVar2 + 0x34) & 1) != 0) && (*plVar2 != 0)) {
      (*DAT_0442d150)(7);
    }
    (*DAT_0442d150)(7,plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


