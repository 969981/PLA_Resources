/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087d828; name: FUN_0087d828
 */


void FUN_0087d828(undefined1 *param_1)

{
  long lVar1;
  
  (**(code **)PTR_DAT_043788f8)(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x100) != 0) {
      (**(code **)PTR_DAT_04378640)(lVar1);
      free(*(void **)(lVar1 + 0x100));
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0;
    }
    if (*(void **)(lVar1 + 0x110) != (void *)0x0) {
      free(*(void **)(lVar1 + 0x110));
      *(undefined8 *)(lVar1 + 0x110) = 0;
    }
    *(undefined8 *)(lVar1 + 0x188) = 0;
    free(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *param_1 = 0;
  return;
}


