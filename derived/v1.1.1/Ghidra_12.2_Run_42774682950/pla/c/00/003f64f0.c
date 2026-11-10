/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f64f0; name: FUN_003f64f0
 */


void FUN_003f64f0(long param_1,undefined8 param_2)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  ulong uVar3;
  char *local_60;
  undefined4 local_58;
  
  if ((PTR_DAT_04374130[0x10] != '\0') &&
     (lVar1 = *(long *)(param_1 + 0x98), *(long *)(lVar1 + 0x10) != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      __ptr = (void *)FUN_00304ac0(*(long *)(lVar1 + 8) + lVar2,3);
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/secure_endpoint.cc"
                   ,0xa3,1,"READ %p: %s",param_1,__ptr);
      free(__ptr);
      lVar1 = *(long *)(param_1 + 0x98);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *(ulong *)(lVar1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_60 = "external/com_google_grpc_base/src/core/lib/security/transport/secure_endpoint.cc";
  local_58 = 0xa8;
  FUN_002f019c(&local_60,*(undefined8 *)(param_1 + 0x40),param_2);
  FUN_003f6600(param_1,&DAT_03896236,0xa9);
  return;
}


