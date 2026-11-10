/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00309b30; name: FUN_00309b30
 */


void FUN_00309b30(int param_1,void *param_2,char *param_3,ulong param_4)

{
  if (param_4 >> 0x20 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc",
                 0x1fd,2,"assertion failed: %s","size <= (socklen_t)-1");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  inet_ntop(param_1,param_2,param_3,(socklen_t)param_4);
  return;
}


