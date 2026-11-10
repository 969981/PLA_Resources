/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008607a8; name: FUN_008607a8
 */


void FUN_008607a8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [16];
  undefined *local_c0 [4];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [32];
  
  FUN_007f0ce0(auStack_50);
  lVar3 = param_2 + 0x48;
  if (*(char *)(param_2 + 0x68) != '\0') {
    lVar3 = param_2 + 0x28;
  }
  FUN_007e3428(local_c0,lVar3);
  uVar1 = FUN_007e4430(local_c0);
  FUN_007e34a4(local_c0);
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) == 0xd)) {
    lVar3 = param_2 + 0x48;
    if (*(char *)(param_2 + 0x68) != '\0') {
      lVar3 = param_2 + 0x28;
    }
    FUN_007e3428(local_c0,lVar3);
    FUN_007f105c(auStack_50,local_c0);
    FUN_007e34a4(local_c0);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = FUN_00847388(*(undefined8 *)(param_1 + 0xb0));
    FUN_0086217c(local_c0,7,uVar7,uVar6,param_1 + 0x60,param_1 + 0x80,uVar2);
    lVar3 = FUN_0085a3c0();
    if ((lVar3 == 0) || (iVar5 = *(int *)(lVar3 + 0x14), iVar5 < 0)) {
      iVar5 = 1;
      lVar3 = FUN_0085a3c0();
      if (lVar3 != 0) goto LAB_008608bc;
      goto LAB_00860894;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      lVar3 = FUN_0085a3c0();
      if (lVar3 == 0) {
LAB_00860894:
        iVar4 = 0;
      }
      else {
LAB_008608bc:
        iVar4 = *(int *)(lVar3 + 0x18);
        if (iVar4 < 0) goto LAB_00860894;
      }
      FUN_00861174(auStack_d0,param_1,local_c0,auStack_50,iVar4);
    }
    local_c0[0] = PTR_DAT_043781a0 + 0x10;
    FUN_007e34a4(auStack_80);
    FUN_007e34a4(auStack_a0);
  }
  return;
}


