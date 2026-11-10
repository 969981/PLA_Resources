/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fef10; name: FUN_003fef10
 */


void FUN_003fef10(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x1d8);
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
      FUN_00400e80(2,param_1,param_1 + 0x210);
      FUN_004006a0(param_1 + 0x50,0x100);
      FUN_004006a0(param_1 + 0x158,0x20);
      FUN_00460a80(*(undefined8 *)(param_1 + 0x1b8));
      FUN_004078c0(*(undefined8 *)(param_1 + 0x1c8),PTR_FUN_04374180);
      FUN_00407010(*(undefined8 *)(param_1 + 0x208));
      FUN_00400420(*(undefined8 *)(param_1 + 0x228),"external/openssl/ssl/ssl_sess.c",0x31a);
      FUN_00400420(*(undefined8 *)(param_1 + 0x250),"external/openssl/ssl/ssl_sess.c",0x31b);
      FUN_00400420(*(undefined8 *)(param_1 + 0x238),"external/openssl/ssl/ssl_sess.c",0x31d);
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      FUN_00400420(*(undefined8 *)(param_1 + 0x248),"external/openssl/ssl/ssl_sess.c",800);
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      FUN_00400420(*(undefined8 *)(param_1 + 0x1a0),"external/openssl/ssl/ssl_sess.c",0x325);
      FUN_00400420(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/ssl_sess.c",0x326);
      FUN_00400420(*(undefined8 *)(param_1 + 0x288),"external/openssl/ssl/ssl_sess.c",0x329);
      FUN_00400420(*(undefined8 *)(param_1 + 0x270),"external/openssl/ssl/ssl_sess.c",0x32b);
      FUN_00400420(*(undefined8 *)(param_1 + 0x290),"external/openssl/ssl/ssl_sess.c",0x32c);
      FUN_00400180(*(undefined8 *)(param_1 + 0x2a8));
      FUN_00400620(param_1,0x2b0,"external/openssl/ssl/ssl_sess.c",0x32e);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/ssl/ssl_sess.c",0x311);
    }
  }
  return;
}


