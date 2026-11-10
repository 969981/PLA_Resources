/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420b80; name: FUN_00420b80
 */


int * FUN_00420b80(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_0040a550(2);
    if (piVar2 == (int *)0x0) {
      FUN_004014b0(0xd,0xe5,0x3a,"external/openssl/crypto/asn1/a_int.c",0x1cf);
      return (int *)0x0;
    }
    iVar1 = FUN_0040d2e0(param_1);
  }
  else {
    param_2[1] = 2;
    iVar1 = FUN_0040d2e0(param_1);
    piVar2 = param_2;
  }
  if ((iVar1 != 0) && (iVar1 = FUN_0040c130(param_1), iVar1 == 0)) {
    piVar2[1] = piVar2[1] | 0x102;
  }
  iVar1 = FUN_0040c070(param_1);
  if (iVar1 + 0xeU < 0xf) {
    iVar3 = 1;
  }
  else {
    iVar3 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar3 = iVar1 + 7;
    }
    iVar3 = iVar3 >> 3;
  }
  iVar1 = FUN_0040a280(piVar2,0,iVar3);
  if (iVar1 != 0) {
    iVar1 = FUN_0040c130(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0040caa0(param_1);
      *piVar2 = iVar1;
      return piVar2;
    }
    **(undefined1 **)(piVar2 + 2) = 0;
    *piVar2 = iVar3;
    return piVar2;
  }
  FUN_004014b0(0xd,0xe5,0x41,"external/openssl/crypto/asn1/a_int.c",0x1dc);
  if (piVar2 != param_2) {
    thunk_FUN_0040a4b0(piVar2);
  }
  return (int *)0x0;
}


