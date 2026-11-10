/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcde80; name: FUN_02bcde80
 */


void FUN_02bcde80(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x20) == 0) {
    *(undefined8 *)(lVar2 + 0x20) = DAT_043f1798;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *param_1 = *(undefined8 *)(lVar2 + 0x20);
  param_1[1] = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined1 *)(lVar2 + 0x28) = 1;
  *(byte *)(lVar2 + 0x29) = param_3 & 1;
  return;
}


