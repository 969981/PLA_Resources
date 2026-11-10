/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f0d20; name: FUN_002f0d20
 */


long FUN_002f0d20(undefined8 param_1,uint param_2,undefined8 param_3)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long local_28;
  
  uVar4 = (ulong)param_2;
  local_28 = FUN_002f0ee0();
  bVar1 = *(byte *)(local_28 + uVar4 + 0x10);
  if ((bVar1 == 0xff) && (bVar1 = FUN_002f1ea0(&local_28,8), lVar3 = local_28, bVar1 == 0xff)) {
    pcVar2 = "errno";
    switch(uVar4) {
    case 0:
      break;
    case 1:
      pcVar2 = "file_line";
      break;
    case 2:
      pcVar2 = "stream_id";
      break;
    case 3:
      pcVar2 = "grpc_status";
      break;
    case 4:
      pcVar2 = "offset";
      break;
    case 5:
      pcVar2 = "index";
      break;
    case 6:
      pcVar2 = "size";
      break;
    case 7:
      pcVar2 = "http2_error";
      break;
    case 8:
      pcVar2 = "tsi_code";
      break;
    case 9:
      pcVar2 = "security_status";
      break;
    case 10:
      pcVar2 = "wsa_error";
      break;
    case 0xb:
      pcVar2 = "fd";
      break;
    case 0xc:
      pcVar2 = "http_status";
      break;
    case 0xd:
      pcVar2 = "limit";
      break;
    case 0xe:
      pcVar2 = "occurred_during_write";
      break;
    case 0xf:
      pcVar2 = "channel_connectivity_state";
      break;
    case 0x10:
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x4f,2,
                   "Should never reach here.");
                    /* WARNING: Subroutine does not return */
      abort();
    default:
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x51,2,
                   "Should never reach here.");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xe1,2,
                 "Error %p is full, dropping int {\"%s\":%li}",local_28,pcVar2,param_3);
  }
  else {
    *(byte *)(local_28 + uVar4 + 0x10) = bVar1;
    *(undefined8 *)(local_28 + (ulong)bVar1 * 8 + 0x38) = param_3;
    lVar3 = local_28;
  }
  return lVar3;
}


