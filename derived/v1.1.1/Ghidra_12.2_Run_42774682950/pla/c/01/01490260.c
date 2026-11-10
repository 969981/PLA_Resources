/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01490260; name: FUN_01490260
 */


void FUN_01490260(long param_1,byte param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(byte *)(param_1 + 0x3f23) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x3f23) = param_2 & 1;
    plVar9 = DAT_043c3a88;
    lVar5 = DAT_043c3a70;
    if ((param_3 & 1) == 0) {
      plVar8 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
      if (DAT_043c3a88 != (long *)0x0) {
        (**(code **)(*DAT_043c3a88 + 0x18))(DAT_043c3a88);
      }
      plVar3 = plVar8;
      if ((lVar2 != 0) && (*plVar8 != lVar5)) {
        lVar7 = lVar2 * 0x30;
        plVar4 = plVar8 + lVar2 * 6;
        do {
          lVar7 = lVar7 + -0x30;
          plVar3 = plVar4;
          if (lVar7 == 0) break;
          plVar1 = plVar8 + 6;
          plVar8 = plVar8 + 6;
          plVar3 = plVar8;
        } while (*plVar1 != lVar5);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      lVar5 = plVar3[4];
      bVar6 = *(byte *)(lVar5 + 0x58) & 0xfe;
    }
    else {
      if ((param_2 & 1) == 0) {
        if (*(char *)(param_1 + 0x2800) == '\0') {
          *(undefined1 *)(param_1 + 0x2800) = 1;
          return;
        }
        return;
      }
      FUN_0148cc94(param_1,9);
      FUN_00d2e2f0(0,param_1 + 0x180,"anime_L_wnhd_00_wake");
      if (*(char *)(param_1 + 0x2540) == '\0') {
        *(char *)(param_1 + 0x2540) = '\x01';
      }
      plVar8 = DAT_043c3a88;
      lVar2 = DAT_043c3a70;
      plVar9 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar5 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
      if (DAT_043c3a88 != (long *)0x0) {
        (**(code **)(*DAT_043c3a88 + 0x18))(DAT_043c3a88);
      }
      plVar3 = plVar9;
      if ((lVar5 != 0) && (*plVar9 != lVar2)) {
        lVar7 = lVar5 * 0x30;
        plVar4 = plVar9 + lVar5 * 6;
        do {
          lVar7 = lVar7 + -0x30;
          plVar3 = plVar4;
          if (lVar7 == 0) break;
          plVar1 = plVar9 + 6;
          plVar9 = plVar9 + 6;
          plVar3 = plVar9;
        } while (*plVar1 != lVar2);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      lVar5 = plVar3[4];
      bVar6 = *(byte *)(lVar5 + 0x58) | 1;
    }
    *(byte *)(lVar5 + 0x58) = bVar6;
  }
  return;
}


