/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c37c; name: FUN_0050c37c
 */


ulong FUN_0050c37c(char *param_1)

{
  ulong *puVar1;
  int iVar2;
  char *__s2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar1 = DAT_0439ebd0;
  if (DAT_0439ebd0 == (ulong *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
                 ,0x86,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *DAT_0439ebd0;
  if (1 < uVar3) {
    uVar5 = 0;
    puVar6 = DAT_0439ebd0 + 1;
    do {
      puVar4 = puVar6;
      if ((uVar3 & 1) != 0) {
        puVar4 = (ulong *)puVar1[1];
      }
      __s2 = (char *)(**(code **)(*(long *)puVar4[uVar5] + 0x18))();
      iVar2 = strcmp(param_1,__s2);
      if (iVar2 == 0) {
        if (*puVar1 >> 1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x13e,"operator[]");
        }
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)puVar1[1];
        }
        return puVar6[uVar5];
      }
      uVar3 = *puVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3 >> 1);
  }
  return 0;
}


