/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5bc0; name: FUN_032d5bc0
 */


void FUN_032d5bc0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar3 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_1 + 0x10)) &&
     (*(ulong *)(param_1 + 8) = uVar3, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_2;
    uVar2 = nn::os::GetSystemTick();
    puVar1[1] = uVar2;
  }
  return;
}


