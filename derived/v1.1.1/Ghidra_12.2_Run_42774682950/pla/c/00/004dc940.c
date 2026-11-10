/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc940; name: FUN_004dc940
 */


undefined ** FUN_004dc940(long param_1,uint param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 == 0xffffffff) {
    if (*(int *)(param_1 + 0x38) == 0) {
      param_2 = (int)((**(long **)(param_1 + 0x488) - (long)*(long **)(param_1 + 0x488)) - 0x20U >>
                     3) * -0x33333333;
    }
    else {
      uVar4 = 0;
      param_2 = 0xffffffff;
      do {
        lVar3 = FUN_004e31d0(uVar4);
        uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20);
        if ((uVar1 & *(uint *)(lVar3 + 4)) != 0) {
          param_2 = (uint)uVar4;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar1 & *(uint *)(lVar3 + 4)) == 0 && uVar4 < 9);
      if (param_2 == 4) {
        if (uVar1 == 0x20) {
          param_2 = 4;
        }
        else if (*(long *)(*(long *)(param_1 + 0x488) + 0x118) == 0) {
          param_2 = 4;
          if (*(long *)(*(long *)(param_1 + 0x488) + 0xf0) != 0) {
            param_2 = 5;
          }
        }
        else {
          param_2 = 6;
        }
        goto LAB_004dc960;
      }
    }
  }
  if (8 < param_2) {
    return (undefined **)0x0;
  }
LAB_004dc960:
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0 && param_2 == 0) {
    return &PTR_s_rsa_pkcs1_md5_sha1_04182a50;
  }
  ppuVar2 = (undefined **)FUN_004dcbd0(*(undefined2 *)(&DAT_03a28112 + (long)(int)param_2 * 2));
  if ((ppuVar2 == (undefined **)0x0) ||
     ((*(int *)((long)ppuVar2 + 0xc) != 0 &&
      (lVar3 = FUN_004bda40(*(undefined4 *)(ppuVar2 + 2)), lVar3 == 0)))) {
    return (undefined **)0x0;
  }
  return ppuVar2;
}


