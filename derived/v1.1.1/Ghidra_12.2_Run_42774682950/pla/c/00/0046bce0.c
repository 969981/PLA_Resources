/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046bce0; name: FUN_0046bce0
 */


undefined8 FUN_0046bce0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if ((uVar2 >> 1 & 1) == 0) {
    if ((iVar1 != 0) && (((uVar2 & 1) != 0 || (*(int *)(param_1 + 0x20) == 0)))) {
      *(int *)(param_1 + 0x20) = iVar1;
    }
    if ((*(int *)(param_2 + 0x24) != 0) && (((uVar2 & 1) != 0 || (*(int *)(param_1 + 0x24) == 0))))
    {
      *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
    }
    if ((*(int *)(param_2 + 0x28) != -1) && (((uVar2 & 1) != 0 || (*(int *)(param_1 + 0x28) == -1)))
       ) {
      *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
    }
    if ((*(int *)(param_2 + 0x2c) != -1) && (((uVar2 & 1) != 0 || (*(int *)(param_1 + 0x2c) == -1)))
       ) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
    }
    uVar4 = *(ulong *)(param_1 + 0x18);
    if (((uint)uVar4 >> 1 & 1) == 0) goto LAB_0046bdac;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar1;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    uVar4 = *(ulong *)(param_1 + 0x18);
LAB_0046bdac:
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = uVar4 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar5;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(ulong *)(param_1 + 0x18) = uVar4 | *(ulong *)(param_2 + 0x18);
  if (((uVar2 >> 1 & 1) == 0) &&
     ((*(long *)(param_2 + 0x30) == 0 || (((uVar2 & 1) == 0 && (*(long *)(param_1 + 0x30) != 0))))))
  {
LAB_0046bdfc:
    if ((*(long *)(param_2 + 0x38) != 0) && (((uVar2 & 1) != 0 || (*(long *)(param_1 + 0x38) == 0)))
       ) goto LAB_0046be10;
LAB_0046be6c:
    pcVar6 = *(char **)(param_2 + 0x50);
    if ((pcVar6 != (char *)0x0) && (((uVar2 & 1) != 0 || (*(long *)(param_1 + 0x50) == 0)))) {
LAB_0046be88:
      sVar7 = *(size_t *)(param_2 + 0x58);
      if (sVar7 == 0) {
        sVar7 = strlen(pcVar6);
      }
      lVar3 = FUN_00405020(pcVar6,sVar7,"external/openssl/crypto/x509/x509_vpm.c",0xf7);
      if (lVar3 == 0) {
        return 0;
      }
      goto LAB_0046bebc;
    }
  }
  else {
    uVar5 = FUN_0046bfa0(param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if ((uVar2 >> 1 & 1) == 0) goto LAB_0046bdfc;
LAB_0046be10:
    FUN_004078c0(*(undefined8 *)(param_1 + 0x38),&LAB_0046bcd0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar3 = FUN_00407060(*(long *)(param_2 + 0x38),&LAB_0046c070,&LAB_0046bcd0);
      *(long *)(param_1 + 0x38) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar2 >> 1 & 1) == 0) goto LAB_0046be6c;
    pcVar6 = *(char **)(param_2 + 0x50);
    if (pcVar6 != (char *)0x0) goto LAB_0046be88;
    sVar7 = 0;
    lVar3 = 0;
LAB_0046bebc:
    FUN_00400420(*(long *)(param_1 + 0x50),"external/openssl/crypto/x509/x509_vpm.c",0xfe);
    *(long *)(param_1 + 0x50) = lVar3;
    *(size_t *)(param_1 + 0x58) = sVar7;
    if ((uVar2 >> 1 & 1) != 0) {
      pcVar6 = *(char **)(param_2 + 0x60);
      goto LAB_0046bf10;
    }
  }
  pcVar6 = *(char **)(param_2 + 0x60);
  if ((pcVar6 == (char *)0x0) || (((uVar2 & 1) == 0 && (*(long *)(param_1 + 0x60) != 0)))) {
    return 1;
  }
LAB_0046bf10:
  sVar7 = *(ulong *)(param_2 + 0x68);
  if (0x10 < sVar7) {
    return 0;
  }
  if ((1L << (sVar7 & 0x3f) & 0x10011U) == 0) {
    return 0;
  }
  if (pcVar6 == (char *)0x0) {
    sVar7 = 0;
    lVar3 = 0;
  }
  else {
    if (sVar7 == 0) {
      sVar7 = strlen(pcVar6);
    }
    lVar3 = FUN_00405020(pcVar6,sVar7,"external/openssl/crypto/x509/x509_vpm.c",0xf7);
    if (lVar3 == 0) {
      return 0;
    }
  }
  FUN_00400420(*(undefined8 *)(param_1 + 0x60),"external/openssl/crypto/x509/x509_vpm.c",0xfe);
  *(long *)(param_1 + 0x60) = lVar3;
  *(size_t *)(param_1 + 0x68) = sVar7;
  return 1;
}


