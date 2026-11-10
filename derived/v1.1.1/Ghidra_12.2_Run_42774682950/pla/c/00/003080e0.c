/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003080e0; name: FUN_003080e0
 */


undefined8 FUN_003080e0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *local_30;
  undefined4 local_28;
  
  if (*(char *)(param_1 + 0x61) != '\0') {
    return 1;
  }
  lVar4 = 2;
  if ((param_2 & 1) != 0) {
    lVar4 = 3;
  }
  lVar5 = param_1 + lVar4 * 8;
  lVar6 = *(long *)(lVar5 + 0x108);
  if (lVar6 == 0) {
    return 0;
  }
  lVar2 = lVar6 + lVar4 * 0x10;
  puVar1 = (undefined8 *)(lVar5 + 0x108);
  lVar5 = *(long *)(lVar2 + 0x1f8);
  if (lVar5 == lVar6) {
    *puVar1 = 0;
  }
  else {
    lVar4 = lVar4 * 0x10;
    *(undefined8 *)(lVar5 + lVar4 + 0x200) = *(undefined8 *)(lVar6 + lVar4 + 0x200);
    *(long *)(*(long *)(lVar6 + lVar4 + 0x200) + lVar4 + 0x1f8) = lVar5;
    *puVar1 = *(undefined8 *)(lVar2 + 0x1f8);
  }
  *(undefined8 *)(lVar2 + 0x1f8) = 0;
  *(undefined8 *)(lVar2 + 0x200) = 0;
  if (PTR_DAT_043739d0[0x10] == '\0') goto LAB_00308184;
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    lVar4 = param_1 + 0x129;
    if ((*(byte *)(lVar6 + 0x238) & 1) != 0) goto LAB_00308218;
LAB_0030820c:
    lVar5 = lVar6 + 0x239;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x138);
    if ((*(byte *)(lVar6 + 0x238) & 1) == 0) goto LAB_0030820c;
LAB_00308218:
    lVar5 = *(long *)(lVar6 + 0x248);
  }
  pcVar3 = "destructive";
  if ((param_2 & 1) == 0) {
    pcVar3 = "benign";
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x1a5,1,
               "RQ %s %s: initiate %s reclamation",lVar4,lVar5,pcVar3);
LAB_00308184:
  *(undefined1 *)(param_1 + 0x61) = 1;
  FUN_002ef5d0(param_1);
  lVar4 = lVar6 + (param_2 & 1) * 8;
  lVar5 = *(long *)(lVar4 + 0x100);
  if (lVar5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x1ac,2,
                 "assertion failed: %s",&DAT_0395d168);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(param_1 + 0xf8) = lVar5;
  *(long *)(param_1 + 0x100) = lVar6;
  *(undefined8 *)(lVar4 + 0x100) = 0;
  local_30 = "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc";
  local_28 = 0x1b0;
  FUN_002f019c(&local_30,lVar5,0);
  return 1;
}


