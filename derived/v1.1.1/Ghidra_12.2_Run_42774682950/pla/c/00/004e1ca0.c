/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e1ca0; name: FUN_004e1ca0
 */


void FUN_004e1ca0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x218);
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
      FUN_00423420(*(undefined8 *)(param_1 + 8));
      FUN_004e1da0(param_1);
      FUN_00400420(*(undefined8 *)(param_1 + 0x198),"external/openssl/ssl/ssl_cert.c",0xf1);
      FUN_00400420(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/ssl_cert.c",0xf2);
      FUN_00400420(*(undefined8 *)(param_1 + 0x1b8),"external/openssl/ssl/ssl_cert.c",0xf3);
      FUN_00400420(*(undefined8 *)(param_1 + 0x188),"external/openssl/ssl/ssl_cert.c",0xf4);
      FUN_0046abb0(*(undefined8 *)(param_1 + 0x1e0));
      FUN_0046abb0(*(undefined8 *)(param_1 + 0x1d8));
      FUN_004e3930(param_1 + 0x1e8);
      FUN_00400420(*(undefined8 *)(param_1 + 0x210),"external/openssl/ssl/ssl_cert.c",0xf9);
      FUN_00400180(*(undefined8 *)(param_1 + 0x220));
      FUN_00400420(param_1,"external/openssl/ssl/ssl_cert.c",0xfc);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/ssl/ssl_cert.c",0xea);
    }
  }
  return;
}


