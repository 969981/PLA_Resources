/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0bbd4; name: FUN_02c0bbd4
 */


void FUN_02c0bbd4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_18 [8];
  
  lVar1 = FUN_00d82b2c(*(long *)(param_1 + 0x200) + 0xf0,auStack_18);
  if (lVar1 != 0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    *(undefined1 *)(lVar1 + 0x260) = 1;
    *(undefined8 *)(lVar1 + 600) = uVar3;
    *(undefined8 *)(lVar1 + 0x250) = uVar2;
  }
  return;
}


