/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edbbb4; name: FUN_02edbbb4
 */


undefined8
FUN_02edbbb4(int *param_1,undefined8 param_2,undefined4 param_3,uint param_4,byte param_5,
            uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*param_1 == 0) {
    *(undefined8 *)(param_1 + 2) = param_2;
    *(short *)((long)param_1 + 0x22) = (short)param_3;
    param_1[10] = param_4;
    *(byte *)((long)param_1 + 0x2d) = param_5 & 1;
    if (*(long *)(param_6 + 2) != 0) {
      FUN_02edbd74(param_1 + 4,param_6 + 2);
      uVar6 = *param_6;
      *(short *)(param_1 + 8) = (short)uVar6;
      *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + ((ulong)uVar6 & 0xffff) * 0x18;
      return 1;
    }
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = param_2;
    lVar4 = FUN_02edbdc4(param_3);
    if (*(long *)(param_1 + 4) == 0) {
      *(long *)(param_1 + 4) = lVar4;
    }
    else {
      FUN_02e9ecd8();
      *(long *)(param_1 + 4) = lVar4;
    }
    if (lVar4 != 0) {
      *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
      plVar5 = *(long **)(param_1 + 4);
      if (plVar5 != (long *)0x0) {
        if ((param_4 & 1) == 0) {
          return 1;
        }
        DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
        uVar1 = *(ushort *)((long)param_1 + 0x22);
        uVar2 = 0;
        uVar6 = (uint)((ulong)DAT_0440a190 >> 0x21);
        if (uVar1 != 0) {
          uVar2 = uVar6 / uVar1;
        }
        uVar6 = uVar6 - uVar2 * uVar1;
        uVar7 = (ulong)uVar6;
        *(short *)(param_1 + 8) = (short)uVar6;
        if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
          *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)uVar6 * 0x18;
        }
        uVar6 = *(uint *)(plVar5 + 1);
        if (uVar6 != 0) {
          bVar3 = *(char *)*plVar5 != '\0';
          if (uVar6 != 1) {
            uVar8 = 1;
            do {
              if (bVar3) {
                bVar3 = *(char *)(*plVar5 + uVar8) != '\0';
              }
              else {
                bVar3 = false;
              }
              uVar8 = uVar8 + 1;
            } while (uVar6 != uVar8);
          }
          if (bVar3) {
            *(undefined1 *)*plVar5 = 0;
            if (1 < *(uint *)(plVar5 + 1)) {
              uVar7 = 1;
              do {
                *(undefined1 *)(*plVar5 + uVar7) = 0;
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(uint *)(plVar5 + 1));
            }
            plVar5 = *(long **)(param_1 + 4);
            uVar7 = (ulong)*(ushort *)(param_1 + 8);
          }
        }
        *(undefined1 *)(*plVar5 + (uVar7 & 0xffff)) = 1;
        return 1;
      }
    }
  }
  return 2;
}


