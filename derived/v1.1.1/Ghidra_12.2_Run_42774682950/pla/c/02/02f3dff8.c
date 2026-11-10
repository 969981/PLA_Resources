/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3dff8; name: FUN_02f3dff8
 */


undefined8
FUN_02f3dff8(long param_1,long *param_2,long param_3,undefined4 *param_4,long param_5,
            undefined4 param_6,uint param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  
  plVar4 = (long *)(*DAT_0442d138)(0,0x30);
  if (plVar4 != (long *)0x0) {
    plVar4[1] = 0;
    plVar5 = (long *)(*DAT_0442d138)(0,0x20);
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar4 + 2) = *param_4;
      *(undefined4 *)((long)plVar4 + 0x14) = param_4[1];
      plVar4[3] = param_5;
      auVar2 = SEXT816((long)((ulong)DAT_042ab258 * (long)(int)param_4[4])) *
               SEXT816(0x20c49ba5e353f7cf);
      *(int *)(plVar4 + 4) = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
      *(undefined4 *)((long)plVar4 + 0x24) = param_6;
      if (param_3 != 0) {
        *(long *)(param_3 + 0x68) = param_5;
        *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
        plVar9 = (long *)plVar4[1];
        plVar4[1] = param_3;
        if ((plVar9 != (long *)0x0) &&
           (iVar7 = (int)plVar9[9] + -1, *(int *)(plVar9 + 9) = iVar7, iVar7 == 0)) {
          if (plVar9[2] == 0) {
            FUN_02f37eb4(plVar9);
          }
          else {
            FUN_02f3b8c0(plVar9[2],plVar9);
            plVar9[2] = 0;
          }
          (**(code **)(*plVar9 + 0x50))(plVar9);
          (*DAT_0442d150)(0,plVar9);
        }
        lVar6 = FUN_02f3c6c0(param_3,0);
        if (lVar6 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(lVar6 + 0x110) - *(int *)(*(long *)(lVar6 + 0x100) + 4);
        }
        *(int *)(plVar4 + 5) = iVar7;
      }
      if ((param_7 & 1) == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = param_4[5] != 0;
      }
      *(bool *)((long)plVar4 + 0x2c) = bVar3;
      if (*(long *)(param_1 + 0x40) == 0) {
        *(long **)(param_1 + 0x40) = plVar4;
        *plVar4 = 0;
      }
      else {
        *plVar4 = *(long *)(param_1 + 0x40);
        *(long **)(param_1 + 0x40) = plVar4;
      }
      *(undefined4 *)(plVar5 + 1) = 0;
      uVar1 = *(uint *)(param_2 + 0x20);
      if (uVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*(long *)(*param_2 + 8) + 0x68);
        if (uVar1 != 1) {
          lVar8 = (ulong)uVar1 - 1;
          plVar9 = param_2;
          do {
            plVar9 = plVar9 + 1;
            lVar8 = lVar8 + -1;
            lVar6 = *(long *)(*(long *)(*plVar9 + 8) + 0x68) + lVar6;
          } while (lVar8 != 0);
        }
      }
      lVar8 = *(long *)(param_2[0x21] + 8);
      uVar1 = *(uint *)(param_2[0x22] + 0x88);
      plVar5[2] = (long)plVar4;
      *plVar5 = ((param_5 - lVar6) - lVar8) + (ulong)uVar1;
      lVar6 = param_2[0x21];
      if (*(long *)(lVar6 + 0x10) == 0) {
        *(long **)(lVar6 + 0x10) = plVar5;
        plVar5[3] = 0;
        return 1;
      }
      plVar5[3] = *(long *)(lVar6 + 0x10);
      *(long **)(lVar6 + 0x10) = plVar5;
      return 1;
    }
    FUN_02f3e6fc(plVar4);
    (*DAT_0442d150)(0,plVar4);
  }
  return 2;
}


