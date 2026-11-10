/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ff560; name: FUN_003ff560
 */


long FUN_003ff560(int *param_1,void *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int local_2e0 [84];
  ulong local_190;
  undefined1 auStack_188 [344];
  
  lVar5 = *(long *)(param_1 + 0x1ca);
  if ((*(byte *)(lVar5 + 0x49) & 1) == 0) {
    local_2e0[0] = *param_1;
    if (0x20 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: sess_id_len <= SSL_MAX_SSL_SESSION_ID_LENGTH",
                   "external/openssl/ssl/ssl_sess.c",0x1c9);
    }
    memcpy(auStack_188,param_2,param_3);
    local_190 = param_3;
    FUN_00400120(*(undefined8 *)(lVar5 + 0x378));
    lVar5 = FUN_00405c90(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x28),local_2e0);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x1d8);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (0 < iVar2) {
        FUN_00400160(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x378));
        return lVar5;
      }
      goto LAB_003ff6d8;
    }
    FUN_00400160(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x378));
    piVar1 = (int *)(*(long *)(param_1 + 0x1ca) + 0x88);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *(long *)(param_1 + 0x1ca);
  }
  if (*(code **)(lVar5 + 0x68) == (code *)0x0) {
    lVar5 = 0;
  }
  else {
    local_2e0[0] = 1;
    lVar5 = (**(code **)(lVar5 + 0x68))(param_1,param_2,param_3 & 0xffffffff,local_2e0);
    if (lVar5 != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x1ca) + 0x98);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (local_2e0[0] != 0) {
        piVar1 = (int *)(lVar5 + 0x1d8);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 < 1) {
LAB_003ff6d8:
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("refcount error","external/openssl/ssl/ssl_sess.c",0x339);
        }
      }
      if ((*(byte *)(*(long *)(param_1 + 0x1ca) + 0x49) >> 1 & 1) == 0) {
        FUN_003ff6f0(*(long *)(param_1 + 0x1ca),lVar5);
      }
    }
  }
  return lVar5;
}


