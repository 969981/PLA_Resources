/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4dce8; name: FUN_00d4dce8
 */


void FUN_00d4dce8(long param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  undefined1 local_30;
  undefined1 auStack_28 [8];
  long local_18;
  
  lVar3 = param_1 + (long)param_3 * 0x60;
  lVar5 = *(long *)(lVar3 + 0x638);
  uVar4 = *(ulong *)(lVar5 + 0xb0);
  if ((uint)uVar4 < *(uint *)(lVar5 + 0xb8)) {
    uVar4 = uVar4 & 0xffffffff;
    iVar2 = *param_2;
    lVar5 = *(long *)(param_1 + (long)param_3 * 0x60 + 0x618);
    local_38 = lVar5 + uVar4 * 0x50;
    *(int *)(local_38 + 8) = iVar2;
    *(short *)(local_38 + 0xc) = (short)param_2[1];
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar1 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(local_38 + 0x10) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(local_38 + 0x18) = uVar1;
    *(undefined8 *)(local_38 + 0x20) = uVar6;
    *(int *)(local_38 + 0x28) = param_2[8];
    if (iVar2 == 2) {
      lVar5 = lVar5 + uVar4 * 0x50;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined4 *)(lVar5 + 0x2c) = 1;
    }
    else if (iVar2 == 3) {
      lVar5 = lVar5 + uVar4 * 0x50;
      *(undefined4 *)(lVar5 + 0x44) = 0;
      *(undefined8 *)(lVar5 + 0x3c) = 0;
      *(undefined8 *)(lVar5 + 0x34) = 0;
      *(undefined8 *)(lVar5 + 0x2c) = 0x200000003;
    }
    lVar3 = *(long *)(lVar3 + 0x638);
    local_30 = 0;
    uVar4 = *(ulong *)(lVar3 + 0xb0);
    if (uVar4 < *(ulong *)(lVar3 + 0xb8)) {
      FUN_00d62524(lVar3 + 0x88,*(long *)(lVar3 + 0xa8) + uVar4 * 0x10,&local_38);
      *(long *)(lVar3 + 0xb0) = *(long *)(lVar3 + 0xb0) + 1;
    }
    else {
      local_18 = *(long *)(lVar3 + 0xa8) + uVar4 * 0x10;
      FUN_00d62498(auStack_28,lVar3 + 0x88,&local_18,1,&local_38);
    }
  }
  return;
}


