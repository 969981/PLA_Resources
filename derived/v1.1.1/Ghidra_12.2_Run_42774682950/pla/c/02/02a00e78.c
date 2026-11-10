/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a00e78; name: FUN_02a00e78
 */


void FUN_02a00e78(long param_1,undefined8 param_2,long *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *local_70;
  long local_68;
  long local_60;
  uint5 local_58;
  undefined3 uStack_53;
  uint local_50;
  undefined1 local_4c;
  undefined1 auStack_48 [8];
  
  if ((char)param_3[4] != '\0') {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(*param_3 + uVar8 * 8);
      uVar3 = FUN_029922cc(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)param_3[2],param_3[3]);
      if ((*(byte *)(lVar7 + 900) >> 5 & 1) == 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x1780);
        uVar5 = FUN_02992864(*(undefined8 *)(lVar9 + 0x38),lVar7,uVar3);
        if ((uVar5 & 1) != 0) {
          bVar6 = *(byte *)(lVar7 + 900) | 0x10;
          goto LAB_02a00eac;
        }
        if (99 < uVar3) {
          FUN_02992c84(*(undefined8 *)(lVar9 + 0x38),lVar7);
        }
      }
      else {
        bVar6 = *(byte *)(lVar7 + 900) | 0x40;
LAB_02a00eac:
        *(byte *)(lVar7 + 900) = bVar6;
      }
      local_70 = (undefined4 *)param_3[2];
      local_68 = param_3[3];
      local_60 = *(undefined8 *)(*param_3 + uVar8 * 8);
      _local_58 = CONCAT44(stack0xffffffffffffffac,(uint)*(ushort *)(*param_3 + uVar8 * 2 + 0x28));
      FUN_029da9c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x5a0),auStack_48,&local_70);
      local_70 = (undefined4 *)param_3[1];
      local_68 = param_3[2];
      local_60 = param_3[3];
      _local_58 = *(undefined8 *)(*param_3 + uVar8 * 8);
      local_50 = (uint)*(ushort *)(*param_3 + uVar8 * 2 + 0x28);
      local_4c = 0;
      FUN_02a012c8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a00),auStack_48,&local_70);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_3 + 4));
  }
  puVar1 = (uint *)param_3[1];
  puVar2 = (undefined4 *)param_3[2];
  lVar9 = param_3[3];
  lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x1a20);
  iVar4 = FUN_02971598(*(undefined8 *)(lVar7 + 0x38),lVar9,*puVar2);
  if ((iVar4 == 7) && (*(short *)(lVar9 + 0x74) != 0)) {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x60) + 0x6e0);
    uVar8 = FUN_02987c34(*(undefined8 *)(lVar7 + 0x38),puVar2,lVar9,lVar9);
    if ((uVar8 & 1) != 0) {
      local_58 = (uint5)*puVar1;
      local_70 = puVar2;
      local_68 = lVar9;
      local_60 = lVar9;
      FUN_02a08b94(*(undefined8 *)(*(long *)(lVar7 + 0x60) + 0x1c60),auStack_48,&local_70);
    }
  }
  return;
}


