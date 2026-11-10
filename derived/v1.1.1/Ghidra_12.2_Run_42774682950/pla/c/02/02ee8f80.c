/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8f80; name: FUN_02ee8f80
 */


void FUN_02ee8f80(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (DAT_0440a940 != 0) {
      uVar1 = 0;
      uVar5 = (uint)*(long *)(param_1 + 0x40);
      if (DAT_0440a940 != 0) {
        uVar1 = uVar5 / DAT_0440a940;
      }
      uVar3 = (ulong)(uVar5 - uVar1 * DAT_0440a940);
      plVar2 = *(long **)(DAT_0440a938 + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        if (*(uint *)(plVar2 + 1) == uVar5) {
          plVar4 = (long *)0x0;
        }
        else {
          do {
            plVar4 = plVar2;
            plVar2 = (long *)*plVar4;
            if (plVar2 == (long *)0x0) goto LAB_02ee9054;
          } while (*(uint *)(plVar2 + 1) != uVar5);
        }
        lVar6 = plVar2[2];
        if (lVar6 == 0 || lVar6 == param_1) {
          lVar7 = 0;
          lVar8 = lVar6;
        }
        else {
          lVar8 = lVar6;
          do {
            lVar7 = lVar8;
            lVar8 = *(long *)(lVar7 + 8);
          } while (lVar8 != 0 && lVar8 != param_1);
        }
        lVar9 = lVar6;
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 8);
          if (lVar8 == lVar6) {
            plVar2[2] = lVar9;
          }
          else {
            *(long *)(lVar7 + 8) = lVar9;
            lVar9 = plVar2[2];
          }
        }
        if (lVar9 == 0) {
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)(DAT_0440a938 + uVar3 * 8);
          }
          *plVar4 = *plVar2;
          (*DAT_0442d150)(0);
          DAT_0440a948 = DAT_0440a948 + -1;
          if (DAT_0440a948 == 0) {
            FUN_02eea8c4(&DAT_0440a930);
          }
        }
      }
    }
LAB_02ee9054:
    FUN_02ed8fb0(*(undefined8 *)(param_1 + 0x40),param_1,param_2,param_3 & 1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


