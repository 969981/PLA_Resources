/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b8a8; name: FUN_0020b8a8
 */


ulong FUN_0020b8a8(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if ((uVar2 < param_3) && (*(code **)(param_1 + 0x848) != (code *)0x0)) {
    uVar1 = uVar2 + 0x100;
    if (param_3 <= uVar2 + 0x100) {
      uVar1 = param_3;
    }
    uVar3 = (**(code **)(param_1 + 0x848))(param_1,param_2,uVar1,*(undefined8 *)(param_1 + 0x8b8));
    uVar2 = 0xfffffffffffffc7a;
    if ((long)*param_2 <= (long)uVar3 && (long)uVar3 <= (long)uVar1) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}


