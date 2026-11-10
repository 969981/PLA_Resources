/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f62d0; name: FUN_004f62d0
 */


bool FUN_004f62d0(undefined8 param_1,int param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 1) {
    return false;
  }
  if (param_4 == 1) {
    iVar1 = FUN_004f6160(param_1,param_3,1);
    return iVar1 != 0;
  }
  if (param_4 != 3) {
    iVar1 = FUN_004f5e00(param_1,param_3,param_4 & 0xffffffff);
    return iVar1 != 0;
  }
  FUN_00418080();
  lVar2 = FUN_00418000();
  if (lVar2 == 0) {
    lVar2 = FUN_00418060();
  }
  iVar1 = FUN_004f6160(param_1,lVar2,1);
  if (iVar1 == 0) {
    FUN_004014b0(0xb,0x65,0x68,"external/openssl/crypto/x509/by_file.c",0x3c);
    return false;
  }
  return true;
}


