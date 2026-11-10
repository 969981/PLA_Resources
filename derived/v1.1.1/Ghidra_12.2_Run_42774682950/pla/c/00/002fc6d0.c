/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fc6d0; name: FUN_002fc6d0
 */


void FUN_002fc6d0(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  char *local_50;
  undefined4 local_48;
  char *local_30;
  undefined4 local_28;
  
  if ((*(int *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    if (*param_2 != 1) {
      if (*param_2 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x204,2,
                     "User called a notify_on function with a previous callback still pending");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *param_2 = param_3;
      return;
    }
    *param_2 = 0;
    local_50 = "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc";
    local_48 = 0x200;
    FUN_002f019c(&local_50,param_3,0);
    plVar2 = *(long **)(param_1 + 0x50);
    if (((plVar2 != (long *)(param_1 + 0x50)) ||
        (plVar2 = *(long **)(param_1 + 0x78), plVar2 != (long *)0x0)) ||
       (plVar2 = *(long **)(param_1 + 0x80), plVar2 != (long *)0x0)) {
      FUN_002ef750(*(undefined8 *)((long)plVar2 + 0x10));
      if (*(long *)((long)plVar2 + 0x18) == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",399,2,
                     "assertion failed: %s","watcher->worker");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002fc350(*(undefined8 *)((long)plVar2 + 0x10),*(long *)((long)plVar2 + 0x18),2);
      FUN_002ef790(*(undefined8 *)((long)plVar2 + 0x10));
      return;
    }
  }
  else {
    local_28 = 0x1f6;
    local_30 = "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc";
    FUN_002f2c60(&local_50,"FD shutdown");
    uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x1f7,
                         &local_50,0,0);
    uVar1 = FUN_002f0d20(uVar1,3,0xe);
    FUN_002f019c(&local_30,param_3,uVar1);
  }
  return;
}


