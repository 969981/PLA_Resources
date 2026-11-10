/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5320; name: FUN_003f5320
 */


long FUN_003f5320(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  char *__s2;
  char *__s1;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04373fe8;
  if (param_1 == (long *)0x0) {
    if (PTR_DAT_04373fe8[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc"
                   ,0xb4,1,"grpc_auth_property_iterator_next(it=%p)",0);
    }
LAB_003f5408:
    lVar3 = 0;
  }
  else {
    while( true ) {
      if (puVar1[0x10] == '\0') {
        lVar3 = *param_1;
      }
      else {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc"
                     ,0xb4,1,"grpc_auth_property_iterator_next(it=%p)",param_1);
        lVar3 = *param_1;
      }
      if (lVar3 == 0) goto LAB_003f5408;
      uVar4 = param_1[1];
      uVar5 = *(ulong *)(lVar3 + 0x20);
      if (uVar4 == uVar5) {
        do {
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 == 0) goto LAB_003f5408;
          *param_1 = lVar3;
          param_1[1] = 0;
          uVar5 = *(ulong *)(lVar3 + 0x20);
        } while (uVar5 == 0);
        uVar4 = 0;
      }
      __s1 = (char *)param_1[2];
      if (__s1 == (char *)0x0) break;
      lVar6 = uVar4 * 0x18;
      while (uVar4 < uVar5) {
        lVar7 = *(long *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
        param_1[1] = uVar4;
        __s2 = *(char **)(lVar7 + lVar6);
        if (__s2 == (char *)0x0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/context/security_context.cc"
                       ,0xc1,2,"assertion failed: %s","prop->name != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        iVar2 = strcmp(__s1,__s2);
        lVar6 = lVar6 + 0x18;
        if (iVar2 == 0) {
          return lVar7 + lVar6 + -0x18;
        }
      }
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    param_1[1] = uVar4 + 1;
    lVar3 = lVar3 + uVar4 * 0x18;
  }
  return lVar3;
}


