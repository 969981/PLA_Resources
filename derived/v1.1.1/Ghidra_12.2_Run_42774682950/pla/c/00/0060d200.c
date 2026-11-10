/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060d200; name: FUN_0060d200
 */


void FUN_0060d200(undefined8 *param_1,undefined2 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (plVar2 != (long *)0x0) {
    *(undefined2 *)(plVar2 + 1) = param_2;
    *(undefined2 *)((long)plVar2 + 10) = 4;
    puVar1 = PTR_DAT_04375380;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
  }
  *param_1 = plVar2;
  return;
}


