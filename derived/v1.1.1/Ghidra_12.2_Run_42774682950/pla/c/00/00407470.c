/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407470; name: FUN_00407470
 */


int FUN_00407470(int *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  void *__src;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = *param_1;
  if (iVar4 == 0x7fffffff) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 2);
  if (iVar4 < 4) {
    iVar4 = 3;
  }
  if (lVar3 == 0) {
    lVar3 = FUN_004002a0((ulong)(iVar4 + 1U) << 3,"external/openssl/crypto/stack/stack.c",0xb4);
    *(long *)(param_1 + 2) = lVar3;
    if (lVar3 == 0) {
      FUN_004014b0(0xf,0x81,0x41,"external/openssl/crypto/stack/stack.c",0xb5);
      return 0;
    }
    param_1[5] = iVar4 + 1U;
LAB_00407524:
    iVar4 = *param_1;
  }
  else {
    uVar6 = (ulong)(uint)param_1[5];
    if (iVar4 < param_1[5]) goto LAB_00407524;
    do {
      iVar5 = (int)uVar6;
      if (0x55555554 < iVar5) {
        uVar6 = 0x7fffffff;
        goto LAB_0040755c;
      }
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar5 + 1;
      }
      uVar1 = iVar5 + (iVar2 >> 1);
      uVar6 = (ulong)uVar1;
    } while ((int)uVar1 <= iVar4);
    if (uVar1 == 0) {
      return 0;
    }
LAB_0040755c:
    lVar3 = FUN_00400350(lVar3,-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3,
                         "external/openssl/crypto/stack/stack.c",0xc6);
    if (lVar3 == 0) {
      return 0;
    }
    *(long *)(param_1 + 2) = lVar3;
    param_1[5] = (int)uVar6;
    iVar4 = *param_1;
  }
  if (-1 < (int)param_3) {
    uVar1 = iVar4 - param_3;
    if (uVar1 != 0 && (int)param_3 <= iVar4) {
      uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
      __src = (void *)(lVar3 + uVar6);
      memmove((void *)((long)__src + 8),__src,
              -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      *(undefined8 *)(*(long *)(param_1 + 2) + uVar6) = param_2;
      iVar4 = *param_1;
      goto LAB_0040758c;
    }
  }
  *(undefined8 *)(lVar3 + (long)iVar4 * 8) = param_2;
LAB_0040758c:
  *param_1 = iVar4 + 1;
  param_1[4] = 0;
  return iVar4 + 1;
}


