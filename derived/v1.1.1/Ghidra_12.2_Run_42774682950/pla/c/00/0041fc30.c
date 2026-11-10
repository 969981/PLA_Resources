/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041fc30; name: FUN_0041fc30
 */


int FUN_0041fc30(long *param_1,int param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if (*param_3 != '\x06' && *param_3 != '\x01') {
    return 0;
  }
  lVar6 = *(long *)(param_3 + 0x20);
  if (lVar6 == 0) {
    iVar7 = 0;
  }
  else {
    if ((*(byte *)(lVar6 + 8) & 1) == 0) {
      return 0;
    }
    lVar8 = *param_1;
    piVar1 = (int *)(lVar8 + *(int *)(lVar6 + 0xc));
    if (param_2 == 1) {
      do {
        iVar7 = *piVar1 + 1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = (long)*(int *)(lVar6 + 0x10);
      if (param_2 == 0) {
        iVar7 = 1;
        *piVar1 = 1;
        lVar5 = FUN_004000a0();
        *(long *)(lVar8 + lVar6) = lVar5;
        if (lVar5 == 0) {
          FUN_004014b0(0xd,0xe9,0x41,"external/openssl/crypto/asn1/tasn_utl.c",0x4f);
          return -1;
        }
      }
      else {
        if (param_2 != -1) {
          return -1;
        }
        do {
          iVar2 = *piVar1;
          iVar7 = iVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          DataMemoryBarrier(2,1);
          FUN_00400180(*(undefined8 *)(lVar8 + lVar6));
          *(undefined8 *)(lVar8 + lVar6) = 0;
          return 0;
        }
        if (iVar2 < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("refcount error","external/openssl/crypto/asn1/tasn_utl.c",0x5d);
        }
      }
    }
  }
  return iVar7;
}


