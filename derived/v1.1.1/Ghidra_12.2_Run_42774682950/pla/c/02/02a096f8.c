/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a096f8; name: FUN_02a096f8
 */


void FUN_02a096f8(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long local_a8;
  int *piStack_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  int local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar1 = *param_3;
  uVar3 = FUN_029506a8(param_2,0xc);
  lVar5 = *(long *)(lVar7 + 0x20);
  uVar4 = FUN_02a17630(*(undefined8 *)(lVar5 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(lVar5 + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120),uVar1,
                       uVar3);
  if ((uVar4 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x56,(ulong)bVar2,uVar1,uVar3);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  iVar6 = *(int *)(lVar5 + 8);
  if (iVar6 == 0) {
    iVar6 = 1;
    *(undefined4 *)(lVar5 + 8) = 1;
  }
  *(int *)(lVar5 + 8) = iVar6 + 1;
  _local_80 = CONCAT44(2,iVar6);
  piStack_a0 = &local_80;
  local_a8 = param_2;
  local_98 = param_3;
  uStack_90 = param_4;
  FUN_02a017dc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a80),auStack_88,&local_a8);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(lVar7 + 0x20);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar1 = *param_3;
  FUN_02a179a0(*(undefined8 *)(lVar5 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120),
               uVar1);
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x58,(ulong)bVar2,uVar1);
  return;
}


