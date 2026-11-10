/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6cd8; name: FUN_02ec6cd8
 */


void FUN_02ec6cd8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    lVar2 = param_1[1];
    iVar1 = *(int *)(lVar2 + 0x8c) + 1;
    *(int *)(lVar2 + 0x8c) = iVar1;
    if (((*(int *)(lVar2 + 0x7c) != 3) && (*(int *)(lVar2 + 0x84) <= iVar1)) &&
       (*(long *)(lVar2 + 0x60) != 0)) {
      *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(*(long *)(lVar2 + 0x60) + 0xc);
      *(undefined8 *)(lVar2 + 0x60) = 0;
    }
  }
  return;
}


