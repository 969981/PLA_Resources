/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01851e44; name: FUN_01851e44
 */


bool FUN_01851e44(long param_1)

{
  bool bVar1;
  
  FUN_018513ac();
  if (((((*(long *)(*(long *)(param_1 + 0x70) + 0x10) == 0) &&
        (*(long *)(*(long *)(param_1 + 0x170) + 0x10) == 0)) &&
       (*(long *)(*(long *)(param_1 + 0x90) + 0x10) == 0)) &&
      (((*(long *)(*(long *)(param_1 + 400) + 0x10) == 0 &&
        (*(long *)(*(long *)(param_1 + 0xb0) + 0x10) == 0)) &&
       ((*(long *)(*(long *)(param_1 + 0x1b0) + 0x10) == 0 &&
        ((*(long *)(*(long *)(param_1 + 0xd0) + 0x10) == 0 &&
         (*(long *)(*(long *)(param_1 + 0x1d0) + 0x10) == 0)))))))) &&
     ((*(long *)(*(long *)(param_1 + 0xf0) + 0x10) == 0 &&
      (((((*(long *)(*(long *)(param_1 + 0x1f0) + 0x10) == 0 &&
          (*(long *)(*(long *)(param_1 + 0x110) + 0x10) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x210) + 0x10) == 0)) &&
        ((*(long *)(*(long *)(param_1 + 0x130) + 0x10) == 0 &&
         (*(long *)(*(long *)(param_1 + 0x230) + 0x10) == 0)))) &&
       (*(long *)(*(long *)(param_1 + 0x150) + 0x10) == 0)))))) {
    bVar1 = *(long *)(*(long *)(param_1 + 0x250) + 0x10) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


