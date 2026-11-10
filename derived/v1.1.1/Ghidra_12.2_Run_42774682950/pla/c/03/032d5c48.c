/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5c48; name: FUN_032d5c48
 */


void FUN_032d5c48(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar2 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((*(ulong *)(param_2 + 0x10) < uVar2) ||
     (*(ulong *)(param_2 + 8) = uVar2, puVar1 == (undefined8 *)0x0)) {
    return;
  }
  *puVar1 = param_3;
  *(undefined4 *)(puVar1 + 1) = param_1;
  return;
}


