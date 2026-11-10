/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f14e14; name: FUN_02f14e14
 */


long FUN_02f14e14(long *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long alStack_90 [5];
  long local_68;
  long local_60;
  long lStack_58;
  
  if (((*param_1 == 0) || (plVar2 = *(long **)(*param_1 + 0x88), plVar2 == (long *)0x0)) ||
     (lVar3 = (**(code **)(*plVar2 + 0x110))(), lVar3 == 0)) {
    local_60 = 0;
    lStack_58 = -1;
    lVar4 = *param_1;
    lVar3 = param_1[1];
    lVar6 = 0;
LAB_02f14ec8:
    lVar3 = FUN_02f150f4(lVar4,lVar3,lVar6);
    return lVar3;
  }
  lStack_58 = param_1[1];
  lVar4 = *param_1;
  local_60 = lVar3;
  if ((*(byte *)(lVar4 + 0xac) >> 3 & 1) == 0) {
    if (DAT_0440ae08 != 0) {
      lVar8 = (ulong)DAT_0440ae08 << 3;
      plVar2 = DAT_0440ae00;
      do {
        lVar6 = *plVar2;
        if (((*(long *)(lVar6 + 0x68) == lVar3) && (*(long *)(lVar6 + 0x70) == lStack_58)) &&
           ((*(long *)(lVar6 + 8) == 0 ||
            (*(char *)(*(long *)(*(long *)(lVar6 + 8) + 0x10) + 0x54) != '\0')))) goto LAB_02f14ec4;
        plVar2 = plVar2 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar6 = FUN_02f14e14(&local_60);
    if (lVar6 == 0) {
      return 0;
    }
    lVar4 = *param_1;
LAB_02f14ec4:
    lVar3 = param_1[1];
    goto LAB_02f14ec8;
  }
  alStack_90[3] = *param_1;
  alStack_90[4] = param_1[1];
  local_68 = 0;
  FUN_02f18864(alStack_90 + 3);
  if (local_68 != 0) {
    if ((*(uint *)(local_68 + 0x40) < 2) ||
       (lVar4 = *(long *)(*(long *)(local_68 + 0x38) + 8), lVar4 == 0)) {
      if (DAT_0440a410 == 0) {
        FUN_02e43d1c();
        cVar1 = *(char *)(DAT_0440a410 + 0xb8);
        lVar4 = DAT_0440a410;
      }
      else {
        cVar1 = *(char *)(DAT_0440a410 + 0xb8);
        lVar4 = DAT_0440a410;
      }
    }
    else {
      cVar1 = *(char *)(lVar4 + 0xb8);
    }
    lVar6 = DAT_0440a410;
    if (cVar1 == '\0') {
      while( true ) {
        if (lVar6 == 0) {
          FUN_02e43d1c();
          cVar1 = *(char *)(DAT_0440a410 + 0xb8);
          lVar4 = DAT_0440a410;
        }
        else {
          cVar1 = *(char *)(lVar6 + 0xb8);
          lVar4 = lVar6;
        }
        if (cVar1 != '\0') break;
        lVar6 = lVar4;
      }
    }
    if ((*(int *)(lVar4 + 0x58) != 0) && (lVar6 = FUN_02e52664(local_68), lVar6 != 0)) {
      lVar6 = -((ulong)*(uint *)(lVar4 + 0x58) * 8 + 0xf & 0xffffffff0);
      puVar9 = (undefined8 *)((long)alStack_90 + lVar6);
      if (*(uint *)(lVar4 + 0x58) != 0) {
        plVar2 = *(long **)(lVar4 + 0x50);
        uVar10 = 0;
        do {
          alStack_90[1] = lVar3;
          alStack_90[2] = *plVar2;
          if (DAT_0440ae08 != 0) {
            lVar8 = (ulong)DAT_0440ae08 << 3;
            plVar7 = DAT_0440ae00;
            do {
              lVar5 = *plVar7;
              if (((*(long *)(lVar5 + 0x68) == lVar3) && (*(long *)(lVar5 + 0x70) == *plVar2)) &&
                 ((*(long *)(lVar5 + 8) == 0 ||
                  (*(char *)(*(long *)(*(long *)(lVar5 + 8) + 0x10) + 0x54) != '\0'))))
              goto LAB_02f14fe8;
              plVar7 = plVar7 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          lVar5 = FUN_02f14e14(alStack_90 + 1);
          if (lVar5 != 0) {
LAB_02f14fe8:
            puVar9[uVar10] = lVar5;
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != (long *)(*(long *)(lVar4 + 0x50) + (ulong)*(uint *)(lVar4 + 0x58) * 8));
        if ((uint)uVar10 != 0) {
          lVar3 = FUN_02f150f4(*param_1,param_1[1],*puVar9);
          if ((lVar3 != 0) && (1 < (uint)uVar10)) {
            lVar4 = uVar10 - 1;
            puVar9 = (undefined8 *)((long)alStack_90 + lVar6 + 8);
            do {
              FUN_02f25d70(lVar3,*puVar9,0);
              lVar4 = lVar4 + -1;
              puVar9 = puVar9 + 1;
            } while (lVar4 != 0);
          }
          goto LAB_02f150c4;
        }
      }
    }
  }
  lVar3 = 0;
LAB_02f150c4:
  FUN_02f18808(alStack_90 + 3);
  return lVar3;
}


