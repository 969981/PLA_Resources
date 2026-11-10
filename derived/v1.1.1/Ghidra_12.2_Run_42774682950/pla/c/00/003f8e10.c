/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f8e10; name: FUN_003f8e10
 */


undefined1  [16] FUN_003f8e10(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_003f54f0(&local_98);
  lVar5 = -0x18;
  lVar6 = 1;
  local_70 = local_88;
  uStack_78 = uStack_90;
  local_80 = local_98;
  do {
    lVar2 = FUN_003f5320(&local_80);
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + 0x18;
  } while (lVar2 != 0);
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_002ebd50(lVar5);
    FUN_003f54f0(&local_98,param_1);
    local_70 = local_88;
    uStack_78 = uStack_90;
    local_80 = local_98;
    puVar3 = (undefined8 *)FUN_003f5320(&local_80);
    if (puVar3 != (undefined8 *)0x0) {
      lVar6 = 0;
      do {
        while( true ) {
          pcVar7 = (char *)*puVar3;
          iVar1 = strcmp(pcVar7,"x509_subject_alternative_name");
          if (iVar1 != 0) break;
          pcVar7 = "x509_subject_alternative_name";
LAB_003f8f84:
          puVar4 = (undefined8 *)(lVar5 + lVar6 * 0x18);
          lVar6 = lVar6 + 1;
          *puVar4 = pcVar7;
          uVar8 = puVar3[1];
          puVar4[2] = puVar3[2];
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)FUN_003f5320(&local_80);
          if (puVar3 == (undefined8 *)0x0) goto LAB_003f8fb4;
        }
        iVar1 = strcmp(pcVar7,"x509_common_name");
        if (iVar1 == 0) {
          pcVar7 = "x509_subject_common_name";
          goto LAB_003f8f84;
        }
        iVar1 = strcmp(pcVar7,"x509_pem_cert");
        if (iVar1 == 0) {
          pcVar7 = "x509_pem_cert";
          goto LAB_003f8f84;
        }
        iVar1 = strcmp(pcVar7,"security_level");
        if (iVar1 == 0) {
          pcVar7 = "security_level";
          goto LAB_003f8f84;
        }
        iVar1 = strcmp(pcVar7,"x509_pem_cert_chain");
        if (iVar1 == 0) {
          pcVar7 = "x509_pem_cert_chain";
          goto LAB_003f8f84;
        }
        iVar1 = strcmp(pcVar7,"peer_spiffe_id");
        if (iVar1 == 0) {
          pcVar7 = "x509_uri";
          goto LAB_003f8f84;
        }
        puVar3 = (undefined8 *)FUN_003f5320(&local_80);
      } while (puVar3 != (undefined8 *)0x0);
      goto LAB_003f8fb4;
    }
  }
  lVar6 = 0;
LAB_003f8fb4:
  auVar9._8_8_ = lVar6;
  auVar9._0_8_ = lVar5;
  return auVar9;
}


