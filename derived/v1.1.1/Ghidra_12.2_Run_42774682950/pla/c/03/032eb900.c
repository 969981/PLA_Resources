/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032eb900; name: FUN_032eb900
 */


void FUN_032eb900(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = param_3;
  while( true ) {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 9 & 1) != 0) break;
    if (((*puVar1 & 1) != 0) || (puVar1 = (ulong *)puVar1[1], puVar1 == (ulong *)0x0))
    goto LAB_032eb92c;
  }
  if (puVar1 != (ulong *)0x0) {
    uVar2 = (uVar2 & 0x1ff) - (uVar2 >> 1 & 0x55);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    FUN_032eb7e0(puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],param_1
                 ,param_2,param_3,param_4,param_5);
    return;
  }
LAB_032eb92c:
  FUN_032eb7e0(0,param_1,param_2,param_3,param_4,param_5);
  return;
}


