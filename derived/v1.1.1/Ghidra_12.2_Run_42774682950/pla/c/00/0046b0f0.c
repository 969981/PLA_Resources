/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046b0f0; name: FUN_0046b0f0
 */


bool FUN_0046b0f0(long param_1,long param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    return false;
  }
  piVar2 = (int *)FUN_004002a0(0x10,"external/openssl/crypto/x509/x509_lu.c",0x1a0);
  if (piVar2 == (int *)0x0) {
    FUN_004014b0(0xb,0x96,0x41,"external/openssl/crypto/x509/x509_lu.c",0x1a3);
    return false;
  }
  *piVar2 = 0;
  if (param_3 == 0) {
    *(long *)(piVar2 + 2) = param_2;
    *piVar2 = 1;
    FUN_00466c20(param_2);
  }
  else {
    *(long *)(piVar2 + 2) = param_2;
    *piVar2 = 2;
    FUN_00466b90(param_2);
  }
  FUN_00400140(*(undefined8 *)(param_1 + 0x90));
  lVar3 = FUN_0046b800(*(undefined8 *)(param_1 + 8),piVar2);
  if (lVar3 == 0) {
    iVar1 = FUN_00407800(*(undefined8 *)(param_1 + 8),piVar2);
    FUN_00400160(*(undefined8 *)(param_1 + 0x90));
    if (iVar1 != 0) {
      return iVar1 != 0;
    }
    iVar1 = *piVar2;
    bVar4 = false;
  }
  else {
    FUN_00400160(*(undefined8 *)(param_1 + 0x90));
    bVar4 = true;
    iVar1 = *piVar2;
  }
  if (iVar1 == 2) {
    FUN_00466390(*(undefined8 *)(piVar2 + 2));
  }
  else if (iVar1 == 1) {
    FUN_00460a80(*(undefined8 *)(piVar2 + 2));
  }
  FUN_00400420(piVar2,"external/openssl/crypto/x509/x509_lu.c",0x1d3);
  return bVar4;
}


