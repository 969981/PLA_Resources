/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00307b20; name: FUN_00307b20
 */


void FUN_00307b20(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  FUN_002ef750(param_1 + 0x15);
  lVar6 = *param_1;
  plVar1 = (long *)(lVar6 + 0x28);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 < param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x3b5,2,
                 "assertion failed: %s","prior >= static_cast<long>(size)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = param_1[0x19];
  lVar5 = lVar7 + param_2;
  param_1[0x19] = lVar5;
  if (PTR_DAT_043739d0[0x10] == '\0') goto joined_r0x00307c80;
  lVar5 = *param_1;
  if ((*(byte *)(lVar5 + 0x128) & 1) == 0) {
    lVar5 = lVar5 + 0x129;
    if ((*(byte *)(param_1 + 0x47) & 1) == 0) goto LAB_00307c48;
LAB_00307c54:
    lVar4 = param_1[0x49];
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x138);
    if ((*(byte *)(param_1 + 0x47) & 1) != 0) goto LAB_00307c54;
LAB_00307c48:
    lVar4 = (long)param_1 + 0x239;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x3b9,1,
               "RQ %s %s: free %ld; free_pool -> %ld",lVar5,lVar4,param_2);
  lVar5 = param_1[0x19];
joined_r0x00307c80:
  if (((lVar7 < 1) && (0 < lVar5)) && ((char)param_1[0x1e] == '\0')) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    FUN_002f4f9c(*(undefined8 *)(lVar6 + 0x10),param_1 + 10,0);
  }
  FUN_002ef790(param_1 + 0x15);
  if (param_2 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x33b,2,
                 "assertion failed: %s","amount > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = param_1 + 0x13;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 < param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x33d,2,
                 "assertion failed: %s","old >= amount");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar6 == param_2) {
    FUN_002f4f9c(*(undefined8 *)(*param_1 + 0x10),param_1 + 0x36,0);
    return;
  }
  return;
}


