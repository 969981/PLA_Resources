/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003facd0; name: FUN_003facd0
 */


/* WARNING: Removing unreachable block (ram,0x003fae30) */

undefined8 FUN_003facd0(long param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = FUN_004c25b0();
  local_50 = 0;
  local_48 = 0;
  *param_3 = 0;
  if (lVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x636,2,
                 "SSL Context is null. Should never happen.");
  }
  else {
    if (lVar4 == 0) {
      return 0xc;
    }
    FUN_004c4f90(lVar4,&LAB_003fc120);
    iVar1 = FUN_004f8d40(&local_48,0,&local_50,0);
    if (iVar1 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x63f,2,
                   "BIO_new_bio_pair failed.");
      FUN_004c2970(lVar4);
      return 0xc;
    }
    FUN_004c3240(lVar4,local_50,local_50);
    FUN_004c35d0();
    if ((param_2 == (char *)0x0) || (lVar3 = FUN_004c2cd0(lVar4,0x37,0,param_2), lVar3 != 0)) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 != 0) && (lVar5 = FUN_004c43a0(lVar4,0), lVar5 != 0)) {
        FUN_003fd7e4(&local_38,lVar3,lVar5);
        if (local_38 == 0) {
          local_38 = 0;
        }
        else {
                    /* try { // try from 003fadc0 to 003fadc7 has its CatchHandler @ 003faf9c */
          FUN_003ffda0(lVar4);
          lVar3 = local_38;
          local_38 = 0;
          if (lVar3 != 0) {
                    /* try { // try from 003fadd4 to 003fadd7 has its CatchHandler @ 003faf98 */
            FUN_003fef10();
          }
        }
      }
      uVar2 = FUN_004c3500(lVar4);
      uVar2 = FUN_004c4da0(lVar4,uVar2);
      param_2 = "SSL_ERROR_NONE";
      switch(uVar2) {
      case 0:
        break;
      case 1:
        param_2 = "SSL_ERROR_SSL";
        break;
      case 2:
        puVar6 = (undefined8 *)FUN_002ebd80(0x40);
        *(undefined4 *)(puVar6 + 4) = 0xb;
        puVar6[6] = 0x400;
        puVar6[2] = lVar4;
        puVar6[3] = local_48;
        uVar7 = FUN_002ebd80(0x400);
        puVar6[5] = uVar7;
        *puVar6 = &DAT_04157548;
        if (param_1 != 0) {
          FUN_002ef640(param_1 + 8,1);
        }
        puVar6[7] = param_1;
        *param_3 = puVar6;
        return 0;
      case 3:
        param_2 = "SSL_ERROR_WANT_WRITE";
        break;
      case 4:
        param_2 = "SSL_ERROR_WANT_X509_LOOKUP";
        break;
      case 5:
        param_2 = "SSL_ERROR_SYSCALL";
        break;
      case 6:
        param_2 = "SSL_ERROR_ZERO_RETURN";
        break;
      case 7:
        param_2 = "SSL_ERROR_WANT_CONNECT";
        break;
      case 8:
        param_2 = "SSL_ERROR_WANT_ACCEPT";
        break;
      default:
        param_2 = "Unknown error";
      }
      pcVar8 = "Unexpected error received from first SSL_do_handshake call: %s";
      uVar7 = 0x659;
    }
    else {
      pcVar8 = "Invalid server name indication %s.";
      uVar7 = 0x649;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",uVar7,2,
                 pcVar8,param_2);
    FUN_004c2970(lVar4);
    FUN_00403ee0(local_48);
  }
  return 7;
}


