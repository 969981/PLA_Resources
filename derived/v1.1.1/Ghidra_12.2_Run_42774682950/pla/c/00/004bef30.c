/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bef30; name: FUN_004bef30
 */


undefined8 FUN_004bef30(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    iVar1 = (int)plVar4[1];
    while( true ) {
      if (iVar1 == 0) {
        plVar4 = (long *)plVar4[2];
      }
      else {
        iVar1 = *(int *)(*plVar4 + 0x44);
        if (*(int *)(*plVar4 + 0x44) <= iVar11) {
          iVar1 = iVar11;
        }
        plVar4 = (long *)plVar4[2];
        iVar11 = iVar1;
      }
      if (plVar4 == (long *)0x0) break;
      iVar1 = (int)plVar4[1];
    }
  }
  lVar3 = FUN_004002a0(-(ulong)(iVar11 + 1U >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)(iVar11 + 1U) << 2,"external/openssl/ssl/ssl_ciph.c",0x3a1);
  if (lVar3 == 0) {
    FUN_004014b0(0x14,0xe7,0x41,"external/openssl/ssl/ssl_ciph.c",0x3a3);
    return 0;
  }
  for (plVar4 = (long *)*param_1; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    if ((int)plVar4[1] != 0) {
      lVar9 = (long)*(int *)(*plVar4 + 0x44) * 4;
      *(int *)(lVar3 + lVar9) = *(int *)(lVar3 + lVar9) + 1;
    }
  }
  if (iVar11 < 0) {
LAB_004bf094:
    FUN_00400420(lVar3,"external/openssl/ssl/ssl_ciph.c",0x3b9);
    return 1;
  }
  iVar1 = *(int *)(lVar3 + (long)iVar11 * 4);
  uVar2 = (long)iVar11;
  do {
    if (0 < iVar1) {
      plVar4 = (long *)*param_1;
      plVar5 = (long *)*param_2;
      plVar6 = plVar5;
      if ((plVar4 != (long *)0x0) && (plVar5 != (long *)0x0)) {
        plVar10 = plVar4;
        plVar7 = plVar4;
        do {
          plVar8 = (long *)plVar7[2];
          plVar4 = plVar10;
          if (((uVar2 == *(uint *)(*plVar7 + 0x44)) && ((int)plVar7[1] != 0)) && (plVar7 != plVar6))
          {
            lVar9 = plVar7[3];
            plVar4 = plVar8;
            if (plVar7 != plVar10) {
              plVar4 = plVar10;
            }
            plVar10 = plVar8;
            if (lVar9 != 0) {
              *(long **)(lVar9 + 0x10) = plVar8;
              plVar10 = (long *)plVar7[2];
            }
            if (plVar10 != (long *)0x0) {
              plVar10[3] = lVar9;
            }
            plVar6[2] = (long)plVar7;
            plVar7[2] = 0;
            plVar7[3] = (long)plVar6;
            plVar6 = plVar7;
          }
          if (plVar7 == plVar5) break;
          plVar10 = plVar4;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
      *param_1 = (long)plVar4;
      *param_2 = (long)plVar6;
    }
    if ((long)uVar2 < 1) goto LAB_004bf094;
    iVar1 = *(int *)(lVar3 + (uVar2 - 1) * 4);
    uVar2 = uVar2 - 1;
  } while( true );
}


