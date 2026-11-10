/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016da60; name: FUN_0016da60
 */


void FUN_0016da60(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  if (0x7fffffffffffffd7 < param_2) {
    FUN_001615b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x16dab8);
    (*pcVar1)();
  }
  lVar2 = FUN_0015cc60(param_1,7,param_2 + 0x28);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(ulong *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = DAT_039c5c28;
  *(char *)(lVar2 + 10) = (char)(undefined4)DAT_039c5c30;
  return;
}


