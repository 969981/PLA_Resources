/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046d1b0; name: FUN_0046d1b0
 */


long * FUN_0046d1b0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_004002a0(0x18,"external/openssl/crypto/x509v3/pcy_node.c",0x42);
  if (plVar2 == (long *)0x0) {
    FUN_004014b0(0x22,0xa8,0x41,"external/openssl/crypto/x509v3/pcy_node.c",0x44);
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
joined_r0x0046d25c:
    if (param_4 != 0) {
      lVar3 = *(long *)(param_4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = FUN_004071e0();
        *(long *)(param_4 + 0x10) = lVar3;
        if (lVar3 == 0) {
          uVar4 = 0x61;
          goto LAB_0046d2b0;
        }
      }
      iVar1 = FUN_00407800(lVar3,param_2);
      if (iVar1 == 0) {
        uVar4 = 0x65;
        goto LAB_0046d2b0;
      }
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = FUN_00407f40(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = plVar2;
        goto joined_r0x0046d25c;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = FUN_00407340(&LAB_0046d0c0);
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 != 0) goto LAB_0046d250;
        uVar4 = 0x53;
      }
      else {
LAB_0046d250:
        iVar1 = FUN_00407800(lVar3,plVar2);
        if (iVar1 != 0) goto joined_r0x0046d25c;
        uVar4 = 0x57;
      }
LAB_0046d2b0:
      FUN_004014b0(0x22,0xa8,0x41,"external/openssl/crypto/x509v3/pcy_node.c",uVar4);
    }
    FUN_00400420(plVar2,"external/openssl/crypto/x509v3/pcy_node.c",0x76);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


