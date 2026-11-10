/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c710; name: FUN_0040c710
 */


long * FUN_0040c710(byte *param_1,int param_2,long *param_3)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  
  if (param_3 == (long *)0x0) {
    plVar9 = (long *)FUN_004002a0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xbe);
    if (plVar9 == (long *)0x0) {
      FUN_004014b0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xbf);
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar9 + 0x14) = 1;
    plVar10 = plVar9;
    param_3 = plVar9;
  }
  else {
    plVar9 = (long *)0x0;
    plVar10 = (long *)0x0;
  }
  for (; 0 < param_2; param_2 = param_2 + -1) {
    if (*param_1 != 0) goto LAB_0040c75c;
    param_1 = param_1 + 1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
LAB_0040c75c:
  uVar4 = param_2 - 1U >> 2;
  uVar11 = uVar4 + 1;
  if (((int)uVar4 < *(int *)((long)param_3 + 0xc)) ||
     (lVar3 = FUN_0040c320(param_3,uVar11), lVar3 != 0)) {
    uVar4 = param_2 - 1U & 3;
    *(uint *)(param_3 + 1) = uVar11;
    *(undefined4 *)(param_3 + 2) = 0;
    pbVar8 = param_1 + 1;
    uVar7 = (uint)*param_1;
    param_2 = param_2 + -1;
    if (uVar4 != 0) goto LAB_0040c7d0;
    do {
      uVar11 = uVar11 - 1;
      *(uint *)(*param_3 + (ulong)uVar11 * 4) = uVar7;
      uVar4 = 3;
      uVar7 = 0;
      pbVar2 = pbVar8;
      while( true ) {
        if (param_2 == 0) {
          iVar5 = (int)param_3[1];
          if (iVar5 < 1) goto LAB_0040c814;
          piVar6 = (int *)(*param_3 + (long)iVar5 * 4);
          goto LAB_0040c7f8;
        }
        pbVar8 = pbVar2 + 1;
        uVar7 = (uint)*pbVar2 | uVar7 << 8;
        param_2 = param_2 + -1;
        if (uVar4 == 0) break;
LAB_0040c7d0:
        uVar4 = uVar4 - 1;
        pbVar2 = pbVar8;
      }
    } while( true );
  }
  if (plVar9 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(uint *)((long)plVar9 + 0x14) >> 1 & 1) == 0) {
    if ((*(uint *)((long)plVar9 + 0x14) >> 3 & 1) == 0) {
      FUN_00400420(*plVar9,"external/openssl/crypto/bn/bn_lib.c",0x96);
      bVar1 = *(byte *)((long)plVar9 + 0x14);
      goto joined_r0x0040c8bc;
    }
    thunk_FUN_00400420(*plVar9,"external/openssl/crypto/bn/bn_lib.c",0x94);
  }
  bVar1 = *(byte *)((long)plVar9 + 0x14);
joined_r0x0040c8bc:
  if ((bVar1 & 1) != 0) {
    FUN_00400420(plVar10,"external/openssl/crypto/bn/bn_lib.c",0xaf);
  }
  return (long *)0x0;
  while (iVar5 = iVar5 + -1, 0 < iVar5) {
LAB_0040c7f8:
    piVar6 = piVar6 + -1;
    if (*piVar6 != 0) break;
  }
  *(int *)(param_3 + 1) = iVar5;
LAB_0040c814:
  if (iVar5 == 0) {
    *(undefined4 *)(param_3 + 2) = 0;
    return param_3;
  }
  return param_3;
}


