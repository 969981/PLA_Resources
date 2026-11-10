/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c2970; name: FUN_004c2970
 */


void FUN_004c2970(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x5c8);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      DataMemoryBarrier(2,1);
      FUN_0046bc40(*(undefined8 *)(param_1 + 0xd0));
      FUN_004078c0(*(undefined8 *)(param_1 + 0xe0),&LAB_004c5b40);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      FUN_004078c0(*(undefined8 *)(param_1 + 0xe8),PTR_FUN_04374180);
      *(undefined8 *)(param_1 + 0xe8) = 0;
      FUN_00460a80(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
      FUN_00400e80(0,param_1,param_1 + 0x5b0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar6 = FUN_00404c40(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        FUN_00403ee0(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      FUN_00404cd0(*(undefined8 *)(param_1 + 0x18));
      FUN_00404cd0(*(undefined8 *)(param_1 + 0x10));
      FUN_00417470(*(undefined8 *)(param_1 + 0x88));
      FUN_00407010(*(undefined8 *)(param_1 + 0x118));
      FUN_00407010(*(undefined8 *)(param_1 + 0x120));
      FUN_00407010(*(undefined8 *)(param_1 + 0x128));
      if (*(long *)(param_1 + 0x508) != 0) {
        FUN_003ffe70(param_1);
        FUN_003fef10(*(undefined8 *)(param_1 + 0x508));
      }
      FUN_003fef10(*(undefined8 *)(param_1 + 0x510));
      FUN_00400420(*(undefined8 *)(param_1 + 0x518),"external/openssl/ssl/ssl_lib.c",0x492);
      if (*(long *)(param_1 + 0x438) != 0) {
        FUN_0041b550();
        *(undefined8 *)(param_1 + 0x438) = 0;
      }
      if (*(long *)(param_1 + 0x468) != 0) {
        FUN_0041b550();
        *(undefined8 *)(param_1 + 0x468) = 0;
      }
      FUN_004bfb80(*(undefined8 *)(param_1 + 0x460));
      *(undefined8 *)(param_1 + 0x460) = 0;
      FUN_004bfb80(*(undefined8 *)(param_1 + 0x458));
      *(undefined8 *)(param_1 + 0x458) = 0;
      FUN_00444950(*(undefined8 *)(param_1 + 0x450));
      *(undefined8 *)(param_1 + 0x450) = 0;
      FUN_00444950(*(undefined8 *)(param_1 + 0x480));
      *(undefined8 *)(param_1 + 0x480) = 0;
      FUN_004e1ca0(*(undefined8 *)(param_1 + 0x488));
      FUN_00400420(*(undefined8 *)(param_1 + 0x638),"external/openssl/ssl/ssl_lib.c",0x499);
      FUN_004c30a0(*(undefined8 *)(param_1 + 0x728));
      FUN_00400420(*(undefined8 *)(param_1 + 0x688),"external/openssl/ssl/ssl_lib.c",0x49c);
      FUN_00400420(*(undefined8 *)(param_1 + 0x698),"external/openssl/ssl/ssl_lib.c",0x49d);
      FUN_004078c0(*(undefined8 *)(param_1 + 0x660),PTR_LAB_04374640);
      FUN_004078c0(*(undefined8 *)(param_1 + 0x658),PTR_FUN_04374648);
      FUN_00400420(*(undefined8 *)(param_1 + 0x668),"external/openssl/ssl/ssl_lib.c",0x4a7);
      FUN_00400420(*(undefined8 *)(param_1 + 0x6c8),"external/openssl/ssl/ssl_lib.c",0x4a8);
      FUN_00400420(*(undefined8 *)(param_1 + 0x6f8),"external/openssl/ssl/ssl_lib.c",0x4a9);
      FUN_00400420(*(undefined8 *)(param_1 + 0x718),"external/openssl/ssl/ssl_lib.c",0x4aa);
      FUN_00400420(*(undefined8 *)(param_1 + 0x750),"external/openssl/ssl/ssl_lib.c",0x4ab);
      FUN_00444950(*(undefined8 *)(param_1 + 0x768));
      puVar5 = PTR_FUN_04374178;
      FUN_004078c0(*(undefined8 *)(param_1 + 0x5b8),PTR_FUN_04374178);
      FUN_004078c0(*(undefined8 *)(param_1 + 0x5c0),puVar5);
      FUN_004078c0(*(undefined8 *)(param_1 + 0x5a0),PTR_FUN_04374180);
      if (*(long *)(param_1 + 8) != 0) {
        (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1);
      }
      FUN_004c5d10(param_1 + 0x7f8);
      FUN_004c30a0(*(undefined8 *)(param_1 + 0x598));
      FUN_004c5bb0(*(undefined8 *)(param_1 + 0x17c8));
      FUN_00400420(*(undefined8 *)(param_1 + 0x6d8),"external/openssl/ssl/ssl_lib.c",0x4bd);
      FUN_00407010(*(undefined8 *)(param_1 + 0x730));
      FUN_00400180(*(undefined8 *)(param_1 + 0x1800));
      FUN_00400420(param_1,"external/openssl/ssl/ssl_lib.c",0x4c6);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/ssl/ssl_lib.c",0x479);
    }
  }
  return;
}


