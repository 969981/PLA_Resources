/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f147fc; name: FUN_02f147fc
 */


void FUN_02f147fc(long param_1)

{
  char cVar1;
  long lVar2;
  long extraout_x1;
  long lVar3;
  long extraout_x1_00;
  long extraout_x1_01;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long local_50;
  long lStack_48;
  
  lVar6 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar6 = *(long *)(param_1 + 8) + -0x18;
  }
  if ((*(byte *)(lVar6 + 0x198) >> 6 & 1) == 0) {
    auVar8 = (**(code **)(**(long **)(lVar6 + 0x180) + 0x110))();
    lVar3 = auVar8._8_8_;
    lVar2 = auVar8._0_8_;
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar6 + 0x28);
      local_50 = lVar2;
      if ((*(byte *)(lVar6 + 0x124) >> 3 & 1) != 0) {
        if (((*(uint *)(lVar4 + 0x40) < 2) ||
            (lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + 8), lVar6 == 0)) &&
           (lVar6 = DAT_0440a410, DAT_0440a410 == 0)) {
          FUN_02e43d1c();
          cVar1 = *(char *)(DAT_0440a410 + 0xb8);
          lVar3 = extraout_x1_01;
          lVar6 = DAT_0440a410;
        }
        else {
          cVar1 = *(char *)(lVar6 + 0xb8);
        }
        lVar4 = DAT_0440a410;
        if (cVar1 == '\0') {
          while( true ) {
            if (lVar4 == 0) {
              FUN_02e43d1c();
              cVar1 = *(char *)(DAT_0440a410 + 0xb8);
              lVar3 = extraout_x1;
              lVar6 = DAT_0440a410;
            }
            else {
              cVar1 = *(char *)(lVar4 + 0xb8);
              lVar6 = lVar4;
            }
            if (cVar1 != '\0') break;
            lVar4 = lVar6;
          }
        }
        if (*(int *)(lVar6 + 0x58) == 0) {
          return;
        }
        plVar7 = *(long **)(lVar6 + 0x50);
        do {
          lStack_48 = *plVar7;
          for (lVar4 = *(long *)(param_1 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x48)) {
            if ((*(long *)(*(long *)(lVar4 + 0x58) + 0x68) == lVar2) &&
               (*(long *)(*(long *)(lVar4 + 0x58) + 0x70) == lStack_48)) goto LAB_02f14950;
          }
          if (DAT_0440ae08 != 0) {
            lVar4 = (ulong)DAT_0440ae08 << 3;
            plVar5 = DAT_0440ae00;
            do {
              lVar3 = *plVar5;
              if (((*(long *)(lVar3 + 0x68) == lVar2) && (*(long *)(lVar3 + 0x70) == lStack_48)) &&
                 ((local_50 = lVar2, *(long *)(lVar3 + 8) == 0 ||
                  (*(char *)(*(long *)(*(long *)(lVar3 + 8) + 0x10) + 0x54) != '\0'))))
              goto LAB_02f14944;
              plVar5 = plVar5 + 1;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
          local_50 = lVar2;
          lVar3 = FUN_02f14e14(&local_50,lVar3);
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
LAB_02f14944:
            FUN_02f25d70(param_1,lVar3,0);
            lVar3 = extraout_x1_00;
          }
LAB_02f14950:
          plVar7 = plVar7 + 1;
          if (plVar7 == (long *)(*(long *)(lVar6 + 0x50) + (ulong)*(uint *)(lVar6 + 0x58) * 8)) {
            return;
          }
        } while( true );
      }
      lStack_48 = *(long *)(lVar4 + 0x48);
      for (lVar6 = *(long *)(param_1 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x48)) {
        if ((*(long *)(*(long *)(lVar6 + 0x58) + 0x68) == lVar2) &&
           (*(long *)(*(long *)(lVar6 + 0x58) + 0x70) == lStack_48)) {
          return;
        }
      }
      if (DAT_0440ae08 != 0) {
        lVar6 = (ulong)DAT_0440ae08 << 3;
        plVar7 = DAT_0440ae00;
        do {
          lVar4 = *plVar7;
          if (((*(long *)(lVar4 + 0x68) == lVar2) && (*(long *)(lVar4 + 0x70) == lStack_48)) &&
             ((*(long *)(lVar4 + 8) == 0 ||
              (*(char *)(*(long *)(*(long *)(lVar4 + 8) + 0x10) + 0x54) != '\0'))))
          goto LAB_02f14a14;
          plVar7 = plVar7 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      goto LAB_02f14ad4;
    }
  }
  lVar3 = *(long *)(*(long *)(lVar6 + 0x28) + 0x48);
  lVar6 = FUN_02eca07c();
  if (lVar6 == 0) {
    return;
  }
  local_50 = 0;
  for (lVar6 = *(long *)(param_1 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x48)) {
    if ((*(long *)(*(long *)(lVar6 + 0x58) + 0x68) == 0) &&
       (*(long *)(*(long *)(lVar6 + 0x58) + 0x70) == lVar3)) {
      return;
    }
  }
  lStack_48 = lVar3;
  if (DAT_0440ae08 != 0) {
    lVar6 = (ulong)DAT_0440ae08 << 3;
    plVar7 = DAT_0440ae00;
    do {
      lVar4 = *plVar7;
      if (((*(long *)(lVar4 + 0x68) == 0) && (*(long *)(lVar4 + 0x70) == lVar3)) &&
         ((*(long *)(lVar4 + 8) == 0 ||
          (*(char *)(*(long *)(*(long *)(lVar4 + 8) + 0x10) + 0x54) != '\0')))) goto LAB_02f14a14;
      plVar7 = plVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
LAB_02f14ad4:
  lVar4 = FUN_02f14e14(&local_50);
  if (lVar4 != 0) {
LAB_02f14a14:
    FUN_02f25d70(param_1,lVar4,0);
  }
  return;
}


