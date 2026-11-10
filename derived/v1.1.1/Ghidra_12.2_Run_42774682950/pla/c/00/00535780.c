/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00535780; name: FUN_00535780
 */


void FUN_00535780(void)

{
  int iVar1;
  
  FUN_002ef9f0(&DAT_0439ec38,&LAB_00535a2c);
  iVar1 = FUN_002ee97c(&PTR_s_grpc_client_channel_backup_poll__04186118);
  if (iVar1 < 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/backup_poller.cc"
                 ,0x4b,2,
                 "Invalid GRPC_CLIENT_CHANNEL_BACKUP_POLL_INTERVAL_MS: %d, default value %d will be used."
                 ,iVar1,DAT_04186110);
    return;
  }
  DAT_04186110 = iVar1;
  return;
}


