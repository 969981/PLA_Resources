/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008469d8; name: FUN_008469d8
 */


long * FUN_008469d8(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,char *param_5,
                   ulong param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  uint local_78 [2];
  undefined7 local_70;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  
  local_70 = (undefined7)param_6;
  uStack_69 = (undefined1)(param_6 >> 0x38);
  uStack_68 = (undefined1)param_7;
  uStack_67 = (undefined1)((uint)param_7 >> 8);
  uStack_66 = (undefined2)((uint)param_7 >> 0x10);
  uVar4 = FUN_007f0ee4(param_3);
  puVar3 = PTR_DAT_043773c0;
  if ((((uVar4 & 1) != 0) && (param_1[8] != 0)) && ((int)param_1[0xf6] == 0)) {
    uVar1 = param_4 + 0x10;
    uVar2 = (*(int *)((long)param_1 + 0x34) +
            (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) * -2) - 0x1a;
    if (uVar1 <= uVar2) {
      if (((param_6 & 0xff00000000) == 0) && (lVar5 = FUN_00845d14(param_1[8],0), lVar5 != 0)) {
        iVar9 = 0;
        do {
          lVar5 = FUN_00845d14(param_1[8],iVar9);
          if ((((*(char *)(lVar5 + 0x621) == '\0') &&
               (((int)param_1[1] == 0 || ((*param_5 != '\0') == (*(char *)(lVar5 + 0x622) != '\0')))
               )) && (*(uint *)(lVar5 + 0x5f8) <= uVar2 - uVar1)) &&
             ((((param_6 & 0xff000000000000) != 0) == (*(char *)(lVar5 + 0x623) != '\0') &&
              (((*(short *)(lVar5 + 0x10) == 0 ||
                (lVar6 = FUN_00855004(*(undefined8 *)puVar3), *(long *)(lVar6 + 0x98) == 0)) ||
               (lVar6 = FUN_00855004(*(undefined8 *)puVar3),
               *(short *)(lVar5 + 0x10) == *(short *)(*(long *)(lVar6 + 0x98) + 0x38))))))) {
            lVar5 = FUN_00845d14(param_1[8],iVar9);
            uVar4 = FUN_007f0f48(lVar5 + 0x600,param_3);
            if ((uVar4 & 1) != 0) {
              lVar5 = FUN_00845d14(param_1[8],iVar9);
              if (lVar5 != 0) goto LAB_00846bd4;
              break;
            }
          }
          iVar9 = iVar9 + 1;
          lVar5 = FUN_00845d14(param_1[8],iVar9);
        } while (lVar5 != 0);
      }
      memset(local_78,0,4);
      plVar7 = (long *)FUN_00855004(*(undefined8 *)puVar3);
      lVar5 = (**(code **)(*plVar7 + 0x68))(plVar7,param_3);
      if ((lVar5 != 0) && (*(byte *)(lVar5 + 0x28) < 0x18)) {
        local_78[0] = local_78[0] | 1 << (ulong)(*(byte *)(lVar5 + 0x28) & 0x1f);
      }
      lVar5 = (**(code **)(*param_1 + 0x90))(param_1,param_3,local_78,0,param_5,&local_70);
      if (lVar5 != 0) {
LAB_00846bd4:
        uVar8 = FUN_007f081c(lVar5,uVar1);
        plVar7 = param_1 + 9;
        (**(code **)(*param_1 + 0x88))(param_1);
        FUN_00848d7c(plVar7,param_2,param_4);
        uStack_67 = 0;
        uStack_69 = 0;
        uStack_68 = 0;
        FUN_00849088(plVar7,lVar5,uVar8,0,&local_70);
        return plVar7;
      }
    }
  }
  return (long *)0x0;
}


