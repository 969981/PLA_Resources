/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00307d70; name: FUN_00307d70
 */


void FUN_00307d70(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (PTR_DAT_043739d0[0x10] == '\0') goto LAB_00307d88;
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x128) & 1) == 0) {
    lVar2 = lVar2 + 0x129;
    if ((*(byte *)(param_1 + 0x47) & 1) == 0) goto LAB_00307dcc;
LAB_00307dd8:
    lVar1 = param_1[0x49];
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x138);
    if ((*(byte *)(param_1 + 0x47) & 1) != 0) goto LAB_00307dd8;
LAB_00307dcc:
    lVar1 = (long)param_1 + 0x239;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x3d3,1,
               "RQ %s %s: reclamation complete",lVar2,lVar1);
LAB_00307d88:
  FUN_002f4f9c(*(undefined8 *)(*param_1 + 0x10),*param_1 + 0xb0,0);
  return;
}


