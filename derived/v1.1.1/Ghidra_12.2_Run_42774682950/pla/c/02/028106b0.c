/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028106b0; name: FUN_028106b0
 */


void FUN_028106b0(long param_1)

{
  long *plVar1;
  
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined1 **)(param_1 + 0x218) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x220) = &DAT_03996322;
  plVar1 = *(long **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x211) = 1;
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (**(char **)(param_1 + 0x138) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0281072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x60))(*(long **)(param_1 + 0xe8),param_1 + 0x130);
  return;
}


