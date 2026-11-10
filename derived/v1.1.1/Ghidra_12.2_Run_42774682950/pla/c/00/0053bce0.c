/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053bce0; name: FUN_0053bce0
 */


undefined8 FUN_0053bce0(char *param_1,undefined8 *param_2,ulong param_3)

{
  char *__cp;
  ulong uVar1;
  uint16_t uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint local_98;
  int local_94;
  char acStack_90 [48];
  ulong local_60;
  ulong local_58;
  char *local_50;
  ulong local_48;
  ulong local_40;
  char *local_38;
  
  local_40 = 0;
  local_38 = (char *)0x0;
  local_50 = (char *)0x0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  if (param_1 == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(param_1);
    if ((long)sVar4 < 0) {
                    /* try { // try from 0053bd1c to 0053bd4f has its CatchHandler @ 0053c070 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
  }
  uVar5 = FUN_002fec00(param_1,sVar4,&local_48,&local_60);
  if ((uVar5 & 1) == 0) {
    if ((param_3 & 1) != 0) {
                    /* try { // try from 0053bdf8 to 0053be17 has its CatchHandler @ 0053c070 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                   ,0x88,2,"Failed gpr_split_host_port(%s, ...)",param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0x1c;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    pcVar8 = (char *)((ulong)&local_48 | 1);
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined1 *)((long)param_2 + 1) = 0x1c;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    uVar5 = local_48 >> 1 & 0x7f;
    pcVar6 = pcVar8;
    if ((local_48 & 1) != 0) {
      uVar5 = local_40;
      pcVar6 = local_38;
    }
                    /* try { // try from 0053bd94 to 0053bd9b has its CatchHandler @ 0053c060 */
    pcVar6 = (char *)FUN_002ecb80(pcVar6,0x25,uVar5);
    __cp = pcVar8;
    if ((local_48 & 1) != 0) {
      __cp = local_38;
    }
    if (pcVar6 == (char *)0x0) {
                    /* try { // try from 0053be68 to 0053bea3 has its CatchHandler @ 0053c060 */
      iVar3 = inet_pton(0x1c,__cp,param_2 + 1);
      if (iVar3 == 0) {
        if ((param_3 & 1) != 0) {
          if ((local_48 & 1) != 0) {
            pcVar8 = local_38;
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                       ,0xbd,2,"invalid ipv6 address: \'%s\'",pcVar8);
        }
      }
      else {
LAB_0053bf44:
        uVar5 = local_60 >> 1 & 0x7f;
        if ((local_60 & 1) != 0) {
          uVar5 = local_58;
        }
        if (uVar5 == 0) {
          if ((param_3 & 1) != 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                         ,0xc4,2,"no port given for ipv6 scheme");
          }
        }
        else {
          pcVar8 = (char *)((ulong)&local_60 | 1);
          if ((local_60 & 1) != 0) {
            pcVar8 = local_50;
          }
          iVar3 = sscanf(pcVar8,"%d",&local_98);
          if ((iVar3 == 1) && (local_98 < 0x10000)) {
                    /* try { // try from 0053bf94 to 0053bfff has its CatchHandler @ 0053c060 */
            uVar2 = htons((uint16_t)local_98);
            *(uint16_t *)((long)param_2 + 2) = uVar2;
            uVar7 = 1;
            goto joined_r0x0053be20;
          }
          if ((param_3 & 1) != 0) {
            pcVar8 = (char *)((ulong)&local_60 | 1);
            if ((local_60 & 1) != 0) {
              pcVar8 = local_50;
            }
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                         ,0xca,2,"invalid ipv6 port: \'%s\'",pcVar8);
          }
        }
      }
    }
    else {
      uVar5 = (long)pcVar6 - (long)__cp;
      if (pcVar6 < __cp) {
                    /* try { // try from 0053c028 to 0053c04f has its CatchHandler @ 0053c060 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                     ,0x95,2,"assertion failed: %s","host_end >= host.c_str()");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_94 = 0;
      if (uVar5 < 0x2f) {
        strncpy(acStack_90,__cp,uVar5);
        acStack_90[uVar5] = '\0';
                    /* try { // try from 0053bec0 to 0053bf37 has its CatchHandler @ 0053c050 */
        iVar3 = inet_pton(0x1c,acStack_90,param_2 + 1);
        if (iVar3 == 0) {
          if ((param_3 & 1) != 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                         ,0xa9,2,"invalid ipv6 address: \'%s\'",acStack_90);
          }
        }
        else {
          uVar1 = local_48 >> 1 & 0x7f;
          if ((local_48 & 1) != 0) {
            uVar1 = local_40;
          }
          pcVar6 = pcVar6 + 1;
          iVar3 = FUN_002ec740(pcVar6,uVar1 + ~uVar5,&local_94);
          if ((iVar3 != 0) || (local_94 = FUN_0053c220(pcVar6), local_94 != 0)) {
            *(int *)(param_2 + 3) = local_94;
            goto LAB_0053bf44;
          }
                    /* try { // try from 0053c004 to 0053c023 has its CatchHandler @ 0053c050 */
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                       ,0xb1,2,
                       "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex.",
                       pcVar6);
        }
      }
      else if ((param_3 & 1) != 0) {
                    /* try { // try from 0053bdcc to 0053bdef has its CatchHandler @ 0053c050 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/parse_address.cc"
                     ,0x9d,2,
                     "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                     ,uVar5,0x2e);
      }
    }
  }
  uVar7 = 0;
joined_r0x0053be20:
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return uVar7;
}


