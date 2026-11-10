/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7790; name: FUN_007f7790
 */


void FUN_007f7790(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  int local_50;
  int iStack_4c;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (uint)DAT_043a3f80;
    if (DAT_043a3f80 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x200))(param_1);
    }
    FUN_007fe9c8(auStack_68,param_1 + 0x52,0x4d8,uVar2,*(undefined1 *)((long)param_1 + 0x5a),
                 *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x458),param_1);
    FUN_007fea9c(auStack_68);
    FUN_007ff084(auStack_80,param_1 + 0x188,0x4d8);
    FUN_007ff094(auStack_80,local_60,iStack_4c + local_50,0x32);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_80,param_2,0);
  }
  return;
}


