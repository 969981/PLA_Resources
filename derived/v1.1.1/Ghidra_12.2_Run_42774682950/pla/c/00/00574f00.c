/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00574f00; name: FUN_00574f00
 */


void FUN_00574f00(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *local_d8;
  size_t local_d0;
  char *local_a8;
  undefined8 local_a0;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  undefined8 *local_40;
  long local_38;
  
  local_40 = param_1;
  local_38 = param_2;
  if (*param_3 != 0) {
                    /* try { // try from 00574f24 to 00574f27 has its CatchHandler @ 00575230 */
    FUN_003f3604();
  }
  puVar5 = local_40;
  *param_3 = 0;
  if (local_38 == 2) {
    pcVar6 = (char *)*local_40;
    if ((pcVar6 == (char *)0x0) || (iVar3 = strcmp(pcVar6,"certificate_type"), iVar3 != 0)) {
      local_a8 = "Unexpected property in fake peer: ";
      local_a0 = 0x22;
      local_d8 = "<EMPTY>";
      if (pcVar6 != (char *)0x0) {
        local_d8 = pcVar6;
      }
      local_d0 = strlen(local_d8);
      if ((long)local_d0 < 0) {
LAB_005751e8:
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      FUN_002eced0(local_78,&local_a8,&local_d8);
      uVar1 = (ulong)local_78 | 1;
      if ((local_78[0] & 1) != 0) {
        uVar1 = local_68;
      }
                    /* try { // try from 00574fb0 to 00574fd3 has its CatchHandler @ 0057523c */
      FUN_002f2ff0(auStack_60,uVar1);
      uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                           ,0xeb,auStack_60,0,0);
LAB_00574fd4:
      if ((local_78[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_68);
      }
      goto LAB_00575024;
    }
    iVar3 = strncmp((char *)puVar5[1],"FAKE",puVar5[2]);
    if (iVar3 == 0) {
      pcVar6 = (char *)puVar5[3];
      if ((pcVar6 == (char *)0x0) || (iVar3 = strcmp(pcVar6,"security_level"), iVar3 != 0)) {
        local_a8 = "Unexpected property in fake peer: ";
        local_a0 = 0x22;
        local_d8 = "<EMPTY>";
        if (pcVar6 != (char *)0x0) {
          local_d8 = pcVar6;
        }
        local_d0 = strlen(local_d8);
        if ((long)local_d0 < 0) goto LAB_005751e8;
        FUN_002eced0(local_78,&local_a8,&local_d8);
        uVar1 = (ulong)local_78 | 1;
        if ((local_78[0] & 1) != 0) {
          uVar1 = local_68;
        }
                    /* try { // try from 0057510c to 0057512f has its CatchHandler @ 00575220 */
        FUN_002f2ff0(auStack_60,uVar1);
        uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                             ,0xfa,auStack_60,0,0);
        goto LAB_00574fd4;
      }
      iVar3 = strncmp((char *)puVar5[4],"TSI_SECURITY_NONE",puVar5[5]);
      if (iVar3 == 0) {
        puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x38);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[6] = 0;
          puVar2 = PTR_DAT_04374128;
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          *puVar5 = puVar2;
          puVar5[1] = 1;
        }
        if (*param_3 != 0) {
                    /* try { // try from 005751a8 to 005751ab has its CatchHandler @ 00575208 */
          FUN_003f3604();
        }
        *param_3 = (long)puVar5;
        FUN_003f5670(puVar5,"transport_security_type",&DAT_0397284f);
        FUN_003f5670(*param_3,"security_level","TSI_SECURITY_NONE");
        uVar4 = 0;
        goto LAB_00575024;
      }
      FUN_002f2c60(&local_a8,"Invalid value for security level property.");
      uVar4 = 0x100;
    }
    else {
      FUN_002f2c60(&local_a8,"Invalid value for cert type property.");
      uVar4 = 0xf1;
    }
  }
  else {
    FUN_002f2c60(&local_a8,"Fake peers should only have 2 properties.");
    uVar4 = 0xe2;
  }
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                       ,uVar4,&local_a8,0,0);
LAB_00575024:
  local_a8 = 
  "external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
  ;
  local_a0 = CONCAT44(local_a0._4_4_,0x10c);
  FUN_002f019c(&local_a8,param_4,uVar4);
  FUN_003f4ae0(&local_40);
  return;
}


