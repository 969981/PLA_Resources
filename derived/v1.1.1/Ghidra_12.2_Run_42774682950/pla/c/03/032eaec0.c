/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032eaec0; name: FUN_032eaec0
 */


void FUN_032eaec0(undefined8 param_1,ulong *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  while( true ) {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 6 & 1) != 0) break;
    if (((*puVar1 & 1) != 0) || (puVar1 = (ulong *)puVar1[1], puVar1 == (ulong *)0x0))
    goto LAB_032eaf44;
  }
  if (puVar1 != (ulong *)0x0) {
    uVar2 = (uVar2 & 0x3f) - (uVar2 >> 1 & 0x15);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    if ((undefined1 *)puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] ==
        &LAB_032eab10) {
      return;
    }
    FUN_032ec790((undefined1 *)
                 puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],param_1
                 ,param_2,param_3,param_4);
    return;
  }
LAB_032eaf44:
  FUN_032ec790(0,param_1,param_2,param_3,param_4);
  return;
}


