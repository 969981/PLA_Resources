/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d224; name: FUN_0333d224
 */


void FUN_0333d224(void *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (long)param_1 + 0x128;
  memset(param_1,0,0x128);
  FUN_032cf788(lVar1);
  *(undefined1 *)((long)param_1 + 0x1c0) = 0;
  *(undefined8 *)((long)param_1 + 0x1b0) = 0;
  *(undefined8 *)((long)param_1 + 0x1b8) = 0;
  *(undefined8 *)((long)param_1 + 0x1a0) = 0;
  *(undefined8 *)((long)param_1 + 0x1a8) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x1d0) = 0;
  FUN_032c8e50(1);
  if (param_2 == 0) {
    *(undefined1 *)((long)param_1 + 0x1d0) = 1;
    plVar2 = (long *)FUN_032d49a4();
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,3);
    param_2 = lVar1;
  }
  *(long *)((long)param_1 + 8) = param_2;
  *(long *)((long)param_1 + 0x10) = (long)param_1 + 0x1a0;
  *(undefined1 *)((long)param_1 + 0x1c0) = 0;
  FUN_032d5e24();
  return;
}


