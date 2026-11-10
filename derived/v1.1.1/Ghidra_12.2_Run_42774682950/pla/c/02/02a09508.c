/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a09508; name: FUN_02a09508
 */


void FUN_02a09508(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  uint local_80 [10];
  undefined1 auStack_58 [8];
  long local_50;
  uint *puStack_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 *local_38;
  
  if (*(char *)*param_3 == '\0') {
    return;
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) +
                    (ulong)(byte)((char *)*param_3)[1] * 8 + 0x120);
  FUN_0297ba40(*(undefined8 *)(param_1 + 0x38),lVar7,param_3[1],(int)param_3[2]);
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_8a = 0;
  local_e0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_02967e64(*(undefined8 *)(param_1 + 0x38),(int)param_3[2],(int)param_3[2],0,0,lVar7,local_80);
  local_40 = *(undefined1 *)(*param_3 + 7);
  local_3f = 0x1f;
  local_50 = lVar7;
  puStack_48 = local_80;
  local_38 = (undefined1 *)&local_e0;
  FUN_029efacc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x16a0),auStack_58,&local_50);
  if ((*(byte *)(lVar7 + 0x118) & 7) == 0) {
LAB_02a0964c:
    if ((*(byte *)(lVar7 + 0x160) & 7) != 0) {
      lVar5 = (&DAT_0428af30)[(ulong)local_80[0] * 6];
      if (lVar5 == 0) {
        plVar4 = &DAT_0428af30;
      }
      else {
        plVar4 = &DAT_0428af30;
        if (*(char *)(lVar5 + 0x1e1) != '\0') {
          plVar4 = &DAT_0428af30 + (ulong)local_80[0] * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
      if (((0x5a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2d], uVar6 != 0)) &&
         (*(char *)((long)piVar1 + uVar6) != '\0')) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = 0x22;
        goto LAB_02a096b8;
      }
    }
    FUN_02a096f8(param_1,lVar7,local_80,&local_e0);
  }
  else {
    lVar5 = (&DAT_0428af30)[(ulong)local_80[0] * 6];
    if (lVar5 == 0) {
      plVar4 = &DAT_0428af30;
    }
    else {
      plVar4 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar4 = &DAT_0428af30 + (ulong)local_80[0] * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
    if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 99) ||
        (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x31], uVar6 == 0)) ||
       (*(char *)((long)piVar1 + uVar6) == '\0')) goto LAB_02a0964c;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = 0xe;
LAB_02a096b8:
    FUN_02a3afc0(uVar2,lVar7,local_80[0],uVar3);
  }
  return;
}


