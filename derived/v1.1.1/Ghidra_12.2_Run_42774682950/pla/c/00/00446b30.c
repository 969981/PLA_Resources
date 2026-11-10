/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446b30; name: FUN_00446b30
 */


void FUN_00446b30(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  uVar3 = 5;
  if ((uVar5 & 8) != 0) {
    uVar3 = 0xffffffff;
  }
  FUN_0041ccb0(param_2);
  uVar1 = FUN_00407cb0();
  if (param_1 != (undefined8 *)0x0) {
    uVar4 = (uint)uVar5;
    if (((uVar4 >> 3 & 1) == 0) && (param_1[1] == 0)) {
      lVar2 = FUN_0041cfc0();
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    FUN_00409be0(*param_1);
    *param_1 = uVar1;
    if ((uVar4 >> 3 & 1) == 0) {
      FUN_0041ec80(param_1[1],uVar3,0);
      return;
    }
    FUN_0041cfd0(param_1[1]);
    param_1[1] = 0;
  }
  return;
}


