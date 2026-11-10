/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009300c4; name: FUN_009300c4
 */


short * FUN_009300c4(short *param_1,undefined1 *param_2,ushort *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  
  if (param_1 != (short *)0x0) {
    while( true ) {
      for (; *param_1 != 0x10; param_1 = param_1 + 1) {
        if (*param_1 == 0) {
          return (short *)0x0;
        }
      }
      if (*(byte *)((long)param_1 + 5) - 1 < 2) break;
      param_1 = param_1 + (ulong)(ushort)param_1[1] + 2;
    }
    if ((ushort)param_1[1] < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined1)param_1[3];
    }
    *param_4 = uVar1;
    if (*param_1 == 0x10) {
      uVar1 = *(undefined1 *)((long)param_1 + 5);
    }
    else {
      uVar1 = 0;
    }
    *param_2 = uVar1;
    if (*param_1 == 0x10) {
      uVar2 = (ushort)*(byte *)(param_1 + 2);
    }
    else {
      uVar2 = 0;
    }
    *param_3 = uVar2;
    if (*param_1 == 0x10) {
      return param_1 + (ulong)(ushort)param_1[1] + 2;
    }
  }
  return param_1;
}


