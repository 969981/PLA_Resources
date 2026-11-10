/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029da9c4; name: FUN_029da9c4
 */


void FUN_029da9c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  char local_70 [8];
  undefined1 local_68;
  undefined1 local_67;
  short local_66;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined2 local_5d;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  iVar3 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),param_3[1],*(undefined4 *)*param_3);
  if (iVar3 != 8) {
    return;
  }
  plVar7 = &DAT_0428af30;
  plVar6 = &DAT_0428af30 + (ulong)*(uint *)*param_3 * 6;
  lVar10 = *plVar6;
  if (((uint *)*param_3)[8] == 1) {
    if ((lVar10 != 0) && (plVar7 = &DAT_0428af30, *(char *)(lVar10 + 0x1e1) != '\0')) {
      plVar7 = plVar6;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar7 + 0x250) + (ulong)**(uint **)(*plVar7 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb3) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x59], uVar8 == 0))
    goto LAB_029daab0;
    uVar5 = *(uint *)((long)piVar1 + uVar8);
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  }
  else {
    if ((lVar10 != 0) && (plVar7 = &DAT_0428af30, *(char *)(lVar10 + 0x1e1) != '\0')) {
      plVar7 = plVar6;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar7 + 0x250) + (ulong)**(uint **)(*plVar7 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2b) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x15], uVar8 == 0)) {
LAB_029daab0:
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*(char *)((long)piVar1 + uVar8);
      uVar5 = uVar5 & (uVar5 >> 7 ^ 0xffffffff) & 0xff;
    }
  }
  lVar10 = param_3[1];
  lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x5c0);
  local_66 = FUN_02992f1c(*(undefined8 *)(lVar11 + 0x38),lVar10,param_3[2],
                          (ulong)(uVar5 * *(int *)(param_3 + 3)) / 100);
  if (local_66 == 0) {
    return;
  }
  local_68 = 0x1f;
  local_64 = 0;
  local_60 = 1;
  local_5e = 0;
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_67 = *(undefined1 *)(lVar10 + 0x7d);
  local_5f = 0;
  local_5d = 1;
  FUN_029ef37c(*(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x1620),local_70,&local_68);
  if (local_70[0] == '\0') {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  cVar2 = *(char *)(param_3[1] + 0x7d);
  pcVar9 = *(char **)(*(long *)(lVar10 + 0x10) + 0xa8);
  if ((*pcVar9 == '\0') || (pcVar9[2] != cVar2)) {
    if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar2)) {
      if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar2)) {
        if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar2)) {
          if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar2)) {
            if ((pcVar9[0xf] == '\0') || (pcVar9[0x11] != cVar2)) goto LAB_029dac08;
            uVar4 = 5;
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar10 + 0x18),0x8a,uVar4,0xa6);
  lVar10 = *(long *)(param_1 + 0x20);
LAB_029dac08:
  FUN_02a3fa08(*(undefined8 *)(lVar10 + 0x18),0x9d,0x122,*(undefined1 *)(param_3[2] + 0x7d),
               0xffff0000);
  return;
}


