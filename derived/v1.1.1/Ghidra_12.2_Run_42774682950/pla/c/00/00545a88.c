/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00545a88; name: FUN_00545a88
 */


void FUN_00545a88(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s1;
  char *__s2;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *local_28;
  
  if ((DAT_0439ece0 == (ulong *)0x0) &&
     (DAT_0439ece0 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x58), DAT_0439ece0 != (ulong *)0x0)) {
    *DAT_0439ece0 = 0;
  }
  puVar1 = DAT_0439ece0;
  local_28 = (long *)*param_1;
  *param_1 = 0;
                    /* try { // try from 00545ad8 to 00545afb has its CatchHandler @ 00545bd0 */
  uVar4 = (**(code **)(*local_28 + 0x18))();
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
               ,0x28,0,"registering LB policy factory for \"%s\"",uVar4);
  uVar5 = *puVar1;
  if (1 < uVar5) {
    uVar7 = 0;
    do {
      puVar6 = puVar1 + 1;
      if ((uVar5 & 1) != 0) {
        puVar6 = (ulong *)puVar1[1];
      }
                    /* try { // try from 00545b28 to 00545b43 has its CatchHandler @ 00545be4 */
      __s1 = (char *)(**(code **)(*(long *)puVar6[uVar7] + 0x18))();
      __s2 = (char *)(**(code **)(*local_28 + 0x18))();
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 == 0) {
                    /* try { // try from 00545ba8 to 00545bcf has its CatchHandler @ 00545bd0 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                     ,0x2b,2,"assertion failed: %s",
                     "strcmp(factories_[i]->name(), factory->name()) != 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = *puVar1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5 >> 1);
  }
                    /* try { // try from 00545b60 to 00545b6b has its CatchHandler @ 00545bd0 */
  FUN_00546430(puVar1,&local_28);
  plVar2 = local_28;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
    FUN_002e2ea0(PTR_LAB_04373088,plVar2);
  }
  return;
}


