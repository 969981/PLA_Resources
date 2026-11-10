/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c679c; name: FUN_005c679c
 */


ulong FUN_005c679c(void *param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)((long)param_1 + 0x80);
  if (*(uint *)((long)param_2 + 0x80) < uVar1) {
    return 1;
  }
  if (uVar1 < *(uint *)((long)param_2 + 0x80)) {
    return 0xffffffff;
  }
  uVar1 = memcmp(param_1,param_2,(ulong)uVar1);
  if (uVar1 == 0) {
    uVar2 = FUN_002e4ab0(*(undefined8 *)((long)param_1 + 0x88),*(undefined8 *)((long)param_2 + 0x88)
                        );
    return uVar2;
  }
  return (ulong)uVar1;
}


