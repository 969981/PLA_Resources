/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f79fc; name: FUN_007f79fc
 */


void FUN_007f79fc(long *param_1)

{
  undefined4 uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [32];
  undefined *local_a8 [11];
  
  *(int *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + 1;
  FUN_007fe25c(local_a8,param_1 + 0x52,0x4d8,0x50,param_1);
  local_a8[0] = PTR_DAT_043775d0 + 0x10;
  (**(code **)(*param_1 + 0x338))(param_1,local_a8);
  FUN_007fe390(local_a8);
  FUN_007f0ce0(auStack_c8);
  lVar4 = FUN_00847424(param_1);
  if ((*(char *)(lVar4 + 0x38) != '\0') && ((char)param_1[0x232] != '\0')) {
    uVar5 = FUN_007f0ee4(param_1 + 0xd);
    if ((uVar5 & 1) != 0) {
      FUN_007f0f88(auStack_c8,param_1 + 0xd);
      bVar3 = true;
      lVar4 = param_1[0x32];
      uVar1 = *(undefined4 *)((long)param_1 + 100);
      sVar2 = *(short *)((long)param_1 + 0x114e);
      goto joined_r0x007f7ad4;
    }
  }
  bVar3 = false;
  lVar4 = param_1[0x32];
  uVar1 = *(undefined4 *)((long)param_1 + 100);
  sVar2 = *(short *)((long)param_1 + 0x114e);
joined_r0x007f7ad4:
  if (sVar2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = 0;
    iVar7 = 0;
    do {
      uVar6 = FUN_007f0ee4(*(long *)(param_1[0x11] + uVar5 * 8) + 0x10);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar5 * 8) + 0x10,param_1 + 0x13);
        if ((uVar6 & 1) == 0) {
          iVar7 = (1 << (ulong)((uint)uVar5 & 0x1f)) + iVar7;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)((long)param_1 + 0x114e));
  }
  if (bVar3) {
    FUN_00805bf0(lVar4,local_a8,uVar1,auStack_c8,iVar7);
  }
  else {
    FUN_00805d00(auStack_d8,lVar4,local_a8,uVar1,iVar7);
  }
  return;
}


