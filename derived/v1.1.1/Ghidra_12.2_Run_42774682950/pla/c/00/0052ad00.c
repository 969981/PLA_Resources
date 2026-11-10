/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052ad00; name: FUN_0052ad00
 */


void FUN_0052ad00(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (PTR_DAT_04374b48[0x10] == '\0') {
    uVar3 = *(ulong *)(param_3 + 0x590);
    uVar4 = *(ulong *)(param_1 + 0x498);
    if (uVar4 >> 1 <= uVar3) {
LAB_0052adc8:
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xd5e,1,"chand=%p calld=%p: starting calld->send_messages[%lu]",
                 *(undefined8 *)(param_2 + 8),param_1,*(undefined8 *)(param_3 + 0x590));
    uVar3 = *(ulong *)(param_3 + 0x590);
    uVar4 = *(ulong *)(param_1 + 0x498);
    if (uVar4 >> 1 <= uVar3) goto LAB_0052adc8;
  }
  if ((uVar4 & 1) == 0) {
    param_1 = param_1 + 0x4a0;
  }
  else {
    param_1 = *(long *)(param_1 + 0x4a0);
  }
  uVar2 = *(undefined8 *)(param_1 + uVar3 * 8);
  *(ulong *)(param_3 + 0x590) = uVar3 + 1;
  FUN_004ff2b0(param_3 + 0x188,uVar2);
  *(byte *)(param_4 + 0x28) = *(byte *)(param_4 + 0x28) | 4;
  puVar1 = *(undefined8 **)(*(long *)(param_4 + 0x20) + 0x28);
  *(long *)(*(long *)(param_4 + 0x20) + 0x28) = param_3 + 0x188;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0052ad80 to 0052ad83 has its CatchHandler @ 0052ade8 */
    (**(code **)*puVar1)();
  }
  return;
}


