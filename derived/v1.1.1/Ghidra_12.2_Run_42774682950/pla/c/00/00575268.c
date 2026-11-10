/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00575268; name: FUN_00575268
 */


byte FUN_00575268(long param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char *__s2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  ulong local_40;
  undefined8 *local_38;
  
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                 ,0x99,2,"assertion failed: %s","target_type != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                 ,0x9a,2,"assertion failed: %s","target != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = 0;
  local_38 = (undefined8 *)0x0;
  FUN_002eca30(param_3,&DAT_038ee629,&local_38,&local_40);
  puVar1 = local_38;
  uVar3 = local_40;
  if (local_40 == 0) {
    bVar4 = 0;
  }
  else {
    lVar5 = 0;
    bVar4 = 0;
    __s2 = (char *)*local_38;
    while( true ) {
      if (__s2 != (char *)0x0) {
        iVar2 = strcmp(param_2,__s2);
        bVar4 = bVar4 | iVar2 == 0;
      }
      if (uVar3 <= lVar5 + 1U) break;
      lVar5 = lVar5 + 1;
      __s2 = (char *)puVar1[lVar5];
    }
    uVar3 = 0;
    do {
      free((void *)local_38[uVar3]);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_40);
  }
  free(local_38);
  return bVar4;
}


