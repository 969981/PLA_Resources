/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d03f8; name: FUN_031d03f8
 */


void FUN_031d03f8(long param_1)

{
  undefined *puVar1;
  long *in_x5;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) +
                   (long)*(int *)(param_1 + 0x20) * 0xf0);
  FUN_031d8a7c(param_1 + 0x28);
  if ((int)in_x5[1] != 0) {
    lVar2 = (long)(int)in_x5[1] * 0xc;
    piVar4 = (int *)(*in_x5 + 4);
    do {
      if ((((char)piVar4[-1] != '\x03') &&
          (lVar3 = *(long *)(lVar5 + 0x20), *(int *)(lVar3 + 0x108) != 0)) &&
         ((*(byte *)(*(long *)(lVar3 + 0x100) + (long)*piVar4) >> 2 & 1) != 0)) {
        FUN_031cdd40(param_1 + 0xd8,piVar4);
      }
      lVar2 = lVar2 + -0xc;
      piVar4 = piVar4 + 3;
    } while (lVar2 != 0);
  }
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(long *)(param_1 + 0x98) != 0)) {
    FUN_032cf244(puVar1,*(long *)(param_1 + 0x98),4,*(uint *)(param_1 + 0xa4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    FUN_032cf244(puVar1,*(long *)(param_1 + 0xa8),4,*(uint *)(param_1 + 0xb4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  return;
}


