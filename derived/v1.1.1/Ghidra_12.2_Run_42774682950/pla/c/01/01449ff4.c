/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01449ff4; name: FUN_01449ff4
 */


undefined8 * FUN_01449ff4(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar1 = *(undefined8 **)(*param_1 + 0x18);
    puVar3 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      puVar3 = puVar1 + -10;
      (**(code **)*puVar1)();
      uVar2 = FUN_0144ba90();
      if ((uVar2 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
    }
  }
  return puVar3;
}


