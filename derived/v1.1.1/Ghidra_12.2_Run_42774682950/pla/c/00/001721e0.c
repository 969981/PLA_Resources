/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001721e0; name: FUN_001721e0
 */


long FUN_001721e0(long param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  int local_24;
  
  switch(*(uint *)(param_2 + 1) & 0x3f) {
  case 1:
  case 0x13:
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = *(uint *)param_2;
    break;
  default:
    uVar4 = (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) | 1U) ^ 0xfffffffe;
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = *(uint *)param_2 / uVar4;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    uVar6 = (ulong)(*(uint *)param_2 - uVar2 * uVar4);
    goto LAB_001722d4;
  case 3:
    lVar5 = *(long *)(param_1 + 0x18);
    dVar7 = frexp(*param_2,&local_24);
    dVar7 = dVar7 * 2147483648.0;
    bVar3 = false;
    if ((-9.223372036854776e+18 <= dVar7) && (bVar3 = false, !NAN(dVar7))) {
      bVar3 = dVar7 < 9.223372036854776e+18;
    }
    if (bVar3) {
      uVar4 = local_24 + (int)(long)dVar7;
      uVar4 = uVar4 ^ (int)uVar4 >> 0x1f;
    }
    else {
      uVar4 = 0;
    }
    uVar2 = (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) | 1U) ^ 0xfffffffe;
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = (int)uVar4 / (int)uVar2;
    }
    uVar4 = uVar4 - iVar1 * uVar2;
    goto LAB_00172314;
  case 4:
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = *(uint *)((long)*param_2 + 0xc);
    break;
  case 0x14:
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = FUN_0016d2d0(*param_2);
    uVar4 = uVar4 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU);
LAB_00172314:
    return lVar5 + (long)(int)uVar4 * 0x20;
  }
  uVar6 = (ulong)(int)(uVar4 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU));
LAB_001722d4:
  return lVar5 + uVar6 * 0x20;
}


