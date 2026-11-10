/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eabd4; name: FUN_029eabd4
 */


void FUN_029eabd4(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
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
  
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    cVar2 = *(char *)(param_2 + 0x7d);
    do {
      if (((*(char *)(lVar6 + 0x3b) == cVar2) && (*(char *)(lVar6 + 0x30) == '\0')) &&
         ((*(uint *)(lVar6 + 0x3c) >> 0x1b & 1) == 0)) {
        *(uint *)(lVar6 + 0x3c) = *(uint *)(lVar6 + 0x3c) | 0x8000000;
      }
      lVar6 = *(long *)(lVar6 + 0x18);
    } while (lVar6 != 0);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar1 = *param_3;
  uVar4 = FUN_029506a8(param_2,0xc);
  lVar6 = *(long *)(lVar8 + 0x20);
  uVar5 = FUN_02a17630(*(undefined8 *)(lVar6 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120),uVar1,
                       uVar4);
  if ((uVar5 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x56,(ulong)bVar3,uVar1,uVar4);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  iVar7 = *(int *)(lVar6 + 8);
  if (iVar7 == 0) {
    iVar7 = 1;
    *(undefined4 *)(lVar6 + 8) = 1;
  }
  *(int *)(lVar6 + 8) = iVar7 + 1;
  _local_80 = CONCAT44(4,iVar7);
  piStack_a0 = &local_80;
  local_a8 = param_2;
  local_98 = param_3;
  uStack_90 = param_4;
  FUN_02a017dc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a80),auStack_88,&local_a8);
  lVar8 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar8 + 0x20);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar1 = *param_3;
  FUN_02a179a0(*(undefined8 *)(lVar6 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120),
               uVar1);
  FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x58,(ulong)bVar3,uVar1);
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    cVar2 = *(char *)(param_2 + 0x7d);
    do {
      if (((*(char *)(lVar6 + 0x3b) == cVar2) && (*(char *)(lVar6 + 0x30) == '\0')) &&
         ((*(uint *)(lVar6 + 0x3c) >> 0x1b & 1) != 0)) {
        *(uint *)(lVar6 + 0x3c) = *(uint *)(lVar6 + 0x3c) & 0xf7ffffff;
      }
      lVar6 = *(long *)(lVar6 + 0x18);
    } while (lVar6 != 0);
  }
  return;
}


