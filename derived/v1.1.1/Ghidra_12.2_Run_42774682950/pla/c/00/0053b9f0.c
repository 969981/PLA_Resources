/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053b9f0; name: FUN_0053b9f0
 */


undefined8 FUN_0053b9f0(char *param_1,undefined8 *param_2,ulong param_3)

{
  char *pcVar1;
  uint16_t uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_54;
  ulong local_50;
  ulong local_48;
  char *local_40;
  ulong local_38;
  undefined8 local_30;
  char *local_28;
  
  local_30 = 0;
  local_28 = (char *)0x0;
  local_40 = (char *)0x0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_1 == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(param_1);
    if ((long)sVar4 < 0) {
                    /* try { // try from 0053ba28 to 0053ba5b has its CatchHandler @ 0053bc1c */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
  }
  uVar5 = FUN_002fec00(param_1,sVar4,&local_38,&local_50);
  if ((uVar5 & 1) == 0) {
    if ((param_3 & 1) != 0) {
                    /* try { // try from 0053bb18 to 0053bb37 has its CatchHandler @ 0053bc1c */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                   ,0x54,2,"Failed gpr_split_host_port(%s, ...)",param_1);
    }
  }
  else {
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0x10;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined1 *)((long)param_2 + 1) = 2;
    pcVar1 = (char *)((ulong)&local_38 | 1);
    if ((local_38 & 1) != 0) {
      pcVar1 = local_28;
    }
                    /* try { // try from 0053baa0 to 0053baff has its CatchHandler @ 0053bc0c */
    iVar3 = inet_pton(2,pcVar1,(void *)((long)param_2 + 4));
    if (iVar3 == 0) {
      if ((param_3 & 1) != 0) {
        pcVar1 = (char *)((ulong)&local_38 | 1);
        if ((local_38 & 1) != 0) {
          pcVar1 = local_28;
        }
                    /* try { // try from 0053bb50 to 0053bbc3 has its CatchHandler @ 0053bc0c */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                     ,0x5f,2,"invalid ipv4 address: \'%s\'",pcVar1);
      }
    }
    else {
      uVar5 = local_50 >> 1 & 0x7f;
      if ((local_50 & 1) != 0) {
        uVar5 = local_48;
      }
      if (uVar5 == 0) {
        if ((param_3 & 1) != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                       ,0x65,2,"no port given for ipv4 scheme");
        }
      }
      else {
        pcVar1 = (char *)((ulong)&local_50 | 1);
        if ((local_50 & 1) != 0) {
          pcVar1 = local_40;
        }
        iVar3 = sscanf(pcVar1,"%d",&local_54);
        if ((iVar3 == 1) && (local_54 < 0x10000)) {
          uVar2 = htons((uint16_t)local_54);
          *(uint16_t *)((long)param_2 + 2) = uVar2;
          uVar6 = 1;
          goto joined_r0x0053bbcc;
        }
        if ((param_3 & 1) != 0) {
          pcVar1 = (char *)((ulong)&local_50 | 1);
          if ((local_50 & 1) != 0) {
            pcVar1 = local_40;
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                       ,0x6b,2,"invalid ipv4 port: \'%s\'",pcVar1);
        }
      }
    }
  }
  uVar6 = 0;
joined_r0x0053bbcc:
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  if ((local_38 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  return uVar6;
}


