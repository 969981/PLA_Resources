/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00633910; name: FUN_00633910
 */


void FUN_00633910(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar2[1] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x18);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x18);
    plVar2[1] = param_1;
  }
  puVar1 = PTR_DAT_04375658;
  *(undefined4 *)((long)plVar2 + 0x14) = 0;
  *(undefined2 *)(plVar2 + 2) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)plVar2 + 0x12) = 0;
  return;
}


