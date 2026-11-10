/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308620; name: FUN_00308620
 */


void FUN_00308620(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint16_t uVar1;
  
  if (0xffff < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x8b,2,
                 "assertion failed: %s","port >= 0 && port < 65536");
                    /* WARNING: Subroutine does not return */
    abort();
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
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined1 *)((long)param_2 + 1) = 2;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  uVar1 = htons((uint16_t)param_1);
  *(uint16_t *)((long)param_2 + 2) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined1 *)((long)param_3 + 1) = 0x1c;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xf] = 0;
  param_3[0xe] = 0;
  uVar1 = htons((uint16_t)param_1);
  *(uint16_t *)((long)param_3 + 2) = uVar1;
  *(undefined4 *)(param_3 + 0x10) = 0x1c;
  return;
}


