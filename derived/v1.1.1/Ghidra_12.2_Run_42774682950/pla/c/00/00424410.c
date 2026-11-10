/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00424410; name: FUN_00424410
 */


void FUN_00424410(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x68);
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
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (pcVar5 = *(code **)(*(long *)(param_1 + 0x78) + 0x28), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1);
      }
      FUN_00400e80(6,param_1,param_1 + 0x70);
      FUN_00400180(*(undefined8 *)(param_1 + 0x88));
      FUN_0040c140(*(undefined8 *)(param_1 + 8));
      FUN_0040c140(*(undefined8 *)(param_1 + 0x10));
      FUN_0040c140(*(undefined8 *)(param_1 + 0x40));
      FUN_0040c140(*(undefined8 *)(param_1 + 0x48));
      FUN_00400420(*(undefined8 *)(param_1 + 0x50),"external/openssl/crypto/dh/dh_lib.c",0x7b);
      FUN_0040c140(*(undefined8 *)(param_1 + 0x60));
      FUN_0040c140(*(undefined8 *)(param_1 + 0x20));
      FUN_0040c140(*(undefined8 *)(param_1 + 0x28));
      FUN_00400420(param_1,"external/openssl/crypto/dh/dh_lib.c",0x7f);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/dh/dh_lib.c",0x6b);
    }
  }
  return;
}


