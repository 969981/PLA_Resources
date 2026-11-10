/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028513bc; name: FUN_028513bc
 */


void FUN_028513bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_02c90b28(*(undefined8 *)(param_1 + 0xb8));
  if ((uVar2 & 1) != 0) {
    FUN_02c90b3c(*(undefined8 *)(param_1 + 0xb8));
  }
  lVar3 = *(long *)(param_1 + 0xb8);
  uVar1 = param_2[1];
  *(undefined8 *)(lVar3 + 0x230) = *param_2;
  *(undefined8 *)(lVar3 + 0x238) = uVar1;
  *(undefined1 *)(lVar3 + 0x260) = 1;
  return;
}


