/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a085c8; name: FUN_02a085c8
 */


void FUN_02a085c8(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 auStack_48 [8];
  undefined8 local_38;
  
  *param_2 = 0;
  lVar4 = *param_3;
  if ((*(byte *)(lVar4 + 0x178) & 7) == 0) {
    iVar1 = *(int *)param_3[1];
    uVar2 = FUN_0298ea98(*(undefined8 *)(param_1 + 0x38),lVar4,param_3[2]);
    if ((uVar2 & 1) != 0) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
      uVar5 = 1;
      goto LAB_02a08744;
    }
    uVar2 = FUN_0298ee70(*(undefined8 *)(param_1 + 0x38),*param_3,iVar1);
    uVar3 = FUN_02a08760(param_1,*param_3,param_3[1],param_3[2]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        uVar6 = (uint)*(byte *)(*param_3 + 0x7d);
        local_38 = (ulong)((uVar6 << 3 | iVar1 << 0xe) & 0x3fffc0f8) | 0x202;
        lVar4 = *(long *)(param_1 + 0x20);
        FUN_02951ca0(*param_3,0x1d,&local_38);
        FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x13,uVar6,0x1d,local_38._4_4_,
                     local_38 & 0xffffffff);
      }
      uVar5 = 2;
      goto LAB_02a08744;
    }
    if ((uVar3 & 1) == 0) {
      uVar5 = 1;
      goto LAB_02a08744;
    }
    FUN_0298fba0(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined4 *)param_3[1]);
    lVar4 = *param_3;
  }
  uVar2 = FUN_0298fe3c(*(undefined8 *)(param_1 + 0x38),lVar4,param_3[2],*(undefined4 *)param_3[1]);
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(undefined1 *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x1c8) * 0x40 + 0x1e) = 1;
  *(byte *)(*param_3 + 0x385) = *(byte *)(*param_3 + 0x385) | 8;
  local_38 = *param_3;
  FUN_029f8728(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1860),auStack_48,&local_38);
  uVar5 = 3;
  if ((uVar2 & 1) != 0) {
    uVar5 = 4;
  }
LAB_02a08744:
  *param_2 = uVar5;
  return;
}


