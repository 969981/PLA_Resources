/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6bc0; name: FUN_003f6bc0
 */


long FUN_003f6bc0(ulong *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((param_1 != (ulong *)0x0) && (uVar5 = *param_1, uVar5 != 0)) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar6 = param_1[1];
      lVar2 = uVar6 + lVar3;
      iVar1 = strcmp(*(char **)(lVar2 + 8),"grpc.security_connector");
      if (iVar1 == 0) {
        iVar1 = *(int *)(uVar6 + lVar3);
        if (iVar1 == 2) {
          lVar2 = *(long *)(lVar2 + 0x10);
          if (lVar2 != 0) {
            return lVar2;
          }
        }
        else {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/security_connector.cc"
                       ,0x72,2,"Invalid type %d for arg %s",iVar1,"grpc.security_connector");
          uVar5 = *param_1;
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < uVar5);
  }
  return 0;
}


