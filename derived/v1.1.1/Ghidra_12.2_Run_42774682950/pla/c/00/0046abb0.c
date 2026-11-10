/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046abb0; name: FUN_0046abb0
 */


void FUN_0046abb0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x88);
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
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      iVar4 = FUN_00407950(uVar8);
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          lVar6 = FUN_00407970(uVar8,iVar4);
          if ((*(long *)(lVar6 + 8) != 0) &&
             (pcVar7 = *(code **)(*(long *)(lVar6 + 8) + 0x20), pcVar7 != (code *)0x0)) {
            (*pcVar7)(lVar6);
          }
          if (lVar6 != 0) {
            if ((*(long *)(lVar6 + 8) != 0) &&
               (pcVar7 = *(code **)(*(long *)(lVar6 + 8) + 0x10), pcVar7 != (code *)0x0)) {
              (*pcVar7)(lVar6);
            }
            FUN_00400420(lVar6,"external/openssl/crypto/x509/x509_lu.c",0x29);
          }
          iVar4 = iVar4 + 1;
          iVar5 = FUN_00407950(uVar8);
        } while (iVar4 < iVar5);
      }
      FUN_00407010(uVar8);
      FUN_004078c0(*(undefined8 *)(param_1 + 8),PTR_LAB_043744b8);
      FUN_00400e80(4,param_1,param_1 + 0x80);
      FUN_0046bc40(*(undefined8 *)(param_1 + 0x18));
      FUN_00400180(*(undefined8 *)(param_1 + 0x90));
      FUN_00400420(param_1,"external/openssl/crypto/x509/x509_lu.c",0xe6);
      return;
    }
    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("refcount error","external/openssl/crypto/x509/x509_lu.c",0xd8);
    }
  }
  return;
}


