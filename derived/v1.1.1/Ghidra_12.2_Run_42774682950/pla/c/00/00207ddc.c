/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00207ddc; name: FUN_00207ddc
 */


ulong FUN_00207ddc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  do {
    uVar1 = FUN_00206fe4(param_1,&local_28,0);
    if ((long)uVar1 < 1) {
LAB_00207e70:
      return uVar1 & 0xffffffff;
    }
    lVar2 = (**(code **)(param_1 + 0x7d8))
                      (param_1,local_28,uVar1,0,*(undefined8 *)(param_1 + 0x8b8));
    if (lVar2 < 0) {
      if (lVar2 == -0x1f8) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0x18) - uVar1;
        uVar1 = 0;
        *(long *)(*(long *)(param_1 + 0x160) + 0x18) = lVar2;
      }
      else {
        uVar1 = 0xfffffc7a;
      }
      goto LAB_00207e70;
    }
    *(ulong *)(*(long *)(param_1 + 0x160) + 0x18) =
         *(long *)(*(long *)(param_1 + 0x160) + 0x18) + (lVar2 - uVar1);
  } while( true );
}


