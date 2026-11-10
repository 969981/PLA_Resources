/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcdf00; name: FUN_02bcdf00
 */


void FUN_02bcdf00(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = tpidr_el0;
  uVar2 = *param_1;
  *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(param_1 + 1);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return;
}


