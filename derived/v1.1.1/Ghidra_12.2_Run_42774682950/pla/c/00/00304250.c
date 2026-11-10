/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304250; name: FUN_00304250
 */


void FUN_00304250(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char *local_70;
  undefined4 local_68;
  
  lVar4 = *(long *)(param_1 + 400);
  if (PTR_DAT_043739c0[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x2ab,1,
                 "TCP:%p call_cb %p %p:%p",param_1,lVar4,*(undefined8 *)(lVar4 + 8),
                 *(undefined8 *)(lVar4 + 0x10));
    uVar2 = FUN_002f1480(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x2ae,1,
                 "READ %p (peer=%s) error=%s",param_1,*(undefined8 *)(param_1 + 0x288),uVar2);
    iVar1 = FUN_002ec180(0);
    if ((iVar1 != 0) && (lVar3 = *(long *)(param_1 + 0x170), *(long *)(lVar3 + 0x10) != 0)) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        __ptr = (void *)FUN_00304ac0(*(long *)(lVar3 + 8) + lVar5,3);
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x2b4,0,
                     "DATA: %s",__ptr);
        free(__ptr);
        lVar3 = *(long *)(param_1 + 0x170);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar6 < *(ulong *)(lVar3 + 0x10));
    }
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  local_70 = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc";
  local_68 = 700;
  FUN_00302c34(&local_70,lVar4,param_2);
  return;
}


