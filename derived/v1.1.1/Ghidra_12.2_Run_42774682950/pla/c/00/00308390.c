/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308390; name: FUN_00308390
 */


undefined8 FUN_00308390(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 == param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x2e,2,
                 "assertion failed: %s","resolved_addr != resolved_addr4_out");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*(char *)((long)param_1 + 1) != '\x1c') ||
     (param_1[1] != 0 || *(int *)(param_1 + 2) != -0x10000)) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
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
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)((long)param_1 + 2);
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  return 1;
}


