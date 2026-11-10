/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c30a0; name: FUN_004c30a0
 */


void FUN_004c30a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x9c);
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
      FUN_0046bc40(*(undefined8 *)(param_1 + 0x1a0));
      FUN_00400420(*(undefined8 *)(param_1 + 0x348),"external/openssl/ssl/ssl_lib.c",0xae);
      *(undefined8 *)(param_1 + 0x348) = 0;
      FUN_00400420(*(undefined8 *)(param_1 + 0x350),"external/openssl/ssl/ssl_lib.c",0xb1);
      *(undefined8 *)(param_1 + 0x350) = 0;
      *(undefined1 *)(param_1 + 0x358) = 0;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_003fff30(param_1,0);
      }
      FUN_00400e80(1,param_1,param_1 + 0xe8);
      FUN_00405760(*(undefined8 *)(param_1 + 0x28));
      FUN_0046abb0(*(undefined8 *)(param_1 + 0x20));
      FUN_00407010(*(undefined8 *)(param_1 + 8));
      FUN_00407010(*(undefined8 *)(param_1 + 0x10));
      FUN_00407010(*(undefined8 *)(param_1 + 0x18));
      FUN_004e1ca0(*(undefined8 *)(param_1 + 0x140));
      puVar5 = PTR_FUN_04374178;
      FUN_004078c0(*(undefined8 *)(param_1 + 0x118),PTR_FUN_04374178);
      FUN_004078c0(*(undefined8 *)(param_1 + 0x120),puVar5);
      FUN_004078c0(*(undefined8 *)(param_1 + 0x100),PTR_FUN_04374180);
      *(undefined8 *)(param_1 + 0x108) = 0;
      FUN_00407010(*(undefined8 *)(param_1 + 0x368));
      FUN_004d7150(param_1);
      FUN_00400420(*(undefined8 *)(param_1 + 0x230),"external/openssl/ssl/ssl_lib.c",0xc51);
      FUN_00400420(*(undefined8 *)(param_1 + 0x240),"external/openssl/ssl/ssl_lib.c",0xc52);
      FUN_00400420(*(undefined8 *)(param_1 + 600),"external/openssl/ssl/ssl_lib.c",0xc54);
      thunk_FUN_00400420(*(undefined8 *)(param_1 + 0x200),"external/openssl/ssl/ssl_lib.c",0xc55);
      FUN_00400180(*(undefined8 *)(param_1 + 0x378));
      FUN_00400420(param_1,"external/openssl/ssl/ssl_lib.c",0xc59);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/ssl/ssl_lib.c",0xc27);
    }
  }
  return;
}


