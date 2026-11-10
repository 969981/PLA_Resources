/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7868; name: FUN_007f7868
 */


void FUN_007f7868(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  int local_68;
  int iStack_64;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  if ((uVar1 & 1) != 0) {
    FUN_007fed9c(auStack_80,param_1 + 0x52,0x4d8,param_3,*(undefined2 *)((long)param_1 + 0x114e),
                 param_1);
    if (*(short *)((long)param_1 + 0x114e) != 0) {
      uVar1 = 0;
      do {
        uVar2 = FUN_007fd638(auStack_80,*(undefined8 *)(param_1[0x11] + uVar1 * 8));
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)((long)param_1 + 0x114e));
    }
    (**(code **)(*param_1 + 0x338))(param_1,auStack_80);
    FUN_007fede0(auStack_80);
    FUN_007ff084(auStack_98,param_1 + 0x188,0x4d8);
    FUN_007ff094(auStack_98,local_78,iStack_64 + local_68,0x33);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_98,param_2,0);
  }
  return;
}


