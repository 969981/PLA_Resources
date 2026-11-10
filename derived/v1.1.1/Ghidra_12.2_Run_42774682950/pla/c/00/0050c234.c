/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c234; name: FUN_0050c234
 */


void FUN_0050c234(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char *__s1;
  char *__s2;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long *local_28;
  
  FUN_0050c014();
  puVar1 = DAT_0439ebd0;
  local_28 = (long *)*param_1;
  *param_1 = 0;
  uVar4 = *puVar1;
  if (1 < uVar4) {
    uVar6 = 0;
    do {
      puVar5 = puVar1 + 1;
      if ((uVar4 & 1) != 0) {
        puVar5 = (ulong *)puVar1[1];
      }
                    /* try { // try from 0050c288 to 0050c2a3 has its CatchHandler @ 0050c344 */
      __s1 = (char *)(**(code **)(*(long *)puVar5[uVar6] + 0x18))();
      __s2 = (char *)(**(code **)(*local_28 + 0x18))();
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 == 0) {
                    /* try { // try from 0050c308 to 0050c32f has its CatchHandler @ 0050c330 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
                     ,0x30,2,"assertion failed: %s",
                     "strcmp(factories_[i]->scheme(), factory->scheme()) != 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar4 = *puVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4 >> 1);
  }
                    /* try { // try from 0050c2c0 to 0050c2cb has its CatchHandler @ 0050c330 */
  FUN_0050ccb0(puVar1,&local_28);
  plVar2 = local_28;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    FUN_002e2ea0(PTR_LAB_04373088,plVar2);
  }
  return;
}


