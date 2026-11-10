/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308450; name: FUN_00308450
 */


undefined8 FUN_00308450(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  
  if (param_1 == param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x4c,2,
                 "assertion failed: %s","resolved_addr != resolved_addr6_out");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)((long)param_1 + 1) == '\x02') {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined1 *)((long)param_2 + 1) = 0x1c;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffff0000;
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
    *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 4);
    uVar1 = *(undefined2 *)((long)param_1 + 2);
    *(undefined4 *)(param_2 + 0x10) = 0x1c;
    *(undefined2 *)((long)param_2 + 2) = uVar1;
    return 1;
  }
  return 0;
}


