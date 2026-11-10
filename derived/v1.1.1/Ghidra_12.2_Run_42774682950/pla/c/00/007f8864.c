/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8864; name: FUN_007f8864
 */


void FUN_007f8864(long param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [20];
  char local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_24;
  
  FUN_007fdc74(auStack_48,*param_2,*(undefined4 *)((long)param_2 + 0xc),0);
  uVar1 = FUN_007fddc8(auStack_48);
  if ((((uVar1 & 1) != 0) && (*(int *)((long)param_2 + 0xc) == iStack_2c + local_30)) &&
     (local_34 == '\x12')) {
    uVar3 = *(undefined8 *)(param_1 + 0x1170);
    FUN_007f0f88(uVar3,param_3);
    if (*(short *)(param_1 + 0x114e) != 0) {
      uVar1 = 0;
      do {
        uVar2 = FUN_007f0f48(*(long *)(*(long *)(param_1 + 0x88) + uVar1 * 8) + 0x10,uVar3);
        if ((uVar2 & 1) != 0) {
          if ((short)uVar1 < 0) {
            return;
          }
          FUN_00805df4(*(undefined8 *)(param_1 + 0x188),uVar1 & 0xffffffff,local_24);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)(param_1 + 0x114e));
    }
  }
  return;
}


