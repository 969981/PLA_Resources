/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c704; name: FUN_0315c704
 */


void FUN_0315c704(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 200) != 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    lVar2 = (long)*(int *)(param_1 + 200) << 4;
    do {
      lVar1 = lVar3 + lVar2;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        FUN_032cf244(PTR_PTR_0434a080,*(long *)(lVar1 + -0x10),4,*(uint *)(lVar1 + -4) & 0x3fffffff)
        ;
      }
      lVar2 = lVar2 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}


