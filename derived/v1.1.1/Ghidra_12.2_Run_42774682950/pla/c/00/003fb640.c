/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fb640; name: FUN_003fb640
 */


int FUN_003fb640(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  if (param_2 == (undefined8 *)0x0) {
LAB_003fb7c8:
    if ((param_3 == 0) || (iVar1 = FUN_004c4230(param_1,param_3), iVar1 != 0)) {
      uVar7 = FUN_0042cd00(0x19f);
      lVar3 = FUN_004c3c10(param_1,4,0,uVar7);
      if (lVar3 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x334,2,
                     "Could not set ephemeral ECDH key.");
        FUN_0042cd80(uVar7);
        iVar1 = 7;
      }
      else {
        FUN_004c5330(param_1,0);
        FUN_0042cd80(uVar7);
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 2;
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x32e,2,
                   "Invalid cipher list: %s.",param_3);
    }
  }
  else {
    pcVar8 = (char *)param_2[1];
    if (pcVar8 == (char *)0x0) {
LAB_003fb750:
      pcVar8 = (char *)*param_2;
      if (pcVar8 == (char *)0x0) goto LAB_003fb7c8;
      sVar2 = strlen(pcVar8);
      if (sVar2 >> 0x1f != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x2a0,2,
                     "assertion failed: %s","pem_key_size <= INT_MAX");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = FUN_00443d90(pcVar8,sVar2);
      if (lVar3 == 0) {
        iVar1 = 0xc;
      }
      else {
        lVar4 = FUN_004f1b80(lVar3,0,0,&DAT_03996322);
        if (lVar4 != 0) {
          iVar1 = FUN_004f0e30(param_1,lVar4);
          FUN_00423420(lVar4);
          if (iVar1 != 0) {
            FUN_00403ee0(lVar3);
            iVar1 = FUN_004c3400(param_1);
            if (iVar1 == 0) {
              pcVar8 = "Invalid private key.";
              uVar7 = 0x327;
              iVar1 = 2;
              goto LAB_003fb898;
            }
            goto LAB_003fb7c8;
          }
        }
        FUN_00403ee0(lVar3);
        iVar1 = 2;
      }
      pcVar8 = "Invalid private key.";
      uVar7 = 0x327;
    }
    else {
      sVar2 = strlen(pcVar8);
      if (sVar2 >> 0x1f != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x228,2,
                     "assertion failed: %s","pem_cert_chain_size <= INT_MAX");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = FUN_00443d90(pcVar8,sVar2);
      if (lVar3 == 0) {
        iVar1 = 0xc;
      }
      else {
        lVar4 = FUN_004f1f50(lVar3,0,0,&DAT_03996322);
        if (lVar4 == 0) {
          FUN_00403ee0(lVar3);
          iVar1 = 2;
        }
        else {
          iVar1 = FUN_004f0da0(param_1,lVar4);
          if (iVar1 != 0) {
            do {
              lVar5 = FUN_004e31f0(lVar3,0,0,&DAT_03996322);
              if (lVar5 == 0) {
                FUN_004016d0();
                iVar1 = 0;
                goto LAB_003fb724;
              }
              lVar6 = FUN_004c3c10(param_1,0xe,0,lVar5);
            } while (lVar6 != 0);
            FUN_00460a80(lVar5);
          }
          iVar1 = 2;
LAB_003fb724:
          FUN_00460a80(lVar4);
          FUN_00403ee0(lVar3);
          if (iVar1 == 0) goto LAB_003fb750;
        }
      }
      pcVar8 = "Invalid cert chain file.";
      uVar7 = 799;
    }
LAB_003fb898:
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",uVar7,2,
                 pcVar8);
  }
  return iVar1;
}


