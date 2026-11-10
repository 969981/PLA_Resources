/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00549b18; name: FUN_00549b18
 */


void FUN_00549b18(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) == '\0') {
    lVar2 = *(long *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                 ,0x78,1,"[child_policy_handler %p] shutting down",param_1);
    lVar2 = *(long *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (lVar2 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                   ,0x7d,1,"[child_policy_handler %p] shutting down lb_policy %p",param_1);
      lVar2 = *(long *)(param_1 + 0x50);
    }
    FUN_002fe0e0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(param_1 + 0x28));
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00549b68 to 00549b6b has its CatchHandler @ 00549c34 */
      (**(code **)*puVar1)();
    }
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                   ,0x86,1,"[child_policy_handler %p] shutting down pending lb_policy %p",param_1);
      lVar2 = *(long *)(param_1 + 0x58);
    }
    FUN_002fe0e0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(param_1 + 0x28));
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00549ba0 to 00549ba3 has its CatchHandler @ 00549c30 */
      (**(code **)*puVar1)();
    }
  }
  return;
}


