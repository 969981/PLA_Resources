/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407210; name: FUN_00407210
 */


int * FUN_00407210(undefined8 param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  
  piVar1 = (int *)FUN_004002a0(0x20,"external/openssl/crypto/stack/stack.c",0xd1);
  if ((piVar1 != (int *)0x0) && (*(undefined8 *)(piVar1 + 6) = param_1, 0 < param_2)) {
    if (0x7fffffff - *piVar1 < param_2) {
LAB_0040725c:
      FUN_00400420(*(undefined8 *)(piVar1 + 2),"external/openssl/crypto/stack/stack.c",0x178);
      FUN_00400420(piVar1,"external/openssl/crypto/stack/stack.c",0x179);
      return (int *)0x0;
    }
    uVar3 = *piVar1 + param_2;
    if ((int)uVar3 < 5) {
      uVar3 = 4;
    }
    if (*(long *)(piVar1 + 2) == 0) {
      lVar2 = FUN_004002a0((ulong)uVar3 << 3,"external/openssl/crypto/stack/stack.c",0xb4);
      *(long *)(piVar1 + 2) = lVar2;
      if (lVar2 == 0) {
        FUN_004014b0(0xf,0x81,0x41,"external/openssl/crypto/stack/stack.c",0xb5);
        goto LAB_0040725c;
      }
    }
    else {
      if (uVar3 == piVar1[5]) {
        return piVar1;
      }
      lVar2 = FUN_00400350(*(long *)(piVar1 + 2),(ulong)uVar3 << 3,
                           "external/openssl/crypto/stack/stack.c",0xc6);
      if (lVar2 == 0) goto LAB_0040725c;
      *(long *)(piVar1 + 2) = lVar2;
    }
    piVar1[5] = uVar3;
  }
  return piVar1;
}


