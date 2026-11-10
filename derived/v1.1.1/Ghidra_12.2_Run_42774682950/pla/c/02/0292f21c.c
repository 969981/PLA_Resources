/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292f21c; name: FUN_0292f21c
 */


void FUN_0292f21c(undefined4 *param_1,int *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if (4 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  *param_1 = uVar3;
  uVar3 = 0;
  if (6 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  param_1[1] = uVar3;
  uVar3 = 0;
  if (8 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  param_1[2] = uVar3;
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar1 != 0)) {
    uVar2 = *(undefined4 *)((long)param_2 + uVar1);
  }
  param_1[3] = uVar2;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar1 == 0)) {
    uVar3 = 4;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_2 + uVar1);
  }
  param_1[4] = uVar3;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar1 == 0)) {
    param_1[5] = 4;
    return;
  }
  param_1[5] = *(undefined4 *)((long)param_2 + uVar1);
  return;
}


