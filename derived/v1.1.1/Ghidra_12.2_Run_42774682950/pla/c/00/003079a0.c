/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003079a0; name: FUN_003079a0
 */


undefined8 FUN_003079a0(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x336,2,
                 "assertion failed: %s","amount > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar4 = param_1 + 0x13;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x337,2,
                 "assertion failed: %s",
                 "gpr_atm_no_barrier_fetch_add(&resource_user->refs, amount) != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = param_1[0x19] - param_2;
  param_1[0x19] = lVar5;
  if (PTR_DAT_043739d0[0x10] == '\0') goto joined_r0x00307a64;
  lVar5 = *param_1;
  if ((*(byte *)(lVar5 + 0x128) & 1) == 0) {
    lVar5 = lVar5 + 0x129;
    if ((*(byte *)(param_1 + 0x47) & 1) != 0) goto LAB_00307a3c;
LAB_00307a30:
    lVar3 = (long)param_1 + 0x239;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x138);
    if ((*(byte *)(param_1 + 0x47) & 1) == 0) goto LAB_00307a30;
LAB_00307a3c:
    lVar3 = param_1[0x49];
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x37c,1,
               "RQ %s %s: alloc %ld; free_pool -> %ld",lVar5,lVar3,param_2);
  lVar5 = param_1[0x19];
joined_r0x00307a64:
  if (-1 < lVar5) {
    return 1;
  }
  if (param_3 != (undefined8 *)0x0) {
    param_1[0x1d] = param_1[0x1d] + param_2;
    param_3[3] = 0;
    *param_3 = 0;
    plVar4 = param_1 + 0x1a;
    if (*plVar4 != 0) {
      plVar4 = (long *)param_1[0x1b];
    }
    *plVar4 = (long)param_3;
    param_1[0x1b] = (long)param_3;
  }
  if ((char)param_1[0x1c] == '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    FUN_002f4f9c(*(undefined8 *)(*param_1 + 0x10),param_1 + 1,0);
  }
  return 0;
}


