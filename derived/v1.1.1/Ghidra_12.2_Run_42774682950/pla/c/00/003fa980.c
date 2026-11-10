/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fa980; name: FUN_003fa980
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_003fa980(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 >> 0x1f != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x2cc,2,
                 "assertion failed: %s","pem_roots_size <= INT_MAX");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = FUN_00443d90(param_2,param_3 & 0xffffffff);
  if (param_1 == 0) {
    return 2;
  }
  if (lVar3 == 0) {
    return 0xc;
  }
  if (param_4 != (long *)0x0) {
    lVar4 = FUN_004071e0();
    *param_4 = lVar4;
    if (lVar4 == 0) {
      return 0xc;
    }
  }
  lVar4 = FUN_004f1f50(lVar3,0,0,&DAT_03996322);
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (param_4 == (long *)0x0) {
      do {
        FUN_004016d0();
        iVar2 = FUN_0046b0a0(param_1,lVar4);
        if ((iVar2 == 0) && (uVar5 = FUN_00401770(), (uVar5 & 0xff000fff) != 0xb000065))
        goto LAB_003faac8;
        FUN_00460a80(lVar4);
        lVar7 = lVar7 + 1;
        lVar4 = FUN_004f1f50(lVar3,0,0,&DAT_03996322);
      } while (lVar4 != 0);
    }
    else {
      do {
        lVar6 = FUN_0044e530(lVar4);
        if (lVar6 == 0) {
          iVar2 = 2;
          FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x2de,
                       2,"Could not get name from root certificate.");
          bVar1 = false;
          goto joined_r0x003fab8c;
        }
        lVar6 = FUN_0044ac00();
        if (lVar6 == 0) {
          iVar2 = 0xc;
          goto joined_r0x003fabc0;
        }
        FUN_00407800(*param_4,lVar6);
        FUN_004016d0();
        iVar2 = FUN_0046b0a0(param_1,lVar4);
        if ((iVar2 == 0) && (uVar5 = FUN_00401770(), (uVar5 & 0xff000fff) != 0xb000065))
        goto LAB_003faac8;
        FUN_00460a80(lVar4);
        lVar7 = lVar7 + 1;
        lVar4 = FUN_004f1f50(lVar3,0,0,&DAT_03996322);
      } while (lVar4 != 0);
    }
  }
  FUN_004016d0();
  lVar4 = 0;
  iVar2 = 0;
  bVar1 = true;
joined_r0x003fab8c:
  if (lVar7 == 0) goto LAB_003fab90;
LAB_003fab1c:
  if (iVar2 == 0) goto LAB_003fab44;
joined_r0x003fabb0:
  if (!bVar1) {
    FUN_00460a80(lVar4);
  }
  if (param_4 != (long *)0x0) {
    FUN_004078c0(*param_4,PTR_FUN_04374178);
    *param_4 = 0;
  }
LAB_003fab44:
  FUN_00403ee0(lVar3);
  return iVar2;
LAB_003faac8:
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x2ef,2,
               "Could not add root certificate to ssl context.");
  iVar2 = 7;
joined_r0x003fabc0:
  bVar1 = false;
  if (lVar7 != 0) goto LAB_003fab1c;
LAB_003fab90:
  iVar2 = 2;
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x2f8,2,
               "Could not load any root certificate.");
  goto joined_r0x003fabb0;
}


