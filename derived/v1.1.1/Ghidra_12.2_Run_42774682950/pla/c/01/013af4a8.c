/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013af4a8; name: FUN_013af4a8
 */


ulong FUN_013af4a8(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined8 local_3a8;
  undefined1 auStack_3a0 [56];
  undefined2 local_368;
  undefined8 local_360;
  undefined1 auStack_358 [56];
  undefined1 local_320;
  undefined1 auStack_318 [712];
  undefined8 local_50;
  undefined4 local_48;
  
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 0x3c) {
    iVar2 = FUN_013a38d0(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 == 0) {
      FUN_013a38d8(*(undefined8 *)(param_1 + 0x98));
      FUN_013a3a60(*(undefined8 *)(param_1 + 0x98));
      uVar3 = 0xc00000000;
      uVar4 = 1;
      goto LAB_013af624;
    }
LAB_013af61c:
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    if (iVar2 == 0x3b) {
      uVar3 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),0);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = FUN_013ce098(*(undefined8 *)(param_1 + 200)), (uVar3 & 1) == 0))
      goto LAB_013af61c;
      if ((*(char *)(param_1 + 0x168) == '\0') || (*(char *)(param_1 + 0xb0) == '\0')) {
        uVar3 = 0xe00000000;
        uVar4 = 1;
        goto LAB_013af624;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      FUN_01395584(&local_3b0,param_1 + 0x170);
      FUN_013a39e4(uVar6,&local_3b0);
      local_3b0 = *(undefined4 *)(param_1 + 0xb4);
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      local_3ac = *(undefined1 *)(param_1 + 0xb8);
      local_3a8 = *(undefined8 *)(param_1 + 0x120);
      FUN_013a3ec0(auStack_3a0,param_1 + 0x128);
      local_368 = *(undefined2 *)(param_1 + 0x160);
      local_360 = *(undefined8 *)(param_1 + 0x170);
      FUN_01396868(auStack_358,param_1 + 0x178);
      local_320 = 0;
      bVar1 = *(char *)(param_1 + 0x1b0) != '\0';
      if (bVar1) {
        memcpy(auStack_318,(void *)(param_1 + 0x1b8),0x2c8);
      }
      local_50 = *(undefined8 *)(param_1 + 0x480);
      local_48 = *(undefined4 *)(param_1 + 0x488);
      local_320 = bVar1;
      FUN_013a3a74(uVar6,&local_3b0);
      FUN_01395560(&local_360);
      FUN_01395910(&local_3a8);
      FUN_013a38c8(*(undefined8 *)(param_1 + 0x98),2);
      uVar5 = 0x3c;
    }
    else {
      if (iVar2 != 0x3a) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      uVar3 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0);
      if ((uVar3 & 1) == 0) goto LAB_013af61c;
      FUN_013ce0b4(*(undefined8 *)(param_1 + 200));
      uVar5 = 0x3b;
    }
    uVar4 = 0;
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xac) = uVar5;
  }
LAB_013af624:
  return uVar3 | uVar4;
}


