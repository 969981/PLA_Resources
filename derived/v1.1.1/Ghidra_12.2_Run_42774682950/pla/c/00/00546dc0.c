/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00546dc0; name: FUN_00546dc0
 */


void FUN_00546dc0(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_04374ca0 + 0x10);
  plVar3 = param_1 + 10;
  if (*plVar3 != 0) {
                    /* try { // try from 00546e44 to 00546e93 has its CatchHandler @ 00546e94 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0xa9,2,"assertion failed: %s","resolver_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[0xe] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0xaa,2,"assertion failed: %s","lb_policy_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[0xe] = 0;
  FUN_00532768(param_1 + 0xd);
  pvVar1 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00546e08 to 00546e0b has its CatchHandler @ 00546ed8 */
    free(pvVar1);
  }
  puVar2 = (undefined8 *)*plVar3;
  *plVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00546e20 to 00546e23 has its CatchHandler @ 00546ed4 */
    (**(code **)*puVar2)();
  }
  pvVar1 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00546e30 to 00546e33 has its CatchHandler @ 00546ed0 */
    free(pvVar1);
  }
  FUN_00548ed0(param_1);
  return;
}


