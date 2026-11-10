/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013af680; name: FUN_013af680
 */


ulong FUN_013af680(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long *local_38;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 == 0x3f) {
    uVar2 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),3), (uVar2 & 1) != 0)) {
      if (*(char *)(param_1 + 0x168) == '\0') {
        uVar3 = 0xe00000000;
        uVar2 = 1;
      }
      else {
        FUN_01395bc0(param_1 + 0x120,param_1 + 0x170);
        if (*(char *)(param_1 + 0x168) != '\0') {
          FUN_01395560(param_1 + 0x170);
          *(undefined1 *)(param_1 + 0x168) = 0;
        }
        iVar1 = FUN_01395ad8(param_1 + 0x120);
        uVar3 = (ulong)(iVar1 != 0) << 0x23;
        uVar2 = 1;
      }
      goto LAB_013af6e8;
    }
LAB_013af6e0:
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    if (iVar1 == 0x3e) {
      uVar2 = FUN_013c6104(*(undefined8 *)(param_1 + 0xc0));
      if ((uVar2 & 1) != 0) goto LAB_013af6e0;
      local_68 = 0x46f578b9df670c0c;
      local_60 = "PLAY_ME_HA_EV_GET_GIFT";
      uStack_58 = 0x16;
      FUN_02a4754c(auStack_50,&local_68);
      FUN_028354b0(auStack_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      uVar4 = 0x3f;
    }
    else {
      if (iVar1 != 0x3d) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      uVar2 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0xd);
      if ((uVar2 & 1) == 0) goto LAB_013af6e0;
      uVar4 = 0x3e;
    }
    uVar3 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0xac) = uVar4;
  }
LAB_013af6e8:
  return uVar3 | uVar2;
}


