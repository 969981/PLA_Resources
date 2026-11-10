/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006593f4; name: FUN_006593f4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006593f4(long param_1)

{
  byte bVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa8);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8),
               *(ulong *)(param_1 + 200) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0xa8);
  }
  if ((bVar1 & 1) == 0) {
    FUN_006d9cd8(param_1 + 0xa0);
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))
              (*(long **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8),
               *(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffe,1);
    FUN_006d9cd8(param_1 + 0xa0);
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),
               *(ulong *)(param_1 + 0x80) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  if ((bVar1 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0x28);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
               *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe,1);
    cVar2 = *(char *)(param_1 + 0x28);
  }
  if (cVar2 != '\0') {
    FUN_02767254(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00659500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


