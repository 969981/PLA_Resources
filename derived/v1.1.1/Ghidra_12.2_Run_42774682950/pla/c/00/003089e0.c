/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003089e0; name: FUN_003089e0
 */


void FUN_003089e0(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = 0x1c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = inet_pton(0x1c,param_2,param_1 + 1);
  if (iVar1 == 1) {
    uVar2 = 0x1c;
  }
  else {
    uVar3 = 2;
    iVar1 = inet_pton(2,param_2,(void *)((long)param_1 + 4));
    if (iVar1 != 1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0xd4,2,
                   "assertion failed: %s",&DAT_0390f9d5);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = 0x10;
  }
  *(undefined1 *)((long)param_1 + 1) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_00308aa0(param_1,param_3);
  return;
}


