/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003093e0; name: FUN_003093e0
 */


undefined8 FUN_003093e0(undefined4 param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong unaff_x22;
  ulong unaff_x24;
  char *pcVar10;
  ulong uVar11;
  undefined4 local_6c;
  int local_68;
  int local_64;
  
  if (DAT_04153574 < 0) {
    if (PTR_DAT_043739c0[0x10] == '\0') {
      return 0;
    }
    pcVar10 = "TCP_USER_TIMEOUT not supported for this platform";
    uVar6 = 0x17f;
    uVar7 = 1;
LAB_0030969c:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc",
                 uVar6,uVar7,pcVar10);
  }
  else {
    bVar3 = (param_3 & 1) == 0;
    pcVar10 = &DAT_04399928;
    if (bVar3) {
      pcVar10 = &DAT_04153568;
    }
    piVar5 = &DAT_0415356c;
    if (bVar3) {
      piVar5 = &DAT_04153570;
    }
    bVar3 = *pcVar10 != '\0';
    local_64 = *piVar5;
    if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
      uVar9 = 0;
      uVar11 = 1;
      do {
        lVar2 = param_2[1] + uVar9 * 0x20;
        pcVar10 = *(char **)(lVar2 + 8);
        iVar4 = strcmp(pcVar10,"grpc.keepalive_time_ms");
        if (iVar4 == 0) {
          unaff_x24 = unaff_x24 & 0xffffffff00000000 | 0x7fffffff;
          iVar4 = FUN_002e4c30(lVar2,0x100000000,unaff_x24);
          if (iVar4 != 0) {
            bVar3 = iVar4 != 0x7fffffff;
          }
        }
        else {
          iVar4 = strcmp(pcVar10,"grpc.keepalive_timeout_ms");
          if (iVar4 == 0) {
            unaff_x22 = unaff_x22 & 0xffffffff00000000 | 0x7fffffff;
            iVar4 = FUN_002e4c30(lVar2,0x100000000,unaff_x22);
            if (iVar4 != 0) {
              local_64 = iVar4;
            }
          }
        }
        bVar1 = uVar11 < *param_2;
        uVar9 = uVar11;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (bVar1);
    }
    if (!bVar3) {
      return 0;
    }
    local_6c = 4;
    if (DAT_04153574 == 0) {
      iVar4 = nnsocketGetSockOpt(param_1,6,0,&local_68,&local_6c);
      if (iVar4 == 0) {
        iVar4 = 1;
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                     ,0x160,1,
                     "TCP_USER_TIMEOUT is available. TCP_USER_TIMEOUT will be used thereafter");
      }
      else {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                     ,0x15b,1,
                     "TCP_USER_TIMEOUT is not available. TCP_USER_TIMEOUT won\'t be used thereafter"
                    );
        iVar4 = -1;
      }
      DAT_04153574 = iVar4;
    }
    if (DAT_04153574 < 1) {
      return 0;
    }
    if (PTR_DAT_043739c0[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc",
                   0x168,1,"Enabling TCP_USER_TIMEOUT with a timeout of %d ms",local_64);
    }
    iVar4 = nnsocketSetSockOpt(param_1,6,0,&local_64,4);
    if (iVar4 == 0) {
      iVar4 = nnsocketGetSockOpt(param_1,6,0,&local_68,&local_6c);
      if (iVar4 == 0) {
        if (local_68 == local_64) {
          return 0;
        }
        pcVar10 = "Failed to set TCP_USER_TIMEOUT";
        uVar6 = 0x178;
        uVar7 = 2;
        goto LAB_0030969c;
      }
      piVar5 = __errno_location();
      pcVar10 = strerror(*piVar5);
      pcVar8 = "getsockopt(TCP_USER_TIMEOUT) %s";
      uVar6 = 0x172;
    }
    else {
      piVar5 = __errno_location();
      pcVar10 = strerror(*piVar5);
      pcVar8 = "setsockopt(TCP_USER_TIMEOUT) %s";
      uVar6 = 0x16d;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc",
                 uVar6,2,pcVar8,pcVar10);
  }
  return 0;
}


