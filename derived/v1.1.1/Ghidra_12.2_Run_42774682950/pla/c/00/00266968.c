/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00266968; name: FUN_00266968
 */


void FUN_00266968(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x150); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x80)) {
    *(undefined8 *)(lVar1 + 0x428) = param_2[1];
    *(undefined8 *)(lVar1 + 0x420) = *param_2;
  }
  return;
}


